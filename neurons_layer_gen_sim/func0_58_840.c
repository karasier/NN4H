#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_51931720;

SignalI z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makez__value_52097160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func0_58_840_51931720;
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

SignalI a_52192300_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makea_52192300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52192300_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func0_58_840_51931720;
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

Block __52862080;

void code__52862080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
            first = value2integer(make__58724980());
            last = value2integer(make__58724960());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52862080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52862080 = block;
   block->owner = (Object)__52861760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52862080;

   return block;
};

Block __52861720;

void code__52861720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240,value2integer(make__58724820()),value2integer(make__58724800())));
      set_value_pos(pool_state);
   }
}

Block make__52861720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52861720 = block;
   block->owner = (Object)__52861460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52861720;

   return block;
};

Block __52861420;

void code__52861420() {
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
            src0 = make__58724140();
            src1 = make__58724120();
            src2 = make__58724100();
            src3 = make__58724080();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
            first = value2integer(make__58723980());
            last = value2integer(make__58723960());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53024900_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52861420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52861420 = block;
   block->owner = (Object)__52860860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52861420;

   return block;
};

Block __52862340;

void code__52862340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,address_49223420_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53024900_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,remaining_53075100_my__interpolator_58_842_52974540_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52809460_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,base_53311140_my__interpolator_58_842_52974540_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52926260_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,next__data_53440960_my__interpolator_58_842_52974540_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_53603080_my__interpolator_58_842_52974540_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,a_52192300_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52862340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52862340 = block;
   block->owner = (Object)__52855560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52862340;

   return block;
};

Block __52862280;

void code__52862280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49352320_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,base_52809460_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49607080_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,next__data_52926260_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52862280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52862280 = block;
   block->owner = (Object)__52855380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52862280;

   return block;
};

Value make__58724980() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58724960() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58724820() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58724800() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58724140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58724120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58724100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58724080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58723980() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58723960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_52677080;

SignalI base_52809460_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makebase_52809460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52809460_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func0_58_84_52677080;
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

SignalI next__data_52926260_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makenext__data_52926260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52926260_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func0_58_84_52677080;
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

SignalI address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeaddress_52926180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func0_58_84_52677080;
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

SignalI remaining_53024900_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeremaining_53024900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53024900_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func0_58_84_52677080;
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

SystemI my__lut_49606780;

SystemI makemy__lut_49606780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49606780 = systemI;
   systemI->owner = (Object)func0_58_84_52677080;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_48972780;

   return systemI;
};

SystemI my__interpolator_53602700;

SystemI makemy__interpolator_53602700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_53602700 = systemI;
   systemI->owner = (Object)func0_58_84_52677080;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_52974540;

   return systemI;
};

Behavior __52861760;

Behavior make__52861760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52861760 = behavior;
   behavior->owner = (Object)func0_58_84_52677080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__52862080();

   return behavior;
}

Behavior __52861460;

Behavior make__52861460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52861460 = behavior;
   behavior->owner = (Object)func0_58_84_52677080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__52861720();

   return behavior;
}

Behavior __52860860;

Behavior make__52860860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52860860 = behavior;
   behavior->owner = (Object)func0_58_84_52677080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__52861420();

   return behavior;
}

Behavior __52855560;

Behavior make__52855560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52855560 = behavior;
   behavior->owner = (Object)func0_58_84_52677080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[address_52926180_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_53024900_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   remaining_53024900_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   remaining_53024900_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(remaining_53024900_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,remaining_53024900_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
remaining_53024900_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[remaining_53024900_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_52809460_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   base_52809460_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   base_52809460_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(base_52809460_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,base_52809460_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
base_52809460_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[base_52809460_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_52926260_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   next__data_52926260_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   next__data_52926260_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(next__data_52926260_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,next__data_52926260_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
next__data_52926260_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[next__data_52926260_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_53603080_my__interpolator_58_842_52974540_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   interpolated__value_53603080_my__interpolator_58_842_52974540_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   interpolated__value_53603080_my__interpolator_58_842_52974540_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(interpolated__value_53603080_my__interpolator_58_842_52974540_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,interpolated__value_53603080_my__interpolator_58_842_52974540_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
interpolated__value_53603080_my__interpolator_58_842_52974540_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[interpolated__value_53603080_my__interpolator_58_842_52974540_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__52862340();

   return behavior;
}

Behavior __52855380;

Behavior make__52855380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52855380 = behavior;
   behavior->owner = (Object)func0_58_84_52677080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49352320_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   base_49352320_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   base_49352320_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(base_49352320_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,base_49352320_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
base_49352320_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[base_49352320_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49607080_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   next__data_49607080_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   next__data_49607080_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(next__data_49607080_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,next__data_49607080_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
next__data_49607080_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[next__data_49607080_my__lut_58_842_48972780_func0_58_84_52677080_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__52862280();

   return behavior;
}

Scope makefunc0_58_84_52677080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_52677080 = scope;
   scope->owner = (Object)func0_58_840_51931720;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49606780();
   scope->systemIs[1] = makemy__interpolator_53602700();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_52809460();
   scope->inners[1] = makenext__data_52926260();
   scope->inners[2] = makeaddress_52926180();
   scope->inners[3] = makeremaining_53024900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52861760();
   scope->behaviors[1] = make__52861460();
   scope->behaviors[2] = make__52860860();
   scope->behaviors[3] = make__52855560();
   scope->behaviors[4] = make__52855380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_51931720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_51931720 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52097160();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52192300();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_52677080();

   return systemT;
}