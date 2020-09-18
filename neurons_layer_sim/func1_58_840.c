#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_51651680;

SignalI z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makez__value_51868060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func1_58_840_51651680;
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

SignalI a_52247700_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makea_52247700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52247700_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func1_58_840_51651680;
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

Block __51285480;

void code__51285480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
            first = value2integer(make__51383160());
            last = value2integer(make__51383120());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51285480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51285480 = block;
   block->owner = (Object)__51285000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51285480;

   return block;
};

Block __51284900;

void code__51284900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680,value2integer(make__51382480()),value2integer(make__51382400())));
      set_value_pos(pool_state);
   }
}

Block make__51284900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51284900 = block;
   block->owner = (Object)__51284560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51284900;

   return block;
};

Block __51284520;

void code__51284520() {
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
            src0 = make__51381300();
            src1 = make__51381280();
            src2 = make__51381220();
            src3 = make__51381160();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
            first = value2integer(make__51381020());
            last = value2integer(make__51381000());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_51583420_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51284520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51284520 = block;
   block->owner = (Object)__51283640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51284520;

   return block;
};

Block __51287860;

void code__51287860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,address_52640120_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_51583420_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,remaining_51500960_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51100200_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,base_51657060_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51386180_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,next__data_51854080_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_52180180_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,a_52247700_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51287860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51287860 = block;
   block->owner = (Object)__51335320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51287860;

   return block;
};

Block __51287520;

void code__51287520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52904480_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,base_51100200_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53158860_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,next__data_51386180_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51287520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51287520 = block;
   block->owner = (Object)__51334780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51287520;

   return block;
};

Value make__51383160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51383120() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51382480() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51382400() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51381300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51381280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51381220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51381160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51381020() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51381000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_49733680;

SignalI base_51100200_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makebase_51100200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51100200_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func1_58_84_49733680;
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

SignalI next__data_51386180_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makenext__data_51386180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51386180_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func1_58_84_49733680;
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

SignalI address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeaddress_51386100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func1_58_84_49733680;
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

SignalI remaining_51583420_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeremaining_51583420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51583420_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)func1_58_84_49733680;
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

SystemI my__lut_53158600;

SystemI makemy__lut_53158600() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_53158600 = systemI;
   systemI->owner = (Object)func1_58_84_49733680;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_52602520;

   return systemI;
};

SystemI my__interpolator_52180020;

SystemI makemy__interpolator_52180020() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_52180020 = systemI;
   systemI->owner = (Object)func1_58_84_49733680;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_51094720;

   return systemI;
};

Behavior __51285000;

Behavior make__51285000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51285000 = behavior;
   behavior->owner = (Object)func1_58_84_49733680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51285480();

   return behavior;
}

Behavior __51284560;

Behavior make__51284560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51284560 = behavior;
   behavior->owner = (Object)func1_58_84_49733680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51284900();

   return behavior;
}

Behavior __51283640;

Behavior make__51283640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51283640 = behavior;
   behavior->owner = (Object)func1_58_84_49733680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51284520();

   return behavior;
}

Behavior __51335320;

Behavior make__51335320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51335320 = behavior;
   behavior->owner = (Object)func1_58_84_49733680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[address_51386100_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_51583420_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   remaining_51583420_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   remaining_51583420_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(remaining_51583420_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,remaining_51583420_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
remaining_51583420_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[remaining_51583420_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51100200_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   base_51100200_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   base_51100200_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(base_51100200_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,base_51100200_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
base_51100200_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[base_51100200_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_51386180_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   next__data_51386180_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   next__data_51386180_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(next__data_51386180_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,next__data_51386180_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
next__data_51386180_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[next__data_51386180_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_52180180_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   interpolated__value_52180180_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   interpolated__value_52180180_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(interpolated__value_52180180_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,interpolated__value_52180180_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
interpolated__value_52180180_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[interpolated__value_52180180_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51287860();

   return behavior;
}

Behavior __51334780;

Behavior make__51334780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51334780 = behavior;
   behavior->owner = (Object)func1_58_84_49733680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52904480_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   base_52904480_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   base_52904480_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(base_52904480_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,base_52904480_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
base_52904480_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[base_52904480_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_53158860_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   next__data_53158860_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   next__data_53158860_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(next__data_53158860_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,next__data_53158860_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
next__data_53158860_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[next__data_53158860_my__lut_58_8400_52602520_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51287520();

   return behavior;
}

Scope makefunc1_58_84_49733680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_49733680 = scope;
   scope->owner = (Object)func1_58_840_51651680;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_53158600();
   scope->systemIs[1] = makemy__interpolator_52180020();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51100200();
   scope->inners[1] = makenext__data_51386180();
   scope->inners[2] = makeaddress_51386100();
   scope->inners[3] = makeremaining_51583420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51285000();
   scope->behaviors[1] = make__51284560();
   scope->behaviors[2] = make__51283640();
   scope->behaviors[3] = make__51335320();
   scope->behaviors[4] = make__51334780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_51651680() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_51651680 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51868060();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52247700();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_49733680();

   return systemT;
}