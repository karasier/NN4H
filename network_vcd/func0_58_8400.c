#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_49872640;

SignalI z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makez__value_50342640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_8400_49872640;
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

SignalI a_50828380_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makea_50828380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50828380_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_8400_49872640;
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

Block __63785300;

void code__63785300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            first = value2integer(make__63889260());
            last = value2integer(make__63889200());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__63785300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63785300 = block;
   block->owner = (Object)__63785000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63785300;

   return block;
};

Block __63784960;

void code__63784960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300,value2integer(make__63889060()),value2integer(make__63889040())));
      set_value_pos(pool_state);
   }
}

Block make__63784960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63784960 = block;
   block->owner = (Object)__63784360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63784960;

   return block;
};

Block __63784300;

void code__63784300() {
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
            src0 = make__63888320();
            src1 = make__63888280();
            src2 = make__63888260();
            src3 = make__63888240();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            first = value2integer(make__63888000());
            last = value2integer(make__63887980());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_62227740_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__63784300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63784300 = block;
   block->owner = (Object)__63783460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63784300;

   return block;
};

Block __63783400;

void code__63783400() {
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
            src0 = make__63887380();
            src1 = make__63887360();
            src2 = make__63887320();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__63887020();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__63886780();
            src1 = make__63886740();
            src2 = make__63886720();
            src3 = make__63886700();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_62288860_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__63783400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63783400 = block;
   block->owner = (Object)__63856500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63783400;

   return block;
};

Block __63785640;

void code__63785640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,address_61716320_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_62023500_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,base_62802080_my__interpolator_58_8410_62654540_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_62109260_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,next__data_63074680_my__interpolator_58_8410_62654540_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_62288860_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,change_63173140_my__interpolator_58_8410_62654540_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_62227740_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,remaining_63339180_my__interpolator_58_8410_62654540_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_63447120_my__interpolator_58_8410_62654540_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,a_50828380_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__63785640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63785640 = block;
   block->owner = (Object)__63872000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63785640;

   return block;
};

Block __63785540;

void code__63785540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_61808780_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,base_62023500_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_61978700_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,next__data_62109260_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__63785540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63785540 = block;
   block->owner = (Object)__63871820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63785540;

   return block;
};

Value make__63889260() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63889200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63889060() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63889040() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63888320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63888280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63888260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63888240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63888000() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63887980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63887380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63887360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63887320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63887020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63886780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63886740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63886720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63886700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_840_61929860;

SignalI base_62023500_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makebase_62023500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_62023500_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_840_61929860;
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

SignalI next__data_62109260_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makenext__data_62109260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_62109260_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_840_61929860;
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

SignalI address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeaddress_62109160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_840_61929860;
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

SignalI remaining_62227740_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeremaining_62227740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_62227740_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_840_61929860;
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

SignalI change_62288860_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makechange_62288860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_62288860_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_840_61929860;
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

SystemI my__lut_61978560;

SystemI makemy__lut_61978560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_61978560 = systemI;
   systemI->owner = (Object)func0_58_840_61929860;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_61718420;

   return systemI;
};

SystemI my__interpolator_63504260;

SystemI makemy__interpolator_63504260() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_63504260 = systemI;
   systemI->owner = (Object)func0_58_840_61929860;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_62654540;

   return systemI;
};

Behavior __63785000;

Behavior make__63785000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63785000 = behavior;
   behavior->owner = (Object)func0_58_840_61929860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__63785300();

   return behavior;
}

Behavior __63784360;

Behavior make__63784360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63784360 = behavior;
   behavior->owner = (Object)func0_58_840_61929860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__63784960();

   return behavior;
}

Behavior __63783460;

Behavior make__63783460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63783460 = behavior;
   behavior->owner = (Object)func0_58_840_61929860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[z__value_50342640_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__63784300();

   return behavior;
}

Behavior __63856500;

Behavior make__63856500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63856500 = behavior;
   behavior->owner = (Object)func0_58_840_61929860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__63783400();

   return behavior;
}

Behavior __63872000;

Behavior make__63872000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63872000 = behavior;
   behavior->owner = (Object)func0_58_840_61929860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[address_62109160_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_62023500_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   base_62023500_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   base_62023500_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(base_62023500_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,base_62023500_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
base_62023500_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[base_62023500_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_62109260_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   next__data_62109260_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   next__data_62109260_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(next__data_62109260_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,next__data_62109260_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
next__data_62109260_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[next__data_62109260_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_62288860_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   change_62288860_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   change_62288860_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(change_62288860_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,change_62288860_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
change_62288860_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[change_62288860_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_62227740_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   remaining_62227740_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   remaining_62227740_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(remaining_62227740_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,remaining_62227740_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
remaining_62227740_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[remaining_62227740_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_63447120_my__interpolator_58_8410_62654540_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   interpolated__value_63447120_my__interpolator_58_8410_62654540_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   interpolated__value_63447120_my__interpolator_58_8410_62654540_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(interpolated__value_63447120_my__interpolator_58_8410_62654540_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,interpolated__value_63447120_my__interpolator_58_8410_62654540_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
interpolated__value_63447120_my__interpolator_58_8410_62654540_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[interpolated__value_63447120_my__interpolator_58_8410_62654540_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__63785640();

   return behavior;
}

Behavior __63871820;

Behavior make__63871820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63871820 = behavior;
   behavior->owner = (Object)func0_58_840_61929860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_61808780_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   base_61808780_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   base_61808780_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(base_61808780_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,base_61808780_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
base_61808780_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[base_61808780_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_61978700_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   next__data_61978700_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   next__data_61978700_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(next__data_61978700_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,next__data_61978700_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
next__data_61978700_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[next__data_61978700_my__lut_58_8410_61718420_func0_58_840_61929860_func0_58_8400_49872640_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__63785540();

   return behavior;
}

Scope makefunc0_58_840_61929860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_61929860 = scope;
   scope->owner = (Object)func0_58_8400_49872640;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_61978560();
   scope->systemIs[1] = makemy__interpolator_63504260();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_62023500();
   scope->inners[1] = makenext__data_62109260();
   scope->inners[2] = makeaddress_62109160();
   scope->inners[3] = makeremaining_62227740();
   scope->inners[4] = makechange_62288860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63785000();
   scope->behaviors[1] = make__63784360();
   scope->behaviors[2] = make__63783460();
   scope->behaviors[3] = make__63856500();
   scope->behaviors[4] = make__63872000();
   scope->behaviors[5] = make__63871820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_49872640() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_49872640 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_50342640();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50828380();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_61929860();

   return systemT;
}