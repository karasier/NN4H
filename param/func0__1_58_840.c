#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0__1_58_840_47530080;

SignalI z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920;

SignalI makez__value_47854700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func0__1_58_840_47530080;
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

SignalI a_49727660_func0__1_58_840_47530080______58_84_47509160______58_840_45773920;

SignalI makea_49727660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49727660_func0__1_58_840_47530080______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func0__1_58_840_47530080;
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

Block __47854820;

void code__47854820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value;
            first = value2integer(make__47919780());
            last = value2integer(make__47919720());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47854820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47854820 = block;
   block->owner = (Object)__47853560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47854820;

   return block;
};

Block __47853420;

void code__47853420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920,value2integer(make__47919360()),value2integer(make__47919320())));
      set_value_pos(pool_state);
   }
}

Block make__47853420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47853420 = block;
   block->owner = (Object)__47853060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47853420;

   return block;
};

Block __47853020;

void code__47853020() {
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
            src0 = make__47916920();
            src1 = make__47916720();
            src2 = make__47916660();
            src3 = make__47916620();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value;
            first = value2integer(make__47916400());
            last = value2integer(make__47916340());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47529140_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47853020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47853020 = block;
   block->owner = (Object)__47850660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47853020;

   return block;
};

Block __47855720;

void code__47855720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value,address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47529140_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value,remaining_51014620_my__interpolator_58_8410_50645320_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_45635200_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value,base_51341240_my__interpolator_58_8410_50645320_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47318240_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value,next__data_51474520_my__interpolator_58_8410_50645320_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_43058860_my__interpolator_58_8410_50645320_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value,a_49727660_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47855720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47855720 = block;
   block->owner = (Object)__47905900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47855720;

   return block;
};

Block __47855420;

void code__47855420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47464120_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value,base_45635200_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47613380_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value,next__data_47318240_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47855420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47855420 = block;
   block->owner = (Object)__47905400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47855420;

   return block;
};

Value make__47919780() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47919720() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47919360() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47919320() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47916920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47916720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47916660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47916620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47916400() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47916340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0__1_58_84_41980100;

SignalI base_45635200_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920;

SignalI makebase_45635200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_45635200_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func0__1_58_84_41980100;
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

SignalI next__data_47318240_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920;

SignalI makenext__data_47318240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47318240_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func0__1_58_84_41980100;
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

SignalI address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920;

SignalI makeaddress_47318000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func0__1_58_84_41980100;
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

SignalI remaining_47529140_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920;

SignalI makeremaining_47529140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47529140_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func0__1_58_84_41980100;
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

SystemI my__lut_47612840;

SystemI makemy__lut_47612840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_47612840 = systemI;
   systemI->owner = (Object)func0__1_58_84_41980100;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_45769900;

   return systemI;
};

SystemI my__interpolator_43080880;

SystemI makemy__interpolator_43080880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_43080880 = systemI;
   systemI->owner = (Object)func0__1_58_84_41980100;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_50645320;

   return systemI;
};

Behavior __47853560;

Behavior make__47853560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47853560 = behavior;
   behavior->owner = (Object)func0__1_58_84_41980100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47854820();

   return behavior;
}

Behavior __47853060;

Behavior make__47853060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47853060 = behavior;
   behavior->owner = (Object)func0__1_58_84_41980100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47853420();

   return behavior;
}

Behavior __47850660;

Behavior make__47850660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47850660 = behavior;
   behavior->owner = (Object)func0__1_58_84_41980100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[z__value_47854700_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47853020();

   return behavior;
}

Behavior __47905900;

Behavior make__47905900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47905900 = behavior;
   behavior->owner = (Object)func0__1_58_84_41980100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[address_47318000_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47529140_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   remaining_47529140_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   remaining_47529140_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(remaining_47529140_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,remaining_47529140_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
remaining_47529140_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[remaining_47529140_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_45635200_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   base_45635200_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   base_45635200_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(base_45635200_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,base_45635200_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
base_45635200_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[base_45635200_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47318240_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   next__data_47318240_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   next__data_47318240_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(next__data_47318240_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,next__data_47318240_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
next__data_47318240_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[next__data_47318240_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_43058860_my__interpolator_58_8410_50645320_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   interpolated__value_43058860_my__interpolator_58_8410_50645320_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   interpolated__value_43058860_my__interpolator_58_8410_50645320_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(interpolated__value_43058860_my__interpolator_58_8410_50645320_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,interpolated__value_43058860_my__interpolator_58_8410_50645320_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
interpolated__value_43058860_my__interpolator_58_8410_50645320_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[interpolated__value_43058860_my__interpolator_58_8410_50645320_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47855720();

   return behavior;
}

Behavior __47905400;

Behavior make__47905400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47905400 = behavior;
   behavior->owner = (Object)func0__1_58_84_41980100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47464120_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   base_47464120_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   base_47464120_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(base_47464120_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,base_47464120_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
base_47464120_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[base_47464120_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47613380_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   next__data_47613380_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   next__data_47613380_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(next__data_47613380_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,next__data_47613380_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
next__data_47613380_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[next__data_47613380_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47855420();

   return behavior;
}

Scope makefunc0__1_58_84_41980100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0__1_58_84_41980100 = scope;
   scope->owner = (Object)func0__1_58_840_47530080;
   scope->name = "func0_1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_47612840();
   scope->systemIs[1] = makemy__interpolator_43080880();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_45635200();
   scope->inners[1] = makenext__data_47318240();
   scope->inners[2] = makeaddress_47318000();
   scope->inners[3] = makeremaining_47529140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47853560();
   scope->behaviors[1] = make__47853060();
   scope->behaviors[2] = make__47850660();
   scope->behaviors[3] = make__47905900();
   scope->behaviors[4] = make__47905400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0__1_58_840_47530080() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0__1_58_840_47530080 = systemT;
systemT->owner = NULL;
   systemT->name = "func0_1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47854700();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49727660();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0__1_58_84_41980100();

   return systemT;
}