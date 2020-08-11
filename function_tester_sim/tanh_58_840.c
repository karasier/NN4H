#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh_58_840_47028240;

SignalI z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860;

SignalI makez__value_47685760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860 = signalI;
   signalI->owner = (Object)tanh_58_840_47028240;
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

SignalI a_47446560_tanh_58_840_47028240___45255200______58_840_46825860;

SignalI makea_47446560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47446560_tanh_58_840_47028240___45255200______58_840_46825860 = signalI;
   signalI->owner = (Object)tanh_58_840_47028240;
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

Block __47025040;

void code__47025040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->c_value;
            first = value2integer(make__47526380());
            last = value2integer(make__47526360());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
}

Block make__47025040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47025040 = block;
   block->owner = (Object)__47024740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47025040;

   return block;
};

Block __47024680;

void code__47024680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860,value2integer(make__47526120()),value2integer(make__47526100())));
      set_value_pos(pool_state);
   }
}

Block make__47024680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47024680 = block;
   block->owner = (Object)__47024340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47024680;

   return block;
};

Block __47024280;

void code__47024280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__47525440();
            src1 = make__47525380();
            src2 = make__47525360();
            src3 = make__47525340();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_47295140___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
}

Block make__47024280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47024280 = block;
   block->owner = (Object)__47023880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47024280;

   return block;
};

Block __47025220;

void code__47025220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value,addr_46899660_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->c_value,z__value_47045460_my__interpolator_58_840_47372380___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_46903420___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value,base_47741620_my__interpolator_58_840_47372380___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47096760___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value,next__data_47425140_my__interpolator_58_840_47372380___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_47295140___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value,integer__part_47591260_my__interpolator_58_840_47372380___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_41224440_my__interpolator_58_840_47372380___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value,a_47446560_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
}

Block make__47025220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47025220 = block;
   block->owner = (Object)__47040100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47025220;

   return block;
};

Block __47025140;

void code__47025140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47115900_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value,base_46903420___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47367560_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->c_value,next__data_47096760___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
}

Block make__47025140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47025140 = block;
   block->owner = (Object)__47039820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47025140;

   return block;
};

Value make__47526380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47526360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47526120() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47526100() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47525440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47525380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47525360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47525340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope __46359360;

SignalI base_46903420___46359360_tanh_58_840_47028240___45255200______58_840_46825860;

SignalI makebase_46903420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_46903420___46359360_tanh_58_840_47028240___45255200______58_840_46825860 = signalI;
   signalI->owner = (Object)__46359360;
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

SignalI next__data_47096760___46359360_tanh_58_840_47028240___45255200______58_840_46825860;

SignalI makenext__data_47096760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47096760___46359360_tanh_58_840_47028240___45255200______58_840_46825860 = signalI;
   signalI->owner = (Object)__46359360;
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

SignalI addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860;

SignalI makeaddr_47096680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860 = signalI;
   signalI->owner = (Object)__46359360;
   signalI->name = "addr";
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

SignalI integer__part_47295140___46359360_tanh_58_840_47028240___45255200______58_840_46825860;

SignalI makeinteger__part_47295140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_47295140___46359360_tanh_58_840_47028240___45255200______58_840_46825860 = signalI;
   signalI->owner = (Object)__46359360;
   signalI->name = "integer_part";
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

SystemI my__lut_47367360;

SystemI makemy__lut_47367360() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_47367360 = systemI;
   systemI->owner = (Object)__46359360;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_840_46901700;

   return systemI;
};

SystemI my__interpolator_41223980;

SystemI makemy__interpolator_41223980() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_41223980 = systemI;
   systemI->owner = (Object)__46359360;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_840_47372380;

   return systemI;
};

Behavior __47024740;

Behavior make__47024740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47024740 = behavior;
   behavior->owner = (Object)__46359360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860);
   z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->any,z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->any[z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->block = make__47025040();

   return behavior;
}

Behavior __47024340;

Behavior make__47024340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47024340 = behavior;
   behavior->owner = (Object)__46359360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
   addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any,addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any[addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->block = make__47024680();

   return behavior;
}

Behavior __47023880;

Behavior make__47023880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47023880 = behavior;
   behavior->owner = (Object)__46359360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
   addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any,addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any[addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->block = make__47024280();

   return behavior;
}

Behavior __47040100;

Behavior make__47040100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47040100 = behavior;
   behavior->owner = (Object)__46359360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
   addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any,addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any[addr_47096680___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860);
   z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->any,z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->any[z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_46903420___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
   base_46903420___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   base_46903420___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(base_46903420___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any,base_46903420___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
base_46903420___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any[base_46903420___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47096760___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
   next__data_47096760___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   next__data_47096760___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(next__data_47096760___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any,next__data_47096760___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
next__data_47096760___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any[next__data_47096760___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_47295140___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
   integer__part_47295140___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   integer__part_47295140___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(integer__part_47295140___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any,integer__part_47295140___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
integer__part_47295140___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any[integer__part_47295140___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_41224440_my__interpolator_58_840_47372380___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
   interpolated__value_41224440_my__interpolator_58_840_47372380___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   interpolated__value_41224440_my__interpolator_58_840_47372380___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(interpolated__value_41224440_my__interpolator_58_840_47372380___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any,interpolated__value_41224440_my__interpolator_58_840_47372380___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
interpolated__value_41224440_my__interpolator_58_840_47372380___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any[interpolated__value_41224440_my__interpolator_58_840_47372380___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->block = make__47025220();

   return behavior;
}

Behavior __47039820;

Behavior make__47039820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47039820 = behavior;
   behavior->owner = (Object)__46359360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47115900_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
   base_47115900_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   base_47115900_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(base_47115900_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any,base_47115900_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
base_47115900_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any[base_47115900_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47367560_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860);
   next__data_47367560_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   next__data_47367560_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(next__data_47367560_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any,next__data_47367560_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
next__data_47367560_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->any[next__data_47367560_my__lut_58_840_46901700___46359360_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->block = make__47025140();

   return behavior;
}

Scope make__46359360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46359360 = scope;
   scope->owner = (Object)tanh_58_840_47028240;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_47367360();
   scope->systemIs[1] = makemy__interpolator_41223980();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_46903420();
   scope->inners[1] = makenext__data_47096760();
   scope->inners[2] = makeaddr_47096680();
   scope->inners[3] = makeinteger__part_47295140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47024740();
   scope->behaviors[1] = make__47024340();
   scope->behaviors[2] = make__47023880();
   scope->behaviors[3] = make__47040100();
   scope->behaviors[4] = make__47039820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh_58_840_47028240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh_58_840_47028240 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47685760();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47446560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__46359360();

   return systemT;
}