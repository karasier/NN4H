#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_52772800;

SignalI z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makez__value_52930800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func0_58_840_52772800;
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

SignalI a_53056980_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makea_53056980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_53056980_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func0_58_840_52772800;
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

Block __59873300;

void code__59873300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
            first = value2integer(make__59886980());
            last = value2integer(make__59886960());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59873300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59873300 = block;
   block->owner = (Object)__59873040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59873300;

   return block;
};

Block __59873000;

void code__59873000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160,value2integer(make__59886800()),value2integer(make__59886760())));
      set_value_pos(pool_state);
   }
}

Block make__59873000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59873000 = block;
   block->owner = (Object)__59872740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59873000;

   return block;
};

Block __59872700;

void code__59872700() {
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
            src0 = make__59886240();
            src1 = make__59886200();
            src2 = make__59886180();
            src3 = make__59886160();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
            first = value2integer(make__59886040());
            last = value2integer(make__59886020());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53620140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59872700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59872700 = block;
   block->owner = (Object)__59872200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59872700;

   return block;
};

Block __59873580;

void code__59873580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,address_51992160_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53620140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,remaining_53843180_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53298140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,base_54185900_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53471220_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,next__data_54331300_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_54444220_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,a_53056980_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59873580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59873580 = block;
   block->owner = (Object)__59891140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59873580;

   return block;
};

Block __59873500;

void code__59873500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52186260_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,base_53298140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52291360_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,next__data_53471220_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59873500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59873500 = block;
   block->owner = (Object)__59890980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59873500;

   return block;
};

Value make__59886980() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59886960() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59886800() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59886760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59886240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59886200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59886180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59886160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59886040() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59886020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_53255540;

SignalI base_53298140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makebase_53298140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53298140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func0_58_84_53255540;
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

SignalI next__data_53471220_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makenext__data_53471220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53471220_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func0_58_84_53255540;
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

SignalI address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeaddress_53471140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func0_58_84_53255540;
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

SignalI remaining_53620140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeremaining_53620140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53620140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)func0_58_84_53255540;
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

SystemI my__lut_52291200;

SystemI makemy__lut_52291200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52291200 = systemI;
   systemI->owner = (Object)func0_58_84_53255540;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_51994440;

   return systemI;
};

SystemI my__interpolator_54444040;

SystemI makemy__interpolator_54444040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_54444040 = systemI;
   systemI->owner = (Object)func0_58_84_53255540;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_53666540;

   return systemI;
};

Behavior __59873040;

Behavior make__59873040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59873040 = behavior;
   behavior->owner = (Object)func0_58_84_53255540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59873300();

   return behavior;
}

Behavior __59872740;

Behavior make__59872740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59872740 = behavior;
   behavior->owner = (Object)func0_58_84_53255540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59873000();

   return behavior;
}

Behavior __59872200;

Behavior make__59872200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59872200 = behavior;
   behavior->owner = (Object)func0_58_84_53255540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[z__value_52930800_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59872700();

   return behavior;
}

Behavior __59891140;

Behavior make__59891140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59891140 = behavior;
   behavior->owner = (Object)func0_58_84_53255540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[address_53471140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_53620140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   remaining_53620140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   remaining_53620140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(remaining_53620140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,remaining_53620140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
remaining_53620140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[remaining_53620140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53298140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   base_53298140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   base_53298140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(base_53298140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,base_53298140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
base_53298140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[base_53298140_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53471220_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   next__data_53471220_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   next__data_53471220_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(next__data_53471220_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,next__data_53471220_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
next__data_53471220_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[next__data_53471220_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_54444220_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   interpolated__value_54444220_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   interpolated__value_54444220_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(interpolated__value_54444220_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,interpolated__value_54444220_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
interpolated__value_54444220_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[interpolated__value_54444220_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59873580();

   return behavior;
}

Behavior __59890980;

Behavior make__59890980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59890980 = behavior;
   behavior->owner = (Object)func0_58_84_53255540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52186260_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   base_52186260_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   base_52186260_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(base_52186260_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,base_52186260_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
base_52186260_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[base_52186260_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52291360_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   next__data_52291360_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   next__data_52291360_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(next__data_52291360_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,next__data_52291360_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
next__data_52291360_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[next__data_52291360_my__lut_58_842_51994440_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59873500();

   return behavior;
}

Scope makefunc0_58_84_53255540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_53255540 = scope;
   scope->owner = (Object)func0_58_840_52772800;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52291200();
   scope->systemIs[1] = makemy__interpolator_54444040();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53298140();
   scope->inners[1] = makenext__data_53471220();
   scope->inners[2] = makeaddress_53471140();
   scope->inners[3] = makeremaining_53620140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59873040();
   scope->behaviors[1] = make__59872740();
   scope->behaviors[2] = make__59872200();
   scope->behaviors[3] = make__59891140();
   scope->behaviors[4] = make__59890980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_52772800() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_52772800 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52930800();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_53056980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_53255540();

   return systemT;
}