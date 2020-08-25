#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_51703000;

SignalI z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makez__value_52057700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)func0_58_840_51703000;
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

SignalI a_46179040_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makea_46179040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_46179040_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)func0_58_840_51703000;
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

Block __55925040;

void code__55925040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
            first = value2integer(make__55937960());
            last = value2integer(make__55937940());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55925040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55925040 = block;
   block->owner = (Object)__55924780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55925040;

   return block;
};

Block __55924740;

void code__55924740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060,value2integer(make__55937780()),value2integer(make__55937760())));
      set_value_pos(pool_state);
   }
}

Block make__55924740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55924740 = block;
   block->owner = (Object)__55924480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55924740;

   return block;
};

Block __55924440;

void code__55924440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__55937180();
            src1 = make__55937160();
            src2 = make__55937140();
            src3 = make__55937120();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_46512680_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55924440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55924440 = block;
   block->owner = (Object)__55924080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55924440;

   return block;
};

Block __55925200;

void code__55925200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,addr_50999120_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,z__value_50721120_my__interpolator_58_841_50516220_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52010380_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,base_50880980_my__interpolator_58_841_50516220_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_43579460_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,next__data_51029980_my__interpolator_58_841_50516220_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_46512680_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,integer__part_51227720_my__interpolator_58_841_50516220_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_51457840_my__interpolator_58_841_50516220_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,a_46179040_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55925200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55925200 = block;
   block->owner = (Object)__55942040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55925200;

   return block;
};

Block __55925140;

void code__55925140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51144600_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,base_52010380_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51319180_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,next__data_43579460_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55925140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55925140 = block;
   block->owner = (Object)__55941840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55925140;

   return block;
};

Value make__55937960() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55937940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55937780() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55937760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55937180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55937160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55937140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55937120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_84_51705220;

SignalI base_52010380_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makebase_52010380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52010380_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)func0_58_84_51705220;
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

SignalI next__data_43579460_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makenext__data_43579460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_43579460_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)func0_58_84_51705220;
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

SignalI addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeaddr_43575980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)func0_58_84_51705220;
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

SignalI integer__part_46512680_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeinteger__part_46512680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_46512680_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)func0_58_84_51705220;
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

SystemI my__lut_51318740;

SystemI makemy__lut_51318740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_51318740 = systemI;
   systemI->owner = (Object)func0_58_84_51705220;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_841_51002160;

   return systemI;
};

SystemI my__interpolator_51457620;

SystemI makemy__interpolator_51457620() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_51457620 = systemI;
   systemI->owner = (Object)func0_58_84_51705220;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_841_50516220;

   return systemI;
};

Behavior __55924780;

Behavior make__55924780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55924780 = behavior;
   behavior->owner = (Object)func0_58_84_51705220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55925040();

   return behavior;
}

Behavior __55924480;

Behavior make__55924480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55924480 = behavior;
   behavior->owner = (Object)func0_58_84_51705220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55924740();

   return behavior;
}

Behavior __55924080;

Behavior make__55924080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55924080 = behavior;
   behavior->owner = (Object)func0_58_84_51705220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55924440();

   return behavior;
}

Behavior __55942040;

Behavior make__55942040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55942040 = behavior;
   behavior->owner = (Object)func0_58_84_51705220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[addr_43575980_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_52010380_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   base_52010380_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   base_52010380_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(base_52010380_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,base_52010380_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
base_52010380_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[base_52010380_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_43579460_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   next__data_43579460_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   next__data_43579460_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(next__data_43579460_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,next__data_43579460_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
next__data_43579460_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[next__data_43579460_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_46512680_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   integer__part_46512680_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   integer__part_46512680_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(integer__part_46512680_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,integer__part_46512680_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
integer__part_46512680_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[integer__part_46512680_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_51457840_my__interpolator_58_841_50516220_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   interpolated__value_51457840_my__interpolator_58_841_50516220_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   interpolated__value_51457840_my__interpolator_58_841_50516220_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(interpolated__value_51457840_my__interpolator_58_841_50516220_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,interpolated__value_51457840_my__interpolator_58_841_50516220_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
interpolated__value_51457840_my__interpolator_58_841_50516220_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[interpolated__value_51457840_my__interpolator_58_841_50516220_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55925200();

   return behavior;
}

Behavior __55941840;

Behavior make__55941840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55941840 = behavior;
   behavior->owner = (Object)func0_58_84_51705220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51144600_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   base_51144600_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   base_51144600_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(base_51144600_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,base_51144600_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
base_51144600_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[base_51144600_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51319180_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   next__data_51319180_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   next__data_51319180_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(next__data_51319180_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,next__data_51319180_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
next__data_51319180_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[next__data_51319180_my__lut_58_841_51002160_func0_58_84_51705220_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55925140();

   return behavior;
}

Scope makefunc0_58_84_51705220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_51705220 = scope;
   scope->owner = (Object)func0_58_840_51703000;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_51318740();
   scope->systemIs[1] = makemy__interpolator_51457620();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_52010380();
   scope->inners[1] = makenext__data_43579460();
   scope->inners[2] = makeaddr_43575980();
   scope->inners[3] = makeinteger__part_46512680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55924780();
   scope->behaviors[1] = make__55924480();
   scope->behaviors[2] = make__55924080();
   scope->behaviors[3] = make__55942040();
   scope->behaviors[4] = make__55941840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_51703000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_51703000 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52057700();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_46179040();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_51705220();

   return systemT;
}