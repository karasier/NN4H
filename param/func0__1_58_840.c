#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0__1_58_840_51234420;

SignalI z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320;

SignalI makez__value_51589420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func0__1_58_840_51234420;
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

SignalI a_51790580_func0__1_58_840_51234420______58_84_45467980______58_840_50983320;

SignalI makea_51790580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_51790580_func0__1_58_840_51234420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func0__1_58_840_51234420;
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

Block __51642460;

void code__51642460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value;
            first = value2integer(make__51797320());
            last = value2integer(make__51797300());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51642460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51642460 = block;
   block->owner = (Object)__51732060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51642460;

   return block;
};

Block __51731700;

void code__51731700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320,value2integer(make__51797100()),value2integer(make__51797060())));
      set_value_pos(pool_state);
   }
}

Block make__51731700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51731700 = block;
   block->owner = (Object)__51730880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51731700;

   return block;
};

Block __51730800;

void code__51730800() {
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
            src0 = make__51796460();
            src1 = make__51796400();
            src2 = make__51796360();
            src3 = make__51796320();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value;
            first = value2integer(make__51796020());
            last = value2integer(make__51796000());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_51743100_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51730800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51730800 = block;
   block->owner = (Object)__51730020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51730800;

   return block;
};

Block __51642900;

void code__51642900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value,address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_51743100_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value,remaining_50280000_my__interpolator_58_8410_48225580_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51318440_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value,base_50423140_my__interpolator_58_8410_48225580_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51560740_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value,next__data_50639720_my__interpolator_58_8410_48225580_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50907700_my__interpolator_58_8410_48225580_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value,a_51790580_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51642900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51642900 = block;
   block->owner = (Object)__51741580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51642900;

   return block;
};

Block __51642680;

void code__51642680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51060600_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value,base_51318440_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51245660_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value,next__data_51560740_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51642680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51642680 = block;
   block->owner = (Object)__51741180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51642680;

   return block;
};

Value make__51797320() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51797300() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51797100() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51797060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51796460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51796400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51796360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51796320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51796020() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51796000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0__1_58_84_51175080;

SignalI base_51318440_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320;

SignalI makebase_51318440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51318440_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func0__1_58_84_51175080;
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

SignalI next__data_51560740_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320;

SignalI makenext__data_51560740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51560740_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func0__1_58_84_51175080;
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

SignalI address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320;

SignalI makeaddress_51560620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func0__1_58_84_51175080;
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

SignalI remaining_51743100_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320;

SignalI makeremaining_51743100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51743100_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func0__1_58_84_51175080;
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

SystemI my__lut_51245420;

SystemI makemy__lut_51245420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_51245420 = systemI;
   systemI->owner = (Object)func0__1_58_84_51175080;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_50821260;

   return systemI;
};

SystemI my__interpolator_50907560;

SystemI makemy__interpolator_50907560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50907560 = systemI;
   systemI->owner = (Object)func0__1_58_84_51175080;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_48225580;

   return systemI;
};

Behavior __51732060;

Behavior make__51732060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51732060 = behavior;
   behavior->owner = (Object)func0__1_58_84_51175080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51642460();

   return behavior;
}

Behavior __51730880;

Behavior make__51730880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51730880 = behavior;
   behavior->owner = (Object)func0__1_58_84_51175080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51731700();

   return behavior;
}

Behavior __51730020;

Behavior make__51730020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51730020 = behavior;
   behavior->owner = (Object)func0__1_58_84_51175080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[z__value_51589420_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51730800();

   return behavior;
}

Behavior __51741580;

Behavior make__51741580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51741580 = behavior;
   behavior->owner = (Object)func0__1_58_84_51175080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[address_51560620_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_51743100_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   remaining_51743100_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   remaining_51743100_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(remaining_51743100_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,remaining_51743100_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
remaining_51743100_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[remaining_51743100_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51318440_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   base_51318440_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   base_51318440_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(base_51318440_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,base_51318440_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
base_51318440_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[base_51318440_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_51560740_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   next__data_51560740_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   next__data_51560740_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(next__data_51560740_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,next__data_51560740_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
next__data_51560740_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[next__data_51560740_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_50907700_my__interpolator_58_8410_48225580_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   interpolated__value_50907700_my__interpolator_58_8410_48225580_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   interpolated__value_50907700_my__interpolator_58_8410_48225580_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(interpolated__value_50907700_my__interpolator_58_8410_48225580_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,interpolated__value_50907700_my__interpolator_58_8410_48225580_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
interpolated__value_50907700_my__interpolator_58_8410_48225580_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[interpolated__value_50907700_my__interpolator_58_8410_48225580_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51642900();

   return behavior;
}

Behavior __51741180;

Behavior make__51741180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51741180 = behavior;
   behavior->owner = (Object)func0__1_58_84_51175080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51060600_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   base_51060600_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   base_51060600_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(base_51060600_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,base_51060600_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
base_51060600_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[base_51060600_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51245660_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   next__data_51245660_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   next__data_51245660_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(next__data_51245660_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,next__data_51245660_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
next__data_51245660_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[next__data_51245660_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51642680();

   return behavior;
}

Scope makefunc0__1_58_84_51175080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0__1_58_84_51175080 = scope;
   scope->owner = (Object)func0__1_58_840_51234420;
   scope->name = "func0_1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_51245420();
   scope->systemIs[1] = makemy__interpolator_50907560();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51318440();
   scope->inners[1] = makenext__data_51560740();
   scope->inners[2] = makeaddress_51560620();
   scope->inners[3] = makeremaining_51743100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51732060();
   scope->behaviors[1] = make__51730880();
   scope->behaviors[2] = make__51730020();
   scope->behaviors[3] = make__51741580();
   scope->behaviors[4] = make__51741180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0__1_58_840_51234420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0__1_58_840_51234420 = systemT;
systemT->owner = NULL;
   systemT->name = "func0_1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51589420();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_51790580();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0__1_58_84_51175080();

   return systemT;
}