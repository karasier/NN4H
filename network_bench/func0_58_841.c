#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_48771380;

SignalI z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makez__value_49106440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func0_58_841_48771380;
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

SignalI a_49346860_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makea_49346860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49346860_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func0_58_841_48771380;
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

Block __59101000;

void code__59101000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
            first = value2integer(make__59359180());
            last = value2integer(make__59359160());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59101000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59101000 = block;
   block->owner = (Object)__59100740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59101000;

   return block;
};

Block __59100700;

void code__59100700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280,value2integer(make__59359020()),value2integer(make__59359000())));
      set_value_pos(pool_state);
   }
}

Block make__59100700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59100700 = block;
   block->owner = (Object)__59100440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59100700;

   return block;
};

Block __59100380;

void code__59100380() {
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
            src0 = make__59358520();
            src1 = make__59358500();
            src2 = make__59358480();
            src3 = make__59358440();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
            first = value2integer(make__59358340());
            last = value2integer(make__59358320());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_52210540_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59100380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59100380 = block;
   block->owner = (Object)__59099720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59100380;

   return block;
};

Block __59101400;

void code__59101400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,address_51965420_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_52210540_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,remaining_49381120_my__interpolator_58_842_49183800_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51815520_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,base_49624960_my__interpolator_58_842_49183800_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51985980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,next__data_49785600_my__interpolator_58_842_49183800_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50671900_my__interpolator_58_842_49183800_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,a_49346860_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59101400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59101400 = block;
   block->owner = (Object)__59183640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59101400;

   return block;
};

Block __59101160;

void code__59101160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52210260_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,base_51815520_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52408220_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,next__data_51985980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59101160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59101160 = block;
   block->owner = (Object)__59183480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59101160;

   return block;
};

Value make__59359180() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59359160() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59359020() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59359000() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59358520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59358500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59358480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59358440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59358340() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59358320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_51703260;

SignalI base_51815520_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makebase_51815520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51815520_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func0_58_84_51703260;
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

SignalI next__data_51985980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makenext__data_51985980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51985980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func0_58_84_51703260;
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

SignalI address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeaddress_51985880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func0_58_84_51703260;
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

SignalI remaining_52210540_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeremaining_52210540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_52210540_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func0_58_84_51703260;
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

SystemI my__lut_52408060;

SystemI makemy__lut_52408060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52408060 = systemI;
   systemI->owner = (Object)func0_58_84_51703260;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_51967980;

   return systemI;
};

SystemI my__interpolator_50671720;

SystemI makemy__interpolator_50671720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50671720 = systemI;
   systemI->owner = (Object)func0_58_84_51703260;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_49183800;

   return systemI;
};

Behavior __59100740;

Behavior make__59100740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59100740 = behavior;
   behavior->owner = (Object)func0_58_84_51703260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59101000();

   return behavior;
}

Behavior __59100440;

Behavior make__59100440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59100440 = behavior;
   behavior->owner = (Object)func0_58_84_51703260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59100700();

   return behavior;
}

Behavior __59099720;

Behavior make__59099720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59099720 = behavior;
   behavior->owner = (Object)func0_58_84_51703260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[z__value_49106440_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59100380();

   return behavior;
}

Behavior __59183640;

Behavior make__59183640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59183640 = behavior;
   behavior->owner = (Object)func0_58_84_51703260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[address_51985880_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_52210540_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   remaining_52210540_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   remaining_52210540_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(remaining_52210540_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,remaining_52210540_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
remaining_52210540_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[remaining_52210540_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51815520_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   base_51815520_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   base_51815520_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(base_51815520_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,base_51815520_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
base_51815520_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[base_51815520_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_51985980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   next__data_51985980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   next__data_51985980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(next__data_51985980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,next__data_51985980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
next__data_51985980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[next__data_51985980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_50671900_my__interpolator_58_842_49183800_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   interpolated__value_50671900_my__interpolator_58_842_49183800_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   interpolated__value_50671900_my__interpolator_58_842_49183800_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(interpolated__value_50671900_my__interpolator_58_842_49183800_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,interpolated__value_50671900_my__interpolator_58_842_49183800_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
interpolated__value_50671900_my__interpolator_58_842_49183800_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[interpolated__value_50671900_my__interpolator_58_842_49183800_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59101400();

   return behavior;
}

Behavior __59183480;

Behavior make__59183480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59183480 = behavior;
   behavior->owner = (Object)func0_58_84_51703260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52210260_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   base_52210260_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   base_52210260_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(base_52210260_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,base_52210260_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
base_52210260_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[base_52210260_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52408220_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   next__data_52408220_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   next__data_52408220_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(next__data_52408220_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,next__data_52408220_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
next__data_52408220_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[next__data_52408220_my__lut_58_842_51967980_func0_58_84_51703260_func0_58_841_48771380_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59101160();

   return behavior;
}

Scope makefunc0_58_84_51703260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_51703260 = scope;
   scope->owner = (Object)func0_58_841_48771380;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52408060();
   scope->systemIs[1] = makemy__interpolator_50671720();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51815520();
   scope->inners[1] = makenext__data_51985980();
   scope->inners[2] = makeaddress_51985880();
   scope->inners[3] = makeremaining_52210540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59100740();
   scope->behaviors[1] = make__59100440();
   scope->behaviors[2] = make__59099720();
   scope->behaviors[3] = make__59183640();
   scope->behaviors[4] = make__59183480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_48771380() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_48771380 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49106440();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49346860();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_51703260();

   return systemT;
}