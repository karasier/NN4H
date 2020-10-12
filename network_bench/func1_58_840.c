#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_59816640;

SignalI z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makez__value_48119060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)func1_58_840_59816640;
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

SignalI a_48526500_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makea_48526500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_48526500_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)func1_58_840_59816640;
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

Block __57034980;

void code__57034980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            first = value2integer(make__57086300());
            last = value2integer(make__57086280());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57034980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57034980 = block;
   block->owner = (Object)__57034620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57034980;

   return block;
};

Block __57034560;

void code__57034560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340,value2integer(make__57085640()),value2integer(make__57085560())));
      set_value_pos(pool_state);
   }
}

Block make__57034560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57034560 = block;
   block->owner = (Object)__57034140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57034560;

   return block;
};

Block __57034100;

void code__57034100() {
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
            src0 = make__57084980();
            src1 = make__57084940();
            src2 = make__57084920();
            src3 = make__57084900();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            first = value2integer(make__57084760());
            last = value2integer(make__57084700());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_51130460_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57034100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57034100 = block;
   block->owner = (Object)__57033520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57034100;

   return block;
};

Block __57035380;

void code__57035380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,address_51474560_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_51130460_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,remaining_57164660_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50823380_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,base_57389680_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51033640_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,next__data_57565620_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_57733280_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,a_48526500_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57035380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57035380 = block;
   block->owner = (Object)__57067120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57035380;

   return block;
};

Block __57035220;

void code__57035220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51630660_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,base_50823380_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55564980_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,next__data_51033640_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57035220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57035220 = block;
   block->owner = (Object)__57066960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57035220;

   return block;
};

Value make__57086300() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57086280() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57085640() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57085560() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57084980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57084940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57084920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57084900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57084760() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57084700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_50712360;

SignalI base_50823380_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makebase_50823380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50823380_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)func1_58_84_50712360;
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

SignalI next__data_51033640_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makenext__data_51033640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51033640_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)func1_58_84_50712360;
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

SignalI address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeaddress_51033300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)func1_58_84_50712360;
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

SignalI remaining_51130460_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeremaining_51130460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51130460_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)func1_58_84_50712360;
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

SystemI my__lut_55564840;

SystemI makemy__lut_55564840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_55564840 = systemI;
   systemI->owner = (Object)func1_58_84_50712360;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_51455400;

   return systemI;
};

SystemI my__interpolator_57733140;

SystemI makemy__interpolator_57733140() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_57733140 = systemI;
   systemI->owner = (Object)func1_58_84_50712360;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_57121740;

   return systemI;
};

Behavior __57034620;

Behavior make__57034620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57034620 = behavior;
   behavior->owner = (Object)func1_58_84_50712360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57034980();

   return behavior;
}

Behavior __57034140;

Behavior make__57034140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57034140 = behavior;
   behavior->owner = (Object)func1_58_84_50712360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57034560();

   return behavior;
}

Behavior __57033520;

Behavior make__57033520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57033520 = behavior;
   behavior->owner = (Object)func1_58_84_50712360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57034100();

   return behavior;
}

Behavior __57067120;

Behavior make__57067120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57067120 = behavior;
   behavior->owner = (Object)func1_58_84_50712360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[address_51033300_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_51130460_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   remaining_51130460_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   remaining_51130460_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(remaining_51130460_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,remaining_51130460_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
remaining_51130460_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[remaining_51130460_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_50823380_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   base_50823380_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   base_50823380_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(base_50823380_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,base_50823380_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
base_50823380_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[base_50823380_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_51033640_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   next__data_51033640_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   next__data_51033640_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(next__data_51033640_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,next__data_51033640_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
next__data_51033640_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[next__data_51033640_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_57733280_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   interpolated__value_57733280_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   interpolated__value_57733280_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(interpolated__value_57733280_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,interpolated__value_57733280_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
interpolated__value_57733280_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[interpolated__value_57733280_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57035380();

   return behavior;
}

Behavior __57066960;

Behavior make__57066960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57066960 = behavior;
   behavior->owner = (Object)func1_58_84_50712360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51630660_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   base_51630660_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   base_51630660_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(base_51630660_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,base_51630660_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
base_51630660_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[base_51630660_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_55564980_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   next__data_55564980_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   next__data_55564980_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(next__data_55564980_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,next__data_55564980_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
next__data_55564980_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[next__data_55564980_my__lut_58_8400_51455400_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57035220();

   return behavior;
}

Scope makefunc1_58_84_50712360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_50712360 = scope;
   scope->owner = (Object)func1_58_840_59816640;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_55564840();
   scope->systemIs[1] = makemy__interpolator_57733140();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_50823380();
   scope->inners[1] = makenext__data_51033640();
   scope->inners[2] = makeaddress_51033300();
   scope->inners[3] = makeremaining_51130460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57034620();
   scope->behaviors[1] = make__57034140();
   scope->behaviors[2] = make__57033520();
   scope->behaviors[3] = make__57067120();
   scope->behaviors[4] = make__57066960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_59816640() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_59816640 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_48119060();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_48526500();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_50712360();

   return systemT;
}