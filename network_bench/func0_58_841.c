#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_49835420;

SignalI z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makez__value_50357440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func0_58_841_49835420;
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

SignalI a_50475520_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makea_50475520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50475520_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func0_58_841_49835420;
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

Block __58188700;

void code__58188700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
            first = value2integer(make__58272140());
            last = value2integer(make__58272120());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__58188700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58188700 = block;
   block->owner = (Object)__58188200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58188700;

   return block;
};

Block __58188120;

void code__58188120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100,value2integer(make__58271780()),value2integer(make__58271760())));
      set_value_pos(pool_state);
   }
}

Block make__58188120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58188120 = block;
   block->owner = (Object)__58261420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58188120;

   return block;
};

Block __58261380;

void code__58261380() {
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
            src0 = make__58271140();
            src1 = make__58271120();
            src2 = make__58271100();
            src3 = make__58271080();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
            first = value2integer(make__58270980());
            last = value2integer(make__58270960());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47527160_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__58261380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58261380 = block;
   block->owner = (Object)__58260840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58261380;

   return block;
};

Block __58189100;

void code__58189100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,address_50425620_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47527160_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,remaining_50475260_my__interpolator_58_842_50248700_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51185000_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,base_50696100_my__interpolator_58_842_50248700_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_45323600_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,next__data_50957960_my__interpolator_58_842_50248700_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_51169300_my__interpolator_58_842_50248700_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,a_50475520_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__58189100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58189100 = block;
   block->owner = (Object)__58253440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58189100;

   return block;
};

Block __58189040;

void code__58189040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50527900_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,base_51185000_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50649960_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,next__data_45323600_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__58189040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58189040 = block;
   block->owner = (Object)__58277700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58189040;

   return block;
};

Value make__58272140() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58272120() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58271780() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58271760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58271140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58271120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58271100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58271080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58270980() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58270960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_51109360;

SignalI base_51185000_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makebase_51185000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51185000_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func0_58_84_51109360;
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

SignalI next__data_45323600_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makenext__data_45323600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_45323600_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func0_58_84_51109360;
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

SignalI address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeaddress_45323140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func0_58_84_51109360;
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

SignalI remaining_47527160_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeremaining_47527160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47527160_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func0_58_84_51109360;
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

SystemI my__lut_50649760;

SystemI makemy__lut_50649760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50649760 = systemI;
   systemI->owner = (Object)func0_58_84_51109360;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_50428520;

   return systemI;
};

SystemI my__interpolator_51168960;

SystemI makemy__interpolator_51168960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_51168960 = systemI;
   systemI->owner = (Object)func0_58_84_51109360;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_50248700;

   return systemI;
};

Behavior __58188200;

Behavior make__58188200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58188200 = behavior;
   behavior->owner = (Object)func0_58_84_51109360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58188700();

   return behavior;
}

Behavior __58261420;

Behavior make__58261420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58261420 = behavior;
   behavior->owner = (Object)func0_58_84_51109360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58188120();

   return behavior;
}

Behavior __58260840;

Behavior make__58260840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58260840 = behavior;
   behavior->owner = (Object)func0_58_84_51109360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[z__value_50357440_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58261380();

   return behavior;
}

Behavior __58253440;

Behavior make__58253440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58253440 = behavior;
   behavior->owner = (Object)func0_58_84_51109360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[address_45323140_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47527160_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   remaining_47527160_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   remaining_47527160_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(remaining_47527160_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,remaining_47527160_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
remaining_47527160_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[remaining_47527160_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51185000_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   base_51185000_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   base_51185000_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(base_51185000_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,base_51185000_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
base_51185000_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[base_51185000_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_45323600_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   next__data_45323600_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   next__data_45323600_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(next__data_45323600_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,next__data_45323600_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
next__data_45323600_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[next__data_45323600_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_51169300_my__interpolator_58_842_50248700_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   interpolated__value_51169300_my__interpolator_58_842_50248700_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   interpolated__value_51169300_my__interpolator_58_842_50248700_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(interpolated__value_51169300_my__interpolator_58_842_50248700_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,interpolated__value_51169300_my__interpolator_58_842_50248700_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
interpolated__value_51169300_my__interpolator_58_842_50248700_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[interpolated__value_51169300_my__interpolator_58_842_50248700_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58189100();

   return behavior;
}

Behavior __58277700;

Behavior make__58277700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58277700 = behavior;
   behavior->owner = (Object)func0_58_84_51109360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50527900_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   base_50527900_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   base_50527900_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(base_50527900_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,base_50527900_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
base_50527900_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[base_50527900_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50649960_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   next__data_50649960_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   next__data_50649960_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(next__data_50649960_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,next__data_50649960_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
next__data_50649960_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[next__data_50649960_my__lut_58_842_50428520_func0_58_84_51109360_func0_58_841_49835420_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58189040();

   return behavior;
}

Scope makefunc0_58_84_51109360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_51109360 = scope;
   scope->owner = (Object)func0_58_841_49835420;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50649760();
   scope->systemIs[1] = makemy__interpolator_51168960();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51185000();
   scope->inners[1] = makenext__data_45323600();
   scope->inners[2] = makeaddress_45323140();
   scope->inners[3] = makeremaining_47527160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58188200();
   scope->behaviors[1] = make__58261420();
   scope->behaviors[2] = make__58260840();
   scope->behaviors[3] = make__58253440();
   scope->behaviors[4] = make__58277700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_49835420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_49835420 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_50357440();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50475520();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_51109360();

   return systemT;
}