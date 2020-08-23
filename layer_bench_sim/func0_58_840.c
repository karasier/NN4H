#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_51829420;

SignalI z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makez__value_51905340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)func0_58_840_51829420;
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

SignalI a_52063480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makea_52063480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52063480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)func0_58_840_51829420;
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

Block __52454520;

void code__52454520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
            first = value2integer(make__43556900());
            last = value2integer(make__44203780());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52454520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52454520 = block;
   block->owner = (Object)__52453760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52454520;

   return block;
};

Block __52453720;

void code__52453720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480,value2integer(make__44198040()),value2integer(make__43057100())));
      set_value_pos(pool_state);
   }
}

Block make__52453720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52453720 = block;
   block->owner = (Object)__52494180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52453720;

   return block;
};

Block __52494120;

void code__52494120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__42977520();
            src1 = make__42977440();
            src2 = make__42977360();
            src3 = make__42977160();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_50875740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52494120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52494120 = block;
   block->owner = (Object)__52493600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52494120;

   return block;
};

Block __52454800;

void code__52454800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,addr_48143160_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,z__value_52078480_my__interpolator_58_841_51951120_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50617620_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,base_52238300_my__interpolator_58_841_51951120_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50742820_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,next__data_52368220_my__interpolator_58_841_51951120_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_50875740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,integer__part_52538280_my__interpolator_58_841_51951120_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_45505540_my__interpolator_58_841_51951120_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,a_52063480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52454800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52454800 = block;
   block->owner = (Object)__52489300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52454800;

   return block;
};

Block __52454720;

void code__52454720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48367200_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,base_50617620_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47739860_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,next__data_50742820_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52454720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52454720 = block;
   block->owner = (Object)__52489140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52454720;

   return block;
};

Value make__43556900() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44203780() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44198040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__43057100() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__42977520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__42977440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__42977360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__42977160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_84_48813480;

SignalI base_50617620_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makebase_50617620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50617620_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)func0_58_84_48813480;
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

SignalI next__data_50742820_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makenext__data_50742820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50742820_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)func0_58_84_48813480;
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

SignalI addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeaddr_50742740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)func0_58_84_48813480;
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

SignalI integer__part_50875740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeinteger__part_50875740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_50875740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)func0_58_84_48813480;
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

SystemI my__lut_47739680;

SystemI makemy__lut_47739680() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_47739680 = systemI;
   systemI->owner = (Object)func0_58_84_48813480;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_841_48099860;

   return systemI;
};

SystemI my__interpolator_45505380;

SystemI makemy__interpolator_45505380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_45505380 = systemI;
   systemI->owner = (Object)func0_58_84_48813480;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_841_51951120;

   return systemI;
};

Behavior __52453760;

Behavior make__52453760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52453760 = behavior;
   behavior->owner = (Object)func0_58_84_48813480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52454520();

   return behavior;
}

Behavior __52494180;

Behavior make__52494180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52494180 = behavior;
   behavior->owner = (Object)func0_58_84_48813480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52453720();

   return behavior;
}

Behavior __52493600;

Behavior make__52493600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52493600 = behavior;
   behavior->owner = (Object)func0_58_84_48813480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52494120();

   return behavior;
}

Behavior __52489300;

Behavior make__52489300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52489300 = behavior;
   behavior->owner = (Object)func0_58_84_48813480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[addr_50742740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_50617620_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   base_50617620_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   base_50617620_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(base_50617620_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,base_50617620_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
base_50617620_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[base_50617620_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_50742820_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   next__data_50742820_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   next__data_50742820_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(next__data_50742820_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,next__data_50742820_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
next__data_50742820_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[next__data_50742820_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_50875740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   integer__part_50875740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   integer__part_50875740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(integer__part_50875740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,integer__part_50875740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
integer__part_50875740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[integer__part_50875740_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_45505540_my__interpolator_58_841_51951120_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   interpolated__value_45505540_my__interpolator_58_841_51951120_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   interpolated__value_45505540_my__interpolator_58_841_51951120_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(interpolated__value_45505540_my__interpolator_58_841_51951120_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,interpolated__value_45505540_my__interpolator_58_841_51951120_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
interpolated__value_45505540_my__interpolator_58_841_51951120_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[interpolated__value_45505540_my__interpolator_58_841_51951120_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52454800();

   return behavior;
}

Behavior __52489140;

Behavior make__52489140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52489140 = behavior;
   behavior->owner = (Object)func0_58_84_48813480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_48367200_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   base_48367200_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   base_48367200_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(base_48367200_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,base_48367200_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
base_48367200_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[base_48367200_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47739860_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   next__data_47739860_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   next__data_47739860_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(next__data_47739860_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,next__data_47739860_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
next__data_47739860_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[next__data_47739860_my__lut_58_841_48099860_func0_58_84_48813480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52454720();

   return behavior;
}

Scope makefunc0_58_84_48813480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_48813480 = scope;
   scope->owner = (Object)func0_58_840_51829420;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_47739680();
   scope->systemIs[1] = makemy__interpolator_45505380();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_50617620();
   scope->inners[1] = makenext__data_50742820();
   scope->inners[2] = makeaddr_50742740();
   scope->inners[3] = makeinteger__part_50875740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52453760();
   scope->behaviors[1] = make__52494180();
   scope->behaviors[2] = make__52493600();
   scope->behaviors[3] = make__52489300();
   scope->behaviors[4] = make__52489140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_51829420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_51829420 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51905340();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52063480();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_48813480();

   return systemT;
}