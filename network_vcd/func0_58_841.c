#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_56160320;

SignalI z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makez__value_56352280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func0_58_841_56160320;
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

SignalI a_56390440_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makea_56390440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_56390440_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func0_58_841_56160320;
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

Block __56331060;

void code__56331060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            first = value2integer(make__56364260());
            last = value2integer(make__56364240());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56331060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56331060 = block;
   block->owner = (Object)__56330500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56331060;

   return block;
};

Block __56330460;

void code__56330460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480,value2integer(make__56363640()),value2integer(make__56363600())));
      set_value_pos(pool_state);
   }
}

Block make__56330460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56330460 = block;
   block->owner = (Object)__56329960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56330460;

   return block;
};

Block __56329880;

void code__56329880() {
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
            src0 = make__56362700();
            src1 = make__56362680();
            src2 = make__56362640();
            src3 = make__56362620();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            first = value2integer(make__56362480());
            last = value2integer(make__56362460());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_50424880_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56329880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56329880 = block;
   block->owner = (Object)__56329300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56329880;

   return block;
};

Block __56331380;

void code__56331380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_50424880_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,remaining_51306140_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49946820_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,base_43588440_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50028400_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,next__data_47579280_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_48025940_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,a_56390440_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56331380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56331380 = block;
   block->owner = (Object)__56346240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56331380;

   return block;
};

Block __56331320;

void code__56331320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50115760_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,base_49946820_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50606700_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,next__data_50028400_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56331320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56331320 = block;
   block->owner = (Object)__56345780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56331320;

   return block;
};

Value make__56364260() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56364240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56363640() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56363600() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56362700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56362680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56362640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56362620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56362480() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56362460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_49580480;

SignalI base_49946820_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makebase_49946820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49946820_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func0_58_84_49580480;
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

SignalI next__data_50028400_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makenext__data_50028400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50028400_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func0_58_84_49580480;
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

SignalI address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeaddress_50028320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func0_58_84_49580480;
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

SignalI remaining_50424880_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeremaining_50424880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_50424880_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func0_58_84_49580480;
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

SystemI my__lut_50606500;

SystemI makemy__lut_50606500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50606500 = systemI;
   systemI->owner = (Object)func0_58_84_49580480;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_49596640;

   return systemI;
};

SystemI my__interpolator_48025380;

SystemI makemy__interpolator_48025380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_48025380 = systemI;
   systemI->owner = (Object)func0_58_84_49580480;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_50946760;

   return systemI;
};

Behavior __56330500;

Behavior make__56330500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56330500 = behavior;
   behavior->owner = (Object)func0_58_84_49580480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56331060();

   return behavior;
}

Behavior __56329960;

Behavior make__56329960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56329960 = behavior;
   behavior->owner = (Object)func0_58_84_49580480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56330460();

   return behavior;
}

Behavior __56329300;

Behavior make__56329300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56329300 = behavior;
   behavior->owner = (Object)func0_58_84_49580480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[z__value_56352280_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56329880();

   return behavior;
}

Behavior __56346240;

Behavior make__56346240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56346240 = behavior;
   behavior->owner = (Object)func0_58_84_49580480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[address_50028320_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_50424880_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   remaining_50424880_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   remaining_50424880_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(remaining_50424880_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,remaining_50424880_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
remaining_50424880_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[remaining_50424880_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_49946820_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   base_49946820_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   base_49946820_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(base_49946820_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,base_49946820_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
base_49946820_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[base_49946820_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_50028400_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   next__data_50028400_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   next__data_50028400_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(next__data_50028400_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,next__data_50028400_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
next__data_50028400_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[next__data_50028400_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_48025940_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   interpolated__value_48025940_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   interpolated__value_48025940_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(interpolated__value_48025940_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,interpolated__value_48025940_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
interpolated__value_48025940_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[interpolated__value_48025940_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56331380();

   return behavior;
}

Behavior __56345780;

Behavior make__56345780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56345780 = behavior;
   behavior->owner = (Object)func0_58_84_49580480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50115760_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   base_50115760_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   base_50115760_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(base_50115760_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,base_50115760_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
base_50115760_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[base_50115760_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50606700_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   next__data_50606700_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   next__data_50606700_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(next__data_50606700_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,next__data_50606700_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
next__data_50606700_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[next__data_50606700_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56331320();

   return behavior;
}

Scope makefunc0_58_84_49580480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_49580480 = scope;
   scope->owner = (Object)func0_58_841_56160320;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50606500();
   scope->systemIs[1] = makemy__interpolator_48025380();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49946820();
   scope->inners[1] = makenext__data_50028400();
   scope->inners[2] = makeaddress_50028320();
   scope->inners[3] = makeremaining_50424880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56330500();
   scope->behaviors[1] = make__56329960();
   scope->behaviors[2] = make__56329300();
   scope->behaviors[3] = make__56346240();
   scope->behaviors[4] = make__56345780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_56160320() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_56160320 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_56352280();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_56390440();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_49580480();

   return systemT;
}