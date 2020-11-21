#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8420_65031780;

SignalI z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makez__value_54195200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func0_58_8420_65031780;
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

SignalI a_73368020_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makea_73368020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_73368020_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func0_58_8420_65031780;
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

Block __79357820;

void code__79357820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            first = value2integer(make__79394320());
            last = value2integer(make__79394300());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79357820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79357820 = block;
   block->owner = (Object)__79357560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79357820;

   return block;
};

Block __79357500;

void code__79357500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060,value2integer(make__79394160()),value2integer(make__79394120())));
      set_value_pos(pool_state);
   }
}

Block make__79357500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79357500 = block;
   block->owner = (Object)__79357160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79357500;

   return block;
};

Block __79357120;

void code__79357120() {
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
            src0 = make__79393400();
            src1 = make__79393380();
            src2 = make__79393360();
            src3 = make__79393340();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            first = value2integer(make__79393240());
            last = value2integer(make__79393220());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_73747060_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79357120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79357120 = block;
   block->owner = (Object)__79356660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79357120;

   return block;
};

Block __79356620;

void code__79356620() {
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
            src0 = make__79392780();
            src1 = make__79392760();
            src2 = make__79392740();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79392680();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__79392500();
            src1 = make__79392480();
            src2 = make__79392460();
            src3 = make__79392440();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_73817980_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79356620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79356620 = block;
   block->owner = (Object)__79356140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79356620;

   return block;
};

Block __79358040;

void code__79358040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,address_79582100_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_73547960_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,base_57269500_my__interpolator_58_8440_56466760_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_73668000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,next__data_59160400_my__interpolator_58_8440_56466760_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_73817980_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,change_62283640_my__interpolator_58_8440_56466760_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_73747060_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,remaining_62508780_my__interpolator_58_8440_56466760_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_62837580_my__interpolator_58_8440_56466760_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,a_73368020_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79358040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79358040 = block;
   block->owner = (Object)__79374920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79358040;

   return block;
};

Block __79357980;

void code__79357980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_79661220_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,base_73547960_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_79748520_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,next__data_73668000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79357980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79357980 = block;
   block->owner = (Object)__79374760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79357980;

   return block;
};

Value make__79394320() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79394300() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79394160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79394120() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79393400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79393380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79393360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79393340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79393240() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79393220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79392780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79392760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79392740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79392680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79392500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79392480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79392460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79392440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_842_73485520;

SignalI base_73547960_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makebase_73547960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_73547960_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func0_58_842_73485520;
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

SignalI next__data_73668000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makenext__data_73668000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_73668000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func0_58_842_73485520;
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

SignalI address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeaddress_73667920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func0_58_842_73485520;
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

SignalI remaining_73747060_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeremaining_73747060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_73747060_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func0_58_842_73485520;
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

SignalI change_73817980_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makechange_73817980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_73817980_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)func0_58_842_73485520;
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

SystemI my__lut_79748380;

SystemI makemy__lut_79748380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_79748380 = systemI;
   systemI->owner = (Object)func0_58_842_73485520;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8440_79584000;

   return systemI;
};

SystemI my__interpolator_62837160;

SystemI makemy__interpolator_62837160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_62837160 = systemI;
   systemI->owner = (Object)func0_58_842_73485520;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8440_56466760;

   return systemI;
};

Behavior __79357560;

Behavior make__79357560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79357560 = behavior;
   behavior->owner = (Object)func0_58_842_73485520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79357820();

   return behavior;
}

Behavior __79357160;

Behavior make__79357160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79357160 = behavior;
   behavior->owner = (Object)func0_58_842_73485520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79357500();

   return behavior;
}

Behavior __79356660;

Behavior make__79356660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79356660 = behavior;
   behavior->owner = (Object)func0_58_842_73485520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79357120();

   return behavior;
}

Behavior __79356140;

Behavior make__79356140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79356140 = behavior;
   behavior->owner = (Object)func0_58_842_73485520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__79356620();

   return behavior;
}

Behavior __79374920;

Behavior make__79374920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79374920 = behavior;
   behavior->owner = (Object)func0_58_842_73485520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[address_73667920_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_73547960_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   base_73547960_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   base_73547960_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(base_73547960_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,base_73547960_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
base_73547960_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[base_73547960_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_73668000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   next__data_73668000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   next__data_73668000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(next__data_73668000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,next__data_73668000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
next__data_73668000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[next__data_73668000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_73817980_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   change_73817980_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   change_73817980_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(change_73817980_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,change_73817980_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
change_73817980_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[change_73817980_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_73747060_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   remaining_73747060_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   remaining_73747060_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(remaining_73747060_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,remaining_73747060_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
remaining_73747060_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[remaining_73747060_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_62837580_my__interpolator_58_8440_56466760_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   interpolated__value_62837580_my__interpolator_58_8440_56466760_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   interpolated__value_62837580_my__interpolator_58_8440_56466760_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(interpolated__value_62837580_my__interpolator_58_8440_56466760_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,interpolated__value_62837580_my__interpolator_58_8440_56466760_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
interpolated__value_62837580_my__interpolator_58_8440_56466760_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[interpolated__value_62837580_my__interpolator_58_8440_56466760_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79358040();

   return behavior;
}

Behavior __79374760;

Behavior make__79374760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79374760 = behavior;
   behavior->owner = (Object)func0_58_842_73485520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_79661220_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   base_79661220_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   base_79661220_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(base_79661220_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,base_79661220_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
base_79661220_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[base_79661220_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_79748520_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   next__data_79748520_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   next__data_79748520_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(next__data_79748520_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,next__data_79748520_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
next__data_79748520_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[next__data_79748520_my__lut_58_8440_79584000_func0_58_842_73485520_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79357980();

   return behavior;
}

Scope makefunc0_58_842_73485520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_842_73485520 = scope;
   scope->owner = (Object)func0_58_8420_65031780;
   scope->name = "func0:T2";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_79748380();
   scope->systemIs[1] = makemy__interpolator_62837160();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_73547960();
   scope->inners[1] = makenext__data_73668000();
   scope->inners[2] = makeaddress_73667920();
   scope->inners[3] = makeremaining_73747060();
   scope->inners[4] = makechange_73817980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79357560();
   scope->behaviors[1] = make__79357160();
   scope->behaviors[2] = make__79356660();
   scope->behaviors[3] = make__79356140();
   scope->behaviors[4] = make__79374920();
   scope->behaviors[5] = make__79374760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8420_65031780() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8420_65031780 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_54195200();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_73368020();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_842_73485520();

   return systemT;
}