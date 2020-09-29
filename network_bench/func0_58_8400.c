#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_56986640;

SignalI z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makez__value_57310100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func0_58_8400_56986640;
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

SignalI a_57439940_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makea_57439940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_57439940_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func0_58_8400_56986640;
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

Block __58267500;

void code__58267500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            first = value2integer(make__58350660());
            last = value2integer(make__58350640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__58267500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58267500 = block;
   block->owner = (Object)__58267200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58267500;

   return block;
};

Block __58267160;

void code__58267160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800,value2integer(make__58350440()),value2integer(make__58350380())));
      set_value_pos(pool_state);
   }
}

Block make__58267160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58267160 = block;
   block->owner = (Object)__58266840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58267160;

   return block;
};

Block __58266780;

void code__58266780() {
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
            src0 = make__58349560();
            src1 = make__58349540();
            src2 = make__58349520();
            src3 = make__58349500();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            first = value2integer(make__58349400());
            last = value2integer(make__58349380());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_48672900_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__58266780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58266780 = block;
   block->owner = (Object)__58266160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58266780;

   return block;
};

Block __58267820;

void code__58267820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_48672900_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,remaining_58738600_my__interpolator_58_8410_58464580_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59220320_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,base_59194980_my__interpolator_58_8410_58464580_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47358980_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,next__data_47297980_my__interpolator_58_8410_58464580_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47737540_my__interpolator_58_8410_58464580_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,a_57439940_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__58267820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58267820 = block;
   block->owner = (Object)__58298880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58267820;

   return block;
};

Block __58267720;

void code__58267720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56824340_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,base_59220320_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57002580_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,next__data_47358980_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__58267720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58267720 = block;
   block->owner = (Object)__58298700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58267720;

   return block;
};

Value make__58350660() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58350640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58350440() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58350380() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58349560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58349540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58349520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58349500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58349400() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58349380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_58973060;

SignalI base_59220320_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makebase_59220320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_59220320_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func0_58_840_58973060;
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

SignalI next__data_47358980_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makenext__data_47358980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47358980_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func0_58_840_58973060;
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

SignalI address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeaddress_47358820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func0_58_840_58973060;
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

SignalI remaining_48672900_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeremaining_48672900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_48672900_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func0_58_840_58973060;
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

SystemI my__lut_57002380;

SystemI makemy__lut_57002380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_57002380 = systemI;
   systemI->owner = (Object)func0_58_840_58973060;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_56629100;

   return systemI;
};

SystemI my__interpolator_47758160;

SystemI makemy__interpolator_47758160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47758160 = systemI;
   systemI->owner = (Object)func0_58_840_58973060;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_58464580;

   return systemI;
};

Behavior __58267200;

Behavior make__58267200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58267200 = behavior;
   behavior->owner = (Object)func0_58_840_58973060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__58267500();

   return behavior;
}

Behavior __58266840;

Behavior make__58266840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58266840 = behavior;
   behavior->owner = (Object)func0_58_840_58973060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__58267160();

   return behavior;
}

Behavior __58266160;

Behavior make__58266160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58266160 = behavior;
   behavior->owner = (Object)func0_58_840_58973060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[z__value_57310100_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__58266780();

   return behavior;
}

Behavior __58298880;

Behavior make__58298880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58298880 = behavior;
   behavior->owner = (Object)func0_58_840_58973060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[address_47358820_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_48672900_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   remaining_48672900_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   remaining_48672900_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(remaining_48672900_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,remaining_48672900_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
remaining_48672900_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[remaining_48672900_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_59220320_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   base_59220320_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   base_59220320_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(base_59220320_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,base_59220320_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
base_59220320_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[base_59220320_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47358980_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   next__data_47358980_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   next__data_47358980_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(next__data_47358980_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,next__data_47358980_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
next__data_47358980_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[next__data_47358980_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_47737540_my__interpolator_58_8410_58464580_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   interpolated__value_47737540_my__interpolator_58_8410_58464580_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   interpolated__value_47737540_my__interpolator_58_8410_58464580_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(interpolated__value_47737540_my__interpolator_58_8410_58464580_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,interpolated__value_47737540_my__interpolator_58_8410_58464580_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
interpolated__value_47737540_my__interpolator_58_8410_58464580_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[interpolated__value_47737540_my__interpolator_58_8410_58464580_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__58267820();

   return behavior;
}

Behavior __58298700;

Behavior make__58298700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58298700 = behavior;
   behavior->owner = (Object)func0_58_840_58973060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56824340_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   base_56824340_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   base_56824340_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(base_56824340_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,base_56824340_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
base_56824340_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[base_56824340_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_57002580_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   next__data_57002580_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   next__data_57002580_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(next__data_57002580_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,next__data_57002580_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
next__data_57002580_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[next__data_57002580_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__58267720();

   return behavior;
}

Scope makefunc0_58_840_58973060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_58973060 = scope;
   scope->owner = (Object)func0_58_8400_56986640;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_57002380();
   scope->systemIs[1] = makemy__interpolator_47758160();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_59220320();
   scope->inners[1] = makenext__data_47358980();
   scope->inners[2] = makeaddress_47358820();
   scope->inners[3] = makeremaining_48672900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58267200();
   scope->behaviors[1] = make__58266840();
   scope->behaviors[2] = make__58266160();
   scope->behaviors[3] = make__58298880();
   scope->behaviors[4] = make__58298700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_56986640() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_56986640 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_57310100();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_57439940();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_58973060();

   return systemT;
}