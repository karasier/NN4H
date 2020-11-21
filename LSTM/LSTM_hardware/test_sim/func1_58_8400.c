#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_8400_55166660;

SignalI z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makez__value_55626360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func1_58_8400_55166660;
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

SignalI a_56076920_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makea_56076920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_56076920_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func1_58_8400_55166660;
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

Block __77405300;

void code__77405300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            first = value2integer(make__77432400());
            last = value2integer(make__77432380());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77405300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77405300 = block;
   block->owner = (Object)__77405040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77405300;

   return block;
};

Block __77405000;

void code__77405000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080,value2integer(make__77432240()),value2integer(make__77432220())));
      set_value_pos(pool_state);
   }
}

Block make__77405000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77405000 = block;
   block->owner = (Object)__77404740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77405000;

   return block;
};

Block __77404700;

void code__77404700() {
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
            src0 = make__77431740();
            src1 = make__77431700();
            src2 = make__77431680();
            src3 = make__77431660();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            first = value2integer(make__77431540());
            last = value2integer(make__77431520());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_49404000_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77404700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77404700 = block;
   block->owner = (Object)__77404220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77404700;

   return block;
};

Block __77404180;

void code__77404180() {
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
            src0 = make__77431040();
            src1 = make__77431020();
            src2 = make__77431000();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__77430940();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__77488080();
            src1 = make__77488060();
            src2 = make__77488040();
            src3 = make__77488020();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_50634880_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77404180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77404180 = block;
   block->owner = (Object)__77403720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77404180;

   return block;
};

Block __77405580;

void code__77405580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_66532640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,base_63172300_my__interpolator_58_8430_63044640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_66693620_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,next__data_63305160_my__interpolator_58_8430_63044640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_50634880_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,change_63746080_my__interpolator_58_8430_63044640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_49404000_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,remaining_63903540_my__interpolator_58_8430_63044640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_64085020_my__interpolator_58_8430_63044640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,a_56076920_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77405580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77405580 = block;
   block->owner = (Object)__77437540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77405580;

   return block;
};

Block __77405520;

void code__77405520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56769800_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,base_66532640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57261260_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,next__data_66693620_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77405520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77405520 = block;
   block->owner = (Object)__77437380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77405520;

   return block;
};

Value make__77432400() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77432380() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77432240() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77432220() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77431740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77431700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77431680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77431660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77431540() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77431520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77431040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77431020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77431000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77430940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77488080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77488060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77488040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77488020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_840_66313840;

SignalI base_66532640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makebase_66532640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_66532640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func1_58_840_66313840;
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

SignalI next__data_66693620_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makenext__data_66693620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_66693620_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func1_58_840_66313840;
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

SignalI address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeaddress_66693380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func1_58_840_66313840;
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

SignalI remaining_49404000_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeremaining_49404000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_49404000_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func1_58_840_66313840;
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

SignalI change_50634880_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makechange_50634880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_50634880_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func1_58_840_66313840;
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

SystemI my__lut_57260200;

SystemI makemy__lut_57260200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_57260200 = systemI;
   systemI->owner = (Object)func1_58_840_66313840;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8430_56094560;

   return systemI;
};

SystemI my__interpolator_64084820;

SystemI makemy__interpolator_64084820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_64084820 = systemI;
   systemI->owner = (Object)func1_58_840_66313840;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8430_63044640;

   return systemI;
};

Behavior __77405040;

Behavior make__77405040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77405040 = behavior;
   behavior->owner = (Object)func1_58_840_66313840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77405300();

   return behavior;
}

Behavior __77404740;

Behavior make__77404740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77404740 = behavior;
   behavior->owner = (Object)func1_58_840_66313840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77405000();

   return behavior;
}

Behavior __77404220;

Behavior make__77404220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77404220 = behavior;
   behavior->owner = (Object)func1_58_840_66313840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77404700();

   return behavior;
}

Behavior __77403720;

Behavior make__77403720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77403720 = behavior;
   behavior->owner = (Object)func1_58_840_66313840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__77404180();

   return behavior;
}

Behavior __77437540;

Behavior make__77437540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77437540 = behavior;
   behavior->owner = (Object)func1_58_840_66313840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[address_66693380_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_66532640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   base_66532640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   base_66532640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(base_66532640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,base_66532640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
base_66532640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[base_66532640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_66693620_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   next__data_66693620_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   next__data_66693620_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(next__data_66693620_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,next__data_66693620_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
next__data_66693620_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[next__data_66693620_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_50634880_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   change_50634880_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   change_50634880_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(change_50634880_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,change_50634880_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
change_50634880_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[change_50634880_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_49404000_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   remaining_49404000_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   remaining_49404000_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(remaining_49404000_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,remaining_49404000_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
remaining_49404000_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[remaining_49404000_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_64085020_my__interpolator_58_8430_63044640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   interpolated__value_64085020_my__interpolator_58_8430_63044640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   interpolated__value_64085020_my__interpolator_58_8430_63044640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(interpolated__value_64085020_my__interpolator_58_8430_63044640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,interpolated__value_64085020_my__interpolator_58_8430_63044640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
interpolated__value_64085020_my__interpolator_58_8430_63044640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[interpolated__value_64085020_my__interpolator_58_8430_63044640_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77405580();

   return behavior;
}

Behavior __77437380;

Behavior make__77437380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77437380 = behavior;
   behavior->owner = (Object)func1_58_840_66313840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56769800_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   base_56769800_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   base_56769800_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(base_56769800_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,base_56769800_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
base_56769800_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[base_56769800_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_57261260_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   next__data_57261260_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   next__data_57261260_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(next__data_57261260_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,next__data_57261260_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
next__data_57261260_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[next__data_57261260_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77405520();

   return behavior;
}

Scope makefunc1_58_840_66313840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_840_66313840 = scope;
   scope->owner = (Object)func1_58_8400_55166660;
   scope->name = "func1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_57260200();
   scope->systemIs[1] = makemy__interpolator_64084820();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_66532640();
   scope->inners[1] = makenext__data_66693620();
   scope->inners[2] = makeaddress_66693380();
   scope->inners[3] = makeremaining_49404000();
   scope->inners[4] = makechange_50634880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77405040();
   scope->behaviors[1] = make__77404740();
   scope->behaviors[2] = make__77404220();
   scope->behaviors[3] = make__77403720();
   scope->behaviors[4] = make__77437540();
   scope->behaviors[5] = make__77437380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_8400_55166660() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_8400_55166660 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_55626360();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_56076920();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_840_66313840();

   return systemT;
}