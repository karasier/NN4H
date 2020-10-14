#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0__0_58_840_51345560;

SignalI z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920;

SignalI makez__value_51388480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func0__0_58_840_51345560;
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

SignalI a_51490640_func0__0_58_840_51345560______58_84_47509160______58_840_45773920;

SignalI makea_51490640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_51490640_func0__0_58_840_51345560______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func0__0_58_840_51345560;
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

Block __47392660;

void code__47392660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value;
            first = value2integer(make__47493080());
            last = value2integer(make__47492920());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47392660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47392660 = block;
   block->owner = (Object)__47391820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47392660;

   return block;
};

Block __47391720;

void code__47391720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920,value2integer(make__47492700()),value2integer(make__47492640())));
      set_value_pos(pool_state);
   }
}

Block make__47391720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47391720 = block;
   block->owner = (Object)__47414900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47391720;

   return block;
};

Block __47414860;

void code__47414860() {
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
            src0 = make__47491260();
            src1 = make__47491240();
            src2 = make__47491220();
            src3 = make__47491200();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value;
            first = value2integer(make__47491060());
            last = value2integer(make__47491020());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47805660_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47414860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47414860 = block;
   block->owner = (Object)__47412960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47414860;

   return block;
};

Block __47393400;

void code__47393400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value,address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47805660_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value,remaining_45630420_my__interpolator_58_842_41333200_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47536460_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value,base_47226120_my__interpolator_58_842_41333200_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47652640_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value,next__data_47464260_my__interpolator_58_842_41333200_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47531640_my__interpolator_58_842_41333200_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value,a_51490640_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47393400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47393400 = block;
   block->owner = (Object)__47458340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47393400;

   return block;
};

Block __47393220;

void code__47393220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50544900_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value,base_47536460_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50664940_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value,next__data_47652640_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47393220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47393220 = block;
   block->owner = (Object)__47458000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47393220;

   return block;
};

Value make__47493080() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47492920() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47492700() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47492640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47491260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47491240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47491220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47491200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47491060() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47491020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0__0_58_84_47457860;

SignalI base_47536460_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920;

SignalI makebase_47536460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47536460_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func0__0_58_84_47457860;
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

SignalI next__data_47652640_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920;

SignalI makenext__data_47652640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47652640_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func0__0_58_84_47457860;
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

SignalI address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920;

SignalI makeaddress_47652560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func0__0_58_84_47457860;
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

SignalI remaining_47805660_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920;

SignalI makeremaining_47805660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47805660_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func0__0_58_84_47457860;
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

SystemI my__lut_50664800;

SystemI makemy__lut_50664800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50664800 = systemI;
   systemI->owner = (Object)func0__0_58_84_47457860;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_50443100;

   return systemI;
};

SystemI my__interpolator_47531360;

SystemI makemy__interpolator_47531360() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47531360 = systemI;
   systemI->owner = (Object)func0__0_58_84_47457860;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_41333200;

   return systemI;
};

Behavior __47391820;

Behavior make__47391820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47391820 = behavior;
   behavior->owner = (Object)func0__0_58_84_47457860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47392660();

   return behavior;
}

Behavior __47414900;

Behavior make__47414900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47414900 = behavior;
   behavior->owner = (Object)func0__0_58_84_47457860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47391720();

   return behavior;
}

Behavior __47412960;

Behavior make__47412960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47412960 = behavior;
   behavior->owner = (Object)func0__0_58_84_47457860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[z__value_51388480_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47414860();

   return behavior;
}

Behavior __47458340;

Behavior make__47458340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47458340 = behavior;
   behavior->owner = (Object)func0__0_58_84_47457860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[address_47652560_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47805660_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   remaining_47805660_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   remaining_47805660_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(remaining_47805660_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,remaining_47805660_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
remaining_47805660_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[remaining_47805660_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47536460_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   base_47536460_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   base_47536460_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(base_47536460_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,base_47536460_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
base_47536460_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[base_47536460_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47652640_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   next__data_47652640_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   next__data_47652640_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(next__data_47652640_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,next__data_47652640_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
next__data_47652640_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[next__data_47652640_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_47531640_my__interpolator_58_842_41333200_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   interpolated__value_47531640_my__interpolator_58_842_41333200_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   interpolated__value_47531640_my__interpolator_58_842_41333200_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(interpolated__value_47531640_my__interpolator_58_842_41333200_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,interpolated__value_47531640_my__interpolator_58_842_41333200_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
interpolated__value_47531640_my__interpolator_58_842_41333200_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[interpolated__value_47531640_my__interpolator_58_842_41333200_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47393400();

   return behavior;
}

Behavior __47458000;

Behavior make__47458000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47458000 = behavior;
   behavior->owner = (Object)func0__0_58_84_47457860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50544900_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   base_50544900_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   base_50544900_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(base_50544900_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,base_50544900_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
base_50544900_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[base_50544900_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50664940_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   next__data_50664940_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   next__data_50664940_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(next__data_50664940_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,next__data_50664940_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
next__data_50664940_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[next__data_50664940_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47393220();

   return behavior;
}

Scope makefunc0__0_58_84_47457860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0__0_58_84_47457860 = scope;
   scope->owner = (Object)func0__0_58_840_51345560;
   scope->name = "func0_0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50664800();
   scope->systemIs[1] = makemy__interpolator_47531360();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47536460();
   scope->inners[1] = makenext__data_47652640();
   scope->inners[2] = makeaddress_47652560();
   scope->inners[3] = makeremaining_47805660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47391820();
   scope->behaviors[1] = make__47414900();
   scope->behaviors[2] = make__47412960();
   scope->behaviors[3] = make__47458340();
   scope->behaviors[4] = make__47458000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0__0_58_840_51345560() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0__0_58_840_51345560 = systemT;
systemT->owner = NULL;
   systemT->name = "func0_0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51388480();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_51490640();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0__0_58_84_47457860();

   return systemT;
}