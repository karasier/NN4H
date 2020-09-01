#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_53762340;

SignalI z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makez__value_53848260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func0_58_841_53762340;
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

SignalI a_53986360_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makea_53986360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_53986360_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func0_58_841_53762340;
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

Block __62852640;

void code__62852640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
            first = value2integer(make__62858900());
            last = value2integer(make__62858880());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62852640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62852640 = block;
   block->owner = (Object)__62852320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62852640;

   return block;
};

Block __62852280;

void code__62852280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920,value2integer(make__62858720()),value2integer(make__62858700())));
      set_value_pos(pool_state);
   }
}

Block make__62852280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62852280 = block;
   block->owner = (Object)__62852020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62852280;

   return block;
};

Block __62851980;

void code__62851980() {
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
            src0 = make__62858160();
            src1 = make__62858140();
            src2 = make__62858120();
            src3 = make__62858100();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value;
            first = value2integer(make__62858000());
            last = value2integer(make__62857980());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_55243720_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62851980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62851980 = block;
   block->owner = (Object)__62851520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62851980;

   return block;
};

Block __62852900;

void code__62852900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,address_53141460_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_55243720_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,remaining_54906580_my__interpolator_58_842_54778640_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54876400_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,base_55004980_my__interpolator_58_842_54778640_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54937580_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,next__data_46258660_my__interpolator_58_842_54778640_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_48143980_my__interpolator_58_842_54778640_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,a_53986360_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62852900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62852900 = block;
   block->owner = (Object)__62862760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62852900;

   return block;
};

Block __62852820;

void code__62852820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53232160_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,base_54876400_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53354880_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,next__data_54937580_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62852820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62852820 = block;
   block->owner = (Object)__62862540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62852820;

   return block;
};

Value make__62858900() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62858880() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62858720() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62858700() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62858160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62858140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62858120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62858100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62858000() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62857980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_54727020;

SignalI base_54876400_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makebase_54876400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54876400_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func0_58_84_54727020;
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

SignalI next__data_54937580_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makenext__data_54937580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54937580_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func0_58_84_54727020;
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

SignalI address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeaddress_54937500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func0_58_84_54727020;
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

SignalI remaining_55243720_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920;

SignalI makeremaining_55243720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_55243720_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)func0_58_84_54727020;
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

SystemI my__lut_53354640;

SystemI makemy__lut_53354640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_53354640 = systemI;
   systemI->owner = (Object)func0_58_84_54727020;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_53119120;

   return systemI;
};

SystemI my__interpolator_48143820;

SystemI makemy__interpolator_48143820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_48143820 = systemI;
   systemI->owner = (Object)func0_58_84_54727020;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_54778640;

   return systemI;
};

Behavior __62852320;

Behavior make__62852320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62852320 = behavior;
   behavior->owner = (Object)func0_58_84_54727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62852640();

   return behavior;
}

Behavior __62852020;

Behavior make__62852020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62852020 = behavior;
   behavior->owner = (Object)func0_58_84_54727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62852280();

   return behavior;
}

Behavior __62851520;

Behavior make__62851520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62851520 = behavior;
   behavior->owner = (Object)func0_58_84_54727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[z__value_53848260_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62851980();

   return behavior;
}

Behavior __62862760;

Behavior make__62862760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62862760 = behavior;
   behavior->owner = (Object)func0_58_84_54727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[address_54937500_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_55243720_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   remaining_55243720_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   remaining_55243720_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(remaining_55243720_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,remaining_55243720_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
remaining_55243720_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[remaining_55243720_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_54876400_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   base_54876400_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   base_54876400_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(base_54876400_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,base_54876400_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
base_54876400_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[base_54876400_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_54937580_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   next__data_54937580_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   next__data_54937580_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(next__data_54937580_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,next__data_54937580_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
next__data_54937580_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[next__data_54937580_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_48143980_my__interpolator_58_842_54778640_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   interpolated__value_48143980_my__interpolator_58_842_54778640_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   interpolated__value_48143980_my__interpolator_58_842_54778640_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(interpolated__value_48143980_my__interpolator_58_842_54778640_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,interpolated__value_48143980_my__interpolator_58_842_54778640_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
interpolated__value_48143980_my__interpolator_58_842_54778640_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[interpolated__value_48143980_my__interpolator_58_842_54778640_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62852900();

   return behavior;
}

Behavior __62862540;

Behavior make__62862540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62862540 = behavior;
   behavior->owner = (Object)func0_58_84_54727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_53232160_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   base_53232160_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   base_53232160_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(base_53232160_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,base_53232160_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
base_53232160_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[base_53232160_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_53354880_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   next__data_53354880_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   next__data_53354880_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(next__data_53354880_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,next__data_53354880_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
next__data_53354880_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[next__data_53354880_my__lut_58_842_53119120_func0_58_84_54727020_func0_58_841_53762340_layer0_58_84_50121360_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62852820();

   return behavior;
}

Scope makefunc0_58_84_54727020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_54727020 = scope;
   scope->owner = (Object)func0_58_841_53762340;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_53354640();
   scope->systemIs[1] = makemy__interpolator_48143820();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_54876400();
   scope->inners[1] = makenext__data_54937580();
   scope->inners[2] = makeaddress_54937500();
   scope->inners[3] = makeremaining_55243720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62852320();
   scope->behaviors[1] = make__62852020();
   scope->behaviors[2] = make__62851520();
   scope->behaviors[3] = make__62862760();
   scope->behaviors[4] = make__62862540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_53762340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_53762340 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53848260();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_53986360();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_54727020();

   return systemT;
}