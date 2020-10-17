#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_54826640;

SignalI z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makez__value_54930100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func0_58_841_54826640;
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

SignalI a_55225460_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makea_55225460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_55225460_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func0_58_841_54826640;
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

Block __65260400;

void code__65260400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            first = value2integer(make__65296220());
            last = value2integer(make__65296200());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__65260400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65260400 = block;
   block->owner = (Object)__65260040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65260400;

   return block;
};

Block __65259980;

void code__65259980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460,value2integer(make__65295920()),value2integer(make__65295880())));
      set_value_pos(pool_state);
   }
}

Block make__65259980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65259980 = block;
   block->owner = (Object)__65259300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65259980;

   return block;
};

Block __65259260;

void code__65259260() {
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
            src0 = make__65295160();
            src1 = make__65295120();
            src2 = make__65295100();
            src3 = make__65295080();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            first = value2integer(make__65294960());
            last = value2integer(make__65294940());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_54761040_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__65259260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65259260 = block;
   block->owner = (Object)__65258800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65259260;

   return block;
};

Block __65260680;

void code__65260680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,address_55909060_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_54761040_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,remaining_49280220_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54485000_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,base_49496480_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54658960_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,next__data_48969420_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49883740_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,a_55225460_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__65260680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65260680 = block;
   block->owner = (Object)__65276480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65260680;

   return block;
};

Block __65260620;

void code__65260620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56024280_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,base_54485000_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56082780_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,next__data_54658960_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__65260620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65260620 = block;
   block->owner = (Object)__65276320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65260620;

   return block;
};

Value make__65296220() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65296200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65295920() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65295880() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65295160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__65295120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__65295100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__65295080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__65294960() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__65294940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_54424080;

SignalI base_54485000_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makebase_54485000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54485000_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func0_58_84_54424080;
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

SignalI next__data_54658960_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makenext__data_54658960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54658960_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func0_58_84_54424080;
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

SignalI address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeaddress_54658880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func0_58_84_54424080;
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

SignalI remaining_54761040_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeremaining_54761040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_54761040_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func0_58_84_54424080;
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

SystemI my__lut_56082640;

SystemI makemy__lut_56082640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_56082640 = systemI;
   systemI->owner = (Object)func0_58_84_54424080;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_844_55853840;

   return systemI;
};

SystemI my__interpolator_49883580;

SystemI makemy__interpolator_49883580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49883580 = systemI;
   systemI->owner = (Object)func0_58_84_54424080;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_844_48999300;

   return systemI;
};

Behavior __65260040;

Behavior make__65260040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65260040 = behavior;
   behavior->owner = (Object)func0_58_84_54424080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__65260400();

   return behavior;
}

Behavior __65259300;

Behavior make__65259300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65259300 = behavior;
   behavior->owner = (Object)func0_58_84_54424080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__65259980();

   return behavior;
}

Behavior __65258800;

Behavior make__65258800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65258800 = behavior;
   behavior->owner = (Object)func0_58_84_54424080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[z__value_54930100_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__65259260();

   return behavior;
}

Behavior __65276480;

Behavior make__65276480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65276480 = behavior;
   behavior->owner = (Object)func0_58_84_54424080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[address_54658880_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_54761040_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   remaining_54761040_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   remaining_54761040_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(remaining_54761040_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,remaining_54761040_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
remaining_54761040_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[remaining_54761040_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_54485000_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   base_54485000_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   base_54485000_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(base_54485000_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,base_54485000_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
base_54485000_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[base_54485000_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_54658960_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   next__data_54658960_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   next__data_54658960_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(next__data_54658960_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,next__data_54658960_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
next__data_54658960_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[next__data_54658960_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49883740_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   interpolated__value_49883740_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   interpolated__value_49883740_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(interpolated__value_49883740_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,interpolated__value_49883740_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
interpolated__value_49883740_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[interpolated__value_49883740_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__65260680();

   return behavior;
}

Behavior __65276320;

Behavior make__65276320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65276320 = behavior;
   behavior->owner = (Object)func0_58_84_54424080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56024280_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   base_56024280_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   base_56024280_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(base_56024280_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,base_56024280_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
base_56024280_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[base_56024280_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_56082780_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   next__data_56082780_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   next__data_56082780_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(next__data_56082780_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,next__data_56082780_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
next__data_56082780_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[next__data_56082780_my__lut_58_844_55853840_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__65260620();

   return behavior;
}

Scope makefunc0_58_84_54424080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_54424080 = scope;
   scope->owner = (Object)func0_58_841_54826640;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_56082640();
   scope->systemIs[1] = makemy__interpolator_49883580();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_54485000();
   scope->inners[1] = makenext__data_54658960();
   scope->inners[2] = makeaddress_54658880();
   scope->inners[3] = makeremaining_54761040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65260040();
   scope->behaviors[1] = make__65259300();
   scope->behaviors[2] = make__65258800();
   scope->behaviors[3] = make__65276480();
   scope->behaviors[4] = make__65276320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_54826640() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_54826640 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_54930100();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_55225460();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_54424080();

   return systemT;
}