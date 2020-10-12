#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0__1_58_840_48324200;

SignalI z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360;

SignalI makez__value_50401280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func0__1_58_840_48324200;
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

SignalI a_50672200_func0__1_58_840_48324200______58_84_45562600______58_840_56012360;

SignalI makea_50672200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50672200_func0__1_58_840_48324200______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func0__1_58_840_48324200;
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

Block __56307240;

void code__56307240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value;
            first = value2integer(make__56322160());
            last = value2integer(make__56322140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56307240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56307240 = block;
   block->owner = (Object)__56306980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56307240;

   return block;
};

Block __56306940;

void code__56306940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360,value2integer(make__56322000()),value2integer(make__56321980())));
      set_value_pos(pool_state);
   }
}

Block make__56306940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56306940 = block;
   block->owner = (Object)__56306680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56306940;

   return block;
};

Block __56306640;

void code__56306640() {
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
            src0 = make__56321520();
            src1 = make__56321500();
            src2 = make__56321480();
            src3 = make__56321460();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value;
            first = value2integer(make__56321360());
            last = value2integer(make__56321340());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_51037660_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56306640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56306640 = block;
   block->owner = (Object)__56306180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56306640;

   return block;
};

Block __56307460;

void code__56307460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value,address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_51037660_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value,remaining_45545640_my__interpolator_58_8410_52131160_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50818880_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value,base_46234220_my__interpolator_58_8410_52131160_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50944860_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value,next__data_47521240_my__interpolator_58_8410_52131160_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47977160_my__interpolator_58_8410_52131160_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value,a_50672200_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56307460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56307460 = block;
   block->owner = (Object)__56325860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56307460;

   return block;
};

Block __56307400;

void code__56307400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50449300_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value,base_50818880_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50700340_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value,next__data_50944860_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56307400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56307400 = block;
   block->owner = (Object)__56325700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56307400;

   return block;
};

Value make__56322160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56322140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56322000() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56321980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56321520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56321500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56321480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56321460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56321360() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56321340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0__1_58_84_50707700;

SignalI base_50818880_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360;

SignalI makebase_50818880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50818880_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func0__1_58_84_50707700;
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

SignalI next__data_50944860_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360;

SignalI makenext__data_50944860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50944860_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func0__1_58_84_50707700;
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

SignalI address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360;

SignalI makeaddress_50944720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func0__1_58_84_50707700;
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

SignalI remaining_51037660_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360;

SignalI makeremaining_51037660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51037660_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func0__1_58_84_50707700;
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

SystemI my__lut_50724560;

SystemI makemy__lut_50724560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50724560 = systemI;
   systemI->owner = (Object)func0__1_58_84_50707700;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_50285360;

   return systemI;
};

SystemI my__interpolator_47976720;

SystemI makemy__interpolator_47976720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47976720 = systemI;
   systemI->owner = (Object)func0__1_58_84_50707700;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_52131160;

   return systemI;
};

Behavior __56306980;

Behavior make__56306980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56306980 = behavior;
   behavior->owner = (Object)func0__1_58_84_50707700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56307240();

   return behavior;
}

Behavior __56306680;

Behavior make__56306680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56306680 = behavior;
   behavior->owner = (Object)func0__1_58_84_50707700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56306940();

   return behavior;
}

Behavior __56306180;

Behavior make__56306180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56306180 = behavior;
   behavior->owner = (Object)func0__1_58_84_50707700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[z__value_50401280_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56306640();

   return behavior;
}

Behavior __56325860;

Behavior make__56325860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56325860 = behavior;
   behavior->owner = (Object)func0__1_58_84_50707700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[address_50944720_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_51037660_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   remaining_51037660_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   remaining_51037660_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(remaining_51037660_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,remaining_51037660_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
remaining_51037660_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[remaining_51037660_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_50818880_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   base_50818880_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   base_50818880_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(base_50818880_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,base_50818880_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
base_50818880_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[base_50818880_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_50944860_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   next__data_50944860_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   next__data_50944860_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(next__data_50944860_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,next__data_50944860_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
next__data_50944860_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[next__data_50944860_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_47977160_my__interpolator_58_8410_52131160_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   interpolated__value_47977160_my__interpolator_58_8410_52131160_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   interpolated__value_47977160_my__interpolator_58_8410_52131160_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(interpolated__value_47977160_my__interpolator_58_8410_52131160_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,interpolated__value_47977160_my__interpolator_58_8410_52131160_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
interpolated__value_47977160_my__interpolator_58_8410_52131160_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[interpolated__value_47977160_my__interpolator_58_8410_52131160_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56307460();

   return behavior;
}

Behavior __56325700;

Behavior make__56325700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56325700 = behavior;
   behavior->owner = (Object)func0__1_58_84_50707700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50449300_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   base_50449300_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   base_50449300_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(base_50449300_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,base_50449300_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
base_50449300_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[base_50449300_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50700340_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   next__data_50700340_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   next__data_50700340_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(next__data_50700340_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,next__data_50700340_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
next__data_50700340_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[next__data_50700340_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56307400();

   return behavior;
}

Scope makefunc0__1_58_84_50707700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0__1_58_84_50707700 = scope;
   scope->owner = (Object)func0__1_58_840_48324200;
   scope->name = "func0_1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50724560();
   scope->systemIs[1] = makemy__interpolator_47976720();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_50818880();
   scope->inners[1] = makenext__data_50944860();
   scope->inners[2] = makeaddress_50944720();
   scope->inners[3] = makeremaining_51037660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56306980();
   scope->behaviors[1] = make__56306680();
   scope->behaviors[2] = make__56306180();
   scope->behaviors[3] = make__56325860();
   scope->behaviors[4] = make__56325700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0__1_58_840_48324200() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0__1_58_840_48324200 = systemT;
systemT->owner = NULL;
   systemT->name = "func0_1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_50401280();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50672200();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0__1_58_84_50707700();

   return systemT;
}