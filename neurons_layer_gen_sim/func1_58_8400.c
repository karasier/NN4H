#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_8400_64932100;

SignalI z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440;

SignalI makez__value_65132280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func1_58_8400_64932100;
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

SignalI a_65260540_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440;

SignalI makea_65260540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_65260540_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func1_58_8400_64932100;
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

Block __57241500;

void code__57241500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value;
            first = value2integer(make__57304460());
            last = value2integer(make__57304360());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57241500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57241500 = block;
   block->owner = (Object)__57241000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57241500;

   return block;
};

Block __57240920;

void code__57240920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440,value2integer(make__57304160()),value2integer(make__57304060())));
      set_value_pos(pool_state);
   }
}

Block make__57240920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57240920 = block;
   block->owner = (Object)__57240460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57240920;

   return block;
};

Block __57240300;

void code__57240300() {
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
            src0 = make__57303240();
            src1 = make__57303220();
            src2 = make__57303200();
            src3 = make__57303180();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value;
            first = value2integer(make__57417580());
            last = value2integer(make__57417560());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_58176120_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57240300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57240300 = block;
   block->owner = (Object)__57238620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57240300;

   return block;
};

Block __57242000;

void code__57242000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value,address_57305960_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_58176120_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value,remaining_55996480_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_57646060_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value,base_56155960_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57792380_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value,next__data_56328560_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_56693420_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value,a_65260540_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57242000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57242000 = block;
   block->owner = (Object)__57271940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57242000;

   return block;
};

Block __57241780;

void code__57241780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58176600_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value,base_57646060_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_58468900_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value,next__data_57792380_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57241780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57241780 = block;
   block->owner = (Object)__57271540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57241780;

   return block;
};

Value make__57304460() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57304360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57304160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57304060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57303240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57303220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57303200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57303180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57417580() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57417560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_840_57310300;

SignalI base_57646060_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440;

SignalI makebase_57646060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_57646060_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func1_58_840_57310300;
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

SignalI next__data_57792380_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440;

SignalI makenext__data_57792380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_57792380_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func1_58_840_57310300;
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

SignalI address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440;

SignalI makeaddress_57792300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func1_58_840_57310300;
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

SignalI remaining_58176120_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440;

SignalI makeremaining_58176120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_58176120_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func1_58_840_57310300;
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

SystemI my__lut_58468700;

SystemI makemy__lut_58468700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_58468700 = systemI;
   systemI->owner = (Object)func1_58_840_57310300;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8420_57311140;

   return systemI;
};

SystemI my__interpolator_56692880;

SystemI makemy__interpolator_56692880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_56692880 = systemI;
   systemI->owner = (Object)func1_58_840_57310300;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8420_55732520;

   return systemI;
};

Behavior __57241000;

Behavior make__57241000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57241000 = behavior;
   behavior->owner = (Object)func1_58_840_57310300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
   z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any += 1;
   z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any = realloc(z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any,z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any[z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57241500();

   return behavior;
}

Behavior __57240460;

Behavior make__57240460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57240460 = behavior;
   behavior->owner = (Object)func1_58_840_57310300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
   address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any += 1;
   address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any = realloc(address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any,address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any[address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57240920();

   return behavior;
}

Behavior __57238620;

Behavior make__57238620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57238620 = behavior;
   behavior->owner = (Object)func1_58_840_57310300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
   z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any += 1;
   z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any = realloc(z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any,z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any[z__value_65132280_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57240300();

   return behavior;
}

Behavior __57271940;

Behavior make__57271940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57271940 = behavior;
   behavior->owner = (Object)func1_58_840_57310300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
   address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any += 1;
   address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any = realloc(address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any,address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any[address_57792300_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_58176120_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
   remaining_58176120_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any += 1;
   remaining_58176120_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any = realloc(remaining_58176120_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any,remaining_58176120_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
remaining_58176120_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any[remaining_58176120_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_57646060_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
   base_57646060_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any += 1;
   base_57646060_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any = realloc(base_57646060_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any,base_57646060_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
base_57646060_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any[base_57646060_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_57792380_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
   next__data_57792380_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any += 1;
   next__data_57792380_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any = realloc(next__data_57792380_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any,next__data_57792380_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
next__data_57792380_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any[next__data_57792380_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_56693420_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
   interpolated__value_56693420_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any += 1;
   interpolated__value_56693420_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any = realloc(interpolated__value_56693420_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any,interpolated__value_56693420_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
interpolated__value_56693420_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any[interpolated__value_56693420_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57242000();

   return behavior;
}

Behavior __57271540;

Behavior make__57271540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57271540 = behavior;
   behavior->owner = (Object)func1_58_840_57310300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_58176600_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
   base_58176600_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any += 1;
   base_58176600_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any = realloc(base_58176600_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any,base_58176600_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
base_58176600_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any[base_58176600_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_58468900_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
   next__data_58468900_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any += 1;
   next__data_58468900_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any = realloc(next__data_58468900_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any,next__data_58468900_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
next__data_58468900_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any[next__data_58468900_my__lut_58_8420_57311140_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57241780();

   return behavior;
}

Scope makefunc1_58_840_57310300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_840_57310300 = scope;
   scope->owner = (Object)func1_58_8400_64932100;
   scope->name = "func1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_58468700();
   scope->systemIs[1] = makemy__interpolator_56692880();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_57646060();
   scope->inners[1] = makenext__data_57792380();
   scope->inners[2] = makeaddress_57792300();
   scope->inners[3] = makeremaining_58176120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57241000();
   scope->behaviors[1] = make__57240460();
   scope->behaviors[2] = make__57238620();
   scope->behaviors[3] = make__57271940();
   scope->behaviors[4] = make__57271540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_8400_64932100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_8400_64932100 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_65132280();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_65260540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_840_57310300();

   return systemT;
}