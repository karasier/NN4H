#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_60651400;

SignalI z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makez__value_60759400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func1_58_840_60651400;
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

SignalI a_60869220_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makea_60869220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_60869220_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func1_58_840_60651400;
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

Block __53008320;

void code__53008320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
            first = value2integer(make__53200960());
            last = value2integer(make__53200900());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53008320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53008320 = block;
   block->owner = (Object)__53007360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53008320;

   return block;
};

Block __53007280;

void code__53007280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140,value2integer(make__53200640()),value2integer(make__53200520())));
      set_value_pos(pool_state);
   }
}

Block make__53007280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53007280 = block;
   block->owner = (Object)__53006580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53007280;

   return block;
};

Block __53006480;

void code__53006480() {
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
            src0 = make__53215160();
            src1 = make__53215060();
            src2 = make__53215040();
            src3 = make__53214900();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
            first = value2integer(make__53214480());
            last = value2integer(make__53214400());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_52392680_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53006480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53006480 = block;
   block->owner = (Object)__53005560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53006480;

   return block;
};

Block __53008920;

void code__53008920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,address_51916580_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51863040_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,base_58376400_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52119720_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,next__data_58535340_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_52392680_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,remaining_58718840_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_58771300_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,a_60869220_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53008920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53008920 = block;
   block->owner = (Object)__53130500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53008920;

   return block;
};

Block __53008820;

void code__53008820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52220980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,base_51863040_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52466980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,next__data_52119720_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53008820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53008820 = block;
   block->owner = (Object)__53129940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53008820;

   return block;
};

Value make__53200960() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53200900() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53200640() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53200520() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53215160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53215060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53215040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53214900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53214480() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53214400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_51499040;

SignalI base_51863040_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makebase_51863040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51863040_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func1_58_84_51499040;
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

SignalI next__data_52119720_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makenext__data_52119720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52119720_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func1_58_84_51499040;
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

SignalI address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeaddress_52119560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func1_58_84_51499040;
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

SignalI remaining_52392680_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeremaining_52392680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_52392680_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func1_58_84_51499040;
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

SignalI change_52503920_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makechange_52503920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_52503920_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func1_58_84_51499040;
   signalI->name = "change";
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

SystemI my__lut_52466800;

SystemI makemy__lut_52466800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52466800 = systemI;
   systemI->owner = (Object)func1_58_84_51499040;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_51920540;

   return systemI;
};

SystemI my__interpolator_58771160;

SystemI makemy__interpolator_58771160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_58771160 = systemI;
   systemI->owner = (Object)func1_58_84_51499040;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_58292980;

   return systemI;
};

Behavior __53007360;

Behavior make__53007360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53007360 = behavior;
   behavior->owner = (Object)func1_58_84_51499040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53008320();

   return behavior;
}

Behavior __53006580;

Behavior make__53006580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53006580 = behavior;
   behavior->owner = (Object)func1_58_84_51499040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53007280();

   return behavior;
}

Behavior __53005560;

Behavior make__53005560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53005560 = behavior;
   behavior->owner = (Object)func1_58_84_51499040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[z__value_60759400_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53006480();

   return behavior;
}

Behavior __53130500;

Behavior make__53130500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53130500 = behavior;
   behavior->owner = (Object)func1_58_84_51499040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[address_52119560_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_51863040_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   base_51863040_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   base_51863040_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(base_51863040_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,base_51863040_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
base_51863040_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[base_51863040_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_52119720_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   next__data_52119720_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   next__data_52119720_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(next__data_52119720_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,next__data_52119720_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
next__data_52119720_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[next__data_52119720_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,remaining_52392680_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   remaining_52392680_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   remaining_52392680_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(remaining_52392680_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,remaining_52392680_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
remaining_52392680_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[remaining_52392680_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_58771300_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   interpolated__value_58771300_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   interpolated__value_58771300_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(interpolated__value_58771300_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,interpolated__value_58771300_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
interpolated__value_58771300_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[interpolated__value_58771300_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53008920();

   return behavior;
}

Behavior __53129940;

Behavior make__53129940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53129940 = behavior;
   behavior->owner = (Object)func1_58_84_51499040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52220980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   base_52220980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   base_52220980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(base_52220980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,base_52220980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
base_52220980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[base_52220980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52466980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   next__data_52466980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   next__data_52466980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(next__data_52466980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,next__data_52466980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
next__data_52466980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[next__data_52466980_my__lut_58_8400_51920540_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53008820();

   return behavior;
}

Scope makefunc1_58_84_51499040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_51499040 = scope;
   scope->owner = (Object)func1_58_840_60651400;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52466800();
   scope->systemIs[1] = makemy__interpolator_58771160();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51863040();
   scope->inners[1] = makenext__data_52119720();
   scope->inners[2] = makeaddress_52119560();
   scope->inners[3] = makeremaining_52392680();
   scope->inners[4] = makechange_52503920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53007360();
   scope->behaviors[1] = make__53006580();
   scope->behaviors[2] = make__53005560();
   scope->behaviors[3] = make__53130500();
   scope->behaviors[4] = make__53129940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_60651400() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_60651400 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_60759400();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_60869220();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_51499040();

   return systemT;
}