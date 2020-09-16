#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_54132660;

SignalI z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makez__value_54352800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func1_58_840_54132660;
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

SignalI a_54488500_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makea_54488500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_54488500_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func1_58_840_54132660;
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

Block __58754000;

void code__58754000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
            first = value2integer(make__58808900());
            last = value2integer(make__58808880());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58754000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58754000 = block;
   block->owner = (Object)__58753740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58754000;

   return block;
};

Block __58753700;

void code__58753700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240,value2integer(make__58808680()),value2integer(make__58808660())));
      set_value_pos(pool_state);
   }
}

Block make__58753700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58753700 = block;
   block->owner = (Object)__58753440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58753700;

   return block;
};

Block __58753400;

void code__58753400() {
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
            src0 = make__58808200();
            src1 = make__58808180();
            src2 = make__58808160();
            src3 = make__58808140();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
            first = value2integer(make__58808040());
            last = value2integer(make__58808020());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_52780940_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58753400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58753400 = block;
   block->owner = (Object)__58793860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58753400;

   return block;
};

Block __58754260;

void code__58754260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,address_52227560_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_52780940_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,remaining_43456060_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52449880_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,base_47573400_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52633520_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,next__data_48049580_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49184280_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,a_54488500_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58754260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58754260 = block;
   block->owner = (Object)__58788400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58754260;

   return block;
};

Block __58754160;

void code__58754160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52481740_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,base_52449880_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52696880_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,next__data_52633520_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58754160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58754160 = block;
   block->owner = (Object)__58788240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58754160;

   return block;
};

Value make__58808900() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58808880() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58808680() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58808660() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58808200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58808180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58808160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58808140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58808040() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58808020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_52191660;

SignalI base_52449880_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makebase_52449880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52449880_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func1_58_84_52191660;
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

SignalI next__data_52633520_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makenext__data_52633520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52633520_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func1_58_84_52191660;
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

SignalI address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeaddress_52633400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func1_58_84_52191660;
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

SignalI remaining_52780940_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeremaining_52780940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_52780940_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func1_58_84_52191660;
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

SystemI my__lut_52696660;

SystemI makemy__lut_52696660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52696660 = systemI;
   systemI->owner = (Object)func1_58_84_52191660;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_52230480;

   return systemI;
};

SystemI my__interpolator_49184140;

SystemI makemy__interpolator_49184140() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49184140 = systemI;
   systemI->owner = (Object)func1_58_84_52191660;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_54490040;

   return systemI;
};

Behavior __58753740;

Behavior make__58753740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58753740 = behavior;
   behavior->owner = (Object)func1_58_84_52191660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58754000();

   return behavior;
}

Behavior __58753440;

Behavior make__58753440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58753440 = behavior;
   behavior->owner = (Object)func1_58_84_52191660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58753700();

   return behavior;
}

Behavior __58793860;

Behavior make__58793860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58793860 = behavior;
   behavior->owner = (Object)func1_58_84_52191660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58753400();

   return behavior;
}

Behavior __58788400;

Behavior make__58788400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58788400 = behavior;
   behavior->owner = (Object)func1_58_84_52191660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[address_52633400_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_52780940_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   remaining_52780940_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   remaining_52780940_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(remaining_52780940_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,remaining_52780940_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
remaining_52780940_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[remaining_52780940_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_52449880_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   base_52449880_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   base_52449880_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(base_52449880_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,base_52449880_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
base_52449880_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[base_52449880_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_52633520_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   next__data_52633520_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   next__data_52633520_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(next__data_52633520_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,next__data_52633520_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
next__data_52633520_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[next__data_52633520_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49184280_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   interpolated__value_49184280_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   interpolated__value_49184280_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(interpolated__value_49184280_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,interpolated__value_49184280_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
interpolated__value_49184280_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[interpolated__value_49184280_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58754260();

   return behavior;
}

Behavior __58788240;

Behavior make__58788240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58788240 = behavior;
   behavior->owner = (Object)func1_58_84_52191660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52481740_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   base_52481740_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   base_52481740_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(base_52481740_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,base_52481740_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
base_52481740_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[base_52481740_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52696880_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   next__data_52696880_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   next__data_52696880_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(next__data_52696880_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,next__data_52696880_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
next__data_52696880_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[next__data_52696880_my__lut_58_8400_52230480_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58754160();

   return behavior;
}

Scope makefunc1_58_84_52191660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_52191660 = scope;
   scope->owner = (Object)func1_58_840_54132660;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52696660();
   scope->systemIs[1] = makemy__interpolator_49184140();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_52449880();
   scope->inners[1] = makenext__data_52633520();
   scope->inners[2] = makeaddress_52633400();
   scope->inners[3] = makeremaining_52780940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58753740();
   scope->behaviors[1] = make__58753440();
   scope->behaviors[2] = make__58793860();
   scope->behaviors[3] = make__58788400();
   scope->behaviors[4] = make__58788240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_54132660() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_54132660 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_54352800();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_54488500();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_52191660();

   return systemT;
}