#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8420_58483060;

SignalI z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makez__value_58757860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func0_58_8420_58483060;
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

SignalI a_59234680_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makea_59234680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_59234680_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func0_58_8420_58483060;
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

Block __74044820;

void code__74044820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            first = value2integer(make__74183000());
            last = value2integer(make__74182980());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__74044820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74044820 = block;
   block->owner = (Object)__74044460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74044820;

   return block;
};

Block __74044380;

void code__74044380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800,value2integer(make__74182680()),value2integer(make__74182660())));
      set_value_pos(pool_state);
   }
}

Block make__74044380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74044380 = block;
   block->owner = (Object)__74044020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74044380;

   return block;
};

Block __74043980;

void code__74043980() {
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
            src0 = make__74181900();
            src1 = make__74181860();
            src2 = make__74181840();
            src3 = make__74181780();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            first = value2integer(make__74181680());
            last = value2integer(make__74181660());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_71794020_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__74043980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74043980 = block;
   block->owner = (Object)__74043200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74043980;

   return block;
};

Block __74043160;

void code__74043160() {
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
            src0 = make__74181160();
            src1 = make__74181140();
            src2 = make__74181120();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__74181060();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__74180860();
            src1 = make__74180840();
            src2 = make__74180820();
            src3 = make__74180780();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_71873740_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__74043160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74043160 = block;
   block->owner = (Object)__74042680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74043160;

   return block;
};

Block __74045060;

void code__74045060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_71485220_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,base_71487000_my__interpolator_58_8440_71261420_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_71606380_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,next__data_71630180_my__interpolator_58_8440_71261420_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_71873740_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,change_71791220_my__interpolator_58_8440_71261420_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_71794020_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,remaining_71892860_my__interpolator_58_8440_71261420_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_72037100_my__interpolator_58_8440_71261420_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,a_59234680_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__74045060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74045060 = block;
   block->owner = (Object)__74165940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74045060;

   return block;
};

Block __74045000;

void code__74045000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_70144160_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,base_71485220_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_70223480_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,next__data_71606380_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__74045000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74045000 = block;
   block->owner = (Object)__74165760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74045000;

   return block;
};

Value make__74183000() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74182980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74182680() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74182660() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74181900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74181860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74181840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74181780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74181680() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74181660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74181160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74181140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74181120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74181060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74180860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74180840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74180820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74180780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_842_71275000;

SignalI base_71485220_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makebase_71485220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_71485220_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func0_58_842_71275000;
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

SignalI next__data_71606380_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makenext__data_71606380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_71606380_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func0_58_842_71275000;
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

SignalI address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeaddress_71630780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func0_58_842_71275000;
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

SignalI remaining_71794020_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeremaining_71794020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_71794020_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func0_58_842_71275000;
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

SignalI change_71873740_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makechange_71873740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_71873740_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)func0_58_842_71275000;
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

SystemI my__lut_70223280;

SystemI makemy__lut_70223280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_70223280 = systemI;
   systemI->owner = (Object)func0_58_842_71275000;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8440_70034920;

   return systemI;
};

SystemI my__interpolator_72036940;

SystemI makemy__interpolator_72036940() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_72036940 = systemI;
   systemI->owner = (Object)func0_58_842_71275000;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8440_71261420;

   return systemI;
};

Behavior __74044460;

Behavior make__74044460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74044460 = behavior;
   behavior->owner = (Object)func0_58_842_71275000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__74044820();

   return behavior;
}

Behavior __74044020;

Behavior make__74044020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74044020 = behavior;
   behavior->owner = (Object)func0_58_842_71275000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__74044380();

   return behavior;
}

Behavior __74043200;

Behavior make__74043200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74043200 = behavior;
   behavior->owner = (Object)func0_58_842_71275000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__74043980();

   return behavior;
}

Behavior __74042680;

Behavior make__74042680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74042680 = behavior;
   behavior->owner = (Object)func0_58_842_71275000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__74043160();

   return behavior;
}

Behavior __74165940;

Behavior make__74165940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74165940 = behavior;
   behavior->owner = (Object)func0_58_842_71275000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[address_71630780_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_71485220_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   base_71485220_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   base_71485220_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(base_71485220_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,base_71485220_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
base_71485220_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[base_71485220_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_71606380_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   next__data_71606380_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   next__data_71606380_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(next__data_71606380_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,next__data_71606380_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
next__data_71606380_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[next__data_71606380_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_71873740_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   change_71873740_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   change_71873740_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(change_71873740_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,change_71873740_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
change_71873740_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[change_71873740_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_71794020_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   remaining_71794020_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   remaining_71794020_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(remaining_71794020_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,remaining_71794020_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
remaining_71794020_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[remaining_71794020_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_72037100_my__interpolator_58_8440_71261420_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   interpolated__value_72037100_my__interpolator_58_8440_71261420_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   interpolated__value_72037100_my__interpolator_58_8440_71261420_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(interpolated__value_72037100_my__interpolator_58_8440_71261420_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,interpolated__value_72037100_my__interpolator_58_8440_71261420_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
interpolated__value_72037100_my__interpolator_58_8440_71261420_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[interpolated__value_72037100_my__interpolator_58_8440_71261420_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__74045060();

   return behavior;
}

Behavior __74165760;

Behavior make__74165760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74165760 = behavior;
   behavior->owner = (Object)func0_58_842_71275000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_70144160_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   base_70144160_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   base_70144160_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(base_70144160_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,base_70144160_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
base_70144160_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[base_70144160_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_70223480_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   next__data_70223480_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   next__data_70223480_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(next__data_70223480_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,next__data_70223480_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
next__data_70223480_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[next__data_70223480_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__74045000();

   return behavior;
}

Scope makefunc0_58_842_71275000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_842_71275000 = scope;
   scope->owner = (Object)func0_58_8420_58483060;
   scope->name = "func0:T2";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_70223280();
   scope->systemIs[1] = makemy__interpolator_72036940();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_71485220();
   scope->inners[1] = makenext__data_71606380();
   scope->inners[2] = makeaddress_71630780();
   scope->inners[3] = makeremaining_71794020();
   scope->inners[4] = makechange_71873740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__74044460();
   scope->behaviors[1] = make__74044020();
   scope->behaviors[2] = make__74043200();
   scope->behaviors[3] = make__74042680();
   scope->behaviors[4] = make__74165940();
   scope->behaviors[5] = make__74165760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8420_58483060() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8420_58483060 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_58757860();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_59234680();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_842_71275000();

   return systemT;
}