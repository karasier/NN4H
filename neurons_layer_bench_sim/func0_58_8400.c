#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_53350780;

SignalI z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makez__value_53813120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func0_58_8400_53350780;
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

SignalI a_54188380_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makea_54188380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_54188380_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func0_58_8400_53350780;
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

Block __61400600;

void code__61400600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
            first = value2integer(make__61439040());
            last = value2integer(make__61439020());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61400600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61400600 = block;
   block->owner = (Object)__61400340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61400600;

   return block;
};

Block __61400300;

void code__61400300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240,value2integer(make__61438880()),value2integer(make__61438860())));
      set_value_pos(pool_state);
   }
}

Block make__61400300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61400300 = block;
   block->owner = (Object)__61400040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61400300;

   return block;
};

Block __61400000;

void code__61400000() {
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
            src0 = make__61438400();
            src1 = make__61438380();
            src2 = make__61438360();
            src3 = make__61438340();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
            first = value2integer(make__61438240());
            last = value2integer(make__61438220());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_59115680_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61400000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61400000 = block;
   block->owner = (Object)__61399540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61400000;

   return block;
};

Block __61400860;

void code__61400860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,address_59162900_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_59115680_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,remaining_60999360_my__interpolator_58_8410_60563240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58924740_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,base_61085160_my__interpolator_58_8410_60563240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59020240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,next__data_61220120_my__interpolator_58_8410_60563240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_61404140_my__interpolator_58_8410_60563240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,a_54188380_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61400860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61400860 = block;
   block->owner = (Object)__61418600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61400860;

   return block;
};

Block __61400760;

void code__61400760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59232220_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,base_58924740_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59473700_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,next__data_59020240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61400760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61400760 = block;
   block->owner = (Object)__61418440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61400760;

   return block;
};

Value make__61439040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61439020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61438880() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61438860() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61438400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61438380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61438360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61438340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61438240() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61438220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_58854140;

SignalI base_58924740_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makebase_58924740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_58924740_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func0_58_840_58854140;
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

SignalI next__data_59020240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makenext__data_59020240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_59020240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func0_58_840_58854140;
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

SignalI address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeaddress_59020160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func0_58_840_58854140;
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

SignalI remaining_59115680_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeremaining_59115680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_59115680_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func0_58_840_58854140;
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

SystemI my__lut_59473500;

SystemI makemy__lut_59473500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_59473500 = systemI;
   systemI->owner = (Object)func0_58_840_58854140;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_59164900;

   return systemI;
};

SystemI my__interpolator_61404000;

SystemI makemy__interpolator_61404000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_61404000 = systemI;
   systemI->owner = (Object)func0_58_840_58854140;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_60563240;

   return systemI;
};

Behavior __61400340;

Behavior make__61400340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61400340 = behavior;
   behavior->owner = (Object)func0_58_840_58854140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61400600();

   return behavior;
}

Behavior __61400040;

Behavior make__61400040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61400040 = behavior;
   behavior->owner = (Object)func0_58_840_58854140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61400300();

   return behavior;
}

Behavior __61399540;

Behavior make__61399540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61399540 = behavior;
   behavior->owner = (Object)func0_58_840_58854140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61400000();

   return behavior;
}

Behavior __61418600;

Behavior make__61418600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61418600 = behavior;
   behavior->owner = (Object)func0_58_840_58854140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[address_59020160_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_59115680_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   remaining_59115680_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   remaining_59115680_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(remaining_59115680_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,remaining_59115680_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
remaining_59115680_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[remaining_59115680_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_58924740_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   base_58924740_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   base_58924740_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(base_58924740_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,base_58924740_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
base_58924740_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[base_58924740_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_59020240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   next__data_59020240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   next__data_59020240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(next__data_59020240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,next__data_59020240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
next__data_59020240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[next__data_59020240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_61404140_my__interpolator_58_8410_60563240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   interpolated__value_61404140_my__interpolator_58_8410_60563240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   interpolated__value_61404140_my__interpolator_58_8410_60563240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(interpolated__value_61404140_my__interpolator_58_8410_60563240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,interpolated__value_61404140_my__interpolator_58_8410_60563240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
interpolated__value_61404140_my__interpolator_58_8410_60563240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[interpolated__value_61404140_my__interpolator_58_8410_60563240_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61400860();

   return behavior;
}

Behavior __61418440;

Behavior make__61418440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61418440 = behavior;
   behavior->owner = (Object)func0_58_840_58854140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_59232220_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   base_59232220_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   base_59232220_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(base_59232220_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,base_59232220_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
base_59232220_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[base_59232220_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_59473700_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   next__data_59473700_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   next__data_59473700_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(next__data_59473700_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,next__data_59473700_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
next__data_59473700_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[next__data_59473700_my__lut_58_8410_59164900_func0_58_840_58854140_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61400760();

   return behavior;
}

Scope makefunc0_58_840_58854140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_58854140 = scope;
   scope->owner = (Object)func0_58_8400_53350780;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_59473500();
   scope->systemIs[1] = makemy__interpolator_61404000();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_58924740();
   scope->inners[1] = makenext__data_59020240();
   scope->inners[2] = makeaddress_59020160();
   scope->inners[3] = makeremaining_59115680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61400340();
   scope->behaviors[1] = make__61400040();
   scope->behaviors[2] = make__61399540();
   scope->behaviors[3] = make__61418600();
   scope->behaviors[4] = make__61418440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_53350780() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_53350780 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53813120();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_54188380();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_58854140();

   return systemT;
}