#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8410_62410340;

SignalI z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makez__value_62759480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_8410_62410340;
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

SignalI a_62958900_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makea_62958900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_62958900_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_8410_62410340;
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

Block __51125020;

void code__51125020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            first = value2integer(make__51532240());
            last = value2integer(make__51532220());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__51125020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51125020 = block;
   block->owner = (Object)__51124000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51125020;

   return block;
};

Block __51123960;

void code__51123960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140,value2integer(make__51531240()),value2integer(make__51531160())));
      set_value_pos(pool_state);
   }
}

Block make__51123960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51123960 = block;
   block->owner = (Object)__51120780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51123960;

   return block;
};

Block __51120700;

void code__51120700() {
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
            src0 = make__51528360();
            src1 = make__51528140();
            src2 = make__51551500();
            src3 = make__51551440();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            first = value2integer(make__51551180());
            last = value2integer(make__51551060());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_62973360_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__51120700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51120700 = block;
   block->owner = (Object)__51140580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51120700;

   return block;
};

Block __51140400;

void code__51140400() {
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
            src0 = make__51547800();
            src1 = make__51546320();
            src2 = make__51546300();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__51546000();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__51545080();
            src1 = make__51545060();
            src2 = make__51544920();
            src3 = make__51544800();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_63254640_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__51140400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51140400 = block;
   block->owner = (Object)__51136080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51140400;

   return block;
};

Block __51101720;

void code__51101720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_62678400_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,base_65667680_my__interpolator_58_8420_65574860_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_62827680_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,next__data_65994540_my__interpolator_58_8420_65574860_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_63254640_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,change_66107980_my__interpolator_58_8420_65574860_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_62973360_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,remaining_66222560_my__interpolator_58_8420_65574860_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_66386760_my__interpolator_58_8420_65574860_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,a_62958900_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__51101720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51101720 = block;
   block->owner = (Object)__51348540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51101720;

   return block;
};

Block __51125880;

void code__51125880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_63923860_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,base_62678400_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_64168460_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,next__data_62827680_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__51125880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51125880 = block;
   block->owner = (Object)__51402440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51125880;

   return block;
};

Value make__51532240() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51532220() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51531240() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51531160() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51528360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51528140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51551500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51551440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51551180() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51551060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51547800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51546320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51546300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51546000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51545080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51545060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51544920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51544800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_841_62376000;

SignalI base_62678400_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makebase_62678400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_62678400_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_841_62376000;
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

SignalI next__data_62827680_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makenext__data_62827680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_62827680_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_841_62376000;
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

SignalI address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeaddress_62827560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_841_62376000;
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

SignalI remaining_62973360_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeremaining_62973360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_62973360_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_841_62376000;
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

SignalI change_63254640_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makechange_63254640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_63254640_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)func0_58_841_62376000;
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

SystemI my__lut_64168200;

SystemI makemy__lut_64168200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_64168200 = systemI;
   systemI->owner = (Object)func0_58_841_62376000;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8420_63721520;

   return systemI;
};

SystemI my__interpolator_66386560;

SystemI makemy__interpolator_66386560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_66386560 = systemI;
   systemI->owner = (Object)func0_58_841_62376000;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8420_65574860;

   return systemI;
};

Behavior __51124000;

Behavior make__51124000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51124000 = behavior;
   behavior->owner = (Object)func0_58_841_62376000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__51125020();

   return behavior;
}

Behavior __51120780;

Behavior make__51120780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51120780 = behavior;
   behavior->owner = (Object)func0_58_841_62376000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__51123960();

   return behavior;
}

Behavior __51140580;

Behavior make__51140580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51140580 = behavior;
   behavior->owner = (Object)func0_58_841_62376000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__51120700();

   return behavior;
}

Behavior __51136080;

Behavior make__51136080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51136080 = behavior;
   behavior->owner = (Object)func0_58_841_62376000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__51140400();

   return behavior;
}

Behavior __51348540;

Behavior make__51348540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51348540 = behavior;
   behavior->owner = (Object)func0_58_841_62376000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[address_62827560_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_62678400_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   base_62678400_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   base_62678400_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(base_62678400_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,base_62678400_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
base_62678400_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[base_62678400_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_62827680_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   next__data_62827680_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   next__data_62827680_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(next__data_62827680_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,next__data_62827680_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
next__data_62827680_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[next__data_62827680_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_63254640_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   change_63254640_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   change_63254640_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(change_63254640_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,change_63254640_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
change_63254640_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[change_63254640_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_62973360_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   remaining_62973360_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   remaining_62973360_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(remaining_62973360_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,remaining_62973360_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
remaining_62973360_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[remaining_62973360_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_66386760_my__interpolator_58_8420_65574860_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   interpolated__value_66386760_my__interpolator_58_8420_65574860_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   interpolated__value_66386760_my__interpolator_58_8420_65574860_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(interpolated__value_66386760_my__interpolator_58_8420_65574860_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,interpolated__value_66386760_my__interpolator_58_8420_65574860_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
interpolated__value_66386760_my__interpolator_58_8420_65574860_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[interpolated__value_66386760_my__interpolator_58_8420_65574860_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__51101720();

   return behavior;
}

Behavior __51402440;

Behavior make__51402440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51402440 = behavior;
   behavior->owner = (Object)func0_58_841_62376000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_63923860_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   base_63923860_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   base_63923860_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(base_63923860_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,base_63923860_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
base_63923860_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[base_63923860_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_64168460_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   next__data_64168460_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   next__data_64168460_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(next__data_64168460_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,next__data_64168460_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
next__data_64168460_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[next__data_64168460_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__51125880();

   return behavior;
}

Scope makefunc0_58_841_62376000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_841_62376000 = scope;
   scope->owner = (Object)func0_58_8410_62410340;
   scope->name = "func0:T1";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_64168200();
   scope->systemIs[1] = makemy__interpolator_66386560();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_62678400();
   scope->inners[1] = makenext__data_62827680();
   scope->inners[2] = makeaddress_62827560();
   scope->inners[3] = makeremaining_62973360();
   scope->inners[4] = makechange_63254640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51124000();
   scope->behaviors[1] = make__51120780();
   scope->behaviors[2] = make__51140580();
   scope->behaviors[3] = make__51136080();
   scope->behaviors[4] = make__51348540();
   scope->behaviors[5] = make__51402440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8410_62410340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8410_62410340 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_62759480();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_62958900();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_841_62376000();

   return systemT;
}