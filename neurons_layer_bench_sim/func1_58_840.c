#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_49283940;

SignalI z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makez__value_49531520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func1_58_840_49283940;
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

SignalI a_49717900_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makea_49717900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49717900_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func1_58_840_49283940;
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

Block __61034860;

void code__61034860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
            first = value2integer(make__61048720());
            last = value2integer(make__61048700());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61034860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61034860 = block;
   block->owner = (Object)__61034560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61034860;

   return block;
};

Block __61034520;

void code__61034520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240,value2integer(make__61048500()),value2integer(make__61048480())));
      set_value_pos(pool_state);
   }
}

Block make__61034520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61034520 = block;
   block->owner = (Object)__61034200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61034520;

   return block;
};

Block __61034160;

void code__61034160() {
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
            src0 = make__61048020();
            src1 = make__61048000();
            src2 = make__61047980();
            src3 = make__61047960();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
            first = value2integer(make__61047860());
            last = value2integer(make__61047840());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53222760_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61034160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61034160 = block;
   block->owner = (Object)__61033660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61034160;

   return block;
};

Block __61035080;

void code__61035080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,address_53118180_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53222760_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,remaining_49719220_my__interpolator_58_8400_49529620_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52911140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,base_49096460_my__interpolator_58_8400_49529620_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53021900_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,next__data_51861420_my__interpolator_58_8400_49529620_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_52014840_my__interpolator_58_8400_49529620_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,a_49717900_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61035080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61035080 = block;
   block->owner = (Object)__61052820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61035080;

   return block;
};

Block __61035020;

void code__61035020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53289940_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,base_52911140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53460520_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,next__data_53021900_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61035020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61035020 = block;
   block->owner = (Object)__61052600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61035020;

   return block;
};

Value make__61048720() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61048700() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61048500() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61048480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61048020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61048000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61047980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61047960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61047860() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61047840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_52809480;

SignalI base_52911140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makebase_52911140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52911140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func1_58_84_52809480;
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

SignalI next__data_53021900_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makenext__data_53021900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53021900_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func1_58_84_52809480;
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

SignalI address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeaddress_53021740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func1_58_84_52809480;
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

SignalI remaining_53222760_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeremaining_53222760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53222760_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func1_58_84_52809480;
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

SystemI my__lut_53460380;

SystemI makemy__lut_53460380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_53460380 = systemI;
   systemI->owner = (Object)func1_58_84_52809480;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_53121140;

   return systemI;
};

SystemI my__interpolator_52014700;

SystemI makemy__interpolator_52014700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_52014700 = systemI;
   systemI->owner = (Object)func1_58_84_52809480;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_49529620;

   return systemI;
};

Behavior __61034560;

Behavior make__61034560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61034560 = behavior;
   behavior->owner = (Object)func1_58_84_52809480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61034860();

   return behavior;
}

Behavior __61034200;

Behavior make__61034200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61034200 = behavior;
   behavior->owner = (Object)func1_58_84_52809480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61034520();

   return behavior;
}

Behavior __61033660;

Behavior make__61033660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61033660 = behavior;
   behavior->owner = (Object)func1_58_84_52809480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61034160();

   return behavior;
}

Behavior __61052820;

Behavior make__61052820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61052820 = behavior;
   behavior->owner = (Object)func1_58_84_52809480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[address_53021740_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_53222760_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   remaining_53222760_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   remaining_53222760_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(remaining_53222760_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,remaining_53222760_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
remaining_53222760_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[remaining_53222760_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_52911140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   base_52911140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   base_52911140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(base_52911140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,base_52911140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
base_52911140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[base_52911140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53021900_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   next__data_53021900_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   next__data_53021900_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(next__data_53021900_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,next__data_53021900_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
next__data_53021900_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[next__data_53021900_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_52014840_my__interpolator_58_8400_49529620_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   interpolated__value_52014840_my__interpolator_58_8400_49529620_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   interpolated__value_52014840_my__interpolator_58_8400_49529620_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(interpolated__value_52014840_my__interpolator_58_8400_49529620_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,interpolated__value_52014840_my__interpolator_58_8400_49529620_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
interpolated__value_52014840_my__interpolator_58_8400_49529620_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[interpolated__value_52014840_my__interpolator_58_8400_49529620_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61035080();

   return behavior;
}

Behavior __61052600;

Behavior make__61052600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61052600 = behavior;
   behavior->owner = (Object)func1_58_84_52809480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_53289940_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   base_53289940_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   base_53289940_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(base_53289940_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,base_53289940_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
base_53289940_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[base_53289940_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_53460520_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   next__data_53460520_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   next__data_53460520_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(next__data_53460520_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,next__data_53460520_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
next__data_53460520_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[next__data_53460520_my__lut_58_8400_53121140_func1_58_84_52809480_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61035020();

   return behavior;
}

Scope makefunc1_58_84_52809480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_52809480 = scope;
   scope->owner = (Object)func1_58_840_49283940;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_53460380();
   scope->systemIs[1] = makemy__interpolator_52014700();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_52911140();
   scope->inners[1] = makenext__data_53021900();
   scope->inners[2] = makeaddress_53021740();
   scope->inners[3] = makeremaining_53222760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61034560();
   scope->behaviors[1] = make__61034200();
   scope->behaviors[2] = make__61033660();
   scope->behaviors[3] = make__61052820();
   scope->behaviors[4] = make__61052600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_49283940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_49283940 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49531520();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49717900();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_52809480();

   return systemT;
}