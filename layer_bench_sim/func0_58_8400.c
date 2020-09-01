#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_60197620;

SignalI z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makez__value_60404240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func0_58_8400_60197620;
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

SignalI a_60661960_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makea_60661960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_60661960_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func0_58_8400_60197620;
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

Block __48096980;

void code__48096980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
            first = value2integer(make__48207380());
            last = value2integer(make__48207360());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__48096980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48096980 = block;
   block->owner = (Object)__48096240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48096980;

   return block;
};

Block __48096040;

void code__48096040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920,value2integer(make__48207020()),value2integer(make__48206980())));
      set_value_pos(pool_state);
   }
}

Block make__48096040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48096040 = block;
   block->owner = (Object)__48117560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48096040;

   return block;
};

Block __48117420;

void code__48117420() {
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
            src0 = make__48205200();
            src1 = make__48205180();
            src2 = make__48204880();
            src3 = make__48204860();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
            first = value2integer(make__48204740());
            last = value2integer(make__48204680());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_49942900_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__48117420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48117420 = block;
   block->owner = (Object)__48115940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48117420;

   return block;
};

Block __48097880;

void code__48097880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,address_62109800_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_49942900_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,remaining_50186000_my__interpolator_58_8410_49862840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47794720_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,base_52750080_my__interpolator_58_8410_49862840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49270020_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,next__data_52915820_my__interpolator_58_8410_49862840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_53124720_my__interpolator_58_8410_49862840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,a_60661960_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__48097880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48097880 = block;
   block->owner = (Object)__48177020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48097880;

   return block;
};

Block __48097620;

void code__48097620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_62172540_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,base_47794720_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_62358180_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,next__data_49270020_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__48097620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48097620 = block;
   block->owner = (Object)__48175300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48097620;

   return block;
};

Value make__48207380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48207360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48207020() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48206980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48205200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48205180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48204880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48204860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48204740() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48204680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_54688760;

SignalI base_47794720_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makebase_47794720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47794720_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func0_58_840_54688760;
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

SignalI next__data_49270020_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makenext__data_49270020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49270020_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func0_58_840_54688760;
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

SignalI address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeaddress_49269840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func0_58_840_54688760;
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

SignalI remaining_49942900_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeremaining_49942900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_49942900_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func0_58_840_54688760;
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

SystemI my__lut_62358040;

SystemI makemy__lut_62358040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_62358040 = systemI;
   systemI->owner = (Object)func0_58_840_54688760;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_62111700;

   return systemI;
};

SystemI my__interpolator_53124280;

SystemI makemy__interpolator_53124280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_53124280 = systemI;
   systemI->owner = (Object)func0_58_840_54688760;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_49862840;

   return systemI;
};

Behavior __48096240;

Behavior make__48096240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48096240 = behavior;
   behavior->owner = (Object)func0_58_840_54688760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__48096980();

   return behavior;
}

Behavior __48117560;

Behavior make__48117560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48117560 = behavior;
   behavior->owner = (Object)func0_58_840_54688760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__48096040();

   return behavior;
}

Behavior __48115940;

Behavior make__48115940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48115940 = behavior;
   behavior->owner = (Object)func0_58_840_54688760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__48117420();

   return behavior;
}

Behavior __48177020;

Behavior make__48177020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48177020 = behavior;
   behavior->owner = (Object)func0_58_840_54688760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[address_49269840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_49942900_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   remaining_49942900_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   remaining_49942900_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(remaining_49942900_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,remaining_49942900_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
remaining_49942900_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[remaining_49942900_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47794720_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   base_47794720_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   base_47794720_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(base_47794720_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,base_47794720_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
base_47794720_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[base_47794720_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_49270020_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   next__data_49270020_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   next__data_49270020_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(next__data_49270020_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,next__data_49270020_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
next__data_49270020_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[next__data_49270020_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_53124720_my__interpolator_58_8410_49862840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   interpolated__value_53124720_my__interpolator_58_8410_49862840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   interpolated__value_53124720_my__interpolator_58_8410_49862840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(interpolated__value_53124720_my__interpolator_58_8410_49862840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,interpolated__value_53124720_my__interpolator_58_8410_49862840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
interpolated__value_53124720_my__interpolator_58_8410_49862840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[interpolated__value_53124720_my__interpolator_58_8410_49862840_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__48097880();

   return behavior;
}

Behavior __48175300;

Behavior make__48175300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48175300 = behavior;
   behavior->owner = (Object)func0_58_840_54688760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_62172540_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   base_62172540_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   base_62172540_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(base_62172540_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,base_62172540_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
base_62172540_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[base_62172540_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_62358180_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   next__data_62358180_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   next__data_62358180_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(next__data_62358180_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,next__data_62358180_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
next__data_62358180_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[next__data_62358180_my__lut_58_8410_62111700_func0_58_840_54688760_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__48097620();

   return behavior;
}

Scope makefunc0_58_840_54688760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_54688760 = scope;
   scope->owner = (Object)func0_58_8400_60197620;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_62358040();
   scope->systemIs[1] = makemy__interpolator_53124280();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47794720();
   scope->inners[1] = makenext__data_49270020();
   scope->inners[2] = makeaddress_49269840();
   scope->inners[3] = makeremaining_49942900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48096240();
   scope->behaviors[1] = make__48117560();
   scope->behaviors[2] = make__48115940();
   scope->behaviors[3] = make__48177020();
   scope->behaviors[4] = make__48175300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_60197620() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_60197620 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_60404240();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_60661960();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_54688760();

   return systemT;
}