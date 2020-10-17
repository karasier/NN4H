#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_841_47784020;

SignalI z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makez__value_49453020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func1_58_841_47784020;
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

SignalI a_49693520_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makea_49693520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49693520_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func1_58_841_47784020;
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

Block __65403060;

void code__65403060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            first = value2integer(make__43951920());
            last = value2integer(make__43951180());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__65403060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65403060 = block;
   block->owner = (Object)__65402700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65403060;

   return block;
};

Block __65402660;

void code__65402660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460,value2integer(make__44375940()),value2integer(make__44375660())));
      set_value_pos(pool_state);
   }
}

Block make__65402660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65402660 = block;
   block->owner = (Object)__65402240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65402660;

   return block;
};

Block __65402180;

void code__65402180() {
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
            src0 = make__44432800();
            src1 = make__44432780();
            src2 = make__44432740();
            src3 = make__44432660();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            first = value2integer(make__44427340());
            last = value2integer(make__44449620());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_55741240_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__65402180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65402180 = block;
   block->owner = (Object)__65401620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65402180;

   return block;
};

Block __65403320;

void code__65403320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,address_48968900_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_55741240_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,remaining_54257600_my__interpolator_58_8400_54173700_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_55478800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,base_54376860_my__interpolator_58_8400_54173700_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55683400_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,next__data_54492720_my__interpolator_58_8400_54173700_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_54658680_my__interpolator_58_8400_54173700_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,a_49693520_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__65403320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65403320 = block;
   block->owner = (Object)__42499900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65403320;

   return block;
};

Block __65403260;

void code__65403260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49899000_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,base_55478800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50116500_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,next__data_55683400_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__65403260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65403260 = block;
   block->owner = (Object)__42498540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65403260;

   return block;
};

Value make__43951920() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__43951180() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44375940() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44375660() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44432800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__44432780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__44432740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__44432660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__44427340() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44449620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_55224780;

SignalI base_55478800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makebase_55478800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_55478800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func1_58_84_55224780;
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

SignalI next__data_55683400_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makenext__data_55683400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_55683400_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func1_58_84_55224780;
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

SignalI address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeaddress_55683320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func1_58_84_55224780;
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

SignalI remaining_55741240_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeremaining_55741240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_55741240_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func1_58_84_55224780;
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

SystemI my__lut_50116120;

SystemI makemy__lut_50116120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50116120 = systemI;
   systemI->owner = (Object)func1_58_84_55224780;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_49693800;

   return systemI;
};

SystemI my__interpolator_54658540;

SystemI makemy__interpolator_54658540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_54658540 = systemI;
   systemI->owner = (Object)func1_58_84_55224780;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_54173700;

   return systemI;
};

Behavior __65402700;

Behavior make__65402700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65402700 = behavior;
   behavior->owner = (Object)func1_58_84_55224780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__65403060();

   return behavior;
}

Behavior __65402240;

Behavior make__65402240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65402240 = behavior;
   behavior->owner = (Object)func1_58_84_55224780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__65402660();

   return behavior;
}

Behavior __65401620;

Behavior make__65401620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65401620 = behavior;
   behavior->owner = (Object)func1_58_84_55224780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[z__value_49453020_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__65402180();

   return behavior;
}

Behavior __42499900;

Behavior make__42499900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42499900 = behavior;
   behavior->owner = (Object)func1_58_84_55224780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[address_55683320_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_55741240_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   remaining_55741240_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   remaining_55741240_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(remaining_55741240_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,remaining_55741240_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
remaining_55741240_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[remaining_55741240_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_55478800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   base_55478800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   base_55478800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(base_55478800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,base_55478800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
base_55478800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[base_55478800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_55683400_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   next__data_55683400_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   next__data_55683400_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(next__data_55683400_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,next__data_55683400_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
next__data_55683400_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[next__data_55683400_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_54658680_my__interpolator_58_8400_54173700_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   interpolated__value_54658680_my__interpolator_58_8400_54173700_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   interpolated__value_54658680_my__interpolator_58_8400_54173700_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(interpolated__value_54658680_my__interpolator_58_8400_54173700_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,interpolated__value_54658680_my__interpolator_58_8400_54173700_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
interpolated__value_54658680_my__interpolator_58_8400_54173700_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[interpolated__value_54658680_my__interpolator_58_8400_54173700_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__65403320();

   return behavior;
}

Behavior __42498540;

Behavior make__42498540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42498540 = behavior;
   behavior->owner = (Object)func1_58_84_55224780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49899000_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   base_49899000_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   base_49899000_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(base_49899000_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,base_49899000_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
base_49899000_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[base_49899000_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50116500_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   next__data_50116500_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   next__data_50116500_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(next__data_50116500_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,next__data_50116500_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
next__data_50116500_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[next__data_50116500_my__lut_58_8400_49693800_func1_58_84_55224780_func1_58_841_47784020_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__65403260();

   return behavior;
}

Scope makefunc1_58_84_55224780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_55224780 = scope;
   scope->owner = (Object)func1_58_841_47784020;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50116120();
   scope->systemIs[1] = makemy__interpolator_54658540();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_55478800();
   scope->inners[1] = makenext__data_55683400();
   scope->inners[2] = makeaddress_55683320();
   scope->inners[3] = makeremaining_55741240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65402700();
   scope->behaviors[1] = make__65402240();
   scope->behaviors[2] = make__65401620();
   scope->behaviors[3] = make__42499900();
   scope->behaviors[4] = make__42498540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_841_47784020() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_841_47784020 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49453020();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49693520();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_55224780();

   return systemT;
}