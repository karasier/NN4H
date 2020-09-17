#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_47267620;

SignalI z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makez__value_47595600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)func1_58_840_47267620;
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

SignalI a_47909160_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makea_47909160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47909160_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)func1_58_840_47267620;
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

Block __52623120;

void code__52623120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
            first = value2integer(make__52754860());
            last = value2integer(make__52754800());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52623120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52623120 = block;
   block->owner = (Object)__52622580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52623120;

   return block;
};

Block __52622480;

void code__52622480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160,value2integer(make__52754620()),value2integer(make__52754600())));
      set_value_pos(pool_state);
   }
}

Block make__52622480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52622480 = block;
   block->owner = (Object)__52622020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52622480;

   return block;
};

Block __52621980;

void code__52621980() {
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
            src0 = make__52753440();
            src1 = make__52753380();
            src2 = make__52753360();
            src3 = make__52753340();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
            first = value2integer(make__52753240());
            last = value2integer(make__52753220());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_51470920_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52621980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52621980 = block;
   block->owner = (Object)__52620440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52621980;

   return block;
};

Block __52623720;

void code__52623720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_51470920_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,remaining_47649380_my__interpolator_58_8400_47364740_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51312360_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,base_48381300_my__interpolator_58_8400_47364740_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51388720_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,next__data_48688620_my__interpolator_58_8400_47364740_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49161920_my__interpolator_58_8400_47364740_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,a_47909160_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52623720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52623720 = block;
   block->owner = (Object)__52739840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52623720;

   return block;
};

Block __52623600;

void code__52623600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51898540_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,base_51312360_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52069260_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,next__data_51388720_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52623600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52623600 = block;
   block->owner = (Object)__52739560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52623600;

   return block;
};

Value make__52754860() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52754800() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52754620() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52754600() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52753440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52753380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52753360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52753340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52753240() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52753220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_49417780;

SignalI base_51312360_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makebase_51312360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51312360_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)func1_58_84_49417780;
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

SignalI next__data_51388720_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makenext__data_51388720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51388720_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)func1_58_84_49417780;
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

SignalI address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeaddress_51388640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)func1_58_84_49417780;
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

SignalI remaining_51470920_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeremaining_51470920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51470920_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)func1_58_84_49417780;
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

SystemI my__lut_52068640;

SystemI makemy__lut_52068640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52068640 = systemI;
   systemI->owner = (Object)func1_58_84_49417780;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_51707160;

   return systemI;
};

SystemI my__interpolator_49161760;

SystemI makemy__interpolator_49161760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49161760 = systemI;
   systemI->owner = (Object)func1_58_84_49417780;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_47364740;

   return systemI;
};

Behavior __52622580;

Behavior make__52622580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52622580 = behavior;
   behavior->owner = (Object)func1_58_84_49417780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52623120();

   return behavior;
}

Behavior __52622020;

Behavior make__52622020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52622020 = behavior;
   behavior->owner = (Object)func1_58_84_49417780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52622480();

   return behavior;
}

Behavior __52620440;

Behavior make__52620440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52620440 = behavior;
   behavior->owner = (Object)func1_58_84_49417780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52621980();

   return behavior;
}

Behavior __52739840;

Behavior make__52739840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52739840 = behavior;
   behavior->owner = (Object)func1_58_84_49417780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[address_51388640_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_51470920_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   remaining_51470920_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   remaining_51470920_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(remaining_51470920_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,remaining_51470920_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
remaining_51470920_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[remaining_51470920_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51312360_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   base_51312360_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   base_51312360_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(base_51312360_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,base_51312360_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
base_51312360_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[base_51312360_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_51388720_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   next__data_51388720_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   next__data_51388720_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(next__data_51388720_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,next__data_51388720_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
next__data_51388720_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[next__data_51388720_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49161920_my__interpolator_58_8400_47364740_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   interpolated__value_49161920_my__interpolator_58_8400_47364740_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   interpolated__value_49161920_my__interpolator_58_8400_47364740_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(interpolated__value_49161920_my__interpolator_58_8400_47364740_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,interpolated__value_49161920_my__interpolator_58_8400_47364740_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
interpolated__value_49161920_my__interpolator_58_8400_47364740_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[interpolated__value_49161920_my__interpolator_58_8400_47364740_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52623720();

   return behavior;
}

Behavior __52739560;

Behavior make__52739560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52739560 = behavior;
   behavior->owner = (Object)func1_58_84_49417780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51898540_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   base_51898540_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   base_51898540_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(base_51898540_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,base_51898540_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
base_51898540_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[base_51898540_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52069260_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   next__data_52069260_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   next__data_52069260_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(next__data_52069260_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,next__data_52069260_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
next__data_52069260_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[next__data_52069260_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52623600();

   return behavior;
}

Scope makefunc1_58_84_49417780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_49417780 = scope;
   scope->owner = (Object)func1_58_840_47267620;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52068640();
   scope->systemIs[1] = makemy__interpolator_49161760();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51312360();
   scope->inners[1] = makenext__data_51388720();
   scope->inners[2] = makeaddress_51388640();
   scope->inners[3] = makeremaining_51470920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52622580();
   scope->behaviors[1] = make__52622020();
   scope->behaviors[2] = make__52620440();
   scope->behaviors[3] = make__52739840();
   scope->behaviors[4] = make__52739560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_47267620() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_47267620 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47595600();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47909160();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_49417780();

   return systemT;
}