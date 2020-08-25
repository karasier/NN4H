#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_56468520;

SignalI z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makez__value_56552440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)func1_58_840_56468520;
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

SignalI a_56669200_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makea_56669200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_56669200_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)func1_58_840_56468520;
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

Block __56041020;

void code__56041020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
            first = value2integer(make__56053700());
            last = value2integer(make__56053680());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__56041020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56041020 = block;
   block->owner = (Object)__56040760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56041020;

   return block;
};

Block __56040720;

void code__56040720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060,value2integer(make__56053460()),value2integer(make__56053440())));
      set_value_pos(pool_state);
   }
}

Block make__56040720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56040720 = block;
   block->owner = (Object)__56040420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56040720;

   return block;
};

Block __56040380;

void code__56040380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__56052880();
            src1 = make__56052860();
            src2 = make__56052840();
            src3 = make__56052820();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_49776940_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__56040380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56040380 = block;
   block->owner = (Object)__56039720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56040380;

   return block;
};

Block __56041180;

void code__56041180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,z__value_43949640_my__interpolator_58_8400_58296640_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47894200_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,base_47754280_my__interpolator_58_8400_58296640_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48268380_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,next__data_48206260_my__interpolator_58_8400_58296640_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_49776940_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,integer__part_49780920_my__interpolator_58_8400_58296640_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50041400_my__interpolator_58_8400_58296640_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,a_56669200_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__56041180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56041180 = block;
   block->owner = (Object)__56057780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56041180;

   return block;
};

Block __56041120;

void code__56041120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56669120_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,base_47894200_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56748260_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,next__data_48268380_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__56041120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56041120 = block;
   block->owner = (Object)__56057620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56041120;

   return block;
};

Value make__56053700() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56053680() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56053460() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56053440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56052880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56052860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56052840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56052820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_84_46247080;

SignalI base_47894200_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makebase_47894200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47894200_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)func1_58_84_46247080;
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

SignalI next__data_48268380_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makenext__data_48268380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48268380_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)func1_58_84_46247080;
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

SignalI addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeaddr_48268280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)func1_58_84_46247080;
   signalI->name = "addr";
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

SignalI integer__part_49776940_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeinteger__part_49776940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_49776940_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)func1_58_84_46247080;
   signalI->name = "integer_part";
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

SystemI my__lut_56748120;

SystemI makemy__lut_56748120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_56748120 = systemI;
   systemI->owner = (Object)func1_58_84_46247080;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_56551000;

   return systemI;
};

SystemI my__interpolator_50040920;

SystemI makemy__interpolator_50040920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50040920 = systemI;
   systemI->owner = (Object)func1_58_84_46247080;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_58296640;

   return systemI;
};

Behavior __56040760;

Behavior make__56040760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56040760 = behavior;
   behavior->owner = (Object)func1_58_84_46247080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__56041020();

   return behavior;
}

Behavior __56040420;

Behavior make__56040420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56040420 = behavior;
   behavior->owner = (Object)func1_58_84_46247080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__56040720();

   return behavior;
}

Behavior __56039720;

Behavior make__56039720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56039720 = behavior;
   behavior->owner = (Object)func1_58_84_46247080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__56040380();

   return behavior;
}

Behavior __56057780;

Behavior make__56057780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56057780 = behavior;
   behavior->owner = (Object)func1_58_84_46247080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[addr_48268280_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47894200_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   base_47894200_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   base_47894200_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(base_47894200_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,base_47894200_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
base_47894200_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[base_47894200_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_48268380_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   next__data_48268380_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   next__data_48268380_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(next__data_48268380_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,next__data_48268380_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
next__data_48268380_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[next__data_48268380_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_49776940_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   integer__part_49776940_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   integer__part_49776940_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(integer__part_49776940_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,integer__part_49776940_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
integer__part_49776940_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[integer__part_49776940_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_50041400_my__interpolator_58_8400_58296640_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   interpolated__value_50041400_my__interpolator_58_8400_58296640_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   interpolated__value_50041400_my__interpolator_58_8400_58296640_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(interpolated__value_50041400_my__interpolator_58_8400_58296640_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,interpolated__value_50041400_my__interpolator_58_8400_58296640_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
interpolated__value_50041400_my__interpolator_58_8400_58296640_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[interpolated__value_50041400_my__interpolator_58_8400_58296640_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__56041180();

   return behavior;
}

Behavior __56057620;

Behavior make__56057620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56057620 = behavior;
   behavior->owner = (Object)func1_58_84_46247080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56669120_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   base_56669120_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   base_56669120_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(base_56669120_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,base_56669120_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
base_56669120_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[base_56669120_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_56748260_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   next__data_56748260_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   next__data_56748260_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(next__data_56748260_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,next__data_56748260_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
next__data_56748260_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[next__data_56748260_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__56041120();

   return behavior;
}

Scope makefunc1_58_84_46247080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_46247080 = scope;
   scope->owner = (Object)func1_58_840_56468520;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_56748120();
   scope->systemIs[1] = makemy__interpolator_50040920();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47894200();
   scope->inners[1] = makenext__data_48268380();
   scope->inners[2] = makeaddr_48268280();
   scope->inners[3] = makeinteger__part_49776940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56040760();
   scope->behaviors[1] = make__56040420();
   scope->behaviors[2] = make__56039720();
   scope->behaviors[3] = make__56057780();
   scope->behaviors[4] = make__56057620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_56468520() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_56468520 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_56552440();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_56669200();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_46247080();

   return systemT;
}