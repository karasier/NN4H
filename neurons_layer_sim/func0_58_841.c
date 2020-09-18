#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_49211120;

SignalI z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makez__value_49376920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func0_58_841_49211120;
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

SignalI a_49735240_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makea_49735240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49735240_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func0_58_841_49211120;
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

Block __49741520;

void code__49741520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
            first = value2integer(make__50984560());
            last = value2integer(make__50984520());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49741520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49741520 = block;
   block->owner = (Object)__49740580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49741520;

   return block;
};

Block __49740200;

void code__49740200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680,value2integer(make__50983800()),value2integer(make__50983780())));
      set_value_pos(pool_state);
   }
}

Block make__49740200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49740200 = block;
   block->owner = (Object)__49739100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49740200;

   return block;
};

Block __49739040;

void code__49739040() {
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
            src0 = make__50983060();
            src1 = make__50983000();
            src2 = make__50982980();
            src3 = make__50982960();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
            first = value2integer(make__50982820());
            last = value2integer(make__50982800());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47269820_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49739040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49739040 = block;
   block->owner = (Object)__49736700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49739040;

   return block;
};

Block __49722100;

void code__49722100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,address_53165640_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47269820_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,remaining_51305760_my__interpolator_58_842_50980880_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53358540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,base_51496960_my__interpolator_58_842_50980880_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_43107660_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,next__data_51614140_my__interpolator_58_842_50980880_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_51780600_my__interpolator_58_842_50980880_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,a_49735240_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49722100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49722100 = block;
   block->owner = (Object)__50870740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49722100;

   return block;
};

Block __49720520;

void code__49720520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53280140_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,base_53358540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53382960_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,next__data_43107660_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49720520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49720520 = block;
   block->owner = (Object)__50870060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49720520;

   return block;
};

Value make__50984560() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50984520() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50983800() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50983780() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50983060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50983000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50982980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50982960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50982820() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50982800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_53260260;

SignalI base_53358540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makebase_53358540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53358540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func0_58_84_53260260;
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

SignalI next__data_43107660_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makenext__data_43107660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_43107660_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func0_58_84_53260260;
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

SignalI address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeaddress_43107280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func0_58_84_53260260;
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

SignalI remaining_47269820_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeremaining_47269820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47269820_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func0_58_84_53260260;
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

SystemI my__lut_53382820;

SystemI makemy__lut_53382820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_53382820 = systemI;
   systemI->owner = (Object)func0_58_84_53260260;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_53102540;

   return systemI;
};

SystemI my__interpolator_51780460;

SystemI makemy__interpolator_51780460() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_51780460 = systemI;
   systemI->owner = (Object)func0_58_84_53260260;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_50980880;

   return systemI;
};

Behavior __49740580;

Behavior make__49740580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49740580 = behavior;
   behavior->owner = (Object)func0_58_84_53260260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__49741520();

   return behavior;
}

Behavior __49739100;

Behavior make__49739100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49739100 = behavior;
   behavior->owner = (Object)func0_58_84_53260260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__49740200();

   return behavior;
}

Behavior __49736700;

Behavior make__49736700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49736700 = behavior;
   behavior->owner = (Object)func0_58_84_53260260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__49739040();

   return behavior;
}

Behavior __50870740;

Behavior make__50870740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50870740 = behavior;
   behavior->owner = (Object)func0_58_84_53260260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[address_43107280_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47269820_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   remaining_47269820_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   remaining_47269820_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(remaining_47269820_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,remaining_47269820_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
remaining_47269820_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[remaining_47269820_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53358540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   base_53358540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   base_53358540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(base_53358540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,base_53358540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
base_53358540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[base_53358540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_43107660_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   next__data_43107660_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   next__data_43107660_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(next__data_43107660_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,next__data_43107660_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
next__data_43107660_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[next__data_43107660_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_51780600_my__interpolator_58_842_50980880_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   interpolated__value_51780600_my__interpolator_58_842_50980880_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   interpolated__value_51780600_my__interpolator_58_842_50980880_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(interpolated__value_51780600_my__interpolator_58_842_50980880_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,interpolated__value_51780600_my__interpolator_58_842_50980880_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
interpolated__value_51780600_my__interpolator_58_842_50980880_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[interpolated__value_51780600_my__interpolator_58_842_50980880_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__49722100();

   return behavior;
}

Behavior __50870060;

Behavior make__50870060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50870060 = behavior;
   behavior->owner = (Object)func0_58_84_53260260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_53280140_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   base_53280140_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   base_53280140_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(base_53280140_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,base_53280140_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
base_53280140_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[base_53280140_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_53382960_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   next__data_53382960_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   next__data_53382960_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(next__data_53382960_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,next__data_53382960_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
next__data_53382960_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[next__data_53382960_my__lut_58_842_53102540_func0_58_84_53260260_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__49720520();

   return behavior;
}

Scope makefunc0_58_84_53260260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_53260260 = scope;
   scope->owner = (Object)func0_58_841_49211120;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_53382820();
   scope->systemIs[1] = makemy__interpolator_51780460();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53358540();
   scope->inners[1] = makenext__data_43107660();
   scope->inners[2] = makeaddress_43107280();
   scope->inners[3] = makeremaining_47269820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49740580();
   scope->behaviors[1] = make__49739100();
   scope->behaviors[2] = make__49736700();
   scope->behaviors[3] = make__50870740();
   scope->behaviors[4] = make__50870060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_49211120() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_49211120 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49376920();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49735240();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_53260260();

   return systemT;
}