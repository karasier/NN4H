#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_56115700;

SignalI z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makez__value_56660000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)func0_58_8400_56115700;
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

SignalI a_56788160_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makea_56788160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_56788160_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)func0_58_8400_56115700;
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

Block __57734960;

void code__57734960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            first = value2integer(make__57940300());
            last = value2integer(make__57940280());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57734960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57734960 = block;
   block->owner = (Object)__57734540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57734960;

   return block;
};

Block __57734500;

void code__57734500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340,value2integer(make__57940140()),value2integer(make__57940120())));
      set_value_pos(pool_state);
   }
}

Block make__57734500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57734500 = block;
   block->owner = (Object)__57734060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57734500;

   return block;
};

Block __57734000;

void code__57734000() {
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
            src0 = make__57939660();
            src1 = make__57939620();
            src2 = make__57939600();
            src3 = make__57939580();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            first = value2integer(make__57939440());
            last = value2integer(make__57939420());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_59307980_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57734000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57734000 = block;
   block->owner = (Object)__57733360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57734000;

   return block;
};

Block __57735260;

void code__57735260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,address_56597760_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_59307980_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,remaining_58313900_my__interpolator_58_8410_58216900_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58911640_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,base_58464040_my__interpolator_58_8410_58216900_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59022940_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,next__data_58650920_my__interpolator_58_8410_58216900_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_58748140_my__interpolator_58_8410_58216900_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,a_56788160_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57735260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57735260 = block;
   block->owner = (Object)__57889020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57735260;

   return block;
};

Block __57735140;

void code__57735140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56761880_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,base_58911640_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56886820_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,next__data_59022940_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57735140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57735140 = block;
   block->owner = (Object)__57888760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57735140;

   return block;
};

Value make__57940300() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57940280() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57940140() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57940120() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57939660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57939620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57939600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57939580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57939440() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57939420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_58815440;

SignalI base_58911640_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makebase_58911640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_58911640_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)func0_58_840_58815440;
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

SignalI next__data_59022940_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makenext__data_59022940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_59022940_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)func0_58_840_58815440;
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

SignalI address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeaddress_59022860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)func0_58_840_58815440;
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

SignalI remaining_59307980_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeremaining_59307980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_59307980_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)func0_58_840_58815440;
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

SystemI my__lut_56886600;

SystemI makemy__lut_56886600() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_56886600 = systemI;
   systemI->owner = (Object)func0_58_840_58815440;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_56559340;

   return systemI;
};

SystemI my__interpolator_58747880;

SystemI makemy__interpolator_58747880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_58747880 = systemI;
   systemI->owner = (Object)func0_58_840_58815440;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_58216900;

   return systemI;
};

Behavior __57734540;

Behavior make__57734540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57734540 = behavior;
   behavior->owner = (Object)func0_58_840_58815440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57734960();

   return behavior;
}

Behavior __57734060;

Behavior make__57734060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57734060 = behavior;
   behavior->owner = (Object)func0_58_840_58815440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57734500();

   return behavior;
}

Behavior __57733360;

Behavior make__57733360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57733360 = behavior;
   behavior->owner = (Object)func0_58_840_58815440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57734000();

   return behavior;
}

Behavior __57889020;

Behavior make__57889020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57889020 = behavior;
   behavior->owner = (Object)func0_58_840_58815440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[address_59022860_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_59307980_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   remaining_59307980_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   remaining_59307980_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(remaining_59307980_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,remaining_59307980_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
remaining_59307980_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[remaining_59307980_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_58911640_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   base_58911640_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   base_58911640_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(base_58911640_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,base_58911640_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
base_58911640_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[base_58911640_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_59022940_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   next__data_59022940_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   next__data_59022940_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(next__data_59022940_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,next__data_59022940_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
next__data_59022940_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[next__data_59022940_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_58748140_my__interpolator_58_8410_58216900_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   interpolated__value_58748140_my__interpolator_58_8410_58216900_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   interpolated__value_58748140_my__interpolator_58_8410_58216900_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(interpolated__value_58748140_my__interpolator_58_8410_58216900_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,interpolated__value_58748140_my__interpolator_58_8410_58216900_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
interpolated__value_58748140_my__interpolator_58_8410_58216900_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[interpolated__value_58748140_my__interpolator_58_8410_58216900_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57735260();

   return behavior;
}

Behavior __57888760;

Behavior make__57888760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57888760 = behavior;
   behavior->owner = (Object)func0_58_840_58815440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56761880_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   base_56761880_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   base_56761880_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(base_56761880_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,base_56761880_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
base_56761880_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[base_56761880_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_56886820_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   next__data_56886820_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   next__data_56886820_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(next__data_56886820_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,next__data_56886820_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
next__data_56886820_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[next__data_56886820_my__lut_58_8410_56559340_func0_58_840_58815440_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57735140();

   return behavior;
}

Scope makefunc0_58_840_58815440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_58815440 = scope;
   scope->owner = (Object)func0_58_8400_56115700;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_56886600();
   scope->systemIs[1] = makemy__interpolator_58747880();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_58911640();
   scope->inners[1] = makenext__data_59022940();
   scope->inners[2] = makeaddress_59022860();
   scope->inners[3] = makeremaining_59307980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57734540();
   scope->behaviors[1] = make__57734060();
   scope->behaviors[2] = make__57733360();
   scope->behaviors[3] = make__57889020();
   scope->behaviors[4] = make__57888760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_56115700() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_56115700 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_56660000();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_56788160();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_58815440();

   return systemT;
}