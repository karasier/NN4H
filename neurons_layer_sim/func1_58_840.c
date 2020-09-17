#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_52214440;

SignalI z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makez__value_52523260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func1_58_840_52214440;
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

SignalI a_52682480_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makea_52682480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52682480_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func1_58_840_52214440;
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

Block __61721540;

void code__61721540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            first = value2integer(make__61751700());
            last = value2integer(make__61751680());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61721540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61721540 = block;
   block->owner = (Object)__61721280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61721540;

   return block;
};

Block __61721240;

void code__61721240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080,value2integer(make__61751540()),value2integer(make__61751520())));
      set_value_pos(pool_state);
   }
}

Block make__61721240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61721240 = block;
   block->owner = (Object)__61720980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61721240;

   return block;
};

Block __61720920;

void code__61720920() {
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
            src0 = make__61791980();
            src1 = make__61791960();
            src2 = make__61791940();
            src3 = make__61791920();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            first = value2integer(make__61791820());
            last = value2integer(make__61791800());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47122760_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61720920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61720920 = block;
   block->owner = (Object)__61720340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61720920;

   return block;
};

Block __61721760;

void code__61721760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,address_47126780_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47122760_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,remaining_52618920_my__interpolator_58_8400_52460360_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54163300_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,base_52803500_my__interpolator_58_8400_52460360_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54306560_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,next__data_52907520_my__interpolator_58_8400_52460360_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_53174460_my__interpolator_58_8400_52460360_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,a_52682480_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61721760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61721760 = block;
   block->owner = (Object)__61755800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61721760;

   return block;
};

Block __61721700;

void code__61721700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47766840_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,base_54163300_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48050680_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,next__data_54306560_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61721700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61721700 = block;
   block->owner = (Object)__61755640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61721700;

   return block;
};

Value make__61751700() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61751680() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61751540() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61751520() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61791980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61791960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61791940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61791920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61791820() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61791800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_53758200;

SignalI base_54163300_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makebase_54163300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54163300_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func1_58_84_53758200;
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

SignalI next__data_54306560_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makenext__data_54306560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54306560_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func1_58_84_53758200;
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

SignalI address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeaddress_54306480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func1_58_84_53758200;
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

SignalI remaining_47122760_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeremaining_47122760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47122760_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func1_58_84_53758200;
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

SystemI my__lut_48049960;

SystemI makemy__lut_48049960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_48049960 = systemI;
   systemI->owner = (Object)func1_58_84_53758200;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_47108660;

   return systemI;
};

SystemI my__interpolator_53215180;

SystemI makemy__interpolator_53215180() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_53215180 = systemI;
   systemI->owner = (Object)func1_58_84_53758200;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_52460360;

   return systemI;
};

Behavior __61721280;

Behavior make__61721280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61721280 = behavior;
   behavior->owner = (Object)func1_58_84_53758200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61721540();

   return behavior;
}

Behavior __61720980;

Behavior make__61720980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61720980 = behavior;
   behavior->owner = (Object)func1_58_84_53758200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61721240();

   return behavior;
}

Behavior __61720340;

Behavior make__61720340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61720340 = behavior;
   behavior->owner = (Object)func1_58_84_53758200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[z__value_52523260_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61720920();

   return behavior;
}

Behavior __61755800;

Behavior make__61755800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61755800 = behavior;
   behavior->owner = (Object)func1_58_84_53758200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[address_54306480_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47122760_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   remaining_47122760_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   remaining_47122760_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(remaining_47122760_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,remaining_47122760_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
remaining_47122760_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[remaining_47122760_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_54163300_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   base_54163300_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   base_54163300_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(base_54163300_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,base_54163300_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
base_54163300_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[base_54163300_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_54306560_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   next__data_54306560_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   next__data_54306560_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(next__data_54306560_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,next__data_54306560_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
next__data_54306560_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[next__data_54306560_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_53174460_my__interpolator_58_8400_52460360_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   interpolated__value_53174460_my__interpolator_58_8400_52460360_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   interpolated__value_53174460_my__interpolator_58_8400_52460360_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(interpolated__value_53174460_my__interpolator_58_8400_52460360_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,interpolated__value_53174460_my__interpolator_58_8400_52460360_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
interpolated__value_53174460_my__interpolator_58_8400_52460360_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[interpolated__value_53174460_my__interpolator_58_8400_52460360_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61721760();

   return behavior;
}

Behavior __61755640;

Behavior make__61755640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61755640 = behavior;
   behavior->owner = (Object)func1_58_84_53758200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47766840_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   base_47766840_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   base_47766840_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(base_47766840_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,base_47766840_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
base_47766840_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[base_47766840_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_48050680_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   next__data_48050680_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   next__data_48050680_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(next__data_48050680_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,next__data_48050680_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
next__data_48050680_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[next__data_48050680_my__lut_58_8400_47108660_func1_58_84_53758200_func1_58_840_52214440_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61721700();

   return behavior;
}

Scope makefunc1_58_84_53758200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_53758200 = scope;
   scope->owner = (Object)func1_58_840_52214440;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_48049960();
   scope->systemIs[1] = makemy__interpolator_53215180();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_54163300();
   scope->inners[1] = makenext__data_54306560();
   scope->inners[2] = makeaddress_54306480();
   scope->inners[3] = makeremaining_47122760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61721280();
   scope->behaviors[1] = make__61720980();
   scope->behaviors[2] = make__61720340();
   scope->behaviors[3] = make__61755800();
   scope->behaviors[4] = make__61755640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_52214440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_52214440 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52523260();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52682480();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_53758200();

   return systemT;
}