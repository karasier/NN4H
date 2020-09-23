#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_51236080;

SignalI z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makez__value_51788480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func1_58_840_51236080;
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

SignalI a_52525040_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makea_52525040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52525040_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func1_58_840_51236080;
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

Block __59370660;

void code__59370660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
            first = value2integer(make__59439740());
            last = value2integer(make__59439720());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59370660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59370660 = block;
   block->owner = (Object)__59370380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59370660;

   return block;
};

Block __59370340;

void code__59370340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280,value2integer(make__59439560()),value2integer(make__59439520())));
      set_value_pos(pool_state);
   }
}

Block make__59370340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59370340 = block;
   block->owner = (Object)__59369960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59370340;

   return block;
};

Block __59369920;

void code__59369920() {
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
            src0 = make__59438960();
            src1 = make__59438940();
            src2 = make__59438900();
            src3 = make__59438880();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
            first = value2integer(make__59438700());
            last = value2integer(make__59438680());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_50674880_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59369920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59369920 = block;
   block->owner = (Object)__59369300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59369920;

   return block;
};

Block __59370940;

void code__59370940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,address_52723480_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_50674880_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,remaining_51557700_my__interpolator_58_8400_51351600_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49512160_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,base_51819300_my__interpolator_58_8400_51351600_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49767920_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,next__data_52155520_my__interpolator_58_8400_51351600_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_52389720_my__interpolator_58_8400_51351600_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,a_52525040_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59370940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59370940 = block;
   block->owner = (Object)__59387260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59370940;

   return block;
};

Block __59370880;

void code__59370880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52877720_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,base_49512160_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53050180_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,next__data_49767920_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59370880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59370880 = block;
   block->owner = (Object)__59387100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59370880;

   return block;
};

Value make__59439740() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59439720() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59439560() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59439520() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59438960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59438940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59438900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59438880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59438700() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59438680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_49345980;

SignalI base_49512160_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makebase_49512160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49512160_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func1_58_84_49345980;
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

SignalI next__data_49767920_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makenext__data_49767920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49767920_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func1_58_84_49345980;
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

SignalI address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeaddress_49767620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func1_58_84_49345980;
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

SignalI remaining_50674880_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeremaining_50674880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_50674880_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func1_58_84_49345980;
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

SystemI my__lut_53049820;

SystemI makemy__lut_53049820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_53049820 = systemI;
   systemI->owner = (Object)func1_58_84_49345980;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_52702140;

   return systemI;
};

SystemI my__interpolator_52389560;

SystemI makemy__interpolator_52389560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_52389560 = systemI;
   systemI->owner = (Object)func1_58_84_49345980;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_51351600;

   return systemI;
};

Behavior __59370380;

Behavior make__59370380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59370380 = behavior;
   behavior->owner = (Object)func1_58_84_49345980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59370660();

   return behavior;
}

Behavior __59369960;

Behavior make__59369960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59369960 = behavior;
   behavior->owner = (Object)func1_58_84_49345980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59370340();

   return behavior;
}

Behavior __59369300;

Behavior make__59369300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59369300 = behavior;
   behavior->owner = (Object)func1_58_84_49345980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[z__value_51788480_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59369920();

   return behavior;
}

Behavior __59387260;

Behavior make__59387260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59387260 = behavior;
   behavior->owner = (Object)func1_58_84_49345980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[address_49767620_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_50674880_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   remaining_50674880_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   remaining_50674880_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(remaining_50674880_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,remaining_50674880_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
remaining_50674880_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[remaining_50674880_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_49512160_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   base_49512160_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   base_49512160_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(base_49512160_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,base_49512160_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
base_49512160_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[base_49512160_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_49767920_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   next__data_49767920_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   next__data_49767920_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(next__data_49767920_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,next__data_49767920_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
next__data_49767920_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[next__data_49767920_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_52389720_my__interpolator_58_8400_51351600_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   interpolated__value_52389720_my__interpolator_58_8400_51351600_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   interpolated__value_52389720_my__interpolator_58_8400_51351600_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(interpolated__value_52389720_my__interpolator_58_8400_51351600_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,interpolated__value_52389720_my__interpolator_58_8400_51351600_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
interpolated__value_52389720_my__interpolator_58_8400_51351600_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[interpolated__value_52389720_my__interpolator_58_8400_51351600_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59370940();

   return behavior;
}

Behavior __59387100;

Behavior make__59387100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59387100 = behavior;
   behavior->owner = (Object)func1_58_84_49345980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52877720_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   base_52877720_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   base_52877720_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(base_52877720_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,base_52877720_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
base_52877720_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[base_52877720_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_53050180_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   next__data_53050180_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   next__data_53050180_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(next__data_53050180_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,next__data_53050180_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
next__data_53050180_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[next__data_53050180_my__lut_58_8400_52702140_func1_58_84_49345980_func1_58_840_51236080_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59370880();

   return behavior;
}

Scope makefunc1_58_84_49345980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_49345980 = scope;
   scope->owner = (Object)func1_58_840_51236080;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_53049820();
   scope->systemIs[1] = makemy__interpolator_52389560();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49512160();
   scope->inners[1] = makenext__data_49767920();
   scope->inners[2] = makeaddress_49767620();
   scope->inners[3] = makeremaining_50674880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59370380();
   scope->behaviors[1] = make__59369960();
   scope->behaviors[2] = make__59369300();
   scope->behaviors[3] = make__59387260();
   scope->behaviors[4] = make__59387100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_51236080() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_51236080 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51788480();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52525040();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_49345980();

   return systemT;
}