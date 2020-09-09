#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_53382340;

SignalI z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makez__value_53531820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func0_58_841_53382340;
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

SignalI a_53694160_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makea_53694160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_53694160_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func0_58_841_53382340;
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

Block __60468880;

void code__60468880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
            first = value2integer(make__60499260());
            last = value2integer(make__60499240());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60468880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60468880 = block;
   block->owner = (Object)__60468620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60468880;

   return block;
};

Block __60468580;

void code__60468580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700,value2integer(make__60499080()),value2integer(make__60499040())));
      set_value_pos(pool_state);
   }
}

Block make__60468580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60468580 = block;
   block->owner = (Object)__60468280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60468580;

   return block;
};

Block __60468240;

void code__60468240() {
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
            src0 = make__60498300();
            src1 = make__60498280();
            src2 = make__60498260();
            src3 = make__60498240();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
            first = value2integer(make__60498140());
            last = value2integer(make__60498120());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_54213920_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60468240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60468240 = block;
   block->owner = (Object)__60467720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60468240;

   return block;
};

Block __60469160;

void code__60469160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_54213920_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,remaining_45471520_my__interpolator_58_842_54562700_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53710560_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,base_47687860_my__interpolator_58_842_54562700_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53851360_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,next__data_47884240_my__interpolator_58_842_54562700_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_48373640_my__interpolator_58_842_54562700_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,a_53694160_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60469160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60469160 = block;
   block->owner = (Object)__60503280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60469160;

   return block;
};

Block __60469100;

void code__60469100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52918380_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,base_53710560_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53039800_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,next__data_53851360_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60469100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60469100 = block;
   block->owner = (Object)__60503120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60469100;

   return block;
};

Value make__60499260() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60499240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60499080() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60499040() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60498300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60498280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60498260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60498240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60498140() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60498120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_53570580;

SignalI base_53710560_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makebase_53710560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53710560_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func0_58_84_53570580;
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

SignalI next__data_53851360_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makenext__data_53851360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53851360_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func0_58_84_53570580;
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

SignalI address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeaddress_53851280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func0_58_84_53570580;
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

SignalI remaining_54213920_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeremaining_54213920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_54213920_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func0_58_84_53570580;
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

SystemI my__lut_53039660;

SystemI makemy__lut_53039660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_53039660 = systemI;
   systemI->owner = (Object)func0_58_84_53570580;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_52783180;

   return systemI;
};

SystemI my__interpolator_48387200;

SystemI makemy__interpolator_48387200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_48387200 = systemI;
   systemI->owner = (Object)func0_58_84_53570580;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_54562700;

   return systemI;
};

Behavior __60468620;

Behavior make__60468620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60468620 = behavior;
   behavior->owner = (Object)func0_58_84_53570580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60468880();

   return behavior;
}

Behavior __60468280;

Behavior make__60468280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60468280 = behavior;
   behavior->owner = (Object)func0_58_84_53570580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60468580();

   return behavior;
}

Behavior __60467720;

Behavior make__60467720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60467720 = behavior;
   behavior->owner = (Object)func0_58_84_53570580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60468240();

   return behavior;
}

Behavior __60503280;

Behavior make__60503280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60503280 = behavior;
   behavior->owner = (Object)func0_58_84_53570580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[address_53851280_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_54213920_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   remaining_54213920_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   remaining_54213920_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(remaining_54213920_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,remaining_54213920_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
remaining_54213920_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[remaining_54213920_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53710560_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   base_53710560_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   base_53710560_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(base_53710560_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,base_53710560_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
base_53710560_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[base_53710560_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53851360_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   next__data_53851360_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   next__data_53851360_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(next__data_53851360_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,next__data_53851360_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
next__data_53851360_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[next__data_53851360_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_48373640_my__interpolator_58_842_54562700_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   interpolated__value_48373640_my__interpolator_58_842_54562700_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   interpolated__value_48373640_my__interpolator_58_842_54562700_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(interpolated__value_48373640_my__interpolator_58_842_54562700_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,interpolated__value_48373640_my__interpolator_58_842_54562700_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
interpolated__value_48373640_my__interpolator_58_842_54562700_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[interpolated__value_48373640_my__interpolator_58_842_54562700_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60469160();

   return behavior;
}

Behavior __60503120;

Behavior make__60503120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60503120 = behavior;
   behavior->owner = (Object)func0_58_84_53570580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52918380_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   base_52918380_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   base_52918380_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(base_52918380_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,base_52918380_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
base_52918380_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[base_52918380_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_53039800_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   next__data_53039800_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   next__data_53039800_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(next__data_53039800_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,next__data_53039800_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
next__data_53039800_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[next__data_53039800_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60469100();

   return behavior;
}

Scope makefunc0_58_84_53570580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_53570580 = scope;
   scope->owner = (Object)func0_58_841_53382340;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_53039660();
   scope->systemIs[1] = makemy__interpolator_48387200();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53710560();
   scope->inners[1] = makenext__data_53851360();
   scope->inners[2] = makeaddress_53851280();
   scope->inners[3] = makeremaining_54213920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60468620();
   scope->behaviors[1] = make__60468280();
   scope->behaviors[2] = make__60467720();
   scope->behaviors[3] = make__60503280();
   scope->behaviors[4] = make__60503120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_53382340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_53382340 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53531820();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_53694160();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_53570580();

   return systemT;
}