#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_51446360;

SignalI z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makez__value_51926040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func0_58_8400_51446360;
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

SignalI a_52306720_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makea_52306720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52306720_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func0_58_8400_51446360;
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

Block __49240040;

void code__49240040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            first = value2integer(make__49349340());
            last = value2integer(make__49349200());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49240040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49240040 = block;
   block->owner = (Object)__49238540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49240040;

   return block;
};

Block __49238420;

void code__49238420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640,value2integer(make__49369420()),value2integer(make__49369300())));
      set_value_pos(pool_state);
   }
}

Block make__49238420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49238420 = block;
   block->owner = (Object)__49238040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49238420;

   return block;
};

Block __49238000;

void code__49238000() {
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
            src0 = make__49365760();
            src1 = make__49365620();
            src2 = make__49414020();
            src3 = make__49413900();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            first = value2integer(make__49412780());
            last = value2integer(make__49412720());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_51616880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49238000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49238000 = block;
   block->owner = (Object)__49234540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49238000;

   return block;
};

Block __49218620;

void code__49218620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,address_57214220_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_51616880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,remaining_58604000_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51084740_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,base_58685080_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51343660_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,next__data_58873660_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_58947920_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,a_52306720_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49218620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49218620 = block;
   block->owner = (Object)__49320420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49218620;

   return block;
};

Block __49217580;

void code__49217580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_57318140_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,base_51084740_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57400680_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,next__data_51343660_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49217580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49217580 = block;
   block->owner = (Object)__49319840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49217580;

   return block;
};

Value make__49349340() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49349200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49369420() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49369300() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49365760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49365620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49414020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49413900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49412780() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49412720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_50750460;

SignalI base_51084740_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makebase_51084740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51084740_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func0_58_840_50750460;
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

SignalI next__data_51343660_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makenext__data_51343660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51343660_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func0_58_840_50750460;
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

SignalI address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeaddress_51342880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func0_58_840_50750460;
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

SignalI remaining_51616880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeremaining_51616880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51616880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func0_58_840_50750460;
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

SystemI my__lut_57400520;

SystemI makemy__lut_57400520() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_57400520 = systemI;
   systemI->owner = (Object)func0_58_840_50750460;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_57216420;

   return systemI;
};

SystemI my__interpolator_58947700;

SystemI makemy__interpolator_58947700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_58947700 = systemI;
   systemI->owner = (Object)func0_58_840_50750460;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_58377140;

   return systemI;
};

Behavior __49238540;

Behavior make__49238540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49238540 = behavior;
   behavior->owner = (Object)func0_58_840_50750460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__49240040();

   return behavior;
}

Behavior __49238040;

Behavior make__49238040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49238040 = behavior;
   behavior->owner = (Object)func0_58_840_50750460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__49238420();

   return behavior;
}

Behavior __49234540;

Behavior make__49234540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49234540 = behavior;
   behavior->owner = (Object)func0_58_840_50750460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[z__value_51926040_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__49238000();

   return behavior;
}

Behavior __49320420;

Behavior make__49320420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49320420 = behavior;
   behavior->owner = (Object)func0_58_840_50750460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[address_51342880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_51616880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   remaining_51616880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   remaining_51616880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(remaining_51616880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,remaining_51616880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
remaining_51616880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[remaining_51616880_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51084740_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   base_51084740_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   base_51084740_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(base_51084740_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,base_51084740_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
base_51084740_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[base_51084740_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_51343660_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   next__data_51343660_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   next__data_51343660_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(next__data_51343660_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,next__data_51343660_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
next__data_51343660_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[next__data_51343660_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_58947920_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   interpolated__value_58947920_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   interpolated__value_58947920_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(interpolated__value_58947920_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,interpolated__value_58947920_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
interpolated__value_58947920_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[interpolated__value_58947920_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__49218620();

   return behavior;
}

Behavior __49319840;

Behavior make__49319840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49319840 = behavior;
   behavior->owner = (Object)func0_58_840_50750460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_57318140_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   base_57318140_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   base_57318140_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(base_57318140_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,base_57318140_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
base_57318140_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[base_57318140_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_57400680_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   next__data_57400680_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   next__data_57400680_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(next__data_57400680_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,next__data_57400680_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
next__data_57400680_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[next__data_57400680_my__lut_58_8410_57216420_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__49217580();

   return behavior;
}

Scope makefunc0_58_840_50750460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_50750460 = scope;
   scope->owner = (Object)func0_58_8400_51446360;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_57400520();
   scope->systemIs[1] = makemy__interpolator_58947700();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51084740();
   scope->inners[1] = makenext__data_51343660();
   scope->inners[2] = makeaddress_51342880();
   scope->inners[3] = makeremaining_51616880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49238540();
   scope->behaviors[1] = make__49238040();
   scope->behaviors[2] = make__49234540();
   scope->behaviors[3] = make__49320420();
   scope->behaviors[4] = make__49319840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_51446360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_51446360 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51926040();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52306720();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_50750460();

   return systemT;
}