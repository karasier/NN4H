#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_49070260;

SignalI z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makez__value_49427940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func1_58_840_49070260;
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

SignalI a_50473840_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makea_50473840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50473840_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func1_58_840_49070260;
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

Block __60171420;

void code__60171420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            first = value2integer(make__45578720());
            last = value2integer(make__45578640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__60171420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60171420 = block;
   block->owner = (Object)__60171060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60171420;

   return block;
};

Block __60171020;

void code__60171020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640,value2integer(make__45576500()),value2integer(make__45576240())));
      set_value_pos(pool_state);
   }
}

Block make__60171020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60171020 = block;
   block->owner = (Object)__60170720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60171020;

   return block;
};

Block __60170680;

void code__60170680() {
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
            src0 = make__45612820();
            src1 = make__45612500();
            src2 = make__45612280();
            src3 = make__45612260();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            first = value2integer(make__45611340());
            last = value2integer(make__45607900());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_52364080_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__60170680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60170680 = block;
   block->owner = (Object)__41195180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60170680;

   return block;
};

Block __60171740;

void code__60171740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,address_50669240_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_52364080_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,remaining_47151780_my__interpolator_58_8400_52895440_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52075980_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,base_49025280_my__interpolator_58_8400_52895440_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52244600_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,next__data_50007320_my__interpolator_58_8400_52895440_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50749700_my__interpolator_58_8400_52895440_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,a_50473840_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__60171740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60171740 = block;
   block->owner = (Object)__42917460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60171740;

   return block;
};

Block __60171660;

void code__60171660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50782220_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,base_52075980_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51081760_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,next__data_52244600_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__60171660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60171660 = block;
   block->owner = (Object)__42914160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60171660;

   return block;
};

Value make__45578720() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45578640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45576500() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45576240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45612820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45612500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45612280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45612260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45611340() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45607900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_51670220;

SignalI base_52075980_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makebase_52075980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52075980_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func1_58_84_51670220;
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

SignalI next__data_52244600_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makenext__data_52244600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52244600_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func1_58_84_51670220;
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

SignalI address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeaddress_52244340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func1_58_84_51670220;
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

SignalI remaining_52364080_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeremaining_52364080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_52364080_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)func1_58_84_51670220;
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

SystemI my__lut_51081520;

SystemI makemy__lut_51081520() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_51081520 = systemI;
   systemI->owner = (Object)func1_58_84_51670220;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_50672640;

   return systemI;
};

SystemI my__interpolator_50790200;

SystemI makemy__interpolator_50790200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50790200 = systemI;
   systemI->owner = (Object)func1_58_84_51670220;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_52895440;

   return systemI;
};

Behavior __60171060;

Behavior make__60171060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60171060 = behavior;
   behavior->owner = (Object)func1_58_84_51670220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__60171420();

   return behavior;
}

Behavior __60170720;

Behavior make__60170720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60170720 = behavior;
   behavior->owner = (Object)func1_58_84_51670220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__60171020();

   return behavior;
}

Behavior __41195180;

Behavior make__41195180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __41195180 = behavior;
   behavior->owner = (Object)func1_58_84_51670220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__60170680();

   return behavior;
}

Behavior __42917460;

Behavior make__42917460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42917460 = behavior;
   behavior->owner = (Object)func1_58_84_51670220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[address_52244340_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_52364080_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   remaining_52364080_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   remaining_52364080_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(remaining_52364080_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,remaining_52364080_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
remaining_52364080_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[remaining_52364080_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_52075980_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   base_52075980_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   base_52075980_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(base_52075980_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,base_52075980_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
base_52075980_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[base_52075980_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_52244600_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   next__data_52244600_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   next__data_52244600_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(next__data_52244600_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,next__data_52244600_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
next__data_52244600_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[next__data_52244600_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_50749700_my__interpolator_58_8400_52895440_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   interpolated__value_50749700_my__interpolator_58_8400_52895440_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   interpolated__value_50749700_my__interpolator_58_8400_52895440_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(interpolated__value_50749700_my__interpolator_58_8400_52895440_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,interpolated__value_50749700_my__interpolator_58_8400_52895440_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
interpolated__value_50749700_my__interpolator_58_8400_52895440_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[interpolated__value_50749700_my__interpolator_58_8400_52895440_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__60171740();

   return behavior;
}

Behavior __42914160;

Behavior make__42914160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42914160 = behavior;
   behavior->owner = (Object)func1_58_84_51670220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50782220_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   base_50782220_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   base_50782220_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(base_50782220_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,base_50782220_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
base_50782220_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[base_50782220_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51081760_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   next__data_51081760_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   next__data_51081760_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(next__data_51081760_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,next__data_51081760_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
next__data_51081760_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[next__data_51081760_my__lut_58_8400_50672640_func1_58_84_51670220_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__60171660();

   return behavior;
}

Scope makefunc1_58_84_51670220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_51670220 = scope;
   scope->owner = (Object)func1_58_840_49070260;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_51081520();
   scope->systemIs[1] = makemy__interpolator_50790200();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_52075980();
   scope->inners[1] = makenext__data_52244600();
   scope->inners[2] = makeaddress_52244340();
   scope->inners[3] = makeremaining_52364080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60171060();
   scope->behaviors[1] = make__60170720();
   scope->behaviors[2] = make__41195180();
   scope->behaviors[3] = make__42917460();
   scope->behaviors[4] = make__42914160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_49070260() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_49070260 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49427940();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50473840();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_51670220();

   return systemT;
}