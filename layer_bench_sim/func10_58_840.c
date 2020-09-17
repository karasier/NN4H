#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func10_58_840_49804500;

SignalI z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makez__value_50109760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func10_58_840_49804500;
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

SignalI a_52156360_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makea_52156360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52156360_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func10_58_840_49804500;
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

Block __60396900;

void code__60396900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
            first = value2integer(make__60410500());
            last = value2integer(make__60410480());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60396900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60396900 = block;
   block->owner = (Object)__60396640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60396900;

   return block;
};

Block __60396600;

void code__60396600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160,value2integer(make__60410340()),value2integer(make__60410320())));
      set_value_pos(pool_state);
   }
}

Block make__60396600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60396600 = block;
   block->owner = (Object)__60396340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60396600;

   return block;
};

Block __60396300;

void code__60396300() {
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
            src0 = make__60408340();
            src1 = make__60408220();
            src2 = make__60408160();
            src3 = make__60408140();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
            first = value2integer(make__60408040());
            last = value2integer(make__60408020());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_59025720_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60396300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60396300 = block;
   block->owner = (Object)__60395840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60396300;

   return block;
};

Block __60397120;

void code__60397120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,address_50474480_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_59025720_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,remaining_60559660_my__interpolator_58_8410_60410280_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53657440_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,base_60620880_my__interpolator_58_8410_60410280_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49345640_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,next__data_60755860_my__interpolator_58_8410_60410280_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_60841580_my__interpolator_58_8410_60410280_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,a_52156360_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60397120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60397120 = block;
   block->owner = (Object)__60414920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60397120;

   return block;
};

Block __60397060;

void code__60397060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59079340_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,base_53657440_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59132320_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,next__data_49345640_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60397060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60397060 = block;
   block->owner = (Object)__60414760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60397060;

   return block;
};

Value make__60410500() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60410480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60410340() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60410320() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60408340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60408220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60408160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60408140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60408040() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60408020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func10_58_84_52620160;

SignalI base_53657440_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makebase_53657440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53657440_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func10_58_84_52620160;
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

SignalI next__data_49345640_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makenext__data_49345640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49345640_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func10_58_84_52620160;
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

SignalI address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeaddress_49345560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func10_58_84_52620160;
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

SignalI remaining_59025720_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeremaining_59025720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_59025720_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func10_58_84_52620160;
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

SystemI my__lut_59132180;

SystemI makemy__lut_59132180() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_59132180 = systemI;
   systemI->owner = (Object)func10_58_84_52620160;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_50476480;

   return systemI;
};

SystemI my__interpolator_60841440;

SystemI makemy__interpolator_60841440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_60841440 = systemI;
   systemI->owner = (Object)func10_58_84_52620160;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_60410280;

   return systemI;
};

Behavior __60396640;

Behavior make__60396640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60396640 = behavior;
   behavior->owner = (Object)func10_58_84_52620160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60396900();

   return behavior;
}

Behavior __60396340;

Behavior make__60396340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60396340 = behavior;
   behavior->owner = (Object)func10_58_84_52620160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60396600();

   return behavior;
}

Behavior __60395840;

Behavior make__60395840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60395840 = behavior;
   behavior->owner = (Object)func10_58_84_52620160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60396300();

   return behavior;
}

Behavior __60414920;

Behavior make__60414920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60414920 = behavior;
   behavior->owner = (Object)func10_58_84_52620160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[address_49345560_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_59025720_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   remaining_59025720_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   remaining_59025720_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(remaining_59025720_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,remaining_59025720_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
remaining_59025720_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[remaining_59025720_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53657440_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   base_53657440_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   base_53657440_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(base_53657440_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,base_53657440_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
base_53657440_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[base_53657440_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_49345640_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   next__data_49345640_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   next__data_49345640_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(next__data_49345640_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,next__data_49345640_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
next__data_49345640_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[next__data_49345640_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_60841580_my__interpolator_58_8410_60410280_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   interpolated__value_60841580_my__interpolator_58_8410_60410280_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   interpolated__value_60841580_my__interpolator_58_8410_60410280_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(interpolated__value_60841580_my__interpolator_58_8410_60410280_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,interpolated__value_60841580_my__interpolator_58_8410_60410280_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
interpolated__value_60841580_my__interpolator_58_8410_60410280_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[interpolated__value_60841580_my__interpolator_58_8410_60410280_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60397120();

   return behavior;
}

Behavior __60414760;

Behavior make__60414760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60414760 = behavior;
   behavior->owner = (Object)func10_58_84_52620160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_59079340_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   base_59079340_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   base_59079340_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(base_59079340_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,base_59079340_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
base_59079340_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[base_59079340_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_59132320_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   next__data_59132320_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   next__data_59132320_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(next__data_59132320_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,next__data_59132320_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
next__data_59132320_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[next__data_59132320_my__lut_58_8410_50476480_func10_58_84_52620160_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60397060();

   return behavior;
}

Scope makefunc10_58_84_52620160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func10_58_84_52620160 = scope;
   scope->owner = (Object)func10_58_840_49804500;
   scope->name = "func10:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_59132180();
   scope->systemIs[1] = makemy__interpolator_60841440();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53657440();
   scope->inners[1] = makenext__data_49345640();
   scope->inners[2] = makeaddress_49345560();
   scope->inners[3] = makeremaining_59025720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60396640();
   scope->behaviors[1] = make__60396340();
   scope->behaviors[2] = make__60395840();
   scope->behaviors[3] = make__60414920();
   scope->behaviors[4] = make__60414760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc10_58_840_49804500() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func10_58_840_49804500 = systemT;
systemT->owner = NULL;
   systemT->name = "func10:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_50109760();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52156360();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc10_58_84_52620160();

   return systemT;
}