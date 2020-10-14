#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_51323140;

SignalI z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makez__value_51463020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func0_58_841_51323140;
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

SignalI a_51671320_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makea_51671320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_51671320_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func0_58_841_51323140;
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

Block __60025860;

void code__60025860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            first = value2integer(make__60128080());
            last = value2integer(make__60128060());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__60025860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60025860 = block;
   block->owner = (Object)__60025600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60025860;

   return block;
};

Block __60025560;

void code__60025560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640,value2integer(make__60127920()),value2integer(make__60127900())));
      set_value_pos(pool_state);
   }
}

Block make__60025560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60025560 = block;
   block->owner = (Object)__60025280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60025560;

   return block;
};

Block __60025220;

void code__60025220() {
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
            src0 = make__60127440();
            src1 = make__60127420();
            src2 = make__60127400();
            src3 = make__60127380();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            first = value2integer(make__60127280());
            last = value2integer(make__60127260());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_49038740_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__60025220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60025220 = block;
   block->owner = (Object)__60024580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60025220;

   return block;
};

Block __60026340;

void code__60026340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_49038740_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,remaining_51641920_my__interpolator_58_842_51450160_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48784620_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,base_51927540_my__interpolator_58_842_51450160_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48916360_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,next__data_52212360_my__interpolator_58_842_51450160_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_52326840_my__interpolator_58_842_51450160_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,a_51671320_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__60026340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60026340 = block;
   block->owner = (Object)__60108240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60026340;

   return block;
};

Block __60026160;

void code__60026160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49305340_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,base_48784620_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49493120_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,next__data_48916360_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__60026160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60026160 = block;
   block->owner = (Object)__60108040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60026160;

   return block;
};

Value make__60128080() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60128060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60127920() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60127900() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60127440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60127420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60127400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60127380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60127280() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60127260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_47195480;

SignalI base_48784620_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makebase_48784620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48784620_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func0_58_84_47195480;
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

SignalI next__data_48916360_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makenext__data_48916360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48916360_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func0_58_84_47195480;
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

SignalI address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeaddress_48916180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func0_58_84_47195480;
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

SignalI remaining_49038740_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeremaining_49038740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_49038740_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func0_58_84_47195480;
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

SystemI my__lut_49492900;

SystemI makemy__lut_49492900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49492900 = systemI;
   systemI->owner = (Object)func0_58_84_47195480;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_49077220;

   return systemI;
};

SystemI my__interpolator_52326240;

SystemI makemy__interpolator_52326240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_52326240 = systemI;
   systemI->owner = (Object)func0_58_84_47195480;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_51450160;

   return systemI;
};

Behavior __60025600;

Behavior make__60025600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60025600 = behavior;
   behavior->owner = (Object)func0_58_84_47195480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__60025860();

   return behavior;
}

Behavior __60025280;

Behavior make__60025280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60025280 = behavior;
   behavior->owner = (Object)func0_58_84_47195480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__60025560();

   return behavior;
}

Behavior __60024580;

Behavior make__60024580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60024580 = behavior;
   behavior->owner = (Object)func0_58_84_47195480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__60025220();

   return behavior;
}

Behavior __60108240;

Behavior make__60108240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60108240 = behavior;
   behavior->owner = (Object)func0_58_84_47195480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[address_48916180_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_49038740_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   remaining_49038740_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   remaining_49038740_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(remaining_49038740_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,remaining_49038740_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
remaining_49038740_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[remaining_49038740_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_48784620_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   base_48784620_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   base_48784620_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(base_48784620_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,base_48784620_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
base_48784620_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[base_48784620_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_48916360_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   next__data_48916360_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   next__data_48916360_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(next__data_48916360_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,next__data_48916360_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
next__data_48916360_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[next__data_48916360_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_52326840_my__interpolator_58_842_51450160_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   interpolated__value_52326840_my__interpolator_58_842_51450160_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   interpolated__value_52326840_my__interpolator_58_842_51450160_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(interpolated__value_52326840_my__interpolator_58_842_51450160_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,interpolated__value_52326840_my__interpolator_58_842_51450160_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
interpolated__value_52326840_my__interpolator_58_842_51450160_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[interpolated__value_52326840_my__interpolator_58_842_51450160_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__60026340();

   return behavior;
}

Behavior __60108040;

Behavior make__60108040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60108040 = behavior;
   behavior->owner = (Object)func0_58_84_47195480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49305340_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   base_49305340_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   base_49305340_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(base_49305340_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,base_49305340_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
base_49305340_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[base_49305340_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49493120_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   next__data_49493120_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   next__data_49493120_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(next__data_49493120_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,next__data_49493120_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
next__data_49493120_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[next__data_49493120_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__60026160();

   return behavior;
}

Scope makefunc0_58_84_47195480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_47195480 = scope;
   scope->owner = (Object)func0_58_841_51323140;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49492900();
   scope->systemIs[1] = makemy__interpolator_52326240();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_48784620();
   scope->inners[1] = makenext__data_48916360();
   scope->inners[2] = makeaddress_48916180();
   scope->inners[3] = makeremaining_49038740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60025600();
   scope->behaviors[1] = make__60025280();
   scope->behaviors[2] = make__60024580();
   scope->behaviors[3] = make__60108240();
   scope->behaviors[4] = make__60108040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_51323140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_51323140 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51463020();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_51671320();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_47195480();

   return systemT;
}