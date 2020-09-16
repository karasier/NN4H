#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_52145200;

SignalI z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makez__value_52421220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func1_58_840_52145200;
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

SignalI a_52545620_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makea_52545620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52545620_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func1_58_840_52145200;
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

Block __60521820;

void code__60521820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
            first = value2integer(make__60551880());
            last = value2integer(make__60551860());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60521820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60521820 = block;
   block->owner = (Object)__60521560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60521820;

   return block;
};

Block __60521520;

void code__60521520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220,value2integer(make__60551680()),value2integer(make__60551620())));
      set_value_pos(pool_state);
   }
}

Block make__60521520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60521520 = block;
   block->owner = (Object)__60521220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60521520;

   return block;
};

Block __60521180;

void code__60521180() {
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
            src0 = make__60551060();
            src1 = make__60551040();
            src2 = make__60551020();
            src3 = make__60551000();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
            first = value2integer(make__60550900());
            last = value2integer(make__60550880());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47063540_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60521180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60521180 = block;
   block->owner = (Object)__60520660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60521180;

   return block;
};

Block __60522100;

void code__60522100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,address_47105920_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47063540_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,remaining_52511380_my__interpolator_58_8400_52411980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53848220_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,base_52664860_my__interpolator_58_8400_52411980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_42031980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,next__data_52818540_my__interpolator_58_8400_52411980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_52994620_my__interpolator_58_8400_52411980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,a_52545620_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60522100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60522100 = block;
   block->owner = (Object)__60514960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60522100;

   return block;
};

Block __60522020;

void code__60522020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47536100_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,base_53848220_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49037920_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,next__data_42031980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60522020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60522020 = block;
   block->owner = (Object)__60514780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60522020;

   return block;
};

Value make__60551880() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60551860() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60551680() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60551620() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60551060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60551040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60551020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60551000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60550900() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60550880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_53680680;

SignalI base_53848220_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makebase_53848220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53848220_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func1_58_84_53680680;
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

SignalI next__data_42031980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makenext__data_42031980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_42031980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func1_58_84_53680680;
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

SignalI address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makeaddress_42031380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func1_58_84_53680680;
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

SignalI remaining_47063540_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makeremaining_47063540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47063540_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func1_58_84_53680680;
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

SystemI my__lut_49037320;

SystemI makemy__lut_49037320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49037320 = systemI;
   systemI->owner = (Object)func1_58_84_53680680;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_47080380;

   return systemI;
};

SystemI my__interpolator_52994440;

SystemI makemy__interpolator_52994440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_52994440 = systemI;
   systemI->owner = (Object)func1_58_84_53680680;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_52411980;

   return systemI;
};

Behavior __60521560;

Behavior make__60521560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60521560 = behavior;
   behavior->owner = (Object)func1_58_84_53680680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60521820();

   return behavior;
}

Behavior __60521220;

Behavior make__60521220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60521220 = behavior;
   behavior->owner = (Object)func1_58_84_53680680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60521520();

   return behavior;
}

Behavior __60520660;

Behavior make__60520660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60520660 = behavior;
   behavior->owner = (Object)func1_58_84_53680680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[z__value_52421220_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60521180();

   return behavior;
}

Behavior __60514960;

Behavior make__60514960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60514960 = behavior;
   behavior->owner = (Object)func1_58_84_53680680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[address_42031380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47063540_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   remaining_47063540_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   remaining_47063540_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(remaining_47063540_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,remaining_47063540_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
remaining_47063540_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[remaining_47063540_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53848220_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   base_53848220_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   base_53848220_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(base_53848220_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,base_53848220_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
base_53848220_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[base_53848220_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_42031980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   next__data_42031980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   next__data_42031980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(next__data_42031980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,next__data_42031980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
next__data_42031980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[next__data_42031980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_52994620_my__interpolator_58_8400_52411980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   interpolated__value_52994620_my__interpolator_58_8400_52411980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   interpolated__value_52994620_my__interpolator_58_8400_52411980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(interpolated__value_52994620_my__interpolator_58_8400_52411980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,interpolated__value_52994620_my__interpolator_58_8400_52411980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
interpolated__value_52994620_my__interpolator_58_8400_52411980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[interpolated__value_52994620_my__interpolator_58_8400_52411980_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60522100();

   return behavior;
}

Behavior __60514780;

Behavior make__60514780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60514780 = behavior;
   behavior->owner = (Object)func1_58_84_53680680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47536100_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   base_47536100_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   base_47536100_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(base_47536100_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,base_47536100_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
base_47536100_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[base_47536100_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49037920_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   next__data_49037920_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   next__data_49037920_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(next__data_49037920_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,next__data_49037920_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
next__data_49037920_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[next__data_49037920_my__lut_58_8400_47080380_func1_58_84_53680680_func1_58_840_52145200_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60522020();

   return behavior;
}

Scope makefunc1_58_84_53680680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_53680680 = scope;
   scope->owner = (Object)func1_58_840_52145200;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49037320();
   scope->systemIs[1] = makemy__interpolator_52994440();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53848220();
   scope->inners[1] = makenext__data_42031980();
   scope->inners[2] = makeaddress_42031380();
   scope->inners[3] = makeremaining_47063540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60521560();
   scope->behaviors[1] = make__60521220();
   scope->behaviors[2] = make__60520660();
   scope->behaviors[3] = make__60514960();
   scope->behaviors[4] = make__60514780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_52145200() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_52145200 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52421220();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52545620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_53680680();

   return systemT;
}