#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func10_58_840_59228360;

SignalI z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makez__value_59294100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)func10_58_840_59228360;
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

SignalI a_59410260_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makea_59410260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_59410260_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)func10_58_840_59228360;
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

Block __53297440;

void code__53297440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
            first = value2integer(make__53419500());
            last = value2integer(make__53419420());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__53297440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53297440 = block;
   block->owner = (Object)__53378820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53297440;

   return block;
};

Block __53378740;

void code__53378740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160,value2integer(make__53419200()),value2integer(make__53419140())));
      set_value_pos(pool_state);
   }
}

Block make__53378740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53378740 = block;
   block->owner = (Object)__53378080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53378740;

   return block;
};

Block __53377900;

void code__53377900() {
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
            src0 = make__53417800();
            src1 = make__53417760();
            src2 = make__53417740();
            src3 = make__53417720();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
            first = value2integer(make__53417580());
            last = value2integer(make__53417540());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_60396000_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__53377900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53377900 = block;
   block->owner = (Object)__53374320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53377900;

   return block;
};

Block __53297920;

void code__53297920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,address_60778120_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_60396000_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,remaining_52198000_my__interpolator_58_8410_51849960_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_60180520_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,base_52535400_my__interpolator_58_8410_51849960_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_60300580_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,next__data_52804980_my__interpolator_58_8410_51849960_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_52998960_my__interpolator_58_8410_51849960_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,a_59410260_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__53297920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53297920 = block;
   block->owner = (Object)__53387700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53297920;

   return block;
};

Block __53297840;

void code__53297840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_60921220_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,base_60180520_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_61015200_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,next__data_60300580_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__53297840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53297840 = block;
   block->owner = (Object)__53387440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53297840;

   return block;
};

Value make__53419500() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53419420() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53419200() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53419140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53417800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53417760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53417740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53417720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53417580() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53417540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func10_58_84_60093500;

SignalI base_60180520_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makebase_60180520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_60180520_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)func10_58_84_60093500;
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

SignalI next__data_60300580_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makenext__data_60300580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_60300580_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)func10_58_84_60093500;
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

SignalI address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeaddress_60300500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)func10_58_84_60093500;
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

SignalI remaining_60396000_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeremaining_60396000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_60396000_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)func10_58_84_60093500;
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

SystemI my__lut_61015060;

SystemI makemy__lut_61015060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_61015060 = systemI;
   systemI->owner = (Object)func10_58_84_60093500;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_60780120;

   return systemI;
};

SystemI my__interpolator_52998620;

SystemI makemy__interpolator_52998620() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_52998620 = systemI;
   systemI->owner = (Object)func10_58_84_60093500;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_51849960;

   return systemI;
};

Behavior __53378820;

Behavior make__53378820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53378820 = behavior;
   behavior->owner = (Object)func10_58_84_60093500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__53297440();

   return behavior;
}

Behavior __53378080;

Behavior make__53378080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53378080 = behavior;
   behavior->owner = (Object)func10_58_84_60093500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__53378740();

   return behavior;
}

Behavior __53374320;

Behavior make__53374320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53374320 = behavior;
   behavior->owner = (Object)func10_58_84_60093500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__53377900();

   return behavior;
}

Behavior __53387700;

Behavior make__53387700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53387700 = behavior;
   behavior->owner = (Object)func10_58_84_60093500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[address_60300500_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_60396000_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   remaining_60396000_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   remaining_60396000_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(remaining_60396000_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,remaining_60396000_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
remaining_60396000_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[remaining_60396000_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_60180520_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   base_60180520_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   base_60180520_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(base_60180520_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,base_60180520_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
base_60180520_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[base_60180520_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_60300580_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   next__data_60300580_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   next__data_60300580_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(next__data_60300580_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,next__data_60300580_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
next__data_60300580_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[next__data_60300580_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_52998960_my__interpolator_58_8410_51849960_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   interpolated__value_52998960_my__interpolator_58_8410_51849960_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   interpolated__value_52998960_my__interpolator_58_8410_51849960_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(interpolated__value_52998960_my__interpolator_58_8410_51849960_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,interpolated__value_52998960_my__interpolator_58_8410_51849960_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
interpolated__value_52998960_my__interpolator_58_8410_51849960_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[interpolated__value_52998960_my__interpolator_58_8410_51849960_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__53297920();

   return behavior;
}

Behavior __53387440;

Behavior make__53387440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53387440 = behavior;
   behavior->owner = (Object)func10_58_84_60093500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_60921220_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   base_60921220_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   base_60921220_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(base_60921220_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,base_60921220_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
base_60921220_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[base_60921220_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_61015200_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   next__data_61015200_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   next__data_61015200_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(next__data_61015200_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,next__data_61015200_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
next__data_61015200_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[next__data_61015200_my__lut_58_8410_60780120_func10_58_84_60093500_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__53297840();

   return behavior;
}

Scope makefunc10_58_84_60093500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func10_58_84_60093500 = scope;
   scope->owner = (Object)func10_58_840_59228360;
   scope->name = "func10:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_61015060();
   scope->systemIs[1] = makemy__interpolator_52998620();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_60180520();
   scope->inners[1] = makenext__data_60300580();
   scope->inners[2] = makeaddress_60300500();
   scope->inners[3] = makeremaining_60396000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53378820();
   scope->behaviors[1] = make__53378080();
   scope->behaviors[2] = make__53374320();
   scope->behaviors[3] = make__53387700();
   scope->behaviors[4] = make__53387440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc10_58_840_59228360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func10_58_840_59228360 = systemT;
systemT->owner = NULL;
   systemT->name = "func10:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_59294100();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_59410260();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc10_58_84_60093500();

   return systemT;
}