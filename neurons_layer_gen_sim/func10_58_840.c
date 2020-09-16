#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func10_58_840_61877160;

SignalI z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makez__value_62059220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func10_58_840_61877160;
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

SignalI a_62103940_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makea_62103940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_62103940_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func10_58_840_61877160;
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

Block __59120160;

void code__59120160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
            first = value2integer(make__59134160());
            last = value2integer(make__59134140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__59120160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59120160 = block;
   block->owner = (Object)__59119900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59120160;

   return block;
};

Block __59119860;

void code__59119860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240,value2integer(make__59133980()),value2integer(make__59133940())));
      set_value_pos(pool_state);
   }
}

Block make__59119860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59119860 = block;
   block->owner = (Object)__59119600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59119860;

   return block;
};

Block __59119560;

void code__59119560() {
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
            src0 = make__59133440();
            src1 = make__59133400();
            src2 = make__59133380();
            src3 = make__59133360();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
            first = value2integer(make__59133240());
            last = value2integer(make__59133220());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53946680_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__59119560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59119560 = block;
   block->owner = (Object)__59119060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59119560;

   return block;
};

Block __59120440;

void code__59120440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,address_53405700_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53946680_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,remaining_59503200_my__interpolator_58_8410_59354000_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53224220_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,base_59769220_my__interpolator_58_8410_59354000_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53587140_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,next__data_59855080_my__interpolator_58_8410_59354000_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_59973560_my__interpolator_58_8410_59354000_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,a_62103940_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__59120440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59120440 = block;
   block->owner = (Object)__59113640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59120440;

   return block;
};

Block __59120380;

void code__59120380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53659240_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,base_53224220_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54296380_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,next__data_53587140_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__59120380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59120380 = block;
   block->owner = (Object)__59113480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59120380;

   return block;
};

Value make__59134160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59134140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59133980() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59133940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59133440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59133400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59133380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59133360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59133240() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59133220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func10_58_84_53005440;

SignalI base_53224220_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makebase_53224220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53224220_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func10_58_84_53005440;
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

SignalI next__data_53587140_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makenext__data_53587140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53587140_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func10_58_84_53005440;
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

SignalI address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeaddress_53587040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func10_58_84_53005440;
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

SignalI remaining_53946680_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeremaining_53946680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53946680_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)func10_58_84_53005440;
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

SystemI my__lut_54296220;

SystemI makemy__lut_54296220() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_54296220 = systemI;
   systemI->owner = (Object)func10_58_84_53005440;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_53409620;

   return systemI;
};

SystemI my__interpolator_59973420;

SystemI makemy__interpolator_59973420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_59973420 = systemI;
   systemI->owner = (Object)func10_58_84_53005440;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_59354000;

   return systemI;
};

Behavior __59119900;

Behavior make__59119900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59119900 = behavior;
   behavior->owner = (Object)func10_58_84_53005440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__59120160();

   return behavior;
}

Behavior __59119600;

Behavior make__59119600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59119600 = behavior;
   behavior->owner = (Object)func10_58_84_53005440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__59119860();

   return behavior;
}

Behavior __59119060;

Behavior make__59119060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59119060 = behavior;
   behavior->owner = (Object)func10_58_84_53005440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__59119560();

   return behavior;
}

Behavior __59113640;

Behavior make__59113640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59113640 = behavior;
   behavior->owner = (Object)func10_58_84_53005440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[address_53587040_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_53946680_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   remaining_53946680_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   remaining_53946680_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(remaining_53946680_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,remaining_53946680_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
remaining_53946680_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[remaining_53946680_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53224220_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   base_53224220_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   base_53224220_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(base_53224220_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,base_53224220_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
base_53224220_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[base_53224220_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53587140_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   next__data_53587140_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   next__data_53587140_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(next__data_53587140_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,next__data_53587140_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
next__data_53587140_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[next__data_53587140_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_59973560_my__interpolator_58_8410_59354000_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   interpolated__value_59973560_my__interpolator_58_8410_59354000_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   interpolated__value_59973560_my__interpolator_58_8410_59354000_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(interpolated__value_59973560_my__interpolator_58_8410_59354000_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,interpolated__value_59973560_my__interpolator_58_8410_59354000_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
interpolated__value_59973560_my__interpolator_58_8410_59354000_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[interpolated__value_59973560_my__interpolator_58_8410_59354000_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__59120440();

   return behavior;
}

Behavior __59113480;

Behavior make__59113480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59113480 = behavior;
   behavior->owner = (Object)func10_58_84_53005440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_53659240_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   base_53659240_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   base_53659240_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(base_53659240_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,base_53659240_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
base_53659240_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[base_53659240_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_54296380_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   next__data_54296380_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   next__data_54296380_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(next__data_54296380_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,next__data_54296380_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
next__data_54296380_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[next__data_54296380_my__lut_58_8410_53409620_func10_58_84_53005440_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__59120380();

   return behavior;
}

Scope makefunc10_58_84_53005440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func10_58_84_53005440 = scope;
   scope->owner = (Object)func10_58_840_61877160;
   scope->name = "func10:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_54296220();
   scope->systemIs[1] = makemy__interpolator_59973420();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53224220();
   scope->inners[1] = makenext__data_53587140();
   scope->inners[2] = makeaddress_53587040();
   scope->inners[3] = makeremaining_53946680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59119900();
   scope->behaviors[1] = make__59119600();
   scope->behaviors[2] = make__59119060();
   scope->behaviors[3] = make__59113640();
   scope->behaviors[4] = make__59113480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc10_58_840_61877160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func10_58_840_61877160 = systemT;
systemT->owner = NULL;
   systemT->name = "func10:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_62059220();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_62103940();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc10_58_84_53005440();

   return systemT;
}