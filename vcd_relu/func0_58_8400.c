#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_56813300;

SignalI z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makez__value_57020760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_8400_56813300;
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

SignalI a_57470020_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makea_57470020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_57470020_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_8400_56813300;
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

Block __57798440;

void code__57798440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            first = value2integer(make__58007000());
            last = value2integer(make__58006980());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57798440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57798440 = block;
   block->owner = (Object)__57797960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57798440;

   return block;
};

Block __57797900;

void code__57797900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680,value2integer(make__58006620()),value2integer(make__58006580())));
      set_value_pos(pool_state);
   }
}

Block make__57797900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57797900 = block;
   block->owner = (Object)__57797420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57797900;

   return block;
};

Block __57797380;

void code__57797380() {
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
            src0 = make__58005620();
            src1 = make__58005600();
            src2 = make__58005440();
            src3 = make__58005420();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            first = value2integer(make__58005220());
            last = value2integer(make__58005140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_55481540_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57797380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57797380 = block;
   block->owner = (Object)__57796400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57797380;

   return block;
};

Block __57799060;

void code__57799060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,address_51321280_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51253700_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,base_57743660_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51452220_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,next__data_57957380_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_55481540_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,remaining_58108080_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_58204720_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,a_57470020_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57799060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57799060 = block;
   block->owner = (Object)__57934360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57799060;

   return block;
};

Block __57798820;

void code__57798820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52495220_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,base_51253700_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55542400_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,next__data_51452220_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__57798820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57798820 = block;
   block->owner = (Object)__57934000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57798820;

   return block;
};

Value make__58007000() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58006980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58006620() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58006580() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58005620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58005600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58005440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58005420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58005220() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58005140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_51030640;

SignalI base_51253700_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makebase_51253700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51253700_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_840_51030640;
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

SignalI next__data_51452220_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makenext__data_51452220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51452220_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_840_51030640;
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

SignalI address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeaddress_51452100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_840_51030640;
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

SignalI remaining_55481540_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeremaining_55481540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_55481540_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_840_51030640;
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

SignalI change_55902140_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makechange_55902140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_55902140_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_840_51030640;
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

SystemI my__lut_55541860;

SystemI makemy__lut_55541860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_55541860 = systemI;
   systemI->owner = (Object)func0_58_840_51030640;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_51304800;

   return systemI;
};

SystemI my__interpolator_58204560;

SystemI makemy__interpolator_58204560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_58204560 = systemI;
   systemI->owner = (Object)func0_58_840_51030640;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_57487500;

   return systemI;
};

Behavior __57797960;

Behavior make__57797960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57797960 = behavior;
   behavior->owner = (Object)func0_58_840_51030640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__57798440();

   return behavior;
}

Behavior __57797420;

Behavior make__57797420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57797420 = behavior;
   behavior->owner = (Object)func0_58_840_51030640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__57797900();

   return behavior;
}

Behavior __57796400;

Behavior make__57796400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57796400 = behavior;
   behavior->owner = (Object)func0_58_840_51030640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[z__value_57020760_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__57797380();

   return behavior;
}

Behavior __57934360;

Behavior make__57934360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57934360 = behavior;
   behavior->owner = (Object)func0_58_840_51030640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[address_51452100_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_51253700_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   base_51253700_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   base_51253700_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(base_51253700_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,base_51253700_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
base_51253700_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[base_51253700_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_51452220_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   next__data_51452220_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   next__data_51452220_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(next__data_51452220_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,next__data_51452220_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
next__data_51452220_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[next__data_51452220_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,remaining_55481540_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   remaining_55481540_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   remaining_55481540_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(remaining_55481540_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,remaining_55481540_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
remaining_55481540_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[remaining_55481540_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_58204720_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   interpolated__value_58204720_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   interpolated__value_58204720_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(interpolated__value_58204720_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,interpolated__value_58204720_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
interpolated__value_58204720_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[interpolated__value_58204720_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__57799060();

   return behavior;
}

Behavior __57934000;

Behavior make__57934000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57934000 = behavior;
   behavior->owner = (Object)func0_58_840_51030640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52495220_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   base_52495220_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   base_52495220_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(base_52495220_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,base_52495220_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
base_52495220_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[base_52495220_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_55542400_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   next__data_55542400_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   next__data_55542400_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(next__data_55542400_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,next__data_55542400_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
next__data_55542400_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[next__data_55542400_my__lut_58_8410_51304800_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__57798820();

   return behavior;
}

Scope makefunc0_58_840_51030640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_51030640 = scope;
   scope->owner = (Object)func0_58_8400_56813300;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_55541860();
   scope->systemIs[1] = makemy__interpolator_58204560();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51253700();
   scope->inners[1] = makenext__data_51452220();
   scope->inners[2] = makeaddress_51452100();
   scope->inners[3] = makeremaining_55481540();
   scope->inners[4] = makechange_55902140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57797960();
   scope->behaviors[1] = make__57797420();
   scope->behaviors[2] = make__57796400();
   scope->behaviors[3] = make__57934360();
   scope->behaviors[4] = make__57934000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_56813300() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_56813300 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_57020760();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_57470020();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_51030640();

   return systemT;
}