#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_58523680;

SignalI z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makez__value_58627740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func0_58_8400_58523680;
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

SignalI a_58832460_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makea_58832460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_58832460_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func0_58_8400_58523680;
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

Block __48966760;

void code__48966760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
            first = value2integer(make__49098140());
            last = value2integer(make__49098040());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48966760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48966760 = block;
   block->owner = (Object)__48965700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48966760;

   return block;
};

Block __48965500;

void code__48965500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100,value2integer(make__49097740()),value2integer(make__49097080())));
      set_value_pos(pool_state);
   }
}

Block make__48965500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48965500 = block;
   block->owner = (Object)__48965060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48965500;

   return block;
};

Block __48964500;

void code__48964500() {
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
            src0 = make__49094720();
            src1 = make__49094700();
            src2 = make__49094680();
            src3 = make__49119180();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
            first = value2integer(make__49118980());
            last = value2integer(make__49118900());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_59656940_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48964500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48964500 = block;
   block->owner = (Object)__48985840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48964500;

   return block;
};

Block __48967400;

void code__48967400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,address_60091940_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_59656940_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,remaining_61617720_my__interpolator_58_8410_61528000_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59201360_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,base_47434440_my__interpolator_58_8410_61528000_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59580260_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,next__data_48428940_my__interpolator_58_8410_61528000_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49102380_my__interpolator_58_8410_61528000_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,a_58832460_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48967400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48967400 = block;
   block->owner = (Object)__49035500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48967400;

   return block;
};

Block __48967200;

void code__48967200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_60192340_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,base_59201360_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_60291820_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,next__data_59580260_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__48967200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48967200 = block;
   block->owner = (Object)__49035000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48967200;

   return block;
};

Value make__49098140() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49098040() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49097740() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49097080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49094720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49094700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49094680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49119180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49118980() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49118900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_58993040;

SignalI base_59201360_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makebase_59201360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_59201360_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func0_58_840_58993040;
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

SignalI next__data_59580260_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makenext__data_59580260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_59580260_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func0_58_840_58993040;
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

SignalI address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeaddress_59580140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func0_58_840_58993040;
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

SignalI remaining_59656940_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeremaining_59656940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_59656940_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func0_58_840_58993040;
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

SystemI my__lut_60291660;

SystemI makemy__lut_60291660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_60291660 = systemI;
   systemI->owner = (Object)func0_58_840_58993040;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_60094040;

   return systemI;
};

SystemI my__interpolator_49101880;

SystemI makemy__interpolator_49101880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49101880 = systemI;
   systemI->owner = (Object)func0_58_840_58993040;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_61528000;

   return systemI;
};

Behavior __48965700;

Behavior make__48965700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48965700 = behavior;
   behavior->owner = (Object)func0_58_840_58993040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__48966760();

   return behavior;
}

Behavior __48965060;

Behavior make__48965060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48965060 = behavior;
   behavior->owner = (Object)func0_58_840_58993040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__48965500();

   return behavior;
}

Behavior __48985840;

Behavior make__48985840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48985840 = behavior;
   behavior->owner = (Object)func0_58_840_58993040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__48964500();

   return behavior;
}

Behavior __49035500;

Behavior make__49035500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49035500 = behavior;
   behavior->owner = (Object)func0_58_840_58993040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[address_59580140_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_59656940_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   remaining_59656940_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   remaining_59656940_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(remaining_59656940_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,remaining_59656940_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
remaining_59656940_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[remaining_59656940_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_59201360_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   base_59201360_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   base_59201360_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(base_59201360_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,base_59201360_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
base_59201360_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[base_59201360_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_59580260_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   next__data_59580260_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   next__data_59580260_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(next__data_59580260_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,next__data_59580260_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
next__data_59580260_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[next__data_59580260_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49102380_my__interpolator_58_8410_61528000_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   interpolated__value_49102380_my__interpolator_58_8410_61528000_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   interpolated__value_49102380_my__interpolator_58_8410_61528000_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(interpolated__value_49102380_my__interpolator_58_8410_61528000_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,interpolated__value_49102380_my__interpolator_58_8410_61528000_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
interpolated__value_49102380_my__interpolator_58_8410_61528000_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[interpolated__value_49102380_my__interpolator_58_8410_61528000_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__48967400();

   return behavior;
}

Behavior __49035000;

Behavior make__49035000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49035000 = behavior;
   behavior->owner = (Object)func0_58_840_58993040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_60192340_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   base_60192340_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   base_60192340_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(base_60192340_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,base_60192340_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
base_60192340_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[base_60192340_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_60291820_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   next__data_60291820_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   next__data_60291820_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(next__data_60291820_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,next__data_60291820_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
next__data_60291820_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[next__data_60291820_my__lut_58_8410_60094040_func0_58_840_58993040_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__48967200();

   return behavior;
}

Scope makefunc0_58_840_58993040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_58993040 = scope;
   scope->owner = (Object)func0_58_8400_58523680;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_60291660();
   scope->systemIs[1] = makemy__interpolator_49101880();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_59201360();
   scope->inners[1] = makenext__data_59580260();
   scope->inners[2] = makeaddress_59580140();
   scope->inners[3] = makeremaining_59656940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48965700();
   scope->behaviors[1] = make__48965060();
   scope->behaviors[2] = make__48985840();
   scope->behaviors[3] = make__49035500();
   scope->behaviors[4] = make__49035000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_58523680() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_58523680 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_58627740();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_58832460();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_58993040();

   return systemT;
}