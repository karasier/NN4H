#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_49228300;

SignalI z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makez__value_49517800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func1_58_840_49228300;
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

SignalI a_49698540_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makea_49698540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49698540_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func1_58_840_49228300;
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

Block __59924300;

void code__59924300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
            first = value2integer(make__59938080());
            last = value2integer(make__59938060());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59924300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59924300 = block;
   block->owner = (Object)__59924040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59924300;

   return block;
};

Block __59924000;

void code__59924000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160,value2integer(make__59937920()),value2integer(make__59937900())));
      set_value_pos(pool_state);
   }
}

Block make__59924000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59924000 = block;
   block->owner = (Object)__59923740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59924000;

   return block;
};

Block __59923700;

void code__59923700() {
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
            src0 = make__59937440();
            src1 = make__59937420();
            src2 = make__59937400();
            src3 = make__59937380();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
            first = value2integer(make__59937280());
            last = value2integer(make__59937260());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53522100_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59923700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59923700 = block;
   block->owner = (Object)__59923240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59923700;

   return block;
};

Block __59899980;

void code__59899980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,address_53268560_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53522100_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,remaining_49787560_my__interpolator_58_8400_49617340_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53175560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,base_49932180_my__interpolator_58_8400_49617340_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53297560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,next__data_51878800_my__interpolator_58_8400_49617340_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_51988600_my__interpolator_58_8400_49617340_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,a_49698540_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59899980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59899980 = block;
   block->owner = (Object)__59917780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59899980;

   return block;
};

Block __59899920;

void code__59899920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53456320_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,base_53175560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53619340_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,next__data_53297560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59899920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59899920 = block;
   block->owner = (Object)__59917620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59899920;

   return block;
};

Value make__59938080() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59938060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59937920() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59937900() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59937440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59937420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59937400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59937380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59937280() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59937260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_53056200;

SignalI base_53175560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makebase_53175560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53175560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func1_58_84_53056200;
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

SignalI next__data_53297560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makenext__data_53297560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53297560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func1_58_84_53056200;
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

SignalI address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeaddress_53297460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func1_58_84_53056200;
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

SignalI remaining_53522100_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeremaining_53522100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53522100_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func1_58_84_53056200;
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

SystemI my__lut_53619040;

SystemI makemy__lut_53619040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_53619040 = systemI;
   systemI->owner = (Object)func1_58_84_53056200;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_53271600;

   return systemI;
};

SystemI my__interpolator_51988440;

SystemI makemy__interpolator_51988440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_51988440 = systemI;
   systemI->owner = (Object)func1_58_84_53056200;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_49617340;

   return systemI;
};

Behavior __59924040;

Behavior make__59924040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59924040 = behavior;
   behavior->owner = (Object)func1_58_84_53056200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59924300();

   return behavior;
}

Behavior __59923740;

Behavior make__59923740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59923740 = behavior;
   behavior->owner = (Object)func1_58_84_53056200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59924000();

   return behavior;
}

Behavior __59923240;

Behavior make__59923240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59923240 = behavior;
   behavior->owner = (Object)func1_58_84_53056200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[z__value_49517800_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59923700();

   return behavior;
}

Behavior __59917780;

Behavior make__59917780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59917780 = behavior;
   behavior->owner = (Object)func1_58_84_53056200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[address_53297460_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_53522100_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   remaining_53522100_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   remaining_53522100_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(remaining_53522100_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,remaining_53522100_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
remaining_53522100_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[remaining_53522100_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53175560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   base_53175560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   base_53175560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(base_53175560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,base_53175560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
base_53175560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[base_53175560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53297560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   next__data_53297560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   next__data_53297560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(next__data_53297560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,next__data_53297560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
next__data_53297560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[next__data_53297560_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_51988600_my__interpolator_58_8400_49617340_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   interpolated__value_51988600_my__interpolator_58_8400_49617340_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   interpolated__value_51988600_my__interpolator_58_8400_49617340_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(interpolated__value_51988600_my__interpolator_58_8400_49617340_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,interpolated__value_51988600_my__interpolator_58_8400_49617340_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
interpolated__value_51988600_my__interpolator_58_8400_49617340_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[interpolated__value_51988600_my__interpolator_58_8400_49617340_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59899980();

   return behavior;
}

Behavior __59917620;

Behavior make__59917620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59917620 = behavior;
   behavior->owner = (Object)func1_58_84_53056200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_53456320_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   base_53456320_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   base_53456320_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(base_53456320_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,base_53456320_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
base_53456320_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[base_53456320_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_53619340_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   next__data_53619340_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   next__data_53619340_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(next__data_53619340_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,next__data_53619340_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
next__data_53619340_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[next__data_53619340_my__lut_58_8400_53271600_func1_58_84_53056200_func1_58_840_49228300_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59899920();

   return behavior;
}

Scope makefunc1_58_84_53056200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_53056200 = scope;
   scope->owner = (Object)func1_58_840_49228300;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_53619040();
   scope->systemIs[1] = makemy__interpolator_51988440();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53175560();
   scope->inners[1] = makenext__data_53297560();
   scope->inners[2] = makeaddress_53297460();
   scope->inners[3] = makeremaining_53522100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59924040();
   scope->behaviors[1] = make__59923740();
   scope->behaviors[2] = make__59923240();
   scope->behaviors[3] = make__59917780();
   scope->behaviors[4] = make__59917620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_49228300() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_49228300 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49517800();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49698540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_53056200();

   return systemT;
}