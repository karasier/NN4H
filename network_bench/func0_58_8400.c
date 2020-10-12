#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_56071400;

SignalI z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makez__value_56276340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func0_58_8400_56071400;
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

SignalI a_56371120_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makea_56371120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_56371120_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func0_58_8400_56071400;
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

Block __57306240;

void code__57306240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            first = value2integer(make__57414100());
            last = value2integer(make__57414080());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__57306240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57306240 = block;
   block->owner = (Object)__57305940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57306240;

   return block;
};

Block __57305880;

void code__57305880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640,value2integer(make__57413920()),value2integer(make__57413900())));
      set_value_pos(pool_state);
   }
}

Block make__57305880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57305880 = block;
   block->owner = (Object)__57305400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57305880;

   return block;
};

Block __57305300;

void code__57305300() {
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
            src0 = make__57413280();
            src1 = make__57413260();
            src2 = make__57413180();
            src3 = make__57413120();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            first = value2integer(make__57412300());
            last = value2integer(make__57412280());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_58812160_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__57305300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57305300 = block;
   block->owner = (Object)__57304440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57305300;

   return block;
};

Block __57306460;

void code__57306460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,address_56161520_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_58812160_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,remaining_57739940_my__interpolator_58_8410_57609260_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58479580_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,base_57910680_my__interpolator_58_8410_57609260_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_58740320_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,next__data_58008340_my__interpolator_58_8410_57609260_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_58317660_my__interpolator_58_8410_57609260_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,a_56371120_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__57306460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57306460 = block;
   block->owner = (Object)__57362740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57306460;

   return block;
};

Block __57306400;

void code__57306400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56294400_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,base_58479580_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56390760_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,next__data_58740320_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__57306400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57306400 = block;
   block->owner = (Object)__57362540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57306400;

   return block;
};

Value make__57414100() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57414080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57413920() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57413900() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57413280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57413260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57413180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57413120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57412300() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57412280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_58164000;

SignalI base_58479580_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makebase_58479580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_58479580_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func0_58_840_58164000;
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

SignalI next__data_58740320_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makenext__data_58740320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_58740320_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func0_58_840_58164000;
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

SignalI address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeaddress_58740220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func0_58_840_58164000;
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

SignalI remaining_58812160_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeremaining_58812160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_58812160_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func0_58_840_58164000;
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

SystemI my__lut_56390620;

SystemI makemy__lut_56390620() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_56390620 = systemI;
   systemI->owner = (Object)func0_58_840_58164000;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_56164000;

   return systemI;
};

SystemI my__interpolator_58317480;

SystemI makemy__interpolator_58317480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_58317480 = systemI;
   systemI->owner = (Object)func0_58_840_58164000;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_57609260;

   return systemI;
};

Behavior __57305940;

Behavior make__57305940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57305940 = behavior;
   behavior->owner = (Object)func0_58_840_58164000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__57306240();

   return behavior;
}

Behavior __57305400;

Behavior make__57305400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57305400 = behavior;
   behavior->owner = (Object)func0_58_840_58164000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__57305880();

   return behavior;
}

Behavior __57304440;

Behavior make__57304440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57304440 = behavior;
   behavior->owner = (Object)func0_58_840_58164000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[z__value_56276340_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__57305300();

   return behavior;
}

Behavior __57362740;

Behavior make__57362740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57362740 = behavior;
   behavior->owner = (Object)func0_58_840_58164000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[address_58740220_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_58812160_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   remaining_58812160_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   remaining_58812160_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(remaining_58812160_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,remaining_58812160_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
remaining_58812160_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[remaining_58812160_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_58479580_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   base_58479580_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   base_58479580_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(base_58479580_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,base_58479580_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
base_58479580_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[base_58479580_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_58740320_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   next__data_58740320_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   next__data_58740320_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(next__data_58740320_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,next__data_58740320_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
next__data_58740320_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[next__data_58740320_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_58317660_my__interpolator_58_8410_57609260_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   interpolated__value_58317660_my__interpolator_58_8410_57609260_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   interpolated__value_58317660_my__interpolator_58_8410_57609260_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(interpolated__value_58317660_my__interpolator_58_8410_57609260_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,interpolated__value_58317660_my__interpolator_58_8410_57609260_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
interpolated__value_58317660_my__interpolator_58_8410_57609260_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[interpolated__value_58317660_my__interpolator_58_8410_57609260_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__57306460();

   return behavior;
}

Behavior __57362540;

Behavior make__57362540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57362540 = behavior;
   behavior->owner = (Object)func0_58_840_58164000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56294400_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   base_56294400_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   base_56294400_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(base_56294400_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,base_56294400_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
base_56294400_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[base_56294400_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_56390760_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   next__data_56390760_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   next__data_56390760_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(next__data_56390760_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,next__data_56390760_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
next__data_56390760_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[next__data_56390760_my__lut_58_8410_56164000_func0_58_840_58164000_func0_58_8400_56071400_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__57306400();

   return behavior;
}

Scope makefunc0_58_840_58164000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_58164000 = scope;
   scope->owner = (Object)func0_58_8400_56071400;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_56390620();
   scope->systemIs[1] = makemy__interpolator_58317480();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_58479580();
   scope->inners[1] = makenext__data_58740320();
   scope->inners[2] = makeaddress_58740220();
   scope->inners[3] = makeremaining_58812160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57305940();
   scope->behaviors[1] = make__57305400();
   scope->behaviors[2] = make__57304440();
   scope->behaviors[3] = make__57362740();
   scope->behaviors[4] = make__57362540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_56071400() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_56071400 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_56276340();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_56371120();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_58164000();

   return systemT;
}