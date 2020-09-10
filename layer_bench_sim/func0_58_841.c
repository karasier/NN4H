#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_52898760;

SignalI z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makez__value_53088980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func0_58_841_52898760;
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

SignalI a_53249600_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makea_53249600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_53249600_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func0_58_841_52898760;
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

Block __60022020;

void code__60022020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
            first = value2integer(make__60035980());
            last = value2integer(make__60035960());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60022020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60022020 = block;
   block->owner = (Object)__60021700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60022020;

   return block;
};

Block __60021660;

void code__60021660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920,value2integer(make__60035800()),value2integer(make__60035780())));
      set_value_pos(pool_state);
   }
}

Block make__60021660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60021660 = block;
   block->owner = (Object)__60021400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60021660;

   return block;
};

Block __60021360;

void code__60021360() {
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
            src0 = make__60035240();
            src1 = make__60035220();
            src2 = make__60035200();
            src3 = make__60035180();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
            first = value2integer(make__60035080());
            last = value2integer(make__60035060());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53816980_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60021360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60021360 = block;
   block->owner = (Object)__60020900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60021360;

   return block;
};

Block __60022320;

void code__60022320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,address_48698480_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53816980_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,remaining_54112520_my__interpolator_58_842_54026100_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53535880_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,base_54258740_my__interpolator_58_842_54026100_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53684440_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,next__data_54404700_my__interpolator_58_842_54026100_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_54640660_my__interpolator_58_842_54026100_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,a_53249600_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60022320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60022320 = block;
   block->owner = (Object)__60015500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60022320;

   return block;
};

Block __60022220;

void code__60022220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52473380_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,base_53535880_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52618260_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,next__data_53684440_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60022220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60022220 = block;
   block->owner = (Object)__60015280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60022220;

   return block;
};

Value make__60035980() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60035960() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60035800() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60035780() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60035240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60035220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60035200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60035180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60035080() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60035060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_53453020;

SignalI base_53535880_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makebase_53535880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53535880_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func0_58_84_53453020;
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

SignalI next__data_53684440_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makenext__data_53684440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53684440_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func0_58_84_53453020;
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

SignalI address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeaddress_53684360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func0_58_84_53453020;
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

SignalI remaining_53816980_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeremaining_53816980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53816980_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)func0_58_84_53453020;
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

SystemI my__lut_52618100;

SystemI makemy__lut_52618100() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52618100 = systemI;
   systemI->owner = (Object)func0_58_84_53453020;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_48700820;

   return systemI;
};

SystemI my__interpolator_54697800;

SystemI makemy__interpolator_54697800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_54697800 = systemI;
   systemI->owner = (Object)func0_58_84_53453020;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_54026100;

   return systemI;
};

Behavior __60021700;

Behavior make__60021700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60021700 = behavior;
   behavior->owner = (Object)func0_58_84_53453020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60022020();

   return behavior;
}

Behavior __60021400;

Behavior make__60021400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60021400 = behavior;
   behavior->owner = (Object)func0_58_84_53453020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60021660();

   return behavior;
}

Behavior __60020900;

Behavior make__60020900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60020900 = behavior;
   behavior->owner = (Object)func0_58_84_53453020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60021360();

   return behavior;
}

Behavior __60015500;

Behavior make__60015500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60015500 = behavior;
   behavior->owner = (Object)func0_58_84_53453020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[address_53684360_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_53816980_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   remaining_53816980_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   remaining_53816980_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(remaining_53816980_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,remaining_53816980_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
remaining_53816980_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[remaining_53816980_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53535880_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   base_53535880_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   base_53535880_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(base_53535880_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,base_53535880_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
base_53535880_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[base_53535880_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53684440_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   next__data_53684440_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   next__data_53684440_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(next__data_53684440_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,next__data_53684440_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
next__data_53684440_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[next__data_53684440_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_54640660_my__interpolator_58_842_54026100_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   interpolated__value_54640660_my__interpolator_58_842_54026100_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   interpolated__value_54640660_my__interpolator_58_842_54026100_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(interpolated__value_54640660_my__interpolator_58_842_54026100_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,interpolated__value_54640660_my__interpolator_58_842_54026100_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
interpolated__value_54640660_my__interpolator_58_842_54026100_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[interpolated__value_54640660_my__interpolator_58_842_54026100_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60022320();

   return behavior;
}

Behavior __60015280;

Behavior make__60015280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60015280 = behavior;
   behavior->owner = (Object)func0_58_84_53453020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52473380_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   base_52473380_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   base_52473380_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(base_52473380_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,base_52473380_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
base_52473380_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[base_52473380_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52618260_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   next__data_52618260_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   next__data_52618260_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(next__data_52618260_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,next__data_52618260_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
next__data_52618260_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[next__data_52618260_my__lut_58_842_48700820_func0_58_84_53453020_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60022220();

   return behavior;
}

Scope makefunc0_58_84_53453020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_53453020 = scope;
   scope->owner = (Object)func0_58_841_52898760;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52618100();
   scope->systemIs[1] = makemy__interpolator_54697800();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53535880();
   scope->inners[1] = makenext__data_53684440();
   scope->inners[2] = makeaddress_53684360();
   scope->inners[3] = makeremaining_53816980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60021700();
   scope->behaviors[1] = make__60021400();
   scope->behaviors[2] = make__60020900();
   scope->behaviors[3] = make__60015500();
   scope->behaviors[4] = make__60015280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_52898760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_52898760 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53088980();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_53249600();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_53453020();

   return systemT;
}