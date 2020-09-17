#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_53447580;

SignalI z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makez__value_53596420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func0_58_841_53447580;
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

SignalI a_53758780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makea_53758780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_53758780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func0_58_841_53447580;
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

Block __61670380;

void code__61670380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            first = value2integer(make__61708660());
            last = value2integer(make__61708640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61670380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61670380 = block;
   block->owner = (Object)__61670120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61670380;

   return block;
};

Block __61670080;

void code__61670080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080,value2integer(make__61708500()),value2integer(make__61708480())));
      set_value_pos(pool_state);
   }
}

Block make__61670080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61670080 = block;
   block->owner = (Object)__61669820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61670080;

   return block;
};

Block __61669760;

void code__61669760() {
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
            src0 = make__61707920();
            src1 = make__61707900();
            src2 = make__61707880();
            src3 = make__61707860();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
            first = value2integer(make__61707760());
            last = value2integer(make__61707740());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_54245860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61669760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61669760 = block;
   block->owner = (Object)__61693720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61669760;

   return block;
};

Block __61670600;

void code__61670600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,address_52677080_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_54245860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,remaining_47900260_my__interpolator_58_842_47458040_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53759320_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,base_49018180_my__interpolator_58_842_47458040_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54112860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,next__data_49169580_my__interpolator_58_842_47458040_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49368840_my__interpolator_58_842_47458040_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,a_53758780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61670600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61670600 = block;
   block->owner = (Object)__61688400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61670600;

   return block;
};

Block __61670540;

void code__61670540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52798400_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,base_53759320_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52911480_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,next__data_54112860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61670540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61670540 = block;
   block->owner = (Object)__61688240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61670540;

   return block;
};

Value make__61708660() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61708640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61708500() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61708480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61707920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61707900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61707880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61707860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61707760() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61707740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_53676780;

SignalI base_53759320_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makebase_53759320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53759320_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func0_58_84_53676780;
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

SignalI next__data_54112860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makenext__data_54112860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54112860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func0_58_84_53676780;
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

SignalI address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeaddress_54112740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func0_58_84_53676780;
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

SignalI remaining_54245860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeremaining_54245860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_54245860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func0_58_84_53676780;
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

SystemI my__lut_52911060;

SystemI makemy__lut_52911060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52911060 = systemI;
   systemI->owner = (Object)func0_58_84_53676780;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_52679380;

   return systemI;
};

SystemI my__interpolator_49368500;

SystemI makemy__interpolator_49368500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49368500 = systemI;
   systemI->owner = (Object)func0_58_84_53676780;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_47458040;

   return systemI;
};

Behavior __61670120;

Behavior make__61670120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61670120 = behavior;
   behavior->owner = (Object)func0_58_84_53676780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61670380();

   return behavior;
}

Behavior __61669820;

Behavior make__61669820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61669820 = behavior;
   behavior->owner = (Object)func0_58_84_53676780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61670080();

   return behavior;
}

Behavior __61693720;

Behavior make__61693720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61693720 = behavior;
   behavior->owner = (Object)func0_58_84_53676780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[z__value_53596420_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61669760();

   return behavior;
}

Behavior __61688400;

Behavior make__61688400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61688400 = behavior;
   behavior->owner = (Object)func0_58_84_53676780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[address_54112740_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_54245860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   remaining_54245860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   remaining_54245860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(remaining_54245860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,remaining_54245860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
remaining_54245860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[remaining_54245860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53759320_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   base_53759320_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   base_53759320_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(base_53759320_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,base_53759320_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
base_53759320_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[base_53759320_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_54112860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   next__data_54112860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   next__data_54112860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(next__data_54112860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,next__data_54112860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
next__data_54112860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[next__data_54112860_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49368840_my__interpolator_58_842_47458040_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   interpolated__value_49368840_my__interpolator_58_842_47458040_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   interpolated__value_49368840_my__interpolator_58_842_47458040_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(interpolated__value_49368840_my__interpolator_58_842_47458040_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,interpolated__value_49368840_my__interpolator_58_842_47458040_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
interpolated__value_49368840_my__interpolator_58_842_47458040_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[interpolated__value_49368840_my__interpolator_58_842_47458040_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61670600();

   return behavior;
}

Behavior __61688240;

Behavior make__61688240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61688240 = behavior;
   behavior->owner = (Object)func0_58_84_53676780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52798400_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   base_52798400_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   base_52798400_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(base_52798400_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,base_52798400_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
base_52798400_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[base_52798400_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52911480_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   next__data_52911480_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   next__data_52911480_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(next__data_52911480_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,next__data_52911480_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
next__data_52911480_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[next__data_52911480_my__lut_58_842_52679380_func0_58_84_53676780_func0_58_841_53447580_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61670540();

   return behavior;
}

Scope makefunc0_58_84_53676780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_53676780 = scope;
   scope->owner = (Object)func0_58_841_53447580;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52911060();
   scope->systemIs[1] = makemy__interpolator_49368500();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53759320();
   scope->inners[1] = makenext__data_54112860();
   scope->inners[2] = makeaddress_54112740();
   scope->inners[3] = makeremaining_54245860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61670120();
   scope->behaviors[1] = make__61669820();
   scope->behaviors[2] = make__61693720();
   scope->behaviors[3] = make__61688400();
   scope->behaviors[4] = make__61688240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_53447580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_53447580 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53596420();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_53758780();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_53676780();

   return systemT;
}