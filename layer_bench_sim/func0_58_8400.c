#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_53788120;

SignalI z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makez__value_54366200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func0_58_8400_53788120;
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

SignalI a_54649520_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makea_54649520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_54649520_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func0_58_8400_53788120;
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

Block __60934340;

void code__60934340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
            first = value2integer(make__61038260());
            last = value2integer(make__61038240());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60934340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60934340 = block;
   block->owner = (Object)__60934020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60934340;

   return block;
};

Block __60933980;

void code__60933980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700,value2integer(make__61038100()),value2integer(make__61038080())));
      set_value_pos(pool_state);
   }
}

Block make__60933980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60933980 = block;
   block->owner = (Object)__60933720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60933980;

   return block;
};

Block __60933680;

void code__60933680() {
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
            src0 = make__61037620();
            src1 = make__61037600();
            src2 = make__61037580();
            src3 = make__61037560();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
            first = value2integer(make__61037460());
            last = value2integer(make__61037440());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_59496080_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60933680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60933680 = block;
   block->owner = (Object)__60933160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60933680;

   return block;
};

Block __60934600;

void code__60934600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,address_59502740_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_59496080_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,remaining_61060580_my__interpolator_58_8410_60870240_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59182320_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,base_61121840_my__interpolator_58_8410_60870240_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59392520_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,next__data_61502480_my__interpolator_58_8410_60870240_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_61760260_my__interpolator_58_8410_60870240_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,a_54649520_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60934600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60934600 = block;
   block->owner = (Object)__60952300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60934600;

   return block;
};

Block __60934540;

void code__60934540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59653980_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,base_59182320_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59772640_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,next__data_59392520_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60934540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60934540 = block;
   block->owner = (Object)__60952140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60934540;

   return block;
};

Value make__61038260() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61038240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61038100() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61038080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61037620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61037600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61037580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61037560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61037460() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61037440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_59119860;

SignalI base_59182320_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makebase_59182320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_59182320_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func0_58_840_59119860;
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

SignalI next__data_59392520_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makenext__data_59392520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_59392520_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func0_58_840_59119860;
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

SignalI address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeaddress_59392440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func0_58_840_59119860;
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

SignalI remaining_59496080_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeremaining_59496080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_59496080_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)func0_58_840_59119860;
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

SystemI my__lut_59772500;

SystemI makemy__lut_59772500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_59772500 = systemI;
   systemI->owner = (Object)func0_58_840_59119860;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_59504740;

   return systemI;
};

SystemI my__interpolator_61760120;

SystemI makemy__interpolator_61760120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_61760120 = systemI;
   systemI->owner = (Object)func0_58_840_59119860;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_60870240;

   return systemI;
};

Behavior __60934020;

Behavior make__60934020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60934020 = behavior;
   behavior->owner = (Object)func0_58_840_59119860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60934340();

   return behavior;
}

Behavior __60933720;

Behavior make__60933720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60933720 = behavior;
   behavior->owner = (Object)func0_58_840_59119860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60933980();

   return behavior;
}

Behavior __60933160;

Behavior make__60933160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60933160 = behavior;
   behavior->owner = (Object)func0_58_840_59119860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[z__value_54366200_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60933680();

   return behavior;
}

Behavior __60952300;

Behavior make__60952300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60952300 = behavior;
   behavior->owner = (Object)func0_58_840_59119860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[address_59392440_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_59496080_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   remaining_59496080_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   remaining_59496080_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(remaining_59496080_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,remaining_59496080_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
remaining_59496080_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[remaining_59496080_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_59182320_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   base_59182320_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   base_59182320_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(base_59182320_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,base_59182320_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
base_59182320_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[base_59182320_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_59392520_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   next__data_59392520_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   next__data_59392520_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(next__data_59392520_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,next__data_59392520_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
next__data_59392520_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[next__data_59392520_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_61760260_my__interpolator_58_8410_60870240_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   interpolated__value_61760260_my__interpolator_58_8410_60870240_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   interpolated__value_61760260_my__interpolator_58_8410_60870240_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(interpolated__value_61760260_my__interpolator_58_8410_60870240_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,interpolated__value_61760260_my__interpolator_58_8410_60870240_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
interpolated__value_61760260_my__interpolator_58_8410_60870240_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[interpolated__value_61760260_my__interpolator_58_8410_60870240_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60934600();

   return behavior;
}

Behavior __60952140;

Behavior make__60952140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60952140 = behavior;
   behavior->owner = (Object)func0_58_840_59119860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_59653980_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   base_59653980_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   base_59653980_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(base_59653980_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,base_59653980_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
base_59653980_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[base_59653980_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_59772640_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   next__data_59772640_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   next__data_59772640_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(next__data_59772640_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,next__data_59772640_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
next__data_59772640_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[next__data_59772640_my__lut_58_8410_59504740_func0_58_840_59119860_func0_58_8400_53788120_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60934540();

   return behavior;
}

Scope makefunc0_58_840_59119860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_59119860 = scope;
   scope->owner = (Object)func0_58_8400_53788120;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_59772500();
   scope->systemIs[1] = makemy__interpolator_61760120();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_59182320();
   scope->inners[1] = makenext__data_59392520();
   scope->inners[2] = makeaddress_59392440();
   scope->inners[3] = makeremaining_59496080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60934020();
   scope->behaviors[1] = make__60933720();
   scope->behaviors[2] = make__60933160();
   scope->behaviors[3] = make__60952300();
   scope->behaviors[4] = make__60952140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_53788120() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_53788120 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_54366200();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_54649520();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_59119860();

   return systemT;
}