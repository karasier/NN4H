#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8420_73894280;

SignalI z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makez__value_74051280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_8420_73894280;
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

SignalI a_74218640_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makea_74218640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_74218640_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_8420_73894280;
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

Block __51374620;

void code__51374620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            first = value2integer(make__51778720());
            last = value2integer(make__51778600());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__51374620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51374620 = block;
   block->owner = (Object)__51373920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51374620;

   return block;
};

Block __51373800;

void code__51373800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040,value2integer(make__51777720()),value2integer(make__51777700())));
      set_value_pos(pool_state);
   }
}

Block make__51373800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51373800 = block;
   block->owner = (Object)__51372140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51373800;

   return block;
};

Block __51396520;

void code__51396520() {
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
            src0 = make__51774960();
            src1 = make__51774660();
            src2 = make__51774620();
            src3 = make__51774260();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            first = value2integer(make__51797660());
            last = value2integer(make__51797580());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_74572280_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__51396520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51396520 = block;
   block->owner = (Object)__51390480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51396520;

   return block;
};

Block __51388620;

void code__51388620() {
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
            src0 = make__51794840();
            src1 = make__51794760();
            src2 = make__51794720();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__51794520();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__51790500();
            src1 = make__51790160();
            src2 = make__51811960();
            src3 = make__51811580();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_74708720_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__51388620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51388620 = block;
   block->owner = (Object)__51411220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51388620;

   return block;
};

Block __51375600;

void code__51375600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_74471420_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,base_63385360_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_74509600_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,next__data_63631560_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_74708720_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,change_63947400_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_74572280_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,remaining_64266520_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_64497740_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,a_74218640_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__51375600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51375600 = block;
   block->owner = (Object)__51612260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51375600;

   return block;
};

Block __51375000;

void code__51375000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_55040780_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,base_74471420_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55662240_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,next__data_74509600_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__51375000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51375000 = block;
   block->owner = (Object)__51610860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51375000;

   return block;
};

Value make__51778720() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51778600() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51777720() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51777700() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51774960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51774660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51774620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51774260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51797660() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51797580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51794840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51794760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51794720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51794520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51790500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51790160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51811960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51811580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_842_74310720;

SignalI base_74471420_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makebase_74471420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_74471420_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_842_74310720;
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

SignalI next__data_74509600_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makenext__data_74509600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_74509600_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_842_74310720;
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

SignalI address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeaddress_74509520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_842_74310720;
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

SignalI remaining_74572280_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeremaining_74572280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_74572280_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_842_74310720;
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

SignalI change_74708720_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makechange_74708720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_74708720_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_842_74310720;
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

SystemI my__lut_55661480;

SystemI makemy__lut_55661480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_55661480 = systemI;
   systemI->owner = (Object)func0_58_842_74310720;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8440_54231500;

   return systemI;
};

SystemI my__interpolator_64497200;

SystemI makemy__interpolator_64497200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_64497200 = systemI;
   systemI->owner = (Object)func0_58_842_74310720;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8440_62999740;

   return systemI;
};

Behavior __51373920;

Behavior make__51373920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51373920 = behavior;
   behavior->owner = (Object)func0_58_842_74310720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__51374620();

   return behavior;
}

Behavior __51372140;

Behavior make__51372140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51372140 = behavior;
   behavior->owner = (Object)func0_58_842_74310720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__51373800();

   return behavior;
}

Behavior __51390480;

Behavior make__51390480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51390480 = behavior;
   behavior->owner = (Object)func0_58_842_74310720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__51396520();

   return behavior;
}

Behavior __51411220;

Behavior make__51411220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51411220 = behavior;
   behavior->owner = (Object)func0_58_842_74310720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__51388620();

   return behavior;
}

Behavior __51612260;

Behavior make__51612260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51612260 = behavior;
   behavior->owner = (Object)func0_58_842_74310720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[address_74509520_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_74471420_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   base_74471420_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   base_74471420_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(base_74471420_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,base_74471420_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
base_74471420_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[base_74471420_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_74509600_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   next__data_74509600_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   next__data_74509600_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(next__data_74509600_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,next__data_74509600_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
next__data_74509600_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[next__data_74509600_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_74708720_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   change_74708720_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   change_74708720_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(change_74708720_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,change_74708720_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
change_74708720_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[change_74708720_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_74572280_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   remaining_74572280_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   remaining_74572280_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(remaining_74572280_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,remaining_74572280_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
remaining_74572280_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[remaining_74572280_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_64497740_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   interpolated__value_64497740_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   interpolated__value_64497740_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(interpolated__value_64497740_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,interpolated__value_64497740_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
interpolated__value_64497740_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[interpolated__value_64497740_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__51375600();

   return behavior;
}

Behavior __51610860;

Behavior make__51610860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51610860 = behavior;
   behavior->owner = (Object)func0_58_842_74310720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_55040780_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   base_55040780_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   base_55040780_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(base_55040780_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,base_55040780_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
base_55040780_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[base_55040780_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_55662240_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   next__data_55662240_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   next__data_55662240_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(next__data_55662240_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,next__data_55662240_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
next__data_55662240_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[next__data_55662240_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__51375000();

   return behavior;
}

Scope makefunc0_58_842_74310720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_842_74310720 = scope;
   scope->owner = (Object)func0_58_8420_73894280;
   scope->name = "func0:T2";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_55661480();
   scope->systemIs[1] = makemy__interpolator_64497200();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_74471420();
   scope->inners[1] = makenext__data_74509600();
   scope->inners[2] = makeaddress_74509520();
   scope->inners[3] = makeremaining_74572280();
   scope->inners[4] = makechange_74708720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51373920();
   scope->behaviors[1] = make__51372140();
   scope->behaviors[2] = make__51390480();
   scope->behaviors[3] = make__51411220();
   scope->behaviors[4] = make__51612260();
   scope->behaviors[5] = make__51610860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8420_73894280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8420_73894280 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_74051280();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_74218640();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_842_74310720();

   return systemT;
}