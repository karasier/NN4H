#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_52305320;

SignalI z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makez__value_52564820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func1_58_840_52305320;
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

SignalI a_52713640_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makea_52713640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52713640_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func1_58_840_52305320;
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

Block __60664580;

void code__60664580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
            first = value2integer(make__60678180());
            last = value2integer(make__60678160());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60664580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60664580 = block;
   block->owner = (Object)__60664240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60664580;

   return block;
};

Block __60664200;

void code__60664200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700,value2integer(make__60718940()),value2integer(make__60718920())));
      set_value_pos(pool_state);
   }
}

Block make__60664200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60664200 = block;
   block->owner = (Object)__60663940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60664200;

   return block;
};

Block __60663900;

void code__60663900() {
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
            src0 = make__60718340();
            src1 = make__60718320();
            src2 = make__60718280();
            src3 = make__60718260();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
            first = value2integer(make__60718160());
            last = value2integer(make__60718120());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_45522820_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60663900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60663900 = block;
   block->owner = (Object)__60663400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60663900;

   return block;
};

Block __60664820;

void code__60664820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,address_45833120_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_45522820_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,remaining_52640260_my__interpolator_58_8400_52465720_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53981840_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,base_52775460_my__interpolator_58_8400_52465720_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54101260_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,next__data_52954080_my__interpolator_58_8400_52465720_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_53138100_my__interpolator_58_8400_52465720_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,a_52713640_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60664820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60664820 = block;
   block->owner = (Object)__60682280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60664820;

   return block;
};

Block __60664760;

void code__60664760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47694220_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,base_53981840_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48171080_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,next__data_54101260_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60664760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60664760 = block;
   block->owner = (Object)__60682080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60664760;

   return block;
};

Value make__60678180() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60678160() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60718940() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60718920() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60718340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60718320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60718280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60718260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60718160() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60718120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_53773360;

SignalI base_53981840_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makebase_53981840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53981840_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func1_58_84_53773360;
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

SignalI next__data_54101260_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makenext__data_54101260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54101260_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func1_58_84_53773360;
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

SignalI address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makeaddress_54101120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func1_58_84_53773360;
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

SignalI remaining_45522820_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makeremaining_45522820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_45522820_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func1_58_84_53773360;
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

SystemI my__lut_48170760;

SystemI makemy__lut_48170760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_48170760 = systemI;
   systemI->owner = (Object)func1_58_84_53773360;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_45650120;

   return systemI;
};

SystemI my__interpolator_53137960;

SystemI makemy__interpolator_53137960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_53137960 = systemI;
   systemI->owner = (Object)func1_58_84_53773360;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_52465720;

   return systemI;
};

Behavior __60664240;

Behavior make__60664240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60664240 = behavior;
   behavior->owner = (Object)func1_58_84_53773360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60664580();

   return behavior;
}

Behavior __60663940;

Behavior make__60663940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60663940 = behavior;
   behavior->owner = (Object)func1_58_84_53773360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60664200();

   return behavior;
}

Behavior __60663400;

Behavior make__60663400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60663400 = behavior;
   behavior->owner = (Object)func1_58_84_53773360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[z__value_52564820_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60663900();

   return behavior;
}

Behavior __60682280;

Behavior make__60682280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60682280 = behavior;
   behavior->owner = (Object)func1_58_84_53773360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[address_54101120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_45522820_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   remaining_45522820_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   remaining_45522820_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(remaining_45522820_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,remaining_45522820_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
remaining_45522820_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[remaining_45522820_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53981840_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   base_53981840_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   base_53981840_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(base_53981840_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,base_53981840_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
base_53981840_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[base_53981840_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_54101260_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   next__data_54101260_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   next__data_54101260_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(next__data_54101260_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,next__data_54101260_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
next__data_54101260_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[next__data_54101260_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_53138100_my__interpolator_58_8400_52465720_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   interpolated__value_53138100_my__interpolator_58_8400_52465720_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   interpolated__value_53138100_my__interpolator_58_8400_52465720_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(interpolated__value_53138100_my__interpolator_58_8400_52465720_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,interpolated__value_53138100_my__interpolator_58_8400_52465720_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
interpolated__value_53138100_my__interpolator_58_8400_52465720_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[interpolated__value_53138100_my__interpolator_58_8400_52465720_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60664820();

   return behavior;
}

Behavior __60682080;

Behavior make__60682080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60682080 = behavior;
   behavior->owner = (Object)func1_58_84_53773360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47694220_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   base_47694220_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   base_47694220_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(base_47694220_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,base_47694220_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
base_47694220_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[base_47694220_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_48171080_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   next__data_48171080_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   next__data_48171080_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(next__data_48171080_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,next__data_48171080_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
next__data_48171080_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[next__data_48171080_my__lut_58_8400_45650120_func1_58_84_53773360_func1_58_840_52305320_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60664760();

   return behavior;
}

Scope makefunc1_58_84_53773360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_53773360 = scope;
   scope->owner = (Object)func1_58_840_52305320;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_48170760();
   scope->systemIs[1] = makemy__interpolator_53137960();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53981840();
   scope->inners[1] = makenext__data_54101260();
   scope->inners[2] = makeaddress_54101120();
   scope->inners[3] = makeremaining_45522820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60664240();
   scope->behaviors[1] = make__60663940();
   scope->behaviors[2] = make__60663400();
   scope->behaviors[3] = make__60682280();
   scope->behaviors[4] = make__60682080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_52305320() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_52305320 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52564820();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52713640();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_53773360();

   return systemT;
}