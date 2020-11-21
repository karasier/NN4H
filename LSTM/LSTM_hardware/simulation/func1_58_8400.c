#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_8400_63472040;

SignalI z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makez__value_63644440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func1_58_8400_63472040;
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

SignalI a_63937260_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makea_63937260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_63937260_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func1_58_8400_63472040;
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

Block __79035480;

void code__79035480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            first = value2integer(make__79047260());
            last = value2integer(make__79047240());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79035480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79035480 = block;
   block->owner = (Object)__79035220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79035480;

   return block;
};

Block __79035180;

void code__79035180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060,value2integer(make__79047100()),value2integer(make__79047080())));
      set_value_pos(pool_state);
   }
}

Block make__79035180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79035180 = block;
   block->owner = (Object)__79034920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79035180;

   return block;
};

Block __79034880;

void code__79034880() {
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
            src0 = make__79046620();
            src1 = make__79046580();
            src2 = make__79046560();
            src3 = make__79046540();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            first = value2integer(make__79046420());
            last = value2integer(make__79046400());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_57399240_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79034880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79034880 = block;
   block->owner = (Object)__79034320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79034880;

   return block;
};

Block __79034280;

void code__79034280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,src2;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,src2;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__79045900();
            src1 = make__79045880();
            src2 = make__79045860();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79045800();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__79045640();
            src1 = make__79045620();
            src2 = make__79045600();
            src3 = make__79045580();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_59758460_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79034280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79034280 = block;
   block->owner = (Object)__79033820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79034280;

   return block;
};

Block __79035720;

void code__79035720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,address_63822380_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56480720_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,base_66044700_my__interpolator_58_8430_65702360_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56838560_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,next__data_66191840_my__interpolator_58_8430_65702360_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_59758460_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,change_66388860_my__interpolator_58_8430_65702360_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_57399240_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,remaining_66570660_my__interpolator_58_8430_65702360_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_66868040_my__interpolator_58_8430_65702360_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,a_63937260_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79035720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79035720 = block;
   block->owner = (Object)__79052580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79035720;

   return block;
};

Block __79035660;

void code__79035660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_63948820_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,base_56480720_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_64367100_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,next__data_56838560_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79035660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79035660 = block;
   block->owner = (Object)__79052420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79035660;

   return block;
};

Value make__79047260() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79047240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79047100() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79047080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79046620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79046580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79046560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79046540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79046420() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79046400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79045900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79045880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79045860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79045800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79045640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79045620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79045600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79045580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_840_55896280;

SignalI base_56480720_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makebase_56480720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56480720_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func1_58_840_55896280;
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

SignalI next__data_56838560_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makenext__data_56838560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_56838560_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func1_58_840_55896280;
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

SignalI address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeaddress_56838440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func1_58_840_55896280;
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

SignalI remaining_57399240_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeremaining_57399240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_57399240_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func1_58_840_55896280;
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

SignalI change_59758460_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makechange_59758460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_59758460_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func1_58_840_55896280;
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

SystemI my__lut_64366540;

SystemI makemy__lut_64366540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_64366540 = systemI;
   systemI->owner = (Object)func1_58_840_55896280;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8430_63696780;

   return systemI;
};

SystemI my__interpolator_66867880;

SystemI makemy__interpolator_66867880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_66867880 = systemI;
   systemI->owner = (Object)func1_58_840_55896280;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8430_65702360;

   return systemI;
};

Behavior __79035220;

Behavior make__79035220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79035220 = behavior;
   behavior->owner = (Object)func1_58_840_55896280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79035480();

   return behavior;
}

Behavior __79034920;

Behavior make__79034920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79034920 = behavior;
   behavior->owner = (Object)func1_58_840_55896280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79035180();

   return behavior;
}

Behavior __79034320;

Behavior make__79034320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79034320 = behavior;
   behavior->owner = (Object)func1_58_840_55896280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79034880();

   return behavior;
}

Behavior __79033820;

Behavior make__79033820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79033820 = behavior;
   behavior->owner = (Object)func1_58_840_55896280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__79034280();

   return behavior;
}

Behavior __79052580;

Behavior make__79052580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79052580 = behavior;
   behavior->owner = (Object)func1_58_840_55896280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[address_56838440_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_56480720_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   base_56480720_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   base_56480720_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(base_56480720_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,base_56480720_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
base_56480720_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[base_56480720_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_56838560_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   next__data_56838560_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   next__data_56838560_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(next__data_56838560_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,next__data_56838560_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
next__data_56838560_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[next__data_56838560_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_59758460_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   change_59758460_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   change_59758460_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(change_59758460_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,change_59758460_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
change_59758460_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[change_59758460_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_57399240_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   remaining_57399240_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   remaining_57399240_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(remaining_57399240_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,remaining_57399240_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
remaining_57399240_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[remaining_57399240_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_66868040_my__interpolator_58_8430_65702360_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   interpolated__value_66868040_my__interpolator_58_8430_65702360_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   interpolated__value_66868040_my__interpolator_58_8430_65702360_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(interpolated__value_66868040_my__interpolator_58_8430_65702360_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,interpolated__value_66868040_my__interpolator_58_8430_65702360_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
interpolated__value_66868040_my__interpolator_58_8430_65702360_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[interpolated__value_66868040_my__interpolator_58_8430_65702360_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79035720();

   return behavior;
}

Behavior __79052420;

Behavior make__79052420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79052420 = behavior;
   behavior->owner = (Object)func1_58_840_55896280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_63948820_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   base_63948820_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   base_63948820_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(base_63948820_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,base_63948820_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
base_63948820_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[base_63948820_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_64367100_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   next__data_64367100_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   next__data_64367100_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(next__data_64367100_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,next__data_64367100_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
next__data_64367100_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[next__data_64367100_my__lut_58_8430_63696780_func1_58_840_55896280_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79035660();

   return behavior;
}

Scope makefunc1_58_840_55896280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_840_55896280 = scope;
   scope->owner = (Object)func1_58_8400_63472040;
   scope->name = "func1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_64366540();
   scope->systemIs[1] = makemy__interpolator_66867880();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_56480720();
   scope->inners[1] = makenext__data_56838560();
   scope->inners[2] = makeaddress_56838440();
   scope->inners[3] = makeremaining_57399240();
   scope->inners[4] = makechange_59758460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79035220();
   scope->behaviors[1] = make__79034920();
   scope->behaviors[2] = make__79034320();
   scope->behaviors[3] = make__79033820();
   scope->behaviors[4] = make__79052580();
   scope->behaviors[5] = make__79052420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_8400_63472040() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_8400_63472040 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_63644440();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_63937260();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_840_55896280();

   return systemT;
}