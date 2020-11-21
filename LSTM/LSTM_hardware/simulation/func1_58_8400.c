#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_8400_65625220;

SignalI z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makez__value_65928320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func1_58_8400_65625220;
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

SignalI a_66056080_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makea_66056080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_66056080_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func1_58_8400_65625220;
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

Block __53461540;

void code__53461540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            first = value2integer(make__53766300());
            last = value2integer(make__53766180());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53461540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53461540 = block;
   block->owner = (Object)__53484740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53461540;

   return block;
};

Block __53484280;

void code__53484280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140,value2integer(make__53765380()),value2integer(make__53765360())));
      set_value_pos(pool_state);
   }
}

Block make__53484280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53484280 = block;
   block->owner = (Object)__53481960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53484280;

   return block;
};

Block __53481740;

void code__53481740() {
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
            src0 = make__53820120();
            src1 = make__53820000();
            src2 = make__53819960();
            src3 = make__53819220();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            first = value2integer(make__53819120());
            last = value2integer(make__53819100());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_63530720_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53481740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53481740 = block;
   block->owner = (Object)__53478480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53481740;

   return block;
};

Block __53501420;

void code__53501420() {
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
            src0 = make__53817540();
            src1 = make__53817520();
            src2 = make__53817300();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__53816980();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__53815900();
            src1 = make__53815820();
            src2 = make__53815800();
            src3 = make__53815780();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_63708100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53501420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53501420 = block;
   block->owner = (Object)__53500180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53501420;

   return block;
};

Block __53462780;

void code__53462780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,address_65702340_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_63256700_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,base_54586180_my__interpolator_58_8430_53913120_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_63437100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,next__data_55013600_my__interpolator_58_8430_53913120_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_63708100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,change_55390100_my__interpolator_58_8430_53913120_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_63530720_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,remaining_55821780_my__interpolator_58_8430_53913120_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_56657120_my__interpolator_58_8430_53913120_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,a_66056080_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53462780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53462780 = block;
   block->owner = (Object)__53624980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53462780;

   return block;
};

Block __53462680;

void code__53462680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_66006420_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,base_63256700_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_66172600_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,next__data_63437100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53462680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53462680 = block;
   block->owner = (Object)__53648160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53462680;

   return block;
};

Value make__53766300() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53766180() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53765380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53765360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53820120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53820000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53819960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53819220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53819120() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53819100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53817540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53817520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53817300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53816980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53815900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53815820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53815800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53815780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_840_62956560;

SignalI base_63256700_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makebase_63256700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_63256700_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func1_58_840_62956560;
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

SignalI next__data_63437100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makenext__data_63437100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_63437100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func1_58_840_62956560;
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

SignalI address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeaddress_63436980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func1_58_840_62956560;
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

SignalI remaining_63530720_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeremaining_63530720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_63530720_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func1_58_840_62956560;
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

SignalI change_63708100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makechange_63708100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_63708100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func1_58_840_62956560;
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

SystemI my__lut_66172400;

SystemI makemy__lut_66172400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_66172400 = systemI;
   systemI->owner = (Object)func1_58_840_62956560;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8430_65705600;

   return systemI;
};

SystemI my__interpolator_56656400;

SystemI makemy__interpolator_56656400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_56656400 = systemI;
   systemI->owner = (Object)func1_58_840_62956560;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8430_53913120;

   return systemI;
};

Behavior __53484740;

Behavior make__53484740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53484740 = behavior;
   behavior->owner = (Object)func1_58_840_62956560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__53461540();

   return behavior;
}

Behavior __53481960;

Behavior make__53481960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53481960 = behavior;
   behavior->owner = (Object)func1_58_840_62956560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__53484280();

   return behavior;
}

Behavior __53478480;

Behavior make__53478480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53478480 = behavior;
   behavior->owner = (Object)func1_58_840_62956560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__53481740();

   return behavior;
}

Behavior __53500180;

Behavior make__53500180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53500180 = behavior;
   behavior->owner = (Object)func1_58_840_62956560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__53501420();

   return behavior;
}

Behavior __53624980;

Behavior make__53624980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53624980 = behavior;
   behavior->owner = (Object)func1_58_840_62956560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[address_63436980_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_63256700_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   base_63256700_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   base_63256700_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(base_63256700_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,base_63256700_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
base_63256700_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[base_63256700_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_63437100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   next__data_63437100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   next__data_63437100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(next__data_63437100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,next__data_63437100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
next__data_63437100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[next__data_63437100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_63708100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   change_63708100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   change_63708100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(change_63708100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,change_63708100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
change_63708100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[change_63708100_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_63530720_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   remaining_63530720_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   remaining_63530720_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(remaining_63530720_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,remaining_63530720_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
remaining_63530720_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[remaining_63530720_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_56657120_my__interpolator_58_8430_53913120_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   interpolated__value_56657120_my__interpolator_58_8430_53913120_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   interpolated__value_56657120_my__interpolator_58_8430_53913120_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(interpolated__value_56657120_my__interpolator_58_8430_53913120_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,interpolated__value_56657120_my__interpolator_58_8430_53913120_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
interpolated__value_56657120_my__interpolator_58_8430_53913120_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[interpolated__value_56657120_my__interpolator_58_8430_53913120_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__53462780();

   return behavior;
}

Behavior __53648160;

Behavior make__53648160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53648160 = behavior;
   behavior->owner = (Object)func1_58_840_62956560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_66006420_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   base_66006420_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   base_66006420_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(base_66006420_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,base_66006420_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
base_66006420_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[base_66006420_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_66172600_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   next__data_66172600_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   next__data_66172600_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(next__data_66172600_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,next__data_66172600_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
next__data_66172600_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[next__data_66172600_my__lut_58_8430_65705600_func1_58_840_62956560_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__53462680();

   return behavior;
}

Scope makefunc1_58_840_62956560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_840_62956560 = scope;
   scope->owner = (Object)func1_58_8400_65625220;
   scope->name = "func1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_66172400();
   scope->systemIs[1] = makemy__interpolator_56656400();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_63256700();
   scope->inners[1] = makenext__data_63437100();
   scope->inners[2] = makeaddress_63436980();
   scope->inners[3] = makeremaining_63530720();
   scope->inners[4] = makechange_63708100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53484740();
   scope->behaviors[1] = make__53481960();
   scope->behaviors[2] = make__53478480();
   scope->behaviors[3] = make__53500180();
   scope->behaviors[4] = make__53624980();
   scope->behaviors[5] = make__53648160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_8400_65625220() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_8400_65625220 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_65928320();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_66056080();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_840_62956560();

   return systemT;
}