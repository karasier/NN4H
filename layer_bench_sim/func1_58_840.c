#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_54906280;

SignalI z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makez__value_55165820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func1_58_840_54906280;
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

SignalI a_48018280_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makea_48018280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_48018280_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func1_58_840_54906280;
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

Block __62896620;

void code__62896620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
            first = value2integer(make__62927480());
            last = value2integer(make__62927440());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62896620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62896620 = block;
   block->owner = (Object)__62896360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62896620;

   return block;
};

Block __62896320;

void code__62896320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920,value2integer(make__62927260()),value2integer(make__62927240())));
      set_value_pos(pool_state);
   }
}

Block make__62896320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62896320 = block;
   block->owner = (Object)__62896060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62896320;

   return block;
};

Block __62896020;

void code__62896020() {
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
            src0 = make__62926780();
            src1 = make__62926760();
            src2 = make__62926740();
            src3 = make__62926720();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
            first = value2integer(make__62926620());
            last = value2integer(make__62926600());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_54488380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62896020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62896020 = block;
   block->owner = (Object)__62895560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62896020;

   return block;
};

Block __62896840;

void code__62896840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,address_53758600_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_54488380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,remaining_48683120_my__interpolator_58_8400_48267380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54164140_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,base_49445600_my__interpolator_58_8400_48267380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54350880_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,next__data_49691640_my__interpolator_58_8400_48267380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49991660_my__interpolator_58_8400_48267380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,a_48018280_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62896840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62896840 = block;
   block->owner = (Object)__62890400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62896840;

   return block;
};

Block __62896780;

void code__62896780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53867500_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,base_54164140_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54025540_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,next__data_54350880_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62896780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62896780 = block;
   block->owner = (Object)__62890240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62896780;

   return block;
};

Value make__62927480() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62927440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62927260() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62927240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62926780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62926760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62926740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62926720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62926620() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62926600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_53985720;

SignalI base_54164140_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makebase_54164140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54164140_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func1_58_84_53985720;
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

SignalI next__data_54350880_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makenext__data_54350880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54350880_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func1_58_84_53985720;
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

SignalI address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeaddress_54350800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func1_58_84_53985720;
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

SignalI remaining_54488380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeremaining_54488380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_54488380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func1_58_84_53985720;
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

SystemI my__lut_54025400;

SystemI makemy__lut_54025400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_54025400 = systemI;
   systemI->owner = (Object)func1_58_84_53985720;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_53682580;

   return systemI;
};

SystemI my__interpolator_49991340;

SystemI makemy__interpolator_49991340() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49991340 = systemI;
   systemI->owner = (Object)func1_58_84_53985720;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_48267380;

   return systemI;
};

Behavior __62896360;

Behavior make__62896360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62896360 = behavior;
   behavior->owner = (Object)func1_58_84_53985720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62896620();

   return behavior;
}

Behavior __62896060;

Behavior make__62896060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62896060 = behavior;
   behavior->owner = (Object)func1_58_84_53985720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62896320();

   return behavior;
}

Behavior __62895560;

Behavior make__62895560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62895560 = behavior;
   behavior->owner = (Object)func1_58_84_53985720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[z__value_55165820_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62896020();

   return behavior;
}

Behavior __62890400;

Behavior make__62890400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62890400 = behavior;
   behavior->owner = (Object)func1_58_84_53985720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[address_54350800_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_54488380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   remaining_54488380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   remaining_54488380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(remaining_54488380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,remaining_54488380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
remaining_54488380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[remaining_54488380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_54164140_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   base_54164140_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   base_54164140_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(base_54164140_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,base_54164140_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
base_54164140_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[base_54164140_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_54350880_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   next__data_54350880_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   next__data_54350880_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(next__data_54350880_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,next__data_54350880_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
next__data_54350880_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[next__data_54350880_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49991660_my__interpolator_58_8400_48267380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   interpolated__value_49991660_my__interpolator_58_8400_48267380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   interpolated__value_49991660_my__interpolator_58_8400_48267380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(interpolated__value_49991660_my__interpolator_58_8400_48267380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,interpolated__value_49991660_my__interpolator_58_8400_48267380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
interpolated__value_49991660_my__interpolator_58_8400_48267380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[interpolated__value_49991660_my__interpolator_58_8400_48267380_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62896840();

   return behavior;
}

Behavior __62890240;

Behavior make__62890240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62890240 = behavior;
   behavior->owner = (Object)func1_58_84_53985720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_53867500_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   base_53867500_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   base_53867500_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(base_53867500_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,base_53867500_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
base_53867500_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[base_53867500_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_54025540_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   next__data_54025540_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   next__data_54025540_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(next__data_54025540_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,next__data_54025540_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
next__data_54025540_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[next__data_54025540_my__lut_58_8400_53682580_func1_58_84_53985720_func1_58_840_54906280_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62896780();

   return behavior;
}

Scope makefunc1_58_84_53985720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_53985720 = scope;
   scope->owner = (Object)func1_58_840_54906280;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_54025400();
   scope->systemIs[1] = makemy__interpolator_49991340();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_54164140();
   scope->inners[1] = makenext__data_54350880();
   scope->inners[2] = makeaddress_54350800();
   scope->inners[3] = makeremaining_54488380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62896360();
   scope->behaviors[1] = make__62896060();
   scope->behaviors[2] = make__62895560();
   scope->behaviors[3] = make__62890400();
   scope->behaviors[4] = make__62890240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_54906280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_54906280 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_55165820();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_48018280();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_53985720();

   return systemT;
}