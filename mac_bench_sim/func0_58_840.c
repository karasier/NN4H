#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_51042400;

SignalI z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makez__value_51173400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)func0_58_840_51042400;
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

SignalI a_51301100_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makea_51301100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_51301100_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)func0_58_840_51042400;
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

Block __50750000;

void code__50750000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
            first = value2integer(make__50793860());
            last = value2integer(make__50793840());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50750000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50750000 = block;
   block->owner = (Object)__50749740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50750000;

   return block;
};

Block __50749680;

void code__50749680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720,value2integer(make__50793560()),value2integer(make__50793540())));
      set_value_pos(pool_state);
   }
}

Block make__50749680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50749680 = block;
   block->owner = (Object)__50782040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50749680;

   return block;
};

Block __50781980;

void code__50781980() {
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
            src0 = make__50792760();
            src1 = make__50792740();
            src2 = make__50792720();
            src3 = make__50792700();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
            first = value2integer(make__50792600());
            last = value2integer(make__50792580());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47440380_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50781980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50781980 = block;
   block->owner = (Object)__50781400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50781980;

   return block;
};

Block __50750360;

void code__50750360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47440380_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,remaining_51169480_my__interpolator_58_840_51092000_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47195760_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,base_51298960_my__interpolator_58_840_51092000_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47328440_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,next__data_51567340_my__interpolator_58_840_51092000_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_45156340_my__interpolator_58_840_51092000_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,a_51301100_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50750360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50750360 = block;
   block->owner = (Object)__50774220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50750360;

   return block;
};

Block __50750260;

void code__50750260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48519260_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,base_47195760_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49696880_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,next__data_47328440_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50750260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50750260 = block;
   block->owner = (Object)__50798540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50750260;

   return block;
};

Value make__50793860() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50793840() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50793560() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50793540() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50792760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50792740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50792720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50792700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50792600() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50792580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_47008760;

SignalI base_47195760_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makebase_47195760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47195760_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)func0_58_84_47008760;
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

SignalI next__data_47328440_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makenext__data_47328440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47328440_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)func0_58_84_47008760;
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

SignalI address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeaddress_47328340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)func0_58_84_47008760;
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

SignalI remaining_47440380_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeremaining_47440380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47440380_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)func0_58_84_47008760;
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

SystemI my__lut_49696640;

SystemI makemy__lut_49696640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49696640 = systemI;
   systemI->owner = (Object)func0_58_84_47008760;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_840_47703280;

   return systemI;
};

SystemI my__interpolator_45155920;

SystemI makemy__interpolator_45155920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_45155920 = systemI;
   systemI->owner = (Object)func0_58_84_47008760;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_840_51092000;

   return systemI;
};

Behavior __50749740;

Behavior make__50749740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50749740 = behavior;
   behavior->owner = (Object)func0_58_84_47008760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50750000();

   return behavior;
}

Behavior __50782040;

Behavior make__50782040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50782040 = behavior;
   behavior->owner = (Object)func0_58_84_47008760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50749680();

   return behavior;
}

Behavior __50781400;

Behavior make__50781400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50781400 = behavior;
   behavior->owner = (Object)func0_58_84_47008760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50781980();

   return behavior;
}

Behavior __50774220;

Behavior make__50774220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50774220 = behavior;
   behavior->owner = (Object)func0_58_84_47008760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[address_47328340_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47440380_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   remaining_47440380_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   remaining_47440380_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(remaining_47440380_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,remaining_47440380_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
remaining_47440380_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[remaining_47440380_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47195760_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   base_47195760_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   base_47195760_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(base_47195760_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,base_47195760_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
base_47195760_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[base_47195760_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47328440_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   next__data_47328440_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   next__data_47328440_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(next__data_47328440_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,next__data_47328440_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
next__data_47328440_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[next__data_47328440_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_45156340_my__interpolator_58_840_51092000_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   interpolated__value_45156340_my__interpolator_58_840_51092000_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   interpolated__value_45156340_my__interpolator_58_840_51092000_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(interpolated__value_45156340_my__interpolator_58_840_51092000_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,interpolated__value_45156340_my__interpolator_58_840_51092000_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
interpolated__value_45156340_my__interpolator_58_840_51092000_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[interpolated__value_45156340_my__interpolator_58_840_51092000_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50750360();

   return behavior;
}

Behavior __50798540;

Behavior make__50798540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50798540 = behavior;
   behavior->owner = (Object)func0_58_84_47008760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_48519260_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   base_48519260_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   base_48519260_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(base_48519260_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,base_48519260_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
base_48519260_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[base_48519260_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49696880_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   next__data_49696880_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   next__data_49696880_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(next__data_49696880_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,next__data_49696880_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
next__data_49696880_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[next__data_49696880_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50750260();

   return behavior;
}

Scope makefunc0_58_84_47008760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_47008760 = scope;
   scope->owner = (Object)func0_58_840_51042400;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49696640();
   scope->systemIs[1] = makemy__interpolator_45155920();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47195760();
   scope->inners[1] = makenext__data_47328440();
   scope->inners[2] = makeaddress_47328340();
   scope->inners[3] = makeremaining_47440380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50749740();
   scope->behaviors[1] = make__50782040();
   scope->behaviors[2] = make__50781400();
   scope->behaviors[3] = make__50774220();
   scope->behaviors[4] = make__50798540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_51042400() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_51042400 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51173400();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_51301100();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_47008760();

   return systemT;
}