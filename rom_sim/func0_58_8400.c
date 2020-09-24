#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_58198620;

SignalI z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makez__value_58455940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func0_58_8400_58198620;
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

SignalI a_58585140_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makea_58585140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_58585140_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func0_58_8400_58198620;
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

Block __53639600;

void code__53639600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
            first = value2integer(make__52456300());
            last = value2integer(make__52456280());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53639600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53639600 = block;
   block->owner = (Object)__53639080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53639600;

   return block;
};

Block __53639020;

void code__53639020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640,value2integer(make__52455840()),value2integer(make__52455760())));
      set_value_pos(pool_state);
   }
}

Block make__53639020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53639020 = block;
   block->owner = (Object)__53638600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53639020;

   return block;
};

Block __53638520;

void code__53638520() {
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
            src0 = make__52455040();
            src1 = make__52455020();
            src2 = make__52455000();
            src3 = make__52454980();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
            first = value2integer(make__52454880());
            last = value2integer(make__52454860());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_58181780_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53638520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53638520 = block;
   block->owner = (Object)__53636960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53638520;

   return block;
};

Block __53640740;

void code__53640740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,address_59161960_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_58181780_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,remaining_60782920_my__interpolator_58_8410_60481700_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_57972620_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,base_60864560_my__interpolator_58_8410_60481700_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_58048640_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,next__data_61028620_my__interpolator_58_8410_60481700_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_45537580_my__interpolator_58_8410_60481700_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,a_58585140_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53640740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53640740 = block;
   block->owner = (Object)__52461400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53640740;

   return block;
};

Block __53640600;

void code__53640600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59244280_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,base_57972620_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59370380_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,next__data_58048640_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53640600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53640600 = block;
   block->owner = (Object)__52461140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53640600;

   return block;
};

Value make__52456300() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52456280() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52455840() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52455760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52455040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52455020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52455000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52454980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52454880() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52454860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_53206200;

SignalI base_57972620_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makebase_57972620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_57972620_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func0_58_840_53206200;
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

SignalI next__data_58048640_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makenext__data_58048640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_58048640_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func0_58_840_53206200;
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

SignalI address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeaddress_58048560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func0_58_840_53206200;
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

SignalI remaining_58181780_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeremaining_58181780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_58181780_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func0_58_840_53206200;
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

SystemI my__lut_59370200;

SystemI makemy__lut_59370200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_59370200 = systemI;
   systemI->owner = (Object)func0_58_840_53206200;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_59123240;

   return systemI;
};

SystemI my__interpolator_45535820;

SystemI makemy__interpolator_45535820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_45535820 = systemI;
   systemI->owner = (Object)func0_58_840_53206200;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_60481700;

   return systemI;
};

Behavior __53639080;

Behavior make__53639080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53639080 = behavior;
   behavior->owner = (Object)func0_58_840_53206200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53639600();

   return behavior;
}

Behavior __53638600;

Behavior make__53638600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53638600 = behavior;
   behavior->owner = (Object)func0_58_840_53206200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53639020();

   return behavior;
}

Behavior __53636960;

Behavior make__53636960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53636960 = behavior;
   behavior->owner = (Object)func0_58_840_53206200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53638520();

   return behavior;
}

Behavior __52461400;

Behavior make__52461400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52461400 = behavior;
   behavior->owner = (Object)func0_58_840_53206200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[address_58048560_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_58181780_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   remaining_58181780_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   remaining_58181780_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(remaining_58181780_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,remaining_58181780_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
remaining_58181780_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[remaining_58181780_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_57972620_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   base_57972620_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   base_57972620_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(base_57972620_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,base_57972620_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
base_57972620_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[base_57972620_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_58048640_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   next__data_58048640_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   next__data_58048640_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(next__data_58048640_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,next__data_58048640_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
next__data_58048640_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[next__data_58048640_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_45537580_my__interpolator_58_8410_60481700_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   interpolated__value_45537580_my__interpolator_58_8410_60481700_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   interpolated__value_45537580_my__interpolator_58_8410_60481700_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(interpolated__value_45537580_my__interpolator_58_8410_60481700_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,interpolated__value_45537580_my__interpolator_58_8410_60481700_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
interpolated__value_45537580_my__interpolator_58_8410_60481700_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[interpolated__value_45537580_my__interpolator_58_8410_60481700_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53640740();

   return behavior;
}

Behavior __52461140;

Behavior make__52461140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52461140 = behavior;
   behavior->owner = (Object)func0_58_840_53206200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_59244280_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   base_59244280_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   base_59244280_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(base_59244280_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,base_59244280_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
base_59244280_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[base_59244280_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_59370380_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   next__data_59370380_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   next__data_59370380_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(next__data_59370380_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,next__data_59370380_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
next__data_59370380_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[next__data_59370380_my__lut_58_8410_59123240_func0_58_840_53206200_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53640600();

   return behavior;
}

Scope makefunc0_58_840_53206200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_53206200 = scope;
   scope->owner = (Object)func0_58_8400_58198620;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_59370200();
   scope->systemIs[1] = makemy__interpolator_45535820();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_57972620();
   scope->inners[1] = makenext__data_58048640();
   scope->inners[2] = makeaddress_58048560();
   scope->inners[3] = makeremaining_58181780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53639080();
   scope->behaviors[1] = make__53638600();
   scope->behaviors[2] = make__53636960();
   scope->behaviors[3] = make__52461400();
   scope->behaviors[4] = make__52461140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_58198620() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_58198620 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_58455940();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_58585140();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_53206200();

   return systemT;
}