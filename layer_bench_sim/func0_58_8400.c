#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_52622700;

SignalI z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makez__value_52984000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)func0_58_8400_52622700;
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

SignalI a_53263580_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makea_53263580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_53263580_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)func0_58_8400_52622700;
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

Block __60529580;

void code__60529580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
            first = value2integer(make__60559860());
            last = value2integer(make__60559840());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60529580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60529580 = block;
   block->owner = (Object)__60529220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60529580;

   return block;
};

Block __60529120;

void code__60529120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220,value2integer(make__60559680()),value2integer(make__60559640())));
      set_value_pos(pool_state);
   }
}

Block make__60529120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60529120 = block;
   block->owner = (Object)__60528820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60529120;

   return block;
};

Block __60528780;

void code__60528780() {
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
            src0 = make__60559040();
            src1 = make__60559020();
            src2 = make__60559000();
            src3 = make__60558980();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
            first = value2integer(make__60558880());
            last = value2integer(make__60558860());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_59150900_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60528780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60528780 = block;
   block->owner = (Object)__60528320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60528780;

   return block;
};

Block __60529800;

void code__60529800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,address_58922780_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_59150900_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,remaining_60693120_my__interpolator_58_8410_60584720_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58706020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,base_60991940_my__interpolator_58_8410_60584720_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_58908020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,next__data_61085900_my__interpolator_58_8410_60584720_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_61163480_my__interpolator_58_8410_60584720_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,a_53263580_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60529800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60529800 = block;
   block->owner = (Object)__60523020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60529800;

   return block;
};

Block __60529740;

void code__60529740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59180060_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,base_58706020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59454180_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,next__data_58908020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60529740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60529740 = block;
   block->owner = (Object)__60522760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60529740;

   return block;
};

Value make__60559860() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60559840() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60559680() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60559640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60559040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60559020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60559000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60558980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60558880() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60558860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_58627200;

SignalI base_58706020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makebase_58706020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_58706020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)func0_58_840_58627200;
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

SignalI next__data_58908020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makenext__data_58908020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_58908020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)func0_58_840_58627200;
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

SignalI address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeaddress_58907940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)func0_58_840_58627200;
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

SignalI remaining_59150900_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeremaining_59150900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_59150900_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)func0_58_840_58627200;
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

SystemI my__lut_59454040;

SystemI makemy__lut_59454040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_59454040 = systemI;
   systemI->owner = (Object)func0_58_840_58627200;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_58924780;

   return systemI;
};

SystemI my__interpolator_61163340;

SystemI makemy__interpolator_61163340() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_61163340 = systemI;
   systemI->owner = (Object)func0_58_840_58627200;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_60584720;

   return systemI;
};

Behavior __60529220;

Behavior make__60529220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60529220 = behavior;
   behavior->owner = (Object)func0_58_840_58627200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60529580();

   return behavior;
}

Behavior __60528820;

Behavior make__60528820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60528820 = behavior;
   behavior->owner = (Object)func0_58_840_58627200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60529120();

   return behavior;
}

Behavior __60528320;

Behavior make__60528320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60528320 = behavior;
   behavior->owner = (Object)func0_58_840_58627200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60528780();

   return behavior;
}

Behavior __60523020;

Behavior make__60523020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60523020 = behavior;
   behavior->owner = (Object)func0_58_840_58627200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[address_58907940_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_59150900_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   remaining_59150900_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   remaining_59150900_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(remaining_59150900_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,remaining_59150900_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
remaining_59150900_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[remaining_59150900_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_58706020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   base_58706020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   base_58706020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(base_58706020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,base_58706020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
base_58706020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[base_58706020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_58908020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   next__data_58908020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   next__data_58908020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(next__data_58908020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,next__data_58908020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
next__data_58908020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[next__data_58908020_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_61163480_my__interpolator_58_8410_60584720_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   interpolated__value_61163480_my__interpolator_58_8410_60584720_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   interpolated__value_61163480_my__interpolator_58_8410_60584720_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(interpolated__value_61163480_my__interpolator_58_8410_60584720_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,interpolated__value_61163480_my__interpolator_58_8410_60584720_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
interpolated__value_61163480_my__interpolator_58_8410_60584720_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[interpolated__value_61163480_my__interpolator_58_8410_60584720_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60529800();

   return behavior;
}

Behavior __60522760;

Behavior make__60522760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60522760 = behavior;
   behavior->owner = (Object)func0_58_840_58627200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_59180060_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   base_59180060_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   base_59180060_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(base_59180060_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,base_59180060_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
base_59180060_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[base_59180060_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_59454180_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   next__data_59454180_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   next__data_59454180_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(next__data_59454180_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,next__data_59454180_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
next__data_59454180_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[next__data_59454180_my__lut_58_8410_58924780_func0_58_840_58627200_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60529740();

   return behavior;
}

Scope makefunc0_58_840_58627200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_58627200 = scope;
   scope->owner = (Object)func0_58_8400_52622700;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_59454040();
   scope->systemIs[1] = makemy__interpolator_61163340();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_58706020();
   scope->inners[1] = makenext__data_58908020();
   scope->inners[2] = makeaddress_58907940();
   scope->inners[3] = makeremaining_59150900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60529220();
   scope->behaviors[1] = make__60528820();
   scope->behaviors[2] = make__60528320();
   scope->behaviors[3] = make__60523020();
   scope->behaviors[4] = make__60522760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_52622700() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_52622700 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52984000();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_53263580();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_58627200();

   return systemT;
}