#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_59702100;

SignalI z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makez__value_59795780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func1_58_840_59702100;
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

SignalI a_59874840_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makea_59874840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_59874840_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func1_58_840_59702100;
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

Block __58510900;

void code__58510900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
            first = value2integer(make__58577220());
            last = value2integer(make__58577200());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58510900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58510900 = block;
   block->owner = (Object)__58510640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58510900;

   return block;
};

Block __58510600;

void code__58510600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820,value2integer(make__58577040()),value2integer(make__58577000())));
      set_value_pos(pool_state);
   }
}

Block make__58510600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58510600 = block;
   block->owner = (Object)__58510220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58510600;

   return block;
};

Block __58510100;

void code__58510100() {
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
            src0 = make__58576360();
            src1 = make__58576340();
            src2 = make__58576320();
            src3 = make__58576280();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
            first = value2integer(make__58576120());
            last = value2integer(make__58576100());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_50759320_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58510100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58510100 = block;
   block->owner = (Object)__58508680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58510100;

   return block;
};

Block __58511120;

void code__58511120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,address_49252700_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_50759320_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,remaining_52857480_my__interpolator_58_8400_52570900_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49993780_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,base_55150240_my__interpolator_58_8400_52570900_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50193940_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,next__data_57916320_my__interpolator_58_8400_52570900_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_58011820_my__interpolator_58_8400_52570900_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,a_59874840_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58511120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58511120 = block;
   block->owner = (Object)__58525160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58511120;

   return block;
};

Block __58511060;

void code__58511060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49522040_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,base_49993780_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49799840_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,next__data_50193940_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58511060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58511060 = block;
   block->owner = (Object)__58524980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58511060;

   return block;
};

Value make__58577220() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58577200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58577040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58577000() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58576360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58576340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58576320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58576280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58576120() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58576100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_49671040;

SignalI base_49993780_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makebase_49993780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49993780_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func1_58_84_49671040;
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

SignalI next__data_50193940_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makenext__data_50193940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50193940_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func1_58_84_49671040;
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

SignalI address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeaddress_50193840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func1_58_84_49671040;
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

SignalI remaining_50759320_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeremaining_50759320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_50759320_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)func1_58_84_49671040;
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

SystemI my__lut_49823700;

SystemI makemy__lut_49823700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49823700 = systemI;
   systemI->owner = (Object)func1_58_84_49671040;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_49238460;

   return systemI;
};

SystemI my__interpolator_58011680;

SystemI makemy__interpolator_58011680() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_58011680 = systemI;
   systemI->owner = (Object)func1_58_84_49671040;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_52570900;

   return systemI;
};

Behavior __58510640;

Behavior make__58510640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58510640 = behavior;
   behavior->owner = (Object)func1_58_84_49671040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58510900();

   return behavior;
}

Behavior __58510220;

Behavior make__58510220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58510220 = behavior;
   behavior->owner = (Object)func1_58_84_49671040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58510600();

   return behavior;
}

Behavior __58508680;

Behavior make__58508680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58508680 = behavior;
   behavior->owner = (Object)func1_58_84_49671040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[z__value_59795780_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58510100();

   return behavior;
}

Behavior __58525160;

Behavior make__58525160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58525160 = behavior;
   behavior->owner = (Object)func1_58_84_49671040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[address_50193840_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_50759320_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   remaining_50759320_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   remaining_50759320_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(remaining_50759320_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,remaining_50759320_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
remaining_50759320_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[remaining_50759320_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_49993780_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   base_49993780_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   base_49993780_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(base_49993780_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,base_49993780_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
base_49993780_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[base_49993780_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_50193940_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   next__data_50193940_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   next__data_50193940_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(next__data_50193940_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,next__data_50193940_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
next__data_50193940_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[next__data_50193940_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_58011820_my__interpolator_58_8400_52570900_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   interpolated__value_58011820_my__interpolator_58_8400_52570900_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   interpolated__value_58011820_my__interpolator_58_8400_52570900_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(interpolated__value_58011820_my__interpolator_58_8400_52570900_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,interpolated__value_58011820_my__interpolator_58_8400_52570900_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
interpolated__value_58011820_my__interpolator_58_8400_52570900_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[interpolated__value_58011820_my__interpolator_58_8400_52570900_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58511120();

   return behavior;
}

Behavior __58524980;

Behavior make__58524980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58524980 = behavior;
   behavior->owner = (Object)func1_58_84_49671040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49522040_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   base_49522040_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   base_49522040_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(base_49522040_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,base_49522040_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
base_49522040_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[base_49522040_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49799840_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   next__data_49799840_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   next__data_49799840_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(next__data_49799840_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,next__data_49799840_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
next__data_49799840_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[next__data_49799840_my__lut_58_8400_49238460_func1_58_84_49671040_func1_58_840_59702100_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58511060();

   return behavior;
}

Scope makefunc1_58_84_49671040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_49671040 = scope;
   scope->owner = (Object)func1_58_840_59702100;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49823700();
   scope->systemIs[1] = makemy__interpolator_58011680();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49993780();
   scope->inners[1] = makenext__data_50193940();
   scope->inners[2] = makeaddress_50193840();
   scope->inners[3] = makeremaining_50759320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58510640();
   scope->behaviors[1] = make__58510220();
   scope->behaviors[2] = make__58508680();
   scope->behaviors[3] = make__58525160();
   scope->behaviors[4] = make__58524980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_59702100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_59702100 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_59795780();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_59874840();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_49671040();

   return systemT;
}