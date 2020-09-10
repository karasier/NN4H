#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_48124440;

SignalI z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makez__value_49435560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func1_58_840_48124440;
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

SignalI a_49740760_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makea_49740760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49740760_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func1_58_840_48124440;
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

Block __60048720;

void code__60048720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
            first = value2integer(make__60086980());
            last = value2integer(make__60086920());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60048720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60048720 = block;
   block->owner = (Object)__60048420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60048720;

   return block;
};

Block __60048380;

void code__60048380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920,value2integer(make__60086720()),value2integer(make__60086700())));
      set_value_pos(pool_state);
   }
}

Block make__60048380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60048380 = block;
   block->owner = (Object)__60048060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60048380;

   return block;
};

Block __60048020;

void code__60048020() {
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
            src0 = make__60086240();
            src1 = make__60086220();
            src2 = make__60086200();
            src3 = make__60086180();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
            first = value2integer(make__60086080());
            last = value2integer(make__60086060());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53690200_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60048020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60048020 = block;
   block->owner = (Object)__60047560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60048020;

   return block;
};

Block __60048940;

void code__60048940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,address_53441100_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53690200_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,remaining_49832540_my__interpolator_58_8400_49640280_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53423780_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,base_50015820_my__interpolator_58_8400_49640280_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53521560_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,next__data_50188500_my__interpolator_58_8400_49640280_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_52113880_my__interpolator_58_8400_49640280_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,a_49740760_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60048940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60048940 = block;
   block->owner = (Object)__60066440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60048940;

   return block;
};

Block __60048880;

void code__60048880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53591620_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,base_53423780_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53769580_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,next__data_53521560_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60048880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60048880 = block;
   block->owner = (Object)__60066280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60048880;

   return block;
};

Value make__60086980() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60086920() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60086720() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60086700() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60086240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60086220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60086200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60086180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60086080() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60086060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_53248940;

SignalI base_53423780_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makebase_53423780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53423780_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func1_58_84_53248940;
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

SignalI next__data_53521560_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makenext__data_53521560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53521560_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func1_58_84_53248940;
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

SignalI address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeaddress_53521480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func1_58_84_53248940;
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

SignalI remaining_53690200_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeremaining_53690200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53690200_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func1_58_84_53248940;
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

SystemI my__lut_53769380;

SystemI makemy__lut_53769380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_53769380 = systemI;
   systemI->owner = (Object)func1_58_84_53248940;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_53443720;

   return systemI;
};

SystemI my__interpolator_52113740;

SystemI makemy__interpolator_52113740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_52113740 = systemI;
   systemI->owner = (Object)func1_58_84_53248940;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_49640280;

   return systemI;
};

Behavior __60048420;

Behavior make__60048420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60048420 = behavior;
   behavior->owner = (Object)func1_58_84_53248940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60048720();

   return behavior;
}

Behavior __60048060;

Behavior make__60048060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60048060 = behavior;
   behavior->owner = (Object)func1_58_84_53248940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60048380();

   return behavior;
}

Behavior __60047560;

Behavior make__60047560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60047560 = behavior;
   behavior->owner = (Object)func1_58_84_53248940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60048020();

   return behavior;
}

Behavior __60066440;

Behavior make__60066440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60066440 = behavior;
   behavior->owner = (Object)func1_58_84_53248940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[address_53521480_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_53690200_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   remaining_53690200_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   remaining_53690200_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(remaining_53690200_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,remaining_53690200_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
remaining_53690200_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[remaining_53690200_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53423780_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   base_53423780_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   base_53423780_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(base_53423780_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,base_53423780_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
base_53423780_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[base_53423780_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53521560_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   next__data_53521560_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   next__data_53521560_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(next__data_53521560_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,next__data_53521560_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
next__data_53521560_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[next__data_53521560_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_52113880_my__interpolator_58_8400_49640280_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   interpolated__value_52113880_my__interpolator_58_8400_49640280_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   interpolated__value_52113880_my__interpolator_58_8400_49640280_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(interpolated__value_52113880_my__interpolator_58_8400_49640280_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,interpolated__value_52113880_my__interpolator_58_8400_49640280_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
interpolated__value_52113880_my__interpolator_58_8400_49640280_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[interpolated__value_52113880_my__interpolator_58_8400_49640280_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60048940();

   return behavior;
}

Behavior __60066280;

Behavior make__60066280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60066280 = behavior;
   behavior->owner = (Object)func1_58_84_53248940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_53591620_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   base_53591620_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   base_53591620_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(base_53591620_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,base_53591620_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
base_53591620_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[base_53591620_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_53769580_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   next__data_53769580_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   next__data_53769580_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(next__data_53769580_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,next__data_53769580_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
next__data_53769580_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[next__data_53769580_my__lut_58_8400_53443720_func1_58_84_53248940_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60048880();

   return behavior;
}

Scope makefunc1_58_84_53248940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_53248940 = scope;
   scope->owner = (Object)func1_58_840_48124440;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_53769380();
   scope->systemIs[1] = makemy__interpolator_52113740();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53423780();
   scope->inners[1] = makenext__data_53521560();
   scope->inners[2] = makeaddress_53521480();
   scope->inners[3] = makeremaining_53690200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60048420();
   scope->behaviors[1] = make__60048060();
   scope->behaviors[2] = make__60047560();
   scope->behaviors[3] = make__60066440();
   scope->behaviors[4] = make__60066280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_48124440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_48124440 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49435560();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49740760();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_53248940();

   return systemT;
}