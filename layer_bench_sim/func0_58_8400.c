#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_55133860;

SignalI z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makez__value_57947840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func0_58_8400_55133860;
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

SignalI a_57787760_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makea_57787760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_57787760_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func0_58_8400_55133860;
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

Block __61958100;

void code__61958100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
            first = value2integer(make__61972520());
            last = value2integer(make__61972500());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61958100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61958100 = block;
   block->owner = (Object)__61957840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61958100;

   return block;
};

Block __61957800;

void code__61957800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740,value2integer(make__62029660()),value2integer(make__62029640())));
      set_value_pos(pool_state);
   }
}

Block make__61957800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61957800 = block;
   block->owner = (Object)__61957540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61957800;

   return block;
};

Block __61957500;

void code__61957500() {
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
            src0 = make__62029180();
            src1 = make__62029160();
            src2 = make__62029140();
            src3 = make__62029120();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
            first = value2integer(make__62029020());
            last = value2integer(make__62029000());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_51259800_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61957500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61957500 = block;
   block->owner = (Object)__61957040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61957500;

   return block;
};

Block __61958320;

void code__61958320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,address_61246200_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_51259800_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,remaining_62634280_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49549180_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,base_62697040_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49790540_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,next__data_62776180_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_62920800_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,a_57787760_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61958320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61958320 = block;
   block->owner = (Object)__61976420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61958320;

   return block;
};

Block __61958260;

void code__61958260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_61308940_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,base_49549180_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_61428980_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,next__data_49790540_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61958260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61958260 = block;
   block->owner = (Object)__61976260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61958260;

   return block;
};

Value make__61972520() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61972500() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62029660() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62029640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62029180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62029160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62029140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62029120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62029020() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62029000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_55182960;

SignalI base_49549180_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makebase_49549180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49549180_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func0_58_840_55182960;
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

SignalI next__data_49790540_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makenext__data_49790540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49790540_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func0_58_840_55182960;
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

SignalI address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeaddress_49790240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func0_58_840_55182960;
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

SignalI remaining_51259800_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeremaining_51259800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51259800_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func0_58_840_55182960;
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

SystemI my__lut_61428840;

SystemI makemy__lut_61428840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_61428840 = systemI;
   systemI->owner = (Object)func0_58_840_55182960;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_61248100;

   return systemI;
};

SystemI my__interpolator_62920660;

SystemI makemy__interpolator_62920660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_62920660 = systemI;
   systemI->owner = (Object)func0_58_840_55182960;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_62499640;

   return systemI;
};

Behavior __61957840;

Behavior make__61957840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61957840 = behavior;
   behavior->owner = (Object)func0_58_840_55182960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61958100();

   return behavior;
}

Behavior __61957540;

Behavior make__61957540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61957540 = behavior;
   behavior->owner = (Object)func0_58_840_55182960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61957800();

   return behavior;
}

Behavior __61957040;

Behavior make__61957040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61957040 = behavior;
   behavior->owner = (Object)func0_58_840_55182960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61957500();

   return behavior;
}

Behavior __61976420;

Behavior make__61976420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61976420 = behavior;
   behavior->owner = (Object)func0_58_840_55182960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[address_49790240_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_51259800_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   remaining_51259800_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   remaining_51259800_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(remaining_51259800_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,remaining_51259800_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
remaining_51259800_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[remaining_51259800_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_49549180_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   base_49549180_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   base_49549180_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(base_49549180_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,base_49549180_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
base_49549180_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[base_49549180_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_49790540_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   next__data_49790540_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   next__data_49790540_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(next__data_49790540_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,next__data_49790540_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
next__data_49790540_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[next__data_49790540_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_62920800_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   interpolated__value_62920800_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   interpolated__value_62920800_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(interpolated__value_62920800_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,interpolated__value_62920800_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
interpolated__value_62920800_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[interpolated__value_62920800_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61958320();

   return behavior;
}

Behavior __61976260;

Behavior make__61976260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61976260 = behavior;
   behavior->owner = (Object)func0_58_840_55182960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_61308940_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   base_61308940_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   base_61308940_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(base_61308940_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,base_61308940_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
base_61308940_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[base_61308940_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_61428980_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   next__data_61428980_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   next__data_61428980_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(next__data_61428980_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,next__data_61428980_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
next__data_61428980_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[next__data_61428980_my__lut_58_8410_61248100_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61958260();

   return behavior;
}

Scope makefunc0_58_840_55182960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_55182960 = scope;
   scope->owner = (Object)func0_58_8400_55133860;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_61428840();
   scope->systemIs[1] = makemy__interpolator_62920660();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49549180();
   scope->inners[1] = makenext__data_49790540();
   scope->inners[2] = makeaddress_49790240();
   scope->inners[3] = makeremaining_51259800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61957840();
   scope->behaviors[1] = make__61957540();
   scope->behaviors[2] = make__61957040();
   scope->behaviors[3] = make__61976420();
   scope->behaviors[4] = make__61976260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_55133860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_55133860 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_57947840();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_57787760();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_55182960();

   return systemT;
}