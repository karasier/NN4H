#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_58023740;

SignalI z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makez__value_58185140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func0_58_8400_58023740;
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

SignalI a_58266160_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makea_58266160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_58266160_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func0_58_8400_58023740;
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

Block __52259540;

void code__52259540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
            first = value2integer(make__52298620());
            last = value2integer(make__52298600());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52259540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52259540 = block;
   block->owner = (Object)__52258520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52259540;

   return block;
};

Block __52258340;

void code__52258340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680,value2integer(make__52298420()),value2integer(make__52298400())));
      set_value_pos(pool_state);
   }
}

Block make__52258340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52258340 = block;
   block->owner = (Object)__52257820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52258340;

   return block;
};

Block __52257780;

void code__52257780() {
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
            src0 = make__52337320();
            src1 = make__52337280();
            src2 = make__52337260();
            src3 = make__52337200();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
            first = value2integer(make__52337020());
            last = value2integer(make__52336980());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_58297800_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52257780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52257780 = block;
   block->owner = (Object)__52281280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52257780;

   return block;
};

Block __52259860;

void code__52259860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,address_59118980_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_58297800_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,remaining_42410600_my__interpolator_58_8410_60572500_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58135400_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,base_47560240_my__interpolator_58_8410_60572500_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_58236720_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,next__data_48617760_my__interpolator_58_8410_60572500_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49176840_my__interpolator_58_8410_60572500_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,a_58266160_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52259860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52259860 = block;
   block->owner = (Object)__52284300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52259860;

   return block;
};

Block __52259780;

void code__52259780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59285100_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,base_58135400_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59377500_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,next__data_58236720_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52259780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52259780 = block;
   block->owner = (Object)__52283500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52259780;

   return block;
};

Value make__52298620() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52298600() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52298420() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52298400() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52337320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52337280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52337260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52337200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52337020() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52336980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_57969740;

SignalI base_58135400_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makebase_58135400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_58135400_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func0_58_840_57969740;
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

SignalI next__data_58236720_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makenext__data_58236720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_58236720_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func0_58_840_57969740;
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

SignalI address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeaddress_58236640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func0_58_840_57969740;
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

SignalI remaining_58297800_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeremaining_58297800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_58297800_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func0_58_840_57969740;
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

SystemI my__lut_59377340;

SystemI makemy__lut_59377340() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_59377340 = systemI;
   systemI->owner = (Object)func0_58_840_57969740;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_59121080;

   return systemI;
};

SystemI my__interpolator_49200540;

SystemI makemy__interpolator_49200540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49200540 = systemI;
   systemI->owner = (Object)func0_58_840_57969740;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_60572500;

   return systemI;
};

Behavior __52258520;

Behavior make__52258520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52258520 = behavior;
   behavior->owner = (Object)func0_58_840_57969740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__52259540();

   return behavior;
}

Behavior __52257820;

Behavior make__52257820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52257820 = behavior;
   behavior->owner = (Object)func0_58_840_57969740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__52258340();

   return behavior;
}

Behavior __52281280;

Behavior make__52281280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52281280 = behavior;
   behavior->owner = (Object)func0_58_840_57969740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__52257780();

   return behavior;
}

Behavior __52284300;

Behavior make__52284300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52284300 = behavior;
   behavior->owner = (Object)func0_58_840_57969740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[address_58236640_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_58297800_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   remaining_58297800_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   remaining_58297800_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(remaining_58297800_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,remaining_58297800_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
remaining_58297800_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[remaining_58297800_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_58135400_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   base_58135400_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   base_58135400_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(base_58135400_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,base_58135400_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
base_58135400_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[base_58135400_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_58236720_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   next__data_58236720_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   next__data_58236720_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(next__data_58236720_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,next__data_58236720_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
next__data_58236720_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[next__data_58236720_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49176840_my__interpolator_58_8410_60572500_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   interpolated__value_49176840_my__interpolator_58_8410_60572500_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   interpolated__value_49176840_my__interpolator_58_8410_60572500_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(interpolated__value_49176840_my__interpolator_58_8410_60572500_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,interpolated__value_49176840_my__interpolator_58_8410_60572500_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
interpolated__value_49176840_my__interpolator_58_8410_60572500_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[interpolated__value_49176840_my__interpolator_58_8410_60572500_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__52259860();

   return behavior;
}

Behavior __52283500;

Behavior make__52283500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52283500 = behavior;
   behavior->owner = (Object)func0_58_840_57969740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_59285100_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   base_59285100_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   base_59285100_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(base_59285100_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,base_59285100_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
base_59285100_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[base_59285100_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_59377500_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   next__data_59377500_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   next__data_59377500_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(next__data_59377500_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,next__data_59377500_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
next__data_59377500_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[next__data_59377500_my__lut_58_8410_59121080_func0_58_840_57969740_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__52259780();

   return behavior;
}

Scope makefunc0_58_840_57969740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_57969740 = scope;
   scope->owner = (Object)func0_58_8400_58023740;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_59377340();
   scope->systemIs[1] = makemy__interpolator_49200540();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_58135400();
   scope->inners[1] = makenext__data_58236720();
   scope->inners[2] = makeaddress_58236640();
   scope->inners[3] = makeremaining_58297800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52258520();
   scope->behaviors[1] = make__52257820();
   scope->behaviors[2] = make__52281280();
   scope->behaviors[3] = make__52284300();
   scope->behaviors[4] = make__52283500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_58023740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_58023740 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_58185140();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_58266160();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_57969740();

   return systemT;
}