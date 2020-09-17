#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_54225300;

SignalI z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makez__value_47185660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func1_58_840_54225300;
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

SignalI a_47661440_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makea_47661440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47661440_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func1_58_840_54225300;
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

Block __60178820;

void code__60178820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
            first = value2integer(make__60249740());
            last = value2integer(make__60249720());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60178820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60178820 = block;
   block->owner = (Object)__60178560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60178820;

   return block;
};

Block __60178500;

void code__60178500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340,value2integer(make__60249580()),value2integer(make__60249560())));
      set_value_pos(pool_state);
   }
}

Block make__60178500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60178500 = block;
   block->owner = (Object)__60235460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60178500;

   return block;
};

Block __60235420;

void code__60235420() {
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
            src0 = make__60249080();
            src1 = make__60249060();
            src2 = make__60249020();
            src3 = make__60249000();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
            first = value2integer(make__60248900());
            last = value2integer(make__60248840());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_52739020_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60235420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60235420 = block;
   block->owner = (Object)__60234960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60235420;

   return block;
};

Block __60179040;

void code__60179040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,address_52540940_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_52739020_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,remaining_47776760_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52461140_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,base_48910780_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52554520_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,next__data_49202480_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49483580_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,a_47661440_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60179040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60179040 = block;
   block->owner = (Object)__60229440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60179040;

   return block;
};

Block __60178980;

void code__60178980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52727840_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,base_52461140_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52818040_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,next__data_52554520_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60178980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60178980 = block;
   block->owner = (Object)__60229280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60178980;

   return block;
};

Value make__60249740() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60249720() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60249580() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60249560() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60249080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60249060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60249020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60249000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60248900() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60248840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_52240940;

SignalI base_52461140_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makebase_52461140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52461140_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func1_58_84_52240940;
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

SignalI next__data_52554520_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makenext__data_52554520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52554520_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func1_58_84_52240940;
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

SignalI address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeaddress_52554400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func1_58_84_52240940;
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

SignalI remaining_52739020_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeremaining_52739020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_52739020_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func1_58_84_52240940;
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

SystemI my__lut_52817900;

SystemI makemy__lut_52817900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52817900 = systemI;
   systemI->owner = (Object)func1_58_84_52240940;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_52519180;

   return systemI;
};

SystemI my__interpolator_49483260;

SystemI makemy__interpolator_49483260() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49483260 = systemI;
   systemI->owner = (Object)func1_58_84_52240940;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_47345060;

   return systemI;
};

Behavior __60178560;

Behavior make__60178560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60178560 = behavior;
   behavior->owner = (Object)func1_58_84_52240940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60178820();

   return behavior;
}

Behavior __60235460;

Behavior make__60235460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60235460 = behavior;
   behavior->owner = (Object)func1_58_84_52240940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60178500();

   return behavior;
}

Behavior __60234960;

Behavior make__60234960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60234960 = behavior;
   behavior->owner = (Object)func1_58_84_52240940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60235420();

   return behavior;
}

Behavior __60229440;

Behavior make__60229440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60229440 = behavior;
   behavior->owner = (Object)func1_58_84_52240940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[address_52554400_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_52739020_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   remaining_52739020_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   remaining_52739020_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(remaining_52739020_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,remaining_52739020_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
remaining_52739020_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[remaining_52739020_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_52461140_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   base_52461140_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   base_52461140_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(base_52461140_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,base_52461140_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
base_52461140_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[base_52461140_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_52554520_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   next__data_52554520_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   next__data_52554520_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(next__data_52554520_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,next__data_52554520_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
next__data_52554520_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[next__data_52554520_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49483580_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   interpolated__value_49483580_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   interpolated__value_49483580_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(interpolated__value_49483580_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,interpolated__value_49483580_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
interpolated__value_49483580_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[interpolated__value_49483580_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60179040();

   return behavior;
}

Behavior __60229280;

Behavior make__60229280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60229280 = behavior;
   behavior->owner = (Object)func1_58_84_52240940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52727840_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   base_52727840_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   base_52727840_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(base_52727840_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,base_52727840_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
base_52727840_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[base_52727840_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52818040_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   next__data_52818040_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   next__data_52818040_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(next__data_52818040_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,next__data_52818040_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
next__data_52818040_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[next__data_52818040_my__lut_58_8400_52519180_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60178980();

   return behavior;
}

Scope makefunc1_58_84_52240940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_52240940 = scope;
   scope->owner = (Object)func1_58_840_54225300;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52817900();
   scope->systemIs[1] = makemy__interpolator_49483260();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_52461140();
   scope->inners[1] = makenext__data_52554520();
   scope->inners[2] = makeaddress_52554400();
   scope->inners[3] = makeremaining_52739020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60178560();
   scope->behaviors[1] = make__60235460();
   scope->behaviors[2] = make__60234960();
   scope->behaviors[3] = make__60229440();
   scope->behaviors[4] = make__60229280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_54225300() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_54225300 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47185660();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47661440();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_52240940();

   return systemT;
}