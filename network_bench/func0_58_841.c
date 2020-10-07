#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_49169360;

SignalI z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makez__value_49461600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func0_58_841_49169360;
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

SignalI a_49675300_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makea_49675300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49675300_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func0_58_841_49169360;
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

Block __58409440;

void code__58409440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
            first = value2integer(make__58461740());
            last = value2integer(make__58461640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58409440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58409440 = block;
   block->owner = (Object)__58409080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58409440;

   return block;
};

Block __58409020;

void code__58409020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820,value2integer(make__58461440()),value2integer(make__58461420())));
      set_value_pos(pool_state);
   }
}

Block make__58409020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58409020 = block;
   block->owner = (Object)__58449580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58409020;

   return block;
};

Block __58449520;

void code__58449520() {
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
            src0 = make__58460640();
            src1 = make__58460620();
            src2 = make__58460600();
            src3 = make__58460580();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
            first = value2integer(make__58460460());
            last = value2integer(make__58460440());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_50779420_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58449520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58449520 = block;
   block->owner = (Object)__58448960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58449520;

   return block;
};

Block __58409760;

void code__58409760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,address_51184120_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_50779420_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,remaining_49389760_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50834680_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,base_49507260_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50450340_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,next__data_49772740_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50056620_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,a_49675300_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58409760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58409760 = block;
   block->owner = (Object)__58442160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58409760;

   return block;
};

Block __58409680;

void code__58409680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51409280_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,base_50834680_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51577000_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,next__data_50450340_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58409680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58409680 = block;
   block->owner = (Object)__58441980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58409680;

   return block;
};

Value make__58461740() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58461640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58461440() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58461420() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58460640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58460620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58460600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58460580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58460460() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58460440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_49838220;

SignalI base_50834680_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makebase_50834680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50834680_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func0_58_84_49838220;
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

SignalI next__data_50450340_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makenext__data_50450340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50450340_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func0_58_84_49838220;
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

SignalI address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeaddress_50450200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func0_58_84_49838220;
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

SignalI remaining_50779420_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeremaining_50779420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_50779420_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func0_58_84_49838220;
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

SystemI my__lut_51576840;

SystemI makemy__lut_51576840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_51576840 = systemI;
   systemI->owner = (Object)func0_58_84_49838220;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_51187380;

   return systemI;
};

SystemI my__interpolator_50055300;

SystemI makemy__interpolator_50055300() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50055300 = systemI;
   systemI->owner = (Object)func0_58_84_49838220;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_48389360;

   return systemI;
};

Behavior __58409080;

Behavior make__58409080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58409080 = behavior;
   behavior->owner = (Object)func0_58_84_49838220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58409440();

   return behavior;
}

Behavior __58449580;

Behavior make__58449580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58449580 = behavior;
   behavior->owner = (Object)func0_58_84_49838220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58409020();

   return behavior;
}

Behavior __58448960;

Behavior make__58448960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58448960 = behavior;
   behavior->owner = (Object)func0_58_84_49838220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[z__value_49461600_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58449520();

   return behavior;
}

Behavior __58442160;

Behavior make__58442160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58442160 = behavior;
   behavior->owner = (Object)func0_58_84_49838220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[address_50450200_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_50779420_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   remaining_50779420_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   remaining_50779420_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(remaining_50779420_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,remaining_50779420_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
remaining_50779420_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[remaining_50779420_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_50834680_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   base_50834680_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   base_50834680_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(base_50834680_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,base_50834680_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
base_50834680_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[base_50834680_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_50450340_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   next__data_50450340_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   next__data_50450340_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(next__data_50450340_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,next__data_50450340_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
next__data_50450340_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[next__data_50450340_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_50056620_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   interpolated__value_50056620_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   interpolated__value_50056620_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(interpolated__value_50056620_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,interpolated__value_50056620_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
interpolated__value_50056620_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[interpolated__value_50056620_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58409760();

   return behavior;
}

Behavior __58441980;

Behavior make__58441980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58441980 = behavior;
   behavior->owner = (Object)func0_58_84_49838220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51409280_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   base_51409280_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   base_51409280_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(base_51409280_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,base_51409280_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
base_51409280_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[base_51409280_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51577000_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   next__data_51577000_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   next__data_51577000_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(next__data_51577000_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,next__data_51577000_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
next__data_51577000_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[next__data_51577000_my__lut_58_842_51187380_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58409680();

   return behavior;
}

Scope makefunc0_58_84_49838220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_49838220 = scope;
   scope->owner = (Object)func0_58_841_49169360;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_51576840();
   scope->systemIs[1] = makemy__interpolator_50055300();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_50834680();
   scope->inners[1] = makenext__data_50450340();
   scope->inners[2] = makeaddress_50450200();
   scope->inners[3] = makeremaining_50779420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58409080();
   scope->behaviors[1] = make__58449580();
   scope->behaviors[2] = make__58448960();
   scope->behaviors[3] = make__58442160();
   scope->behaviors[4] = make__58441980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_49169360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_49169360 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49461600();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49675300();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_49838220();

   return systemT;
}