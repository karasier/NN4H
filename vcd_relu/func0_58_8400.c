#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_52073280;

SignalI z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makez__value_57268380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_8400_52073280;
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

SignalI a_57742580_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makea_57742580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_57742580_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_8400_52073280;
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

Block __57589020;

void code__57589020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
            first = value2integer(make__57728800());
            last = value2integer(make__57728780());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__57589020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57589020 = block;
   block->owner = (Object)__57588540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57589020;

   return block;
};

Block __57588500;

void code__57588500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660,value2integer(make__57728600()),value2integer(make__57728580())));
      set_value_pos(pool_state);
   }
}

Block make__57588500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57588500 = block;
   block->owner = (Object)__57588140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57588500;

   return block;
};

Block __57587980;

void code__57587980() {
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
            src0 = make__57726480();
            src1 = make__57726360();
            src2 = make__57726240();
            src3 = make__57726120();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
            first = value2integer(make__57725880());
            last = value2integer(make__57725860());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_52091140_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__57587980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57587980 = block;
   block->owner = (Object)__57586740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57587980;

   return block;
};

Block __57589320;

void code__57589320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,address_58338680_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51813260_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,base_60230300_my__interpolator_58_8410_60087000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51940580_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,next__data_60335520_my__interpolator_58_8410_60087000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_52091140_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,remaining_60602960_my__interpolator_58_8410_60087000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_60853820_my__interpolator_58_8410_60087000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,a_57742580_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__57589320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57589320 = block;
   block->owner = (Object)__57692740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57589320;

   return block;
};

Block __57589220;

void code__57589220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58533720_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,base_51813260_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_58663080_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,next__data_51940580_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__57589220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57589220 = block;
   block->owner = (Object)__57692480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57589220;

   return block;
};

Value make__57728800() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57728780() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57728600() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57728580() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57726480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57726360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57726240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57726120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57725880() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57725860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_51647860;

SignalI base_51813260_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makebase_51813260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51813260_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_840_51647860;
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

SignalI next__data_51940580_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makenext__data_51940580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51940580_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_840_51647860;
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

SignalI address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeaddress_51940440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_840_51647860;
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

SignalI remaining_52091140_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeremaining_52091140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_52091140_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_840_51647860;
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

SignalI change_52306840_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makechange_52306840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_52306840_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_840_51647860;
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

SystemI my__lut_58687420;

SystemI makemy__lut_58687420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_58687420 = systemI;
   systemI->owner = (Object)func0_58_840_51647860;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_58341000;

   return systemI;
};

SystemI my__interpolator_60853680;

SystemI makemy__interpolator_60853680() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_60853680 = systemI;
   systemI->owner = (Object)func0_58_840_51647860;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_60087000;

   return systemI;
};

Behavior __57588540;

Behavior make__57588540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57588540 = behavior;
   behavior->owner = (Object)func0_58_840_51647860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__57589020();

   return behavior;
}

Behavior __57588140;

Behavior make__57588140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57588140 = behavior;
   behavior->owner = (Object)func0_58_840_51647860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__57588500();

   return behavior;
}

Behavior __57586740;

Behavior make__57586740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57586740 = behavior;
   behavior->owner = (Object)func0_58_840_51647860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[z__value_57268380_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__57587980();

   return behavior;
}

Behavior __57692740;

Behavior make__57692740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57692740 = behavior;
   behavior->owner = (Object)func0_58_840_51647860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[address_51940440_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_51813260_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   base_51813260_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   base_51813260_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(base_51813260_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,base_51813260_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
base_51813260_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[base_51813260_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_51940580_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   next__data_51940580_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   next__data_51940580_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(next__data_51940580_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,next__data_51940580_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
next__data_51940580_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[next__data_51940580_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,remaining_52091140_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   remaining_52091140_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   remaining_52091140_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(remaining_52091140_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,remaining_52091140_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
remaining_52091140_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[remaining_52091140_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_60853820_my__interpolator_58_8410_60087000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   interpolated__value_60853820_my__interpolator_58_8410_60087000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   interpolated__value_60853820_my__interpolator_58_8410_60087000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(interpolated__value_60853820_my__interpolator_58_8410_60087000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,interpolated__value_60853820_my__interpolator_58_8410_60087000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
interpolated__value_60853820_my__interpolator_58_8410_60087000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[interpolated__value_60853820_my__interpolator_58_8410_60087000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__57589320();

   return behavior;
}

Behavior __57692480;

Behavior make__57692480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57692480 = behavior;
   behavior->owner = (Object)func0_58_840_51647860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_58533720_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   base_58533720_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   base_58533720_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(base_58533720_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,base_58533720_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
base_58533720_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[base_58533720_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_58663080_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   next__data_58663080_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   next__data_58663080_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(next__data_58663080_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,next__data_58663080_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
next__data_58663080_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[next__data_58663080_my__lut_58_8410_58341000_func0_58_840_51647860_func0_58_8400_52073280_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__57589220();

   return behavior;
}

Scope makefunc0_58_840_51647860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_51647860 = scope;
   scope->owner = (Object)func0_58_8400_52073280;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_58687420();
   scope->systemIs[1] = makemy__interpolator_60853680();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51813260();
   scope->inners[1] = makenext__data_51940580();
   scope->inners[2] = makeaddress_51940440();
   scope->inners[3] = makeremaining_52091140();
   scope->inners[4] = makechange_52306840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57588540();
   scope->behaviors[1] = make__57588140();
   scope->behaviors[2] = make__57586740();
   scope->behaviors[3] = make__57692740();
   scope->behaviors[4] = make__57692480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_52073280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_52073280 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_57268380();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_57742580();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_51647860();

   return systemT;
}