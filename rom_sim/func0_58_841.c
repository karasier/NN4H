#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_50243340;

SignalI z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makez__value_51454060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func0_58_841_50243340;
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

SignalI a_51622400_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makea_51622400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_51622400_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func0_58_841_50243340;
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

Block __52510060;

void code__52510060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
            first = value2integer(make__52624620());
            last = value2integer(make__52624600());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52510060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52510060 = block;
   block->owner = (Object)__52508580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52510060;

   return block;
};

Block __52508420;

void code__52508420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640,value2integer(make__52624300()),value2integer(make__52624120())));
      set_value_pos(pool_state);
   }
}

Block make__52508420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52508420 = block;
   block->owner = (Object)__52507740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52508420;

   return block;
};

Block __52507660;

void code__52507660() {
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
            src0 = make__52622220();
            src1 = make__52622160();
            src2 = make__52622000();
            src3 = make__52621980();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
            first = value2integer(make__52621640());
            last = value2integer(make__52621620());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_46314540_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52507660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52507660 = block;
   block->owner = (Object)__52506520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52507660;

   return block;
};

Block __52371700;

void code__52371700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,address_53505660_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_46314540_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,remaining_51700040_my__interpolator_58_842_51571100_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53505980_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,base_51942840_my__interpolator_58_842_51571100_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53635280_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,next__data_52098120_my__interpolator_58_842_51571100_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_52375940_my__interpolator_58_842_51571100_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,a_51622400_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52371700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52371700 = block;
   block->owner = (Object)__52574740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52371700;

   return block;
};

Block __52510640;

void code__52510640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53704320_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,base_53505980_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47491840_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,next__data_53635280_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52510640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52510640 = block;
   block->owner = (Object)__52574340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52510640;

   return block;
};

Value make__52624620() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52624600() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52624300() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52624120() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52622220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52622160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52622000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52621980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52621640() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52621620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_53385440;

SignalI base_53505980_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makebase_53505980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53505980_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func0_58_84_53385440;
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

SignalI next__data_53635280_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makenext__data_53635280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53635280_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func0_58_84_53385440;
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

SignalI address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeaddress_53635180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func0_58_84_53385440;
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

SignalI remaining_46314540_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeremaining_46314540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_46314540_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func0_58_84_53385440;
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

SystemI my__lut_47491540;

SystemI makemy__lut_47491540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_47491540 = systemI;
   systemI->owner = (Object)func0_58_84_53385440;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_53508420;

   return systemI;
};

SystemI my__interpolator_52375660;

SystemI makemy__interpolator_52375660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_52375660 = systemI;
   systemI->owner = (Object)func0_58_84_53385440;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_51571100;

   return systemI;
};

Behavior __52508580;

Behavior make__52508580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52508580 = behavior;
   behavior->owner = (Object)func0_58_84_53385440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__52510060();

   return behavior;
}

Behavior __52507740;

Behavior make__52507740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52507740 = behavior;
   behavior->owner = (Object)func0_58_84_53385440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__52508420();

   return behavior;
}

Behavior __52506520;

Behavior make__52506520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52506520 = behavior;
   behavior->owner = (Object)func0_58_84_53385440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[z__value_51454060_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__52507660();

   return behavior;
}

Behavior __52574740;

Behavior make__52574740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52574740 = behavior;
   behavior->owner = (Object)func0_58_84_53385440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[address_53635180_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_46314540_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   remaining_46314540_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   remaining_46314540_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(remaining_46314540_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,remaining_46314540_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
remaining_46314540_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[remaining_46314540_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53505980_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   base_53505980_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   base_53505980_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(base_53505980_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,base_53505980_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
base_53505980_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[base_53505980_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53635280_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   next__data_53635280_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   next__data_53635280_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(next__data_53635280_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,next__data_53635280_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
next__data_53635280_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[next__data_53635280_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_52375940_my__interpolator_58_842_51571100_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   interpolated__value_52375940_my__interpolator_58_842_51571100_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   interpolated__value_52375940_my__interpolator_58_842_51571100_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(interpolated__value_52375940_my__interpolator_58_842_51571100_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,interpolated__value_52375940_my__interpolator_58_842_51571100_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
interpolated__value_52375940_my__interpolator_58_842_51571100_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[interpolated__value_52375940_my__interpolator_58_842_51571100_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__52371700();

   return behavior;
}

Behavior __52574340;

Behavior make__52574340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52574340 = behavior;
   behavior->owner = (Object)func0_58_84_53385440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_53704320_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   base_53704320_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   base_53704320_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(base_53704320_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,base_53704320_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
base_53704320_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[base_53704320_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47491840_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   next__data_47491840_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   next__data_47491840_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(next__data_47491840_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,next__data_47491840_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
next__data_47491840_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[next__data_47491840_my__lut_58_842_53508420_func0_58_84_53385440_func0_58_841_50243340_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__52510640();

   return behavior;
}

Scope makefunc0_58_84_53385440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_53385440 = scope;
   scope->owner = (Object)func0_58_841_50243340;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_47491540();
   scope->systemIs[1] = makemy__interpolator_52375660();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53505980();
   scope->inners[1] = makenext__data_53635280();
   scope->inners[2] = makeaddress_53635180();
   scope->inners[3] = makeremaining_46314540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52508580();
   scope->behaviors[1] = make__52507740();
   scope->behaviors[2] = make__52506520();
   scope->behaviors[3] = make__52574740();
   scope->behaviors[4] = make__52574340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_50243340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_50243340 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51454060();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_51622400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_53385440();

   return systemT;
}