#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_53172420;

SignalI z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makez__value_53373300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func0_58_840_53172420;
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

SignalI a_53681240_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makea_53681240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_53681240_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func0_58_840_53172420;
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

Block __60355860;

void code__60355860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
            first = value2integer(make__60468040());
            last = value2integer(make__60468020());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60355860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60355860 = block;
   block->owner = (Object)__60355460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60355860;

   return block;
};

Block __60355420;

void code__60355420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220,value2integer(make__60467880()),value2integer(make__60467860())));
      set_value_pos(pool_state);
   }
}

Block make__60355420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60355420 = block;
   block->owner = (Object)__60355160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60355420;

   return block;
};

Block __60355120;

void code__60355120() {
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
            src0 = make__60467300();
            src1 = make__60467280();
            src2 = make__60467260();
            src3 = make__60467240();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
            first = value2integer(make__60467140());
            last = value2integer(make__60467120());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53948380_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60355120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60355120 = block;
   block->owner = (Object)__60354660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60355120;

   return block;
};

Block __60356140;

void code__60356140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,address_52512640_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53948380_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,remaining_47568860_my__interpolator_58_842_47155500_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53461880_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,base_49029000_my__interpolator_58_842_47155500_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53774240_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,next__data_48684580_my__interpolator_58_842_47155500_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49202320_my__interpolator_58_842_47155500_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,a_53681240_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60356140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60356140 = block;
   block->owner = (Object)__60472140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60356140;

   return block;
};

Block __60356080;

void code__60356080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52592720_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,base_53461880_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52771500_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,next__data_53774240_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60356080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60356080 = block;
   block->owner = (Object)__60471940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60356080;

   return block;
};

Value make__60468040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60468020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60467880() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60467860() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60467300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60467280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60467260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60467240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60467140() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60467120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_53338360;

SignalI base_53461880_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makebase_53461880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53461880_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func0_58_84_53338360;
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

SignalI next__data_53774240_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makenext__data_53774240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53774240_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func0_58_84_53338360;
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

SignalI address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makeaddress_53774160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func0_58_84_53338360;
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

SignalI remaining_53948380_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makeremaining_53948380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53948380_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func0_58_84_53338360;
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

SystemI my__lut_52771280;

SystemI makemy__lut_52771280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52771280 = systemI;
   systemI->owner = (Object)func0_58_84_53338360;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_52514920;

   return systemI;
};

SystemI my__interpolator_49201900;

SystemI makemy__interpolator_49201900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49201900 = systemI;
   systemI->owner = (Object)func0_58_84_53338360;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_47155500;

   return systemI;
};

Behavior __60355460;

Behavior make__60355460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60355460 = behavior;
   behavior->owner = (Object)func0_58_84_53338360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60355860();

   return behavior;
}

Behavior __60355160;

Behavior make__60355160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60355160 = behavior;
   behavior->owner = (Object)func0_58_84_53338360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60355420();

   return behavior;
}

Behavior __60354660;

Behavior make__60354660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60354660 = behavior;
   behavior->owner = (Object)func0_58_84_53338360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[z__value_53373300_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60355120();

   return behavior;
}

Behavior __60472140;

Behavior make__60472140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60472140 = behavior;
   behavior->owner = (Object)func0_58_84_53338360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[address_53774160_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_53948380_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   remaining_53948380_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   remaining_53948380_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(remaining_53948380_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,remaining_53948380_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
remaining_53948380_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[remaining_53948380_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53461880_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   base_53461880_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   base_53461880_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(base_53461880_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,base_53461880_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
base_53461880_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[base_53461880_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53774240_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   next__data_53774240_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   next__data_53774240_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(next__data_53774240_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,next__data_53774240_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
next__data_53774240_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[next__data_53774240_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49202320_my__interpolator_58_842_47155500_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   interpolated__value_49202320_my__interpolator_58_842_47155500_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   interpolated__value_49202320_my__interpolator_58_842_47155500_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(interpolated__value_49202320_my__interpolator_58_842_47155500_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,interpolated__value_49202320_my__interpolator_58_842_47155500_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
interpolated__value_49202320_my__interpolator_58_842_47155500_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[interpolated__value_49202320_my__interpolator_58_842_47155500_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60356140();

   return behavior;
}

Behavior __60471940;

Behavior make__60471940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60471940 = behavior;
   behavior->owner = (Object)func0_58_84_53338360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52592720_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   base_52592720_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   base_52592720_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(base_52592720_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,base_52592720_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
base_52592720_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[base_52592720_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52771500_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   next__data_52771500_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   next__data_52771500_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(next__data_52771500_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,next__data_52771500_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
next__data_52771500_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[next__data_52771500_my__lut_58_842_52514920_func0_58_84_53338360_func0_58_840_53172420_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60356080();

   return behavior;
}

Scope makefunc0_58_84_53338360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_53338360 = scope;
   scope->owner = (Object)func0_58_840_53172420;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52771280();
   scope->systemIs[1] = makemy__interpolator_49201900();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53461880();
   scope->inners[1] = makenext__data_53774240();
   scope->inners[2] = makeaddress_53774160();
   scope->inners[3] = makeremaining_53948380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60355460();
   scope->behaviors[1] = make__60355160();
   scope->behaviors[2] = make__60354660();
   scope->behaviors[3] = make__60472140();
   scope->behaviors[4] = make__60471940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_53172420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_53172420 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53373300();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_53681240();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_53338360();

   return systemT;
}