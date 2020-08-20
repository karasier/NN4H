#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_50854860;

SignalI z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makez__value_51030300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)func0_58_840_50854860;
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

SignalI a_51202020_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makea_51202020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_51202020_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)func0_58_840_50854860;
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

Block __55540820;

void code__55540820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
            first = value2integer(make__55586640());
            last = value2integer(make__55586620());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55540820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55540820 = block;
   block->owner = (Object)__55540560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55540820;

   return block;
};

Block __55540520;

void code__55540520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760,value2integer(make__55586380()),value2integer(make__55586360())));
      set_value_pos(pool_state);
   }
}

Block make__55540520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55540520 = block;
   block->owner = (Object)__55540220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55540520;

   return block;
};

Block __55540180;

void code__55540180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__55585800();
            src1 = make__55585780();
            src2 = make__55585760();
            src3 = make__55585740();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_51475120___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55540180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55540180 = block;
   block->owner = (Object)__55539760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55540180;

   return block;
};

Block __55540980;

void code__55540980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,addr_50100240_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,z__value_49690340_my__interpolator_58_841_49079180___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51106000___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,base_49957160_my__interpolator_58_841_49079180___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51224980___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,next__data_50113840_my__interpolator_58_841_49079180___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_51475120___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,integer__part_50379740_my__interpolator_58_841_49079180___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50566720_my__interpolator_58_841_49079180___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,a_51202020_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55540980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55540980 = block;
   block->owner = (Object)__55590640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55540980;

   return block;
};

Block __55540920;

void code__55540920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50302640_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,base_51106000___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50462980_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,next__data_51224980___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55540920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55540920 = block;
   block->owner = (Object)__55590460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55540920;

   return block;
};

Value make__55586640() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55586620() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55586380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55586360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55585800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55585780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55585760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55585740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope __50988700;

SignalI base_51106000___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makebase_51106000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51106000___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50988700;
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

SignalI next__data_51224980___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makenext__data_51224980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51224980___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50988700;
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

SignalI addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeaddr_51224900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50988700;
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

SignalI integer__part_51475120___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeinteger__part_51475120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_51475120___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__50988700;
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

SystemI my__lut_50462820;

SystemI makemy__lut_50462820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50462820 = systemI;
   systemI->owner = (Object)__50988700;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_841_50062040;

   return systemI;
};

SystemI my__interpolator_50566580;

SystemI makemy__interpolator_50566580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50566580 = systemI;
   systemI->owner = (Object)__50988700;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_841_49079180;

   return systemI;
};

Behavior __55540560;

Behavior make__55540560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55540560 = behavior;
   behavior->owner = (Object)__50988700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55540820();

   return behavior;
}

Behavior __55540220;

Behavior make__55540220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55540220 = behavior;
   behavior->owner = (Object)__50988700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55540520();

   return behavior;
}

Behavior __55539760;

Behavior make__55539760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55539760 = behavior;
   behavior->owner = (Object)__50988700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55540180();

   return behavior;
}

Behavior __55590640;

Behavior make__55590640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55590640 = behavior;
   behavior->owner = (Object)__50988700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[addr_51224900___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[z__value_51030300_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51106000___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   base_51106000___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   base_51106000___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(base_51106000___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,base_51106000___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
base_51106000___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[base_51106000___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_51224980___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   next__data_51224980___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   next__data_51224980___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(next__data_51224980___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,next__data_51224980___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
next__data_51224980___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[next__data_51224980___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_51475120___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   integer__part_51475120___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   integer__part_51475120___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(integer__part_51475120___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,integer__part_51475120___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
integer__part_51475120___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[integer__part_51475120___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_50566720_my__interpolator_58_841_49079180___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   interpolated__value_50566720_my__interpolator_58_841_49079180___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   interpolated__value_50566720_my__interpolator_58_841_49079180___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(interpolated__value_50566720_my__interpolator_58_841_49079180___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,interpolated__value_50566720_my__interpolator_58_841_49079180___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
interpolated__value_50566720_my__interpolator_58_841_49079180___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[interpolated__value_50566720_my__interpolator_58_841_49079180___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55540980();

   return behavior;
}

Behavior __55590460;

Behavior make__55590460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55590460 = behavior;
   behavior->owner = (Object)__50988700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50302640_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   base_50302640_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   base_50302640_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(base_50302640_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,base_50302640_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
base_50302640_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[base_50302640_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50462980_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   next__data_50462980_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   next__data_50462980_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(next__data_50462980_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,next__data_50462980_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
next__data_50462980_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[next__data_50462980_my__lut_58_841_50062040___50988700_func0_58_840_50854860___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55540920();

   return behavior;
}

Scope make__50988700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50988700 = scope;
   scope->owner = (Object)func0_58_840_50854860;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50462820();
   scope->systemIs[1] = makemy__interpolator_50566580();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51106000();
   scope->inners[1] = makenext__data_51224980();
   scope->inners[2] = makeaddr_51224900();
   scope->inners[3] = makeinteger__part_51475120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55540560();
   scope->behaviors[1] = make__55540220();
   scope->behaviors[2] = make__55539760();
   scope->behaviors[3] = make__55590640();
   scope->behaviors[4] = make__55590460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_50854860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_50854860 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51030300();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_51202020();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__50988700();

   return systemT;
}