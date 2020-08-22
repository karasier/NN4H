#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_52581280;

SignalI z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makez__value_52878560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)func0_58_840_52581280;
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

SignalI a_52989820_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makea_52989820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52989820_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)func0_58_840_52581280;
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

Block __49253340;

void code__49253340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            first = value2integer(make__51352240());
            last = value2integer(make__51352180());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49253340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49253340 = block;
   block->owner = (Object)__49253020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49253340;

   return block;
};

Block __49252940;

void code__49252940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200,value2integer(make__51351980()),value2integer(make__51351960())));
      set_value_pos(pool_state);
   }
}

Block make__49252940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49252940 = block;
   block->owner = (Object)__49252140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49252940;

   return block;
};

Block __49251960;

void code__49251960() {
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
            src0 = make__51351160();
            src1 = make__51351060();
            src2 = make__51350920();
            src3 = make__51350720();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            first = value2integer(make__51350620());
            last = value2integer(make__51350600());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_52192660___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49251960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49251960 = block;
   block->owner = (Object)__49348560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49251960;

   return block;
};

Block __49253620;

void code__49253620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_52192660___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,remaining_53293680_my__interpolator_58_841_53118140___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51984900___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,base_44083480_my__interpolator_58_841_53118140___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52077040___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,next__data_47638360_my__interpolator_58_841_53118140___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_48305260_my__interpolator_58_841_53118140___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,a_52989820_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49253620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49253620 = block;
   block->owner = (Object)__51319120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49253620;

   return block;
};

Block __49253500;

void code__49253500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51771940_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,base_51984900___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51884980_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,next__data_52077040___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49253500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49253500 = block;
   block->owner = (Object)__51317640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49253500;

   return block;
};

Value make__51352240() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51352180() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51351980() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51351960() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51351160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51351060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51350920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51350720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51350620() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51350600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __51884720;

SignalI base_51984900___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makebase_51984900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51984900___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__51884720;
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

SignalI next__data_52077040___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makenext__data_52077040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52077040___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__51884720;
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

SignalI address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeaddress_52076960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__51884720;
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

SignalI remaining_52192660___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeremaining_52192660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_52192660___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__51884720;
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

SystemI my__lut_51884400;

SystemI makemy__lut_51884400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_51884400 = systemI;
   systemI->owner = (Object)__51884720;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_841_51669780;

   return systemI;
};

SystemI my__interpolator_48304900;

SystemI makemy__interpolator_48304900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_48304900 = systemI;
   systemI->owner = (Object)__51884720;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_841_53118140;

   return systemI;
};

Behavior __49253020;

Behavior make__49253020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49253020 = behavior;
   behavior->owner = (Object)__51884720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__49253340();

   return behavior;
}

Behavior __49252140;

Behavior make__49252140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49252140 = behavior;
   behavior->owner = (Object)__51884720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__49252940();

   return behavior;
}

Behavior __49348560;

Behavior make__49348560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49348560 = behavior;
   behavior->owner = (Object)__51884720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__49251960();

   return behavior;
}

Behavior __51319120;

Behavior make__51319120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51319120 = behavior;
   behavior->owner = (Object)__51884720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[address_52076960___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_52192660___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   remaining_52192660___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   remaining_52192660___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(remaining_52192660___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,remaining_52192660___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
remaining_52192660___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[remaining_52192660___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51984900___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   base_51984900___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   base_51984900___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(base_51984900___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,base_51984900___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
base_51984900___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[base_51984900___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_52077040___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   next__data_52077040___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   next__data_52077040___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(next__data_52077040___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,next__data_52077040___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
next__data_52077040___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[next__data_52077040___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_48305260_my__interpolator_58_841_53118140___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   interpolated__value_48305260_my__interpolator_58_841_53118140___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   interpolated__value_48305260_my__interpolator_58_841_53118140___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(interpolated__value_48305260_my__interpolator_58_841_53118140___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,interpolated__value_48305260_my__interpolator_58_841_53118140___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
interpolated__value_48305260_my__interpolator_58_841_53118140___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[interpolated__value_48305260_my__interpolator_58_841_53118140___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__49253620();

   return behavior;
}

Behavior __51317640;

Behavior make__51317640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51317640 = behavior;
   behavior->owner = (Object)__51884720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51771940_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   base_51771940_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   base_51771940_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(base_51771940_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,base_51771940_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
base_51771940_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[base_51771940_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51884980_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   next__data_51884980_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   next__data_51884980_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(next__data_51884980_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,next__data_51884980_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
next__data_51884980_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[next__data_51884980_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__49253500();

   return behavior;
}

Scope make__51884720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51884720 = scope;
   scope->owner = (Object)func0_58_840_52581280;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_51884400();
   scope->systemIs[1] = makemy__interpolator_48304900();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51984900();
   scope->inners[1] = makenext__data_52077040();
   scope->inners[2] = makeaddress_52076960();
   scope->inners[3] = makeremaining_52192660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49253020();
   scope->behaviors[1] = make__49252140();
   scope->behaviors[2] = make__49348560();
   scope->behaviors[3] = make__51319120();
   scope->behaviors[4] = make__51317640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_52581280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_52581280 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52878560();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52989820();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__51884720();

   return systemT;
}