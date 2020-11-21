#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8420_64736120;

SignalI z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makez__value_65110540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func0_58_8420_64736120;
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

SignalI a_65342640_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makea_65342640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_65342640_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func0_58_8420_64736120;
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

Block __77776120;

void code__77776120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            first = value2integer(make__77812040());
            last = value2integer(make__77812020());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77776120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77776120 = block;
   block->owner = (Object)__77775780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77776120;

   return block;
};

Block __77775740;

void code__77775740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080,value2integer(make__77811860()),value2integer(make__77811840())));
      set_value_pos(pool_state);
   }
}

Block make__77775740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77775740 = block;
   block->owner = (Object)__77775480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77775740;

   return block;
};

Block __77775440;

void code__77775440() {
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
            src0 = make__77811300();
            src1 = make__77811280();
            src2 = make__77811260();
            src3 = make__77811240();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            first = value2integer(make__77811140());
            last = value2integer(make__77811120());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_66567820_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77775440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77775440 = block;
   block->owner = (Object)__77774980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77775440;

   return block;
};

Block __77774940;

void code__77774940() {
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
            src0 = make__77810680();
            src1 = make__77810660();
            src2 = make__77810640();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__77810560();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__77810400();
            src1 = make__77810380();
            src2 = make__77810360();
            src3 = make__77810340();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_54757780_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77774940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77774940 = block;
   block->owner = (Object)__77799000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77774940;

   return block;
};

Block __77776360;

void code__77776360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,address_78077180_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_65963040_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,base_79216760_my__interpolator_58_8440_79172200_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_66208400_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,next__data_79435120_my__interpolator_58_8440_79172200_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_54757780_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,change_79514260_my__interpolator_58_8440_79172200_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_66567820_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,remaining_44839240_my__interpolator_58_8440_79172200_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50039180_my__interpolator_58_8440_79172200_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,a_65342640_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77776360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77776360 = block;
   block->owner = (Object)__77792640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77776360;

   return block;
};

Block __77776300;

void code__77776300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_78123520_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,base_65963040_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_78243620_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,next__data_66208400_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77776300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77776300 = block;
   block->owner = (Object)__77792480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77776300;

   return block;
};

Value make__77812040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77812020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77811860() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77811840() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77811300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77811280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77811260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77811240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77811140() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77811120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77810680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77810660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77810640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77810560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77810400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77810380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77810360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77810340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_842_65674300;

SignalI base_65963040_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makebase_65963040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_65963040_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func0_58_842_65674300;
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

SignalI next__data_66208400_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makenext__data_66208400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_66208400_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func0_58_842_65674300;
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

SignalI address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeaddress_66208240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func0_58_842_65674300;
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

SignalI remaining_66567820_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeremaining_66567820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_66567820_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func0_58_842_65674300;
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

SignalI change_54757780_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makechange_54757780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_54757780_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)func0_58_842_65674300;
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

SystemI my__lut_78243480;

SystemI makemy__lut_78243480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_78243480 = systemI;
   systemI->owner = (Object)func0_58_842_65674300;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8440_77989020;

   return systemI;
};

SystemI my__interpolator_50038480;

SystemI makemy__interpolator_50038480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50038480 = systemI;
   systemI->owner = (Object)func0_58_842_65674300;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8440_79172200;

   return systemI;
};

Behavior __77775780;

Behavior make__77775780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77775780 = behavior;
   behavior->owner = (Object)func0_58_842_65674300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77776120();

   return behavior;
}

Behavior __77775480;

Behavior make__77775480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77775480 = behavior;
   behavior->owner = (Object)func0_58_842_65674300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77775740();

   return behavior;
}

Behavior __77774980;

Behavior make__77774980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77774980 = behavior;
   behavior->owner = (Object)func0_58_842_65674300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[z__value_65110540_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77775440();

   return behavior;
}

Behavior __77799000;

Behavior make__77799000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77799000 = behavior;
   behavior->owner = (Object)func0_58_842_65674300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__77774940();

   return behavior;
}

Behavior __77792640;

Behavior make__77792640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77792640 = behavior;
   behavior->owner = (Object)func0_58_842_65674300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[address_66208240_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_65963040_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   base_65963040_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   base_65963040_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(base_65963040_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,base_65963040_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
base_65963040_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[base_65963040_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_66208400_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   next__data_66208400_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   next__data_66208400_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(next__data_66208400_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,next__data_66208400_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
next__data_66208400_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[next__data_66208400_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_54757780_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   change_54757780_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   change_54757780_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(change_54757780_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,change_54757780_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
change_54757780_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[change_54757780_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_66567820_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   remaining_66567820_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   remaining_66567820_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(remaining_66567820_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,remaining_66567820_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
remaining_66567820_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[remaining_66567820_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_50039180_my__interpolator_58_8440_79172200_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   interpolated__value_50039180_my__interpolator_58_8440_79172200_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   interpolated__value_50039180_my__interpolator_58_8440_79172200_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(interpolated__value_50039180_my__interpolator_58_8440_79172200_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,interpolated__value_50039180_my__interpolator_58_8440_79172200_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
interpolated__value_50039180_my__interpolator_58_8440_79172200_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[interpolated__value_50039180_my__interpolator_58_8440_79172200_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77776360();

   return behavior;
}

Behavior __77792480;

Behavior make__77792480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77792480 = behavior;
   behavior->owner = (Object)func0_58_842_65674300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_78123520_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   base_78123520_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   base_78123520_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(base_78123520_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,base_78123520_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
base_78123520_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[base_78123520_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_78243620_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   next__data_78243620_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   next__data_78243620_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(next__data_78243620_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,next__data_78243620_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
next__data_78243620_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[next__data_78243620_my__lut_58_8440_77989020_func0_58_842_65674300_func0_58_8420_64736120_layer1_58_840_65640180_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77776300();

   return behavior;
}

Scope makefunc0_58_842_65674300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_842_65674300 = scope;
   scope->owner = (Object)func0_58_8420_64736120;
   scope->name = "func0:T2";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_78243480();
   scope->systemIs[1] = makemy__interpolator_50038480();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_65963040();
   scope->inners[1] = makenext__data_66208400();
   scope->inners[2] = makeaddress_66208240();
   scope->inners[3] = makeremaining_66567820();
   scope->inners[4] = makechange_54757780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77775780();
   scope->behaviors[1] = make__77775480();
   scope->behaviors[2] = make__77774980();
   scope->behaviors[3] = make__77799000();
   scope->behaviors[4] = make__77792640();
   scope->behaviors[5] = make__77792480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8420_64736120() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8420_64736120 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_65110540();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_65342640();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_842_65674300();

   return systemT;
}