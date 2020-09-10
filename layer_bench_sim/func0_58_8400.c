#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_49278760;

SignalI z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makez__value_49820220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func0_58_8400_49278760;
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

SignalI a_50061360_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makea_50061360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50061360_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func0_58_8400_49278760;
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

Block __60343540;

void code__60343540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
            first = value2integer(make__60381780());
            last = value2integer(make__60381720());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60343540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60343540 = block;
   block->owner = (Object)__60343200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60343540;

   return block;
};

Block __60343160;

void code__60343160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920,value2integer(make__60381560()),value2integer(make__60381520())));
      set_value_pos(pool_state);
   }
}

Block make__60343160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60343160 = block;
   block->owner = (Object)__60342840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60343160;

   return block;
};

Block __60342800;

void code__60342800() {
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
            src0 = make__60381000();
            src1 = make__60380980();
            src2 = make__60380960();
            src3 = make__60380940();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
            first = value2integer(make__60380840());
            last = value2integer(make__60380820());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_59033760_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60342800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60342800 = block;
   block->owner = (Object)__60342340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60342800;

   return block;
};

Block __60343800;

void code__60343800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,address_51412000_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_59033760_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,remaining_60686180_my__interpolator_58_8410_60479400_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54427280_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,base_60886640_my__interpolator_58_8410_60479400_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51409860_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,next__data_61046100_my__interpolator_58_8410_60479400_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_61123760_my__interpolator_58_8410_60479400_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,a_50061360_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60343800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60343800 = block;
   block->owner = (Object)__60361520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60343800;

   return block;
};

Block __60343720;

void code__60343720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59034360_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,base_54427280_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59168560_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,next__data_51409860_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60343720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60343720 = block;
   block->owner = (Object)__60361040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60343720;

   return block;
};

Value make__60381780() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60381720() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60381560() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60381520() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60381000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60380980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60380960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60380940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60380840() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60380820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_54778500;

SignalI base_54427280_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makebase_54427280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54427280_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func0_58_840_54778500;
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

SignalI next__data_51409860_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makenext__data_51409860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51409860_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func0_58_840_54778500;
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

SignalI address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeaddress_51409780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func0_58_840_54778500;
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

SignalI remaining_59033760_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeremaining_59033760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_59033760_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func0_58_840_54778500;
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

SystemI my__lut_59168420;

SystemI makemy__lut_59168420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_59168420 = systemI;
   systemI->owner = (Object)func0_58_840_54778500;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_53502960;

   return systemI;
};

SystemI my__interpolator_61123580;

SystemI makemy__interpolator_61123580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_61123580 = systemI;
   systemI->owner = (Object)func0_58_840_54778500;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_60479400;

   return systemI;
};

Behavior __60343200;

Behavior make__60343200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60343200 = behavior;
   behavior->owner = (Object)func0_58_840_54778500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60343540();

   return behavior;
}

Behavior __60342840;

Behavior make__60342840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60342840 = behavior;
   behavior->owner = (Object)func0_58_840_54778500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60343160();

   return behavior;
}

Behavior __60342340;

Behavior make__60342340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60342340 = behavior;
   behavior->owner = (Object)func0_58_840_54778500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60342800();

   return behavior;
}

Behavior __60361520;

Behavior make__60361520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60361520 = behavior;
   behavior->owner = (Object)func0_58_840_54778500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[address_51409780_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_59033760_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   remaining_59033760_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   remaining_59033760_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(remaining_59033760_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,remaining_59033760_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
remaining_59033760_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[remaining_59033760_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_54427280_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   base_54427280_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   base_54427280_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(base_54427280_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,base_54427280_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
base_54427280_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[base_54427280_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_51409860_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   next__data_51409860_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   next__data_51409860_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(next__data_51409860_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,next__data_51409860_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
next__data_51409860_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[next__data_51409860_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_61123760_my__interpolator_58_8410_60479400_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   interpolated__value_61123760_my__interpolator_58_8410_60479400_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   interpolated__value_61123760_my__interpolator_58_8410_60479400_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(interpolated__value_61123760_my__interpolator_58_8410_60479400_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,interpolated__value_61123760_my__interpolator_58_8410_60479400_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
interpolated__value_61123760_my__interpolator_58_8410_60479400_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[interpolated__value_61123760_my__interpolator_58_8410_60479400_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60343800();

   return behavior;
}

Behavior __60361040;

Behavior make__60361040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60361040 = behavior;
   behavior->owner = (Object)func0_58_840_54778500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_59034360_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   base_59034360_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   base_59034360_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(base_59034360_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,base_59034360_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
base_59034360_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[base_59034360_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_59168560_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   next__data_59168560_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   next__data_59168560_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(next__data_59168560_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,next__data_59168560_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
next__data_59168560_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[next__data_59168560_my__lut_58_8410_53502960_func0_58_840_54778500_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60343720();

   return behavior;
}

Scope makefunc0_58_840_54778500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_54778500 = scope;
   scope->owner = (Object)func0_58_8400_49278760;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_59168420();
   scope->systemIs[1] = makemy__interpolator_61123580();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_54427280();
   scope->inners[1] = makenext__data_51409860();
   scope->inners[2] = makeaddress_51409780();
   scope->inners[3] = makeremaining_59033760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60343200();
   scope->behaviors[1] = make__60342840();
   scope->behaviors[2] = make__60342340();
   scope->behaviors[3] = make__60361520();
   scope->behaviors[4] = make__60361040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_49278760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_49278760 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49820220();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50061360();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_54778500();

   return systemT;
}