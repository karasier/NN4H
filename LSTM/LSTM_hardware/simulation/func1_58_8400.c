#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_8400_69007700;

SignalI z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makez__value_69138300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func1_58_8400_69007700;
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

SignalI a_69270920_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makea_69270920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_69270920_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func1_58_8400_69007700;
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

Block __73584140;

void code__73584140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            first = value2integer(make__73715480());
            last = value2integer(make__73715440());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73584140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73584140 = block;
   block->owner = (Object)__73583860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73584140;

   return block;
};

Block __73583820;

void code__73583820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800,value2integer(make__73715140()),value2integer(make__73715120())));
      set_value_pos(pool_state);
   }
}

Block make__73583820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73583820 = block;
   block->owner = (Object)__73583500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73583820;

   return block;
};

Block __73583400;

void code__73583400() {
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
            src0 = make__73714560();
            src1 = make__73714540();
            src2 = make__73714520();
            src3 = make__73714500();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            first = value2integer(make__73714400());
            last = value2integer(make__73714380());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_62745500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73583400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73583400 = block;
   block->owner = (Object)__73582760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73583400;

   return block;
};

Block __73582680;

void code__73582680() {
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
            src0 = make__73713840();
            src1 = make__73713820();
            src2 = make__73713780();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__73713700();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__73713200();
            src1 = make__73713180();
            src2 = make__73713160();
            src3 = make__73713140();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_61451960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73582680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73582680 = block;
   block->owner = (Object)__73582040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73582680;

   return block;
};

Block __73584600;

void code__73584600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,address_73777860_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_62108500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,base_56332080_my__interpolator_58_8430_53082960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_62489940_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,next__data_58616280_my__interpolator_58_8430_53082960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_61451960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,change_58941840_my__interpolator_58_8430_53082960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_62745500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,remaining_59216140_my__interpolator_58_8430_53082960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_59496600_my__interpolator_58_8430_53082960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,a_69270920_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73584600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73584600 = block;
   block->owner = (Object)__73697660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73584600;

   return block;
};

Block __73584540;

void code__73584540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_73912460_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,base_62108500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_74047080_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,next__data_62489940_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73584540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73584540 = block;
   block->owner = (Object)__73697440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73584540;

   return block;
};

Value make__73715480() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73715440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73715140() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73715120() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73714560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73714540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73714520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73714500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73714400() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73714380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73713840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73713820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73713780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73713700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73713200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73713180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73713160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73713140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_840_61782300;

SignalI base_62108500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makebase_62108500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_62108500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func1_58_840_61782300;
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

SignalI next__data_62489940_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makenext__data_62489940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_62489940_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func1_58_840_61782300;
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

SignalI address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeaddress_62489860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func1_58_840_61782300;
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

SignalI remaining_62745500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeremaining_62745500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_62745500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func1_58_840_61782300;
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

SignalI change_61451960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makechange_61451960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_61451960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func1_58_840_61782300;
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

SystemI my__lut_74046940;

SystemI makemy__lut_74046940() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_74046940 = systemI;
   systemI->owner = (Object)func1_58_840_61782300;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8430_73779880;

   return systemI;
};

SystemI my__interpolator_59496140;

SystemI makemy__interpolator_59496140() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_59496140 = systemI;
   systemI->owner = (Object)func1_58_840_61782300;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8430_53082960;

   return systemI;
};

Behavior __73583860;

Behavior make__73583860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73583860 = behavior;
   behavior->owner = (Object)func1_58_840_61782300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73584140();

   return behavior;
}

Behavior __73583500;

Behavior make__73583500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73583500 = behavior;
   behavior->owner = (Object)func1_58_840_61782300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73583820();

   return behavior;
}

Behavior __73582760;

Behavior make__73582760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73582760 = behavior;
   behavior->owner = (Object)func1_58_840_61782300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73583400();

   return behavior;
}

Behavior __73582040;

Behavior make__73582040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73582040 = behavior;
   behavior->owner = (Object)func1_58_840_61782300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__73582680();

   return behavior;
}

Behavior __73697660;

Behavior make__73697660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73697660 = behavior;
   behavior->owner = (Object)func1_58_840_61782300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[address_62489860_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_62108500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   base_62108500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   base_62108500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(base_62108500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,base_62108500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
base_62108500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[base_62108500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_62489940_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   next__data_62489940_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   next__data_62489940_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(next__data_62489940_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,next__data_62489940_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
next__data_62489940_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[next__data_62489940_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_61451960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   change_61451960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   change_61451960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(change_61451960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,change_61451960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
change_61451960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[change_61451960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_62745500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   remaining_62745500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   remaining_62745500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(remaining_62745500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,remaining_62745500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
remaining_62745500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[remaining_62745500_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_59496600_my__interpolator_58_8430_53082960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   interpolated__value_59496600_my__interpolator_58_8430_53082960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   interpolated__value_59496600_my__interpolator_58_8430_53082960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(interpolated__value_59496600_my__interpolator_58_8430_53082960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,interpolated__value_59496600_my__interpolator_58_8430_53082960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
interpolated__value_59496600_my__interpolator_58_8430_53082960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[interpolated__value_59496600_my__interpolator_58_8430_53082960_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73584600();

   return behavior;
}

Behavior __73697440;

Behavior make__73697440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73697440 = behavior;
   behavior->owner = (Object)func1_58_840_61782300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_73912460_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   base_73912460_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   base_73912460_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(base_73912460_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,base_73912460_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
base_73912460_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[base_73912460_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_74047080_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   next__data_74047080_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   next__data_74047080_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(next__data_74047080_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,next__data_74047080_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
next__data_74047080_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[next__data_74047080_my__lut_58_8430_73779880_func1_58_840_61782300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73584540();

   return behavior;
}

Scope makefunc1_58_840_61782300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_840_61782300 = scope;
   scope->owner = (Object)func1_58_8400_69007700;
   scope->name = "func1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_74046940();
   scope->systemIs[1] = makemy__interpolator_59496140();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_62108500();
   scope->inners[1] = makenext__data_62489940();
   scope->inners[2] = makeaddress_62489860();
   scope->inners[3] = makeremaining_62745500();
   scope->inners[4] = makechange_61451960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__73583860();
   scope->behaviors[1] = make__73583500();
   scope->behaviors[2] = make__73582760();
   scope->behaviors[3] = make__73582040();
   scope->behaviors[4] = make__73697660();
   scope->behaviors[5] = make__73697440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_8400_69007700() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_8400_69007700 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_69138300();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_69270920();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_840_61782300();

   return systemT;
}