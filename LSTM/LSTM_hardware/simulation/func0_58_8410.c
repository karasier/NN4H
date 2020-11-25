#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8410_51776220;

SignalI z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makez__value_52268780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_8410_51776220;
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

SignalI a_54415260_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makea_54415260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_54415260_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_8410_51776220;
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

Block __78655440;

void code__78655440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            first = value2integer(make__78691940());
            last = value2integer(make__78691920());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78655440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78655440 = block;
   block->owner = (Object)__78655180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78655440;

   return block;
};

Block __78655140;

void code__78655140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420,value2integer(make__78691780()),value2integer(make__78691760())));
      set_value_pos(pool_state);
   }
}

Block make__78655140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78655140 = block;
   block->owner = (Object)__78654880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78655140;

   return block;
};

Block __78654840;

void code__78654840() {
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
            src0 = make__78691280();
            src1 = make__78691260();
            src2 = make__78691240();
            src3 = make__78691220();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            first = value2integer(make__78691120());
            last = value2integer(make__78691100());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_55851300_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78654840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78654840 = block;
   block->owner = (Object)__78654360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78654840;

   return block;
};

Block __78654320;

void code__78654320() {
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
            src0 = make__78690660();
            src1 = make__78690640();
            src2 = make__78690620();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78690540();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__78690360();
            src1 = make__78690320();
            src2 = make__78690300();
            src3 = make__78690240();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_56343340_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78654320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78654320 = block;
   block->owner = (Object)__78653820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78654320;

   return block;
};

Block __78655660;

void code__78655660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,address_57419180_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_55239920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,base_63782300_my__interpolator_58_8420_63579620_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55560920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,next__data_63953120_my__interpolator_58_8420_63579620_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_56343340_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,change_64169240_my__interpolator_58_8420_63579620_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_55851300_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,remaining_64283140_my__interpolator_58_8420_63579620_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_64542420_my__interpolator_58_8420_63579620_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,a_54415260_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78655660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78655660 = block;
   block->owner = (Object)__78672620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78655660;

   return block;
};

Block __78655600;

void code__78655600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_57614620_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,base_55239920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55812280_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,next__data_55560920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78655600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78655600 = block;
   block->owner = (Object)__78672460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78655600;

   return block;
};

Value make__78691940() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78691920() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78691780() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78691760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78691280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78691260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78691240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78691220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78691120() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78691100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78690660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78690640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78690620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78690540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78690360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78690320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78690300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78690240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_841_54732600;

SignalI base_55239920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makebase_55239920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_55239920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_841_54732600;
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

SignalI next__data_55560920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makenext__data_55560920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_55560920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_841_54732600;
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

SignalI address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeaddress_55560820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_841_54732600;
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

SignalI remaining_55851300_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeremaining_55851300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_55851300_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_841_54732600;
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

SignalI change_56343340_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makechange_56343340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_56343340_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_841_54732600;
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

SystemI my__lut_55812120;

SystemI makemy__lut_55812120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_55812120 = systemI;
   systemI->owner = (Object)func0_58_841_54732600;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8420_57425680;

   return systemI;
};

SystemI my__interpolator_64542140;

SystemI makemy__interpolator_64542140() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_64542140 = systemI;
   systemI->owner = (Object)func0_58_841_54732600;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8420_63579620;

   return systemI;
};

Behavior __78655180;

Behavior make__78655180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78655180 = behavior;
   behavior->owner = (Object)func0_58_841_54732600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78655440();

   return behavior;
}

Behavior __78654880;

Behavior make__78654880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78654880 = behavior;
   behavior->owner = (Object)func0_58_841_54732600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78655140();

   return behavior;
}

Behavior __78654360;

Behavior make__78654360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78654360 = behavior;
   behavior->owner = (Object)func0_58_841_54732600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78654840();

   return behavior;
}

Behavior __78653820;

Behavior make__78653820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78653820 = behavior;
   behavior->owner = (Object)func0_58_841_54732600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__78654320();

   return behavior;
}

Behavior __78672620;

Behavior make__78672620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78672620 = behavior;
   behavior->owner = (Object)func0_58_841_54732600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[address_55560820_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_55239920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   base_55239920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   base_55239920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(base_55239920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,base_55239920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
base_55239920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[base_55239920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_55560920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   next__data_55560920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   next__data_55560920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(next__data_55560920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,next__data_55560920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
next__data_55560920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[next__data_55560920_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_56343340_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   change_56343340_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   change_56343340_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(change_56343340_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,change_56343340_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
change_56343340_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[change_56343340_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_55851300_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   remaining_55851300_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   remaining_55851300_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(remaining_55851300_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,remaining_55851300_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
remaining_55851300_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[remaining_55851300_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_64542420_my__interpolator_58_8420_63579620_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   interpolated__value_64542420_my__interpolator_58_8420_63579620_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   interpolated__value_64542420_my__interpolator_58_8420_63579620_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(interpolated__value_64542420_my__interpolator_58_8420_63579620_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,interpolated__value_64542420_my__interpolator_58_8420_63579620_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
interpolated__value_64542420_my__interpolator_58_8420_63579620_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[interpolated__value_64542420_my__interpolator_58_8420_63579620_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78655660();

   return behavior;
}

Behavior __78672460;

Behavior make__78672460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78672460 = behavior;
   behavior->owner = (Object)func0_58_841_54732600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_57614620_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   base_57614620_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   base_57614620_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(base_57614620_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,base_57614620_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
base_57614620_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[base_57614620_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_55812280_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   next__data_55812280_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   next__data_55812280_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(next__data_55812280_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,next__data_55812280_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
next__data_55812280_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[next__data_55812280_my__lut_58_8420_57425680_func0_58_841_54732600_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78655600();

   return behavior;
}

Scope makefunc0_58_841_54732600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_841_54732600 = scope;
   scope->owner = (Object)func0_58_8410_51776220;
   scope->name = "func0:T1";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_55812120();
   scope->systemIs[1] = makemy__interpolator_64542140();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_55239920();
   scope->inners[1] = makenext__data_55560920();
   scope->inners[2] = makeaddress_55560820();
   scope->inners[3] = makeremaining_55851300();
   scope->inners[4] = makechange_56343340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78655180();
   scope->behaviors[1] = make__78654880();
   scope->behaviors[2] = make__78654360();
   scope->behaviors[3] = make__78653820();
   scope->behaviors[4] = make__78672620();
   scope->behaviors[5] = make__78672460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8410_51776220() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8410_51776220 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52268780();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_54415260();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_841_54732600();

   return systemT;
}