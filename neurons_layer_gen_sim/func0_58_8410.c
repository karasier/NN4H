#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8410_65446500;

SignalI z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makez__value_65621520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func0_58_8410_65446500;
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

SignalI a_65816500_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makea_65816500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_65816500_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func0_58_8410_65446500;
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

Block __58770780;

void code__58770780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
            first = value2integer(make__51802280());
            last = value2integer(make__51802240());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__58770780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58770780 = block;
   block->owner = (Object)__58793760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58770780;

   return block;
};

Block __58793680;

void code__58793680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440,value2integer(make__51802080()),value2integer(make__51802060())));
      set_value_pos(pool_state);
   }
}

Block make__58793680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58793680 = block;
   block->owner = (Object)__58793200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58793680;

   return block;
};

Block __58793120;

void code__58793120() {
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
            src0 = make__51801560();
            src1 = make__51801540();
            src2 = make__51801500();
            src3 = make__51801480();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
            first = value2integer(make__51801360());
            last = value2integer(make__51801340());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47996120_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__58793120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58793120 = block;
   block->owner = (Object)__58791860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58793120;

   return block;
};

Block __58771780;

void code__58771780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,address_68027200_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47996120_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,remaining_56032400_my__interpolator_58_8430_55682840_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_68637660_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,base_56180840_my__interpolator_58_8430_55682840_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_68882240_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,next__data_56611340_my__interpolator_58_8430_55682840_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_56886320_my__interpolator_58_8430_55682840_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,a_65816500_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__58771780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58771780 = block;
   block->owner = (Object)__58822520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58771780;

   return block;
};

Block __58771500;

void code__58771500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_68166860_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,base_68637660_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_68338880_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,next__data_68882240_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__58771500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58771500 = block;
   block->owner = (Object)__58821340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58771500;

   return block;
};

Value make__51802280() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51802240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51802080() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51802060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51801560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51801540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51801500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51801480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51801360() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51801340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_841_68562140;

SignalI base_68637660_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makebase_68637660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_68637660_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func0_58_841_68562140;
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

SignalI next__data_68882240_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makenext__data_68882240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_68882240_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func0_58_841_68562140;
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

SignalI address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeaddress_68882160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func0_58_841_68562140;
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

SignalI remaining_47996120_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeremaining_47996120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47996120_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func0_58_841_68562140;
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

SystemI my__lut_68338740;

SystemI makemy__lut_68338740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_68338740 = systemI;
   systemI->owner = (Object)func0_58_841_68562140;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8430_68029360;

   return systemI;
};

SystemI my__interpolator_56885960;

SystemI makemy__interpolator_56885960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_56885960 = systemI;
   systemI->owner = (Object)func0_58_841_68562140;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8430_55682840;

   return systemI;
};

Behavior __58793760;

Behavior make__58793760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58793760 = behavior;
   behavior->owner = (Object)func0_58_841_68562140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__58770780();

   return behavior;
}

Behavior __58793200;

Behavior make__58793200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58793200 = behavior;
   behavior->owner = (Object)func0_58_841_68562140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__58793680();

   return behavior;
}

Behavior __58791860;

Behavior make__58791860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58791860 = behavior;
   behavior->owner = (Object)func0_58_841_68562140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__58793120();

   return behavior;
}

Behavior __58822520;

Behavior make__58822520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58822520 = behavior;
   behavior->owner = (Object)func0_58_841_68562140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[address_68882160_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47996120_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   remaining_47996120_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   remaining_47996120_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(remaining_47996120_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,remaining_47996120_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
remaining_47996120_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[remaining_47996120_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_68637660_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   base_68637660_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   base_68637660_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(base_68637660_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,base_68637660_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
base_68637660_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[base_68637660_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_68882240_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   next__data_68882240_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   next__data_68882240_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(next__data_68882240_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,next__data_68882240_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
next__data_68882240_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[next__data_68882240_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_56886320_my__interpolator_58_8430_55682840_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   interpolated__value_56886320_my__interpolator_58_8430_55682840_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   interpolated__value_56886320_my__interpolator_58_8430_55682840_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(interpolated__value_56886320_my__interpolator_58_8430_55682840_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,interpolated__value_56886320_my__interpolator_58_8430_55682840_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
interpolated__value_56886320_my__interpolator_58_8430_55682840_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[interpolated__value_56886320_my__interpolator_58_8430_55682840_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__58771780();

   return behavior;
}

Behavior __58821340;

Behavior make__58821340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58821340 = behavior;
   behavior->owner = (Object)func0_58_841_68562140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_68166860_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   base_68166860_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   base_68166860_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(base_68166860_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,base_68166860_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
base_68166860_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[base_68166860_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_68338880_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   next__data_68338880_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   next__data_68338880_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(next__data_68338880_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,next__data_68338880_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
next__data_68338880_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[next__data_68338880_my__lut_58_8430_68029360_func0_58_841_68562140_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__58771500();

   return behavior;
}

Scope makefunc0_58_841_68562140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_841_68562140 = scope;
   scope->owner = (Object)func0_58_8410_65446500;
   scope->name = "func0:T1";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_68338740();
   scope->systemIs[1] = makemy__interpolator_56885960();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_68637660();
   scope->inners[1] = makenext__data_68882240();
   scope->inners[2] = makeaddress_68882160();
   scope->inners[3] = makeremaining_47996120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58793760();
   scope->behaviors[1] = make__58793200();
   scope->behaviors[2] = make__58791860();
   scope->behaviors[3] = make__58822520();
   scope->behaviors[4] = make__58821340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8410_65446500() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8410_65446500 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_65621520();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_65816500();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_841_68562140();

   return systemT;
}