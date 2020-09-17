#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_842_55228900;

SignalI z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makez__value_55684320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func1_58_842_55228900;
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

SignalI a_55799480_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makea_55799480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_55799480_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func1_58_842_55228900;
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

Block __55614860;

void code__55614860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
            first = value2integer(make__55783400());
            last = value2integer(make__55783380());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__55614860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55614860 = block;
   block->owner = (Object)__55614320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55614860;

   return block;
};

Block __55614280;

void code__55614280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440,value2integer(make__55782920()),value2integer(make__55782820())));
      set_value_pos(pool_state);
   }
}

Block make__55614280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55614280 = block;
   block->owner = (Object)__55612900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55614280;

   return block;
};

Block __55612840;

void code__55612840() {
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
            src0 = make__55781220();
            src1 = make__55781140();
            src2 = make__55781120();
            src3 = make__55781100();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
            first = value2integer(make__55780580());
            last = value2integer(make__55780540());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_56135180_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__55612840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55612840 = block;
   block->owner = (Object)__55611580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55612840;

   return block;
};

Block __55599820;

void code__55599820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,address_56696680_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_56135180_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,remaining_58265220_my__interpolator_58_8400_58174860_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_55996780_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,base_58390060_my__interpolator_58_8400_58174860_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56041600_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,next__data_58521520_my__interpolator_58_8400_58174860_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_58629880_my__interpolator_58_8400_58174860_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,a_55799480_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__55599820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55599820 = block;
   block->owner = (Object)__55769420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55599820;

   return block;
};

Block __55599120;

void code__55599120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56797240_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,base_55996780_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56889300_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,next__data_56041600_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__55599120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55599120 = block;
   block->owner = (Object)__55768780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55599120;

   return block;
};

Value make__55783400() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55783380() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55782920() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55782820() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55781220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55781140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55781120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55781100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55780580() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55780540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_55813340;

SignalI base_55996780_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makebase_55996780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_55996780_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func1_58_84_55813340;
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

SignalI next__data_56041600_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makenext__data_56041600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_56041600_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func1_58_84_55813340;
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

SignalI address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makeaddress_56041520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func1_58_84_55813340;
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

SignalI remaining_56135180_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makeremaining_56135180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_56135180_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func1_58_84_55813340;
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

SystemI my__lut_56889100;

SystemI makemy__lut_56889100() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_56889100 = systemI;
   systemI->owner = (Object)func1_58_84_55813340;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_56674420;

   return systemI;
};

SystemI my__interpolator_58629740;

SystemI makemy__interpolator_58629740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_58629740 = systemI;
   systemI->owner = (Object)func1_58_84_55813340;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_58174860;

   return systemI;
};

Behavior __55614320;

Behavior make__55614320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55614320 = behavior;
   behavior->owner = (Object)func1_58_84_55813340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__55614860();

   return behavior;
}

Behavior __55612900;

Behavior make__55612900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55612900 = behavior;
   behavior->owner = (Object)func1_58_84_55813340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__55614280();

   return behavior;
}

Behavior __55611580;

Behavior make__55611580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55611580 = behavior;
   behavior->owner = (Object)func1_58_84_55813340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[z__value_55684320_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__55612840();

   return behavior;
}

Behavior __55769420;

Behavior make__55769420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55769420 = behavior;
   behavior->owner = (Object)func1_58_84_55813340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[address_56041520_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_56135180_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   remaining_56135180_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   remaining_56135180_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(remaining_56135180_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,remaining_56135180_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
remaining_56135180_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[remaining_56135180_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_55996780_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   base_55996780_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   base_55996780_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(base_55996780_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,base_55996780_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
base_55996780_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[base_55996780_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_56041600_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   next__data_56041600_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   next__data_56041600_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(next__data_56041600_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,next__data_56041600_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
next__data_56041600_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[next__data_56041600_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_58629880_my__interpolator_58_8400_58174860_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   interpolated__value_58629880_my__interpolator_58_8400_58174860_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   interpolated__value_58629880_my__interpolator_58_8400_58174860_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(interpolated__value_58629880_my__interpolator_58_8400_58174860_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,interpolated__value_58629880_my__interpolator_58_8400_58174860_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
interpolated__value_58629880_my__interpolator_58_8400_58174860_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[interpolated__value_58629880_my__interpolator_58_8400_58174860_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__55599820();

   return behavior;
}

Behavior __55768780;

Behavior make__55768780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55768780 = behavior;
   behavior->owner = (Object)func1_58_84_55813340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56797240_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   base_56797240_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   base_56797240_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(base_56797240_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,base_56797240_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
base_56797240_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[base_56797240_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_56889300_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   next__data_56889300_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   next__data_56889300_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(next__data_56889300_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,next__data_56889300_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
next__data_56889300_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[next__data_56889300_my__lut_58_8400_56674420_func1_58_84_55813340_func1_58_842_55228900_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__55599120();

   return behavior;
}

Scope makefunc1_58_84_55813340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_55813340 = scope;
   scope->owner = (Object)func1_58_842_55228900;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_56889100();
   scope->systemIs[1] = makemy__interpolator_58629740();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_55996780();
   scope->inners[1] = makenext__data_56041600();
   scope->inners[2] = makeaddress_56041520();
   scope->inners[3] = makeremaining_56135180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55614320();
   scope->behaviors[1] = make__55612900();
   scope->behaviors[2] = make__55611580();
   scope->behaviors[3] = make__55769420();
   scope->behaviors[4] = make__55768780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_842_55228900() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_842_55228900 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_55684320();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_55799480();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_55813340();

   return systemT;
}