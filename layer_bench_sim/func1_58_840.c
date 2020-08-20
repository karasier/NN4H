#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_55702360;

SignalI z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makez__value_55786200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)func1_58_840_55702360;
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

SignalI a_56066940_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makea_56066940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_56066940_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)func1_58_840_55702360;
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

Block __55599380;

void code__55599380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
            first = value2integer(make__55685940());
            last = value2integer(make__55685920());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55599380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55599380 = block;
   block->owner = (Object)__55599120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55599380;

   return block;
};

Block __55623620;

void code__55623620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760,value2integer(make__55685720()),value2integer(make__55685700())));
      set_value_pos(pool_state);
   }
}

Block make__55623620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55623620 = block;
   block->owner = (Object)__55623360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55623620;

   return block;
};

Block __55623320;

void code__55623320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__55685200();
            src1 = make__55685180();
            src2 = make__55685160();
            src3 = make__55685140();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_45926240___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55623320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55623320 = block;
   block->owner = (Object)__55622920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55623320;

   return block;
};

Block __55599540;

void code__55599540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,addr_55802840_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,z__value_57455620_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51471440___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,base_57674040_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_44975620___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,next__data_57802280_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_45926240___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,integer__part_45421580_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47402480_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,a_56066940_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55599540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55599540 = block;
   block->owner = (Object)__55616320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55599540;

   return block;
};

Block __55599480;

void code__55599480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56103160_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,base_51471440___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56141320_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value,next__data_44975620___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55599480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55599480 = block;
   block->owner = (Object)__55616120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55599480;

   return block;
};

Value make__55685940() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55685920() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55685720() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55685700() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55685200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55685180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55685160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55685140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope __51201500;

SignalI base_51471440___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makebase_51471440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51471440___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51201500;
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

SignalI next__data_44975620___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makenext__data_44975620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_44975620___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51201500;
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

SignalI addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeaddr_44975500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51201500;
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

SignalI integer__part_45926240___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeinteger__part_45926240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_45926240___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)__51201500;
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

SystemI my__lut_56141180;

SystemI makemy__lut_56141180() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_56141180 = systemI;
   systemI->owner = (Object)__51201500;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_55780200;

   return systemI;
};

SystemI my__interpolator_47402160;

SystemI makemy__interpolator_47402160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47402160 = systemI;
   systemI->owner = (Object)__51201500;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_57321000;

   return systemI;
};

Behavior __55599120;

Behavior make__55599120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55599120 = behavior;
   behavior->owner = (Object)__51201500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55599380();

   return behavior;
}

Behavior __55623360;

Behavior make__55623360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55623360 = behavior;
   behavior->owner = (Object)__51201500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55623620();

   return behavior;
}

Behavior __55622920;

Behavior make__55622920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55622920 = behavior;
   behavior->owner = (Object)__51201500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55623320();

   return behavior;
}

Behavior __55616320;

Behavior make__55616320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55616320 = behavior;
   behavior->owner = (Object)__51201500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[addr_44975500___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[z__value_55786200_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51471440___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   base_51471440___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   base_51471440___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(base_51471440___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,base_51471440___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
base_51471440___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[base_51471440___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_44975620___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   next__data_44975620___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   next__data_44975620___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(next__data_44975620___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,next__data_44975620___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
next__data_44975620___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[next__data_44975620___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_45926240___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   integer__part_45926240___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   integer__part_45926240___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(integer__part_45926240___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,integer__part_45926240___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
integer__part_45926240___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[integer__part_45926240___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_47402480_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   interpolated__value_47402480_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   interpolated__value_47402480_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(interpolated__value_47402480_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,interpolated__value_47402480_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
interpolated__value_47402480_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[interpolated__value_47402480_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55599540();

   return behavior;
}

Behavior __55616120;

Behavior make__55616120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55616120 = behavior;
   behavior->owner = (Object)__51201500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56103160_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   base_56103160_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   base_56103160_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(base_56103160_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,base_56103160_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
base_56103160_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[base_56103160_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_56141320_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   next__data_56141320_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   next__data_56141320_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(next__data_56141320_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,next__data_56141320_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
next__data_56141320_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[next__data_56141320_my__lut_58_8400_55780200___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55599480();

   return behavior;
}

Scope make__51201500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51201500 = scope;
   scope->owner = (Object)func1_58_840_55702360;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_56141180();
   scope->systemIs[1] = makemy__interpolator_47402160();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51471440();
   scope->inners[1] = makenext__data_44975620();
   scope->inners[2] = makeaddr_44975500();
   scope->inners[3] = makeinteger__part_45926240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55599120();
   scope->behaviors[1] = make__55623360();
   scope->behaviors[2] = make__55622920();
   scope->behaviors[3] = make__55616320();
   scope->behaviors[4] = make__55616120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_55702360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_55702360 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_55786200();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_56066940();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__51201500();

   return systemT;
}