#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_66517580;

SignalI z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makez__value_67422260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func1_58_840_66517580;
   signalI->name = "z_value";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SignalI a_67619620_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makea_67619620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_67619620_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func1_58_840_66517580;
   signalI->name = "a";
   signalI->type = get_type_vector(get_type_signed(),16);
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

Block __84174760;

void code__84174760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
            first = value2integer(make__48853520());
            last = value2integer(make__48849460());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__84174760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __84174760 = block;
   block->owner = (Object)__84174040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__84174760;

   return block;
};

Block __84173920;

void code__84173920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760,value2integer(make__48870260()),value2integer(make__48869840())));
      set_value_pos(pool_state);
   }
}

Block make__84173920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __84173920 = block;
   block->owner = (Object)__84173600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__84173920;

   return block;
};

Block __84173540;

void code__84173540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,src2,src3,src4,src5,src6,src7;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__48865340();
            src1 = make__48889420();
            src2 = make__48889120();
            src3 = make__48889020();
            src4 = make__48888760();
            src5 = make__48887780();
            src6 = make__48887740();
            src7 = make__48887140();
            concat_value(8,1,dst,src0,src1,src2,src3,src4,src5,src6,src7);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
            first = value2integer(make__48884020());
            last = value2integer(make__48883560());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_67132220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__84173540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __84173540 = block;
   block->owner = (Object)__42075060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__84173540;

   return block;
};

Block __84175100;

void code__84175100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,address_59050320_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_67132220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,remaining_58528800_my__interpolator_58_8400_57288220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_66744740_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,base_59447120_my__interpolator_58_8400_57288220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_66930360_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,next__data_65722500_my__interpolator_58_8400_57288220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_66122480_my__interpolator_58_8400_57288220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,a_67619620_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__84175100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __84175100 = block;
   block->owner = (Object)__47728660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__84175100;

   return block;
};

Block __84175020;

void code__84175020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58626220_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,base_66744740_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57949760_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,next__data_66930360_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__84175020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __84175020 = block;
   block->owner = (Object)__47728160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__84175020;

   return block;
};

Value make__48853520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48849460() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48870260() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48869840() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48865340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48889420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48889120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48889020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48888760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48887780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48887740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48887140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48884020() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48883560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_66665920;

SignalI base_66744740_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makebase_66744740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_66744740_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func1_58_84_66665920;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SignalI next__data_66930360_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makenext__data_66930360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_66930360_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func1_58_84_66665920;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SignalI address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeaddress_66930280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func1_58_84_66665920;
   signalI->name = "address";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI remaining_67132220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeremaining_67132220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_67132220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func1_58_84_66665920;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SystemI my__lut_57949060;

SystemI makemy__lut_57949060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_57949060 = systemI;
   systemI->owner = (Object)func1_58_84_66665920;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_59097780;

   return systemI;
};

SystemI my__interpolator_66121780;

SystemI makemy__interpolator_66121780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_66121780 = systemI;
   systemI->owner = (Object)func1_58_84_66665920;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_57288220;

   return systemI;
};

Behavior __84174040;

Behavior make__84174040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __84174040 = behavior;
   behavior->owner = (Object)func1_58_84_66665920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__84174760();

   return behavior;
}

Behavior __84173600;

Behavior make__84173600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __84173600 = behavior;
   behavior->owner = (Object)func1_58_84_66665920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__84173920();

   return behavior;
}

Behavior __42075060;

Behavior make__42075060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42075060 = behavior;
   behavior->owner = (Object)func1_58_84_66665920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[z__value_67422260_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__84173540();

   return behavior;
}

Behavior __47728660;

Behavior make__47728660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47728660 = behavior;
   behavior->owner = (Object)func1_58_84_66665920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[address_66930280_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_67132220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   remaining_67132220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   remaining_67132220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(remaining_67132220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,remaining_67132220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
remaining_67132220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[remaining_67132220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_66744740_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   base_66744740_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   base_66744740_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(base_66744740_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,base_66744740_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
base_66744740_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[base_66744740_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_66930360_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   next__data_66930360_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   next__data_66930360_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(next__data_66930360_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,next__data_66930360_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
next__data_66930360_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[next__data_66930360_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_66122480_my__interpolator_58_8400_57288220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   interpolated__value_66122480_my__interpolator_58_8400_57288220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   interpolated__value_66122480_my__interpolator_58_8400_57288220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(interpolated__value_66122480_my__interpolator_58_8400_57288220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,interpolated__value_66122480_my__interpolator_58_8400_57288220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
interpolated__value_66122480_my__interpolator_58_8400_57288220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[interpolated__value_66122480_my__interpolator_58_8400_57288220_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__84175100();

   return behavior;
}

Behavior __47728160;

Behavior make__47728160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47728160 = behavior;
   behavior->owner = (Object)func1_58_84_66665920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_58626220_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   base_58626220_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   base_58626220_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(base_58626220_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,base_58626220_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
base_58626220_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[base_58626220_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_57949760_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   next__data_57949760_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   next__data_57949760_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(next__data_57949760_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,next__data_57949760_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
next__data_57949760_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[next__data_57949760_my__lut_58_8400_59097780_func1_58_84_66665920_func1_58_840_66517580_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__84175020();

   return behavior;
}

Scope makefunc1_58_84_66665920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_66665920 = scope;
   scope->owner = (Object)func1_58_840_66517580;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_57949060();
   scope->systemIs[1] = makemy__interpolator_66121780();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_66744740();
   scope->inners[1] = makenext__data_66930360();
   scope->inners[2] = makeaddress_66930280();
   scope->inners[3] = makeremaining_67132220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__84174040();
   scope->behaviors[1] = make__84173600();
   scope->behaviors[2] = make__42075060();
   scope->behaviors[3] = make__47728660();
   scope->behaviors[4] = make__47728160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_66517580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_66517580 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_67422260();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_67619620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_66665920();

   return systemT;
}