#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_52163920;

SignalI z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makez__value_52316620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func1_58_840_52163920;
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

SignalI a_52720660_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makea_52720660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52720660_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func1_58_840_52163920;
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

Block __60544480;

void code__60544480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
            first = value2integer(make__60550200());
            last = value2integer(make__60550180());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60544480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60544480 = block;
   block->owner = (Object)__60544220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60544480;

   return block;
};

Block __60544180;

void code__60544180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700,value2integer(make__60550040()),value2integer(make__60550020())));
      set_value_pos(pool_state);
   }
}

Block make__60544180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60544180 = block;
   block->owner = (Object)__60543920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60544180;

   return block;
};

Block __60543880;

void code__60543880() {
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
            src0 = make__60549560();
            src1 = make__60549540();
            src2 = make__60549520();
            src3 = make__60549500();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
            first = value2integer(make__60549380());
            last = value2integer(make__60549340());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_54435440_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60543880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60543880 = block;
   block->owner = (Object)__60543380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60543880;

   return block;
};

Block __60544700;

void code__60544700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,address_54418340_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_54435440_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,remaining_52638480_my__interpolator_58_8400_52299960_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53852880_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,base_52863600_my__interpolator_58_8400_52299960_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54209580_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,next__data_52992660_my__interpolator_58_8400_52299960_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_53135920_my__interpolator_58_8400_52299960_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,a_52720660_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60544700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60544700 = block;
   block->owner = (Object)__60554300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60544700;

   return block;
};

Block __60544640;

void code__60544640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54629300_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,base_53852880_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_46235320_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,next__data_54209580_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60544640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60544640 = block;
   block->owner = (Object)__60554140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60544640;

   return block;
};

Value make__60550200() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60550180() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60550040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60550020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60549560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60549540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60549520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60549500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60549380() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60549340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_53693580;

SignalI base_53852880_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makebase_53852880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53852880_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func1_58_84_53693580;
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

SignalI next__data_54209580_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makenext__data_54209580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54209580_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func1_58_84_53693580;
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

SignalI address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeaddress_54209360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func1_58_84_53693580;
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

SignalI remaining_54435440_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeremaining_54435440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_54435440_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func1_58_84_53693580;
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

SystemI my__lut_46234700;

SystemI makemy__lut_46234700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_46234700 = systemI;
   systemI->owner = (Object)func1_58_84_53693580;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_54380660;

   return systemI;
};

SystemI my__interpolator_53135600;

SystemI makemy__interpolator_53135600() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_53135600 = systemI;
   systemI->owner = (Object)func1_58_84_53693580;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_52299960;

   return systemI;
};

Behavior __60544220;

Behavior make__60544220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60544220 = behavior;
   behavior->owner = (Object)func1_58_84_53693580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60544480();

   return behavior;
}

Behavior __60543920;

Behavior make__60543920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60543920 = behavior;
   behavior->owner = (Object)func1_58_84_53693580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60544180();

   return behavior;
}

Behavior __60543380;

Behavior make__60543380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60543380 = behavior;
   behavior->owner = (Object)func1_58_84_53693580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60543880();

   return behavior;
}

Behavior __60554300;

Behavior make__60554300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60554300 = behavior;
   behavior->owner = (Object)func1_58_84_53693580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[address_54209360_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_54435440_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   remaining_54435440_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   remaining_54435440_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(remaining_54435440_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,remaining_54435440_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
remaining_54435440_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[remaining_54435440_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53852880_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   base_53852880_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   base_53852880_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(base_53852880_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,base_53852880_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
base_53852880_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[base_53852880_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_54209580_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   next__data_54209580_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   next__data_54209580_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(next__data_54209580_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,next__data_54209580_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
next__data_54209580_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[next__data_54209580_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_53135920_my__interpolator_58_8400_52299960_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   interpolated__value_53135920_my__interpolator_58_8400_52299960_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   interpolated__value_53135920_my__interpolator_58_8400_52299960_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(interpolated__value_53135920_my__interpolator_58_8400_52299960_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,interpolated__value_53135920_my__interpolator_58_8400_52299960_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
interpolated__value_53135920_my__interpolator_58_8400_52299960_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[interpolated__value_53135920_my__interpolator_58_8400_52299960_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60544700();

   return behavior;
}

Behavior __60554140;

Behavior make__60554140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60554140 = behavior;
   behavior->owner = (Object)func1_58_84_53693580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_54629300_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   base_54629300_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   base_54629300_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(base_54629300_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,base_54629300_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
base_54629300_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[base_54629300_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_46235320_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   next__data_46235320_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   next__data_46235320_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(next__data_46235320_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,next__data_46235320_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
next__data_46235320_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[next__data_46235320_my__lut_58_8400_54380660_func1_58_84_53693580_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60544640();

   return behavior;
}

Scope makefunc1_58_84_53693580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_53693580 = scope;
   scope->owner = (Object)func1_58_840_52163920;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_46234700();
   scope->systemIs[1] = makemy__interpolator_53135600();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53852880();
   scope->inners[1] = makenext__data_54209580();
   scope->inners[2] = makeaddress_54209360();
   scope->inners[3] = makeremaining_54435440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60544220();
   scope->behaviors[1] = make__60543920();
   scope->behaviors[2] = make__60543380();
   scope->behaviors[3] = make__60554300();
   scope->behaviors[4] = make__60554140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_52163920() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_52163920 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52316620();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52720660();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_53693580();

   return systemT;
}