#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8420_73820940;

SignalI z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makez__value_74060160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_8420_73820940;
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

SignalI a_74194800_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makea_74194800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_74194800_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_8420_73820940;
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

Block __55224460;

void code__55224460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            first = value2integer(make__55420040());
            last = value2integer(make__55420020());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55224460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55224460 = block;
   block->owner = (Object)__55222960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55224460;

   return block;
};

Block __55222700;

void code__55222700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140,value2integer(make__55419420()),value2integer(make__55419260())));
      set_value_pos(pool_state);
   }
}

Block make__55222700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55222700 = block;
   block->owner = (Object)__55279080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55222700;

   return block;
};

Block __55278980;

void code__55278980() {
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
            src0 = make__55474220();
            src1 = make__55474100();
            src2 = make__55473940();
            src3 = make__55473880();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            first = value2integer(make__55473700());
            last = value2integer(make__55473660());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_74674680_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55278980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55278980 = block;
   block->owner = (Object)__55277180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55278980;

   return block;
};

Block __55277080;

void code__55277080() {
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
            src0 = make__55470520();
            src1 = make__55470480();
            src2 = make__55470420();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__55469840();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__55468980();
            src1 = make__55468360();
            src2 = make__55468320();
            src3 = make__55468280();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_74721040_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55277080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55277080 = block;
   block->owner = (Object)__55274520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55277080;

   return block;
};

Block __55225920;

void code__55225920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_74418220_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,base_64168100_my__interpolator_58_8440_63804300_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_74612000_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,next__data_64544220_my__interpolator_58_8440_63804300_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_74721040_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,change_64885120_my__interpolator_58_8440_63804300_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_74674680_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,remaining_65220960_my__interpolator_58_8440_63804300_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_65414760_my__interpolator_58_8440_63804300_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,a_74194800_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55225920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55225920 = block;
   block->owner = (Object)__55377500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55225920;

   return block;
};

Block __55225620;

void code__55225620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56442960_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,base_74418220_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_61807980_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,next__data_74612000_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55225620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55225620 = block;
   block->owner = (Object)__55377220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55225620;

   return block;
};

Value make__55420040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55420020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55419420() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55419260() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55474220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55474100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55473940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55473880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55473700() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55473660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55470520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55470480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55470420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55469840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55468980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55468360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55468320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55468280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_842_74241080;

SignalI base_74418220_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makebase_74418220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_74418220_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_842_74241080;
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

SignalI next__data_74612000_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makenext__data_74612000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_74612000_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_842_74241080;
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

SignalI address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeaddress_74611920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_842_74241080;
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

SignalI remaining_74674680_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeremaining_74674680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_74674680_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_842_74241080;
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

SignalI change_74721040_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makechange_74721040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_74721040_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_842_74241080;
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

SystemI my__lut_61807500;

SystemI makemy__lut_61807500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_61807500 = systemI;
   systemI->owner = (Object)func0_58_842_74241080;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8440_56241100;

   return systemI;
};

SystemI my__interpolator_65414440;

SystemI makemy__interpolator_65414440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_65414440 = systemI;
   systemI->owner = (Object)func0_58_842_74241080;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8440_63804300;

   return systemI;
};

Behavior __55222960;

Behavior make__55222960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55222960 = behavior;
   behavior->owner = (Object)func0_58_842_74241080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__55224460();

   return behavior;
}

Behavior __55279080;

Behavior make__55279080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55279080 = behavior;
   behavior->owner = (Object)func0_58_842_74241080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__55222700();

   return behavior;
}

Behavior __55277180;

Behavior make__55277180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55277180 = behavior;
   behavior->owner = (Object)func0_58_842_74241080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__55278980();

   return behavior;
}

Behavior __55274520;

Behavior make__55274520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55274520 = behavior;
   behavior->owner = (Object)func0_58_842_74241080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__55277080();

   return behavior;
}

Behavior __55377500;

Behavior make__55377500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55377500 = behavior;
   behavior->owner = (Object)func0_58_842_74241080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[address_74611920_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_74418220_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   base_74418220_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   base_74418220_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(base_74418220_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,base_74418220_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
base_74418220_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[base_74418220_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_74612000_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   next__data_74612000_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   next__data_74612000_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(next__data_74612000_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,next__data_74612000_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
next__data_74612000_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[next__data_74612000_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_74721040_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   change_74721040_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   change_74721040_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(change_74721040_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,change_74721040_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
change_74721040_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[change_74721040_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_74674680_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   remaining_74674680_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   remaining_74674680_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(remaining_74674680_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,remaining_74674680_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
remaining_74674680_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[remaining_74674680_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_65414760_my__interpolator_58_8440_63804300_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   interpolated__value_65414760_my__interpolator_58_8440_63804300_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   interpolated__value_65414760_my__interpolator_58_8440_63804300_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(interpolated__value_65414760_my__interpolator_58_8440_63804300_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,interpolated__value_65414760_my__interpolator_58_8440_63804300_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
interpolated__value_65414760_my__interpolator_58_8440_63804300_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[interpolated__value_65414760_my__interpolator_58_8440_63804300_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__55225920();

   return behavior;
}

Behavior __55377220;

Behavior make__55377220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55377220 = behavior;
   behavior->owner = (Object)func0_58_842_74241080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56442960_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   base_56442960_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   base_56442960_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(base_56442960_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,base_56442960_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
base_56442960_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[base_56442960_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_61807980_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   next__data_61807980_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   next__data_61807980_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(next__data_61807980_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,next__data_61807980_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
next__data_61807980_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[next__data_61807980_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__55225620();

   return behavior;
}

Scope makefunc0_58_842_74241080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_842_74241080 = scope;
   scope->owner = (Object)func0_58_8420_73820940;
   scope->name = "func0:T2";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_61807500();
   scope->systemIs[1] = makemy__interpolator_65414440();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_74418220();
   scope->inners[1] = makenext__data_74612000();
   scope->inners[2] = makeaddress_74611920();
   scope->inners[3] = makeremaining_74674680();
   scope->inners[4] = makechange_74721040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55222960();
   scope->behaviors[1] = make__55279080();
   scope->behaviors[2] = make__55277180();
   scope->behaviors[3] = make__55274520();
   scope->behaviors[4] = make__55377500();
   scope->behaviors[5] = make__55377220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8420_73820940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8420_73820940 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_74060160();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_74194800();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_842_74241080();

   return systemT;
}