#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_53901660;

SignalI z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makez__value_54093840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func1_58_840_53901660;
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

SignalI a_47227540_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makea_47227540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47227540_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func1_58_840_53901660;
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

Block __61584360;

void code__61584360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            first = value2integer(make__61613240());
            last = value2integer(make__61613120());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61584360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61584360 = block;
   block->owner = (Object)__61583980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61584360;

   return block;
};

Block __61583940;

void code__61583940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100,value2integer(make__61612940()),value2integer(make__61612900())));
      set_value_pos(pool_state);
   }
}

Block make__61583940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61583940 = block;
   block->owner = (Object)__61583640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61583940;

   return block;
};

Block __61583600;

void code__61583600() {
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
            src0 = make__61612360();
            src1 = make__61612340();
            src2 = make__61612320();
            src3 = make__61612300();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            first = value2integer(make__61612180());
            last = value2integer(make__61612140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_48757540_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61583600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61583600 = block;
   block->owner = (Object)__61583080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61583600;

   return block;
};

Block __61584640;

void code__61584640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,address_49579740_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_48757540_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,remaining_53917520_my__interpolator_58_8400_53722900_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47454140_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,base_54115380_my__interpolator_58_8400_53722900_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47746680_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,next__data_47228640_my__interpolator_58_8400_53722900_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47700220_my__interpolator_58_8400_53722900_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,a_47227540_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61584640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61584640 = block;
   block->owner = (Object)__61617960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61584640;

   return block;
};

Block __61584560;

void code__61584560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51570020_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,base_47454140_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51760480_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,next__data_47746680_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61584560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61584560 = block;
   block->owner = (Object)__61617580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61584560;

   return block;
};

Value make__61613240() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61613120() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61612940() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61612900() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61612360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61612340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61612320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61612300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61612180() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61612140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_45284480;

SignalI base_47454140_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makebase_47454140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47454140_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func1_58_84_45284480;
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

SignalI next__data_47746680_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makenext__data_47746680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47746680_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func1_58_84_45284480;
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

SignalI address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeaddress_47744460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func1_58_84_45284480;
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

SignalI remaining_48757540_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeremaining_48757540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_48757540_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func1_58_84_45284480;
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

SystemI my__lut_51760280;

SystemI makemy__lut_51760280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_51760280 = systemI;
   systemI->owner = (Object)func1_58_84_45284480;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_49561640;

   return systemI;
};

SystemI my__interpolator_47698020;

SystemI makemy__interpolator_47698020() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47698020 = systemI;
   systemI->owner = (Object)func1_58_84_45284480;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_53722900;

   return systemI;
};

Behavior __61583980;

Behavior make__61583980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61583980 = behavior;
   behavior->owner = (Object)func1_58_84_45284480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61584360();

   return behavior;
}

Behavior __61583640;

Behavior make__61583640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61583640 = behavior;
   behavior->owner = (Object)func1_58_84_45284480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61583940();

   return behavior;
}

Behavior __61583080;

Behavior make__61583080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61583080 = behavior;
   behavior->owner = (Object)func1_58_84_45284480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[z__value_54093840_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61583600();

   return behavior;
}

Behavior __61617960;

Behavior make__61617960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61617960 = behavior;
   behavior->owner = (Object)func1_58_84_45284480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[address_47744460_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_48757540_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   remaining_48757540_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   remaining_48757540_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(remaining_48757540_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,remaining_48757540_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
remaining_48757540_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[remaining_48757540_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47454140_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   base_47454140_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   base_47454140_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(base_47454140_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,base_47454140_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
base_47454140_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[base_47454140_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47746680_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   next__data_47746680_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   next__data_47746680_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(next__data_47746680_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,next__data_47746680_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
next__data_47746680_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[next__data_47746680_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_47700220_my__interpolator_58_8400_53722900_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   interpolated__value_47700220_my__interpolator_58_8400_53722900_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   interpolated__value_47700220_my__interpolator_58_8400_53722900_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(interpolated__value_47700220_my__interpolator_58_8400_53722900_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,interpolated__value_47700220_my__interpolator_58_8400_53722900_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
interpolated__value_47700220_my__interpolator_58_8400_53722900_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[interpolated__value_47700220_my__interpolator_58_8400_53722900_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61584640();

   return behavior;
}

Behavior __61617580;

Behavior make__61617580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61617580 = behavior;
   behavior->owner = (Object)func1_58_84_45284480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51570020_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   base_51570020_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   base_51570020_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(base_51570020_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,base_51570020_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
base_51570020_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[base_51570020_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51760480_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   next__data_51760480_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   next__data_51760480_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(next__data_51760480_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,next__data_51760480_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
next__data_51760480_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[next__data_51760480_my__lut_58_8400_49561640_func1_58_84_45284480_func1_58_840_53901660_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61584560();

   return behavior;
}

Scope makefunc1_58_84_45284480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_45284480 = scope;
   scope->owner = (Object)func1_58_840_53901660;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_51760280();
   scope->systemIs[1] = makemy__interpolator_47698020();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47454140();
   scope->inners[1] = makenext__data_47746680();
   scope->inners[2] = makeaddress_47744460();
   scope->inners[3] = makeremaining_48757540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61583980();
   scope->behaviors[1] = make__61583640();
   scope->behaviors[2] = make__61583080();
   scope->behaviors[3] = make__61617960();
   scope->behaviors[4] = make__61617580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_53901660() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_53901660 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_54093840();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47227540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_45284480();

   return systemT;
}