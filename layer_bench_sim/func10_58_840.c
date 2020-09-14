#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func10_58_840_51767980;

SignalI z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makez__value_52317040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func10_58_840_51767980;
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

SignalI a_58380900_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makea_58380900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_58380900_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func10_58_840_51767980;
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

Block __61225400;

void code__61225400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
            first = value2integer(make__61239160());
            last = value2integer(make__61239140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__61225400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61225400 = block;
   block->owner = (Object)__61225140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61225400;

   return block;
};

Block __61225100;

void code__61225100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700,value2integer(make__61239000()),value2integer(make__61238980())));
      set_value_pos(pool_state);
   }
}

Block make__61225100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61225100 = block;
   block->owner = (Object)__61224840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61225100;

   return block;
};

Block __61224800;

void code__61224800() {
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
            src0 = make__61238520();
            src1 = make__61238500();
            src2 = make__61238480();
            src3 = make__61238460();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
            first = value2integer(make__61238340());
            last = value2integer(make__61238320());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_59427960_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__61224800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61224800 = block;
   block->owner = (Object)__61224240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61224800;

   return block;
};

Block __61225620;

void code__61225620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_59427960_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,remaining_61242240_my__interpolator_58_8410_60994540_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59122340_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,base_61319880_my__interpolator_58_8410_60994540_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59217840_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,next__data_61422020_my__interpolator_58_8410_60994540_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_61565120_my__interpolator_58_8410_60994540_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,a_58380900_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__61225620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61225620 = block;
   block->owner = (Object)__61218880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61225620;

   return block;
};

Block __61225560;

void code__61225560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59573500_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,base_59122340_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59782220_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,next__data_59217840_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__61225560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61225560 = block;
   block->owner = (Object)__61243260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61225560;

   return block;
};

Value make__61239160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61239140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61239000() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61238980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61238520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61238500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61238480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61238460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61238340() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61238320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func10_58_84_58986160;

SignalI base_59122340_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makebase_59122340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_59122340_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func10_58_84_58986160;
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

SignalI next__data_59217840_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makenext__data_59217840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_59217840_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func10_58_84_58986160;
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

SignalI address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeaddress_59217760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func10_58_84_58986160;
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

SignalI remaining_59427960_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeremaining_59427960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_59427960_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func10_58_84_58986160;
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

SystemI my__lut_59782080;

SystemI makemy__lut_59782080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_59782080 = systemI;
   systemI->owner = (Object)func10_58_84_58986160;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_59473380;

   return systemI;
};

SystemI my__interpolator_61564980;

SystemI makemy__interpolator_61564980() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_61564980 = systemI;
   systemI->owner = (Object)func10_58_84_58986160;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_60994540;

   return systemI;
};

Behavior __61225140;

Behavior make__61225140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61225140 = behavior;
   behavior->owner = (Object)func10_58_84_58986160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__61225400();

   return behavior;
}

Behavior __61224840;

Behavior make__61224840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61224840 = behavior;
   behavior->owner = (Object)func10_58_84_58986160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__61225100();

   return behavior;
}

Behavior __61224240;

Behavior make__61224240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61224240 = behavior;
   behavior->owner = (Object)func10_58_84_58986160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__61224800();

   return behavior;
}

Behavior __61218880;

Behavior make__61218880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61218880 = behavior;
   behavior->owner = (Object)func10_58_84_58986160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[address_59217760_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_59427960_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   remaining_59427960_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   remaining_59427960_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(remaining_59427960_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,remaining_59427960_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
remaining_59427960_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[remaining_59427960_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_59122340_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   base_59122340_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   base_59122340_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(base_59122340_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,base_59122340_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
base_59122340_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[base_59122340_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_59217840_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   next__data_59217840_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   next__data_59217840_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(next__data_59217840_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,next__data_59217840_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
next__data_59217840_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[next__data_59217840_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_61565120_my__interpolator_58_8410_60994540_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   interpolated__value_61565120_my__interpolator_58_8410_60994540_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   interpolated__value_61565120_my__interpolator_58_8410_60994540_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(interpolated__value_61565120_my__interpolator_58_8410_60994540_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,interpolated__value_61565120_my__interpolator_58_8410_60994540_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
interpolated__value_61565120_my__interpolator_58_8410_60994540_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[interpolated__value_61565120_my__interpolator_58_8410_60994540_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__61225620();

   return behavior;
}

Behavior __61243260;

Behavior make__61243260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61243260 = behavior;
   behavior->owner = (Object)func10_58_84_58986160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_59573500_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   base_59573500_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   base_59573500_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(base_59573500_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,base_59573500_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
base_59573500_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[base_59573500_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_59782220_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   next__data_59782220_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   next__data_59782220_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(next__data_59782220_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,next__data_59782220_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
next__data_59782220_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[next__data_59782220_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__61225560();

   return behavior;
}

Scope makefunc10_58_84_58986160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func10_58_84_58986160 = scope;
   scope->owner = (Object)func10_58_840_51767980;
   scope->name = "func10:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_59782080();
   scope->systemIs[1] = makemy__interpolator_61564980();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_59122340();
   scope->inners[1] = makenext__data_59217840();
   scope->inners[2] = makeaddress_59217760();
   scope->inners[3] = makeremaining_59427960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61225140();
   scope->behaviors[1] = make__61224840();
   scope->behaviors[2] = make__61224240();
   scope->behaviors[3] = make__61218880();
   scope->behaviors[4] = make__61243260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc10_58_840_51767980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func10_58_840_51767980 = systemT;
systemT->owner = NULL;
   systemT->name = "func10:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52317040();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_58380900();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc10_58_84_58986160();

   return systemT;
}