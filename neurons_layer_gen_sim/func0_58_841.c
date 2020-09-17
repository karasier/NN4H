#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_51761000;

SignalI z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makez__value_51918840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func0_58_841_51761000;
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

SignalI a_52241500_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makea_52241500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52241500_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func0_58_841_51761000;
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

Block __60119380;

void code__60119380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
            first = value2integer(make__60165940());
            last = value2integer(make__60165920());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60119380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60119380 = block;
   block->owner = (Object)__60119120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60119380;

   return block;
};

Block __60119080;

void code__60119080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340,value2integer(make__60165780()),value2integer(make__60165760())));
      set_value_pos(pool_state);
   }
}

Block make__60119080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60119080 = block;
   block->owner = (Object)__60118800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60119080;

   return block;
};

Block __60118760;

void code__60118760() {
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
            src0 = make__60165200();
            src1 = make__60165180();
            src2 = make__60165160();
            src3 = make__60165140();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
            first = value2integer(make__60165040());
            last = value2integer(make__60165020());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_52753640_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60118760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60118760 = block;
   block->owner = (Object)__60118120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60118760;

   return block;
};

Block __60119600;

void code__60119600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,address_49287460_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_52753640_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,remaining_52942780_my__interpolator_58_842_52815800_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52521680_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,base_53064240_my__interpolator_58_842_52815800_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52588260_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,next__data_53177520_my__interpolator_58_842_52815800_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_53356000_my__interpolator_58_842_52815800_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,a_52241500_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60119600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60119600 = block;
   block->owner = (Object)__60170040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60119600;

   return block;
};

Block __60119540;

void code__60119540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49536260_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,base_52521680_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49648620_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,next__data_52588260_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60119540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60119540 = block;
   block->owner = (Object)__60169880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60119540;

   return block;
};

Value make__60165940() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60165920() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60165780() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60165760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60165200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60165180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60165160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60165140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60165040() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60165020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_52364440;

SignalI base_52521680_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makebase_52521680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52521680_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func0_58_84_52364440;
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

SignalI next__data_52588260_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makenext__data_52588260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52588260_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func0_58_84_52364440;
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

SignalI address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeaddress_52588180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func0_58_84_52364440;
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

SignalI remaining_52753640_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeremaining_52753640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_52753640_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func0_58_84_52364440;
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

SystemI my__lut_49648400;

SystemI makemy__lut_49648400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49648400 = systemI;
   systemI->owner = (Object)func0_58_84_52364440;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_49272420;

   return systemI;
};

SystemI my__interpolator_53355860;

SystemI makemy__interpolator_53355860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_53355860 = systemI;
   systemI->owner = (Object)func0_58_84_52364440;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_52815800;

   return systemI;
};

Behavior __60119120;

Behavior make__60119120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60119120 = behavior;
   behavior->owner = (Object)func0_58_84_52364440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60119380();

   return behavior;
}

Behavior __60118800;

Behavior make__60118800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60118800 = behavior;
   behavior->owner = (Object)func0_58_84_52364440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60119080();

   return behavior;
}

Behavior __60118120;

Behavior make__60118120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60118120 = behavior;
   behavior->owner = (Object)func0_58_84_52364440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60118760();

   return behavior;
}

Behavior __60170040;

Behavior make__60170040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60170040 = behavior;
   behavior->owner = (Object)func0_58_84_52364440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[address_52588180_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_52753640_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   remaining_52753640_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   remaining_52753640_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(remaining_52753640_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,remaining_52753640_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
remaining_52753640_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[remaining_52753640_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_52521680_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   base_52521680_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   base_52521680_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(base_52521680_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,base_52521680_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
base_52521680_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[base_52521680_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_52588260_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   next__data_52588260_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   next__data_52588260_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(next__data_52588260_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,next__data_52588260_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
next__data_52588260_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[next__data_52588260_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_53356000_my__interpolator_58_842_52815800_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   interpolated__value_53356000_my__interpolator_58_842_52815800_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   interpolated__value_53356000_my__interpolator_58_842_52815800_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(interpolated__value_53356000_my__interpolator_58_842_52815800_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,interpolated__value_53356000_my__interpolator_58_842_52815800_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
interpolated__value_53356000_my__interpolator_58_842_52815800_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[interpolated__value_53356000_my__interpolator_58_842_52815800_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60119600();

   return behavior;
}

Behavior __60169880;

Behavior make__60169880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60169880 = behavior;
   behavior->owner = (Object)func0_58_84_52364440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49536260_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   base_49536260_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   base_49536260_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(base_49536260_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,base_49536260_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
base_49536260_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[base_49536260_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49648620_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   next__data_49648620_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   next__data_49648620_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(next__data_49648620_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,next__data_49648620_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
next__data_49648620_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[next__data_49648620_my__lut_58_842_49272420_func0_58_84_52364440_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60119540();

   return behavior;
}

Scope makefunc0_58_84_52364440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_52364440 = scope;
   scope->owner = (Object)func0_58_841_51761000;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49648400();
   scope->systemIs[1] = makemy__interpolator_53355860();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_52521680();
   scope->inners[1] = makenext__data_52588260();
   scope->inners[2] = makeaddress_52588180();
   scope->inners[3] = makeremaining_52753640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60119120();
   scope->behaviors[1] = make__60118800();
   scope->behaviors[2] = make__60118120();
   scope->behaviors[3] = make__60170040();
   scope->behaviors[4] = make__60169880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_51761000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_51761000 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51918840();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52241500();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_52364440();

   return systemT;
}