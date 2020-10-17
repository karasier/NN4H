#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_54427140;

SignalI z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makez__value_54710260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func0_58_8400_54427140;
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

SignalI a_54912860_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makea_54912860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_54912860_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func0_58_8400_54427140;
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

Block __52589040;

void code__52589040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            first = value2integer(make__53453660());
            last = value2integer(make__53453640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__52589040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52589040 = block;
   block->owner = (Object)__52588220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52589040;

   return block;
};

Block __52587620;

void code__52587620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460,value2integer(make__53453160()),value2integer(make__53453080())));
      set_value_pos(pool_state);
   }
}

Block make__52587620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52587620 = block;
   block->owner = (Object)__52586900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52587620;

   return block;
};

Block __52586860;

void code__52586860() {
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
            src0 = make__53476720();
            src1 = make__53476700();
            src2 = make__53476660();
            src3 = make__53476640();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            first = value2integer(make__53476420());
            last = value2integer(make__53476360());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_64233980_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__52586860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52586860 = block;
   block->owner = (Object)__52585500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52586860;

   return block;
};

Block __52589440;

void code__52589440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,address_63167080_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_64233980_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,remaining_64433720_my__interpolator_58_8410_64251680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_64043000_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,base_64806180_my__interpolator_58_8410_64251680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_64105760_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,next__data_64867380_my__interpolator_58_8410_64251680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_64953200_my__interpolator_58_8410_64251680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,a_54912860_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__52589440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52589440 = block;
   block->owner = (Object)__53439220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52589440;

   return block;
};

Block __52589360;

void code__52589360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_63301880_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,base_64043000_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_63387600_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,next__data_64105760_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__52589360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52589360 = block;
   block->owner = (Object)__53438880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52589360;

   return block;
};

Value make__53453660() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53453640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53453160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53453080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53476720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53476700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53476660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53476640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53476420() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53476360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_63841340;

SignalI base_64043000_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makebase_64043000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_64043000_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func0_58_840_63841340;
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

SignalI next__data_64105760_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makenext__data_64105760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_64105760_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func0_58_840_63841340;
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

SignalI address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeaddress_64105680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func0_58_840_63841340;
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

SignalI remaining_64233980_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeremaining_64233980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_64233980_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func0_58_840_63841340;
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

SystemI my__lut_63387460;

SystemI makemy__lut_63387460() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_63387460 = systemI;
   systemI->owner = (Object)func0_58_840_63841340;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_63111780;

   return systemI;
};

SystemI my__interpolator_64953040;

SystemI makemy__interpolator_64953040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_64953040 = systemI;
   systemI->owner = (Object)func0_58_840_63841340;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_64251680;

   return systemI;
};

Behavior __52588220;

Behavior make__52588220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52588220 = behavior;
   behavior->owner = (Object)func0_58_840_63841340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__52589040();

   return behavior;
}

Behavior __52586900;

Behavior make__52586900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52586900 = behavior;
   behavior->owner = (Object)func0_58_840_63841340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__52587620();

   return behavior;
}

Behavior __52585500;

Behavior make__52585500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52585500 = behavior;
   behavior->owner = (Object)func0_58_840_63841340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[z__value_54710260_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__52586860();

   return behavior;
}

Behavior __53439220;

Behavior make__53439220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53439220 = behavior;
   behavior->owner = (Object)func0_58_840_63841340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[address_64105680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_64233980_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   remaining_64233980_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   remaining_64233980_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(remaining_64233980_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,remaining_64233980_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
remaining_64233980_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[remaining_64233980_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_64043000_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   base_64043000_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   base_64043000_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(base_64043000_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,base_64043000_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
base_64043000_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[base_64043000_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_64105760_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   next__data_64105760_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   next__data_64105760_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(next__data_64105760_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,next__data_64105760_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
next__data_64105760_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[next__data_64105760_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_64953200_my__interpolator_58_8410_64251680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   interpolated__value_64953200_my__interpolator_58_8410_64251680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   interpolated__value_64953200_my__interpolator_58_8410_64251680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(interpolated__value_64953200_my__interpolator_58_8410_64251680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,interpolated__value_64953200_my__interpolator_58_8410_64251680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
interpolated__value_64953200_my__interpolator_58_8410_64251680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[interpolated__value_64953200_my__interpolator_58_8410_64251680_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__52589440();

   return behavior;
}

Behavior __53438880;

Behavior make__53438880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53438880 = behavior;
   behavior->owner = (Object)func0_58_840_63841340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_63301880_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   base_63301880_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   base_63301880_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(base_63301880_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,base_63301880_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
base_63301880_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[base_63301880_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_63387600_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   next__data_63387600_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   next__data_63387600_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(next__data_63387600_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,next__data_63387600_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
next__data_63387600_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[next__data_63387600_my__lut_58_8410_63111780_func0_58_840_63841340_func0_58_8400_54427140_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__52589360();

   return behavior;
}

Scope makefunc0_58_840_63841340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_63841340 = scope;
   scope->owner = (Object)func0_58_8400_54427140;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_63387460();
   scope->systemIs[1] = makemy__interpolator_64953040();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_64043000();
   scope->inners[1] = makenext__data_64105760();
   scope->inners[2] = makeaddress_64105680();
   scope->inners[3] = makeremaining_64233980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52588220();
   scope->behaviors[1] = make__52586900();
   scope->behaviors[2] = make__52585500();
   scope->behaviors[3] = make__53439220();
   scope->behaviors[4] = make__53438880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_54427140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_54427140 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_54710260();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_54912860();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_63841340();

   return systemT;
}