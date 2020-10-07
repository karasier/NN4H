#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_58642720;

SignalI z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makez__value_58784020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func0_58_8400_58642720;
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

SignalI a_58894900_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makea_58894900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_58894900_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func0_58_8400_58642720;
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

Block __58892320;

void code__58892320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
            first = value2integer(make__58944320());
            last = value2integer(make__58944300());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58892320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58892320 = block;
   block->owner = (Object)__58916560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58892320;

   return block;
};

Block __58916520;

void code__58916520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820,value2integer(make__58944100()),value2integer(make__58944080())));
      set_value_pos(pool_state);
   }
}

Block make__58916520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58916520 = block;
   block->owner = (Object)__58916160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58916520;

   return block;
};

Block __58916080;

void code__58916080() {
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
            src0 = make__58943480();
            src1 = make__58943460();
            src2 = make__58943420();
            src3 = make__58943340();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
            first = value2integer(make__58943180());
            last = value2integer(make__58943160());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_57913640_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58916080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58916080 = block;
   block->owner = (Object)__58915380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58916080;

   return block;
};

Block __58892540;

void code__58892540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,address_59210120_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_57913640_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,remaining_42437120_my__interpolator_58_8410_60944000_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52856540_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,base_48241880_my__interpolator_58_8410_60944000_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55152960_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,next__data_49409400_my__interpolator_58_8410_60944000_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49702460_my__interpolator_58_8410_60944000_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,a_58894900_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58892540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58892540 = block;
   block->owner = (Object)__58949420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58892540;

   return block;
};

Block __58892480;

void code__58892480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59404360_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,base_52856540_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59501220_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,next__data_55152960_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58892480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58892480 = block;
   block->owner = (Object)__58949260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58892480;

   return block;
};

Value make__58944320() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58944300() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58944100() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58944080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58943480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58943460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58943420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58943340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58943180() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58943160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_52554800;

SignalI base_52856540_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makebase_52856540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52856540_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func0_58_840_52554800;
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

SignalI next__data_55152960_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makenext__data_55152960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_55152960_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func0_58_840_52554800;
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

SignalI address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeaddress_55152880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func0_58_840_52554800;
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

SignalI remaining_57913640_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeremaining_57913640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_57913640_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func0_58_840_52554800;
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

SystemI my__lut_59501060;

SystemI makemy__lut_59501060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_59501060 = systemI;
   systemI->owner = (Object)func0_58_840_52554800;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_59130480;

   return systemI;
};

SystemI my__interpolator_49701980;

SystemI makemy__interpolator_49701980() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49701980 = systemI;
   systemI->owner = (Object)func0_58_840_52554800;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_60944000;

   return systemI;
};

Behavior __58916560;

Behavior make__58916560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58916560 = behavior;
   behavior->owner = (Object)func0_58_840_52554800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58892320();

   return behavior;
}

Behavior __58916160;

Behavior make__58916160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58916160 = behavior;
   behavior->owner = (Object)func0_58_840_52554800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58916520();

   return behavior;
}

Behavior __58915380;

Behavior make__58915380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58915380 = behavior;
   behavior->owner = (Object)func0_58_840_52554800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58916080();

   return behavior;
}

Behavior __58949420;

Behavior make__58949420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58949420 = behavior;
   behavior->owner = (Object)func0_58_840_52554800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[address_55152880_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_57913640_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   remaining_57913640_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   remaining_57913640_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(remaining_57913640_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,remaining_57913640_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
remaining_57913640_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[remaining_57913640_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_52856540_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   base_52856540_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   base_52856540_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(base_52856540_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,base_52856540_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
base_52856540_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[base_52856540_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_55152960_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   next__data_55152960_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   next__data_55152960_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(next__data_55152960_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,next__data_55152960_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
next__data_55152960_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[next__data_55152960_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49702460_my__interpolator_58_8410_60944000_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   interpolated__value_49702460_my__interpolator_58_8410_60944000_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   interpolated__value_49702460_my__interpolator_58_8410_60944000_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(interpolated__value_49702460_my__interpolator_58_8410_60944000_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,interpolated__value_49702460_my__interpolator_58_8410_60944000_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
interpolated__value_49702460_my__interpolator_58_8410_60944000_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[interpolated__value_49702460_my__interpolator_58_8410_60944000_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58892540();

   return behavior;
}

Behavior __58949260;

Behavior make__58949260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58949260 = behavior;
   behavior->owner = (Object)func0_58_840_52554800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_59404360_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   base_59404360_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   base_59404360_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(base_59404360_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,base_59404360_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
base_59404360_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[base_59404360_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_59501220_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   next__data_59501220_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   next__data_59501220_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(next__data_59501220_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,next__data_59501220_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
next__data_59501220_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[next__data_59501220_my__lut_58_8410_59130480_func0_58_840_52554800_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58892480();

   return behavior;
}

Scope makefunc0_58_840_52554800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_52554800 = scope;
   scope->owner = (Object)func0_58_8400_58642720;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_59501060();
   scope->systemIs[1] = makemy__interpolator_49701980();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_52856540();
   scope->inners[1] = makenext__data_55152960();
   scope->inners[2] = makeaddress_55152880();
   scope->inners[3] = makeremaining_57913640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58916560();
   scope->behaviors[1] = make__58916160();
   scope->behaviors[2] = make__58915380();
   scope->behaviors[3] = make__58949420();
   scope->behaviors[4] = make__58949260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_58642720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_58642720 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_58784020();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_58894900();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_52554800();

   return systemT;
}