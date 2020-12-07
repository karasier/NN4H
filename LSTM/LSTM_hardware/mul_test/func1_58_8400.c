#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_8400_65277520;

SignalI z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makez__value_65483340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func1_58_8400_65277520;
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

SignalI a_65659000_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makea_65659000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_65659000_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func1_58_8400_65277520;
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

Block __79656260;

void code__79656260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            first = value2integer(make__79659840());
            last = value2integer(make__79659820());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79656260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79656260 = block;
   block->owner = (Object)__79656000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79656260;

   return block;
};

Block __79655960;

void code__79655960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040,value2integer(make__79659680()),value2integer(make__79659660())));
      set_value_pos(pool_state);
   }
}

Block make__79655960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79655960 = block;
   block->owner = (Object)__79655700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79655960;

   return block;
};

Block __79655640;

void code__79655640() {
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
            src0 = make__79659180();
            src1 = make__79659160();
            src2 = make__79659140();
            src3 = make__79659120();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            first = value2integer(make__79659020());
            last = value2integer(make__79699920());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_63285060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79655640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79655640 = block;
   block->owner = (Object)__79655180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79655640;

   return block;
};

Block __79655140;

void code__79655140() {
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
            src0 = make__79699480();
            src1 = make__79699440();
            src2 = make__79699420();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79699340();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__79699080();
            src1 = make__79699060();
            src2 = make__79699040();
            src3 = make__79699020();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_63433400_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79655140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79655140 = block;
   block->owner = (Object)__79654620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79655140;

   return block;
};

Block __79656480;

void code__79656480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,address_65482060_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_62779300_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,base_51632340_my__interpolator_58_8430_51017640_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_63002960_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,next__data_53864560_my__interpolator_58_8430_51017640_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_63433400_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,change_54255460_my__interpolator_58_8430_51017640_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_63285060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,remaining_54810640_my__interpolator_58_8430_51017640_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_55344380_my__interpolator_58_8430_51017640_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,a_65659000_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79656480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79656480 = block;
   block->owner = (Object)__79665060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79656480;

   return block;
};

Block __79656420;

void code__79656420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_65662040_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,base_62779300_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_65891260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,next__data_63002960_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79656420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79656420 = block;
   block->owner = (Object)__79664900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79656420;

   return block;
};

Value make__79659840() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79659820() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79659680() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79659660() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79659180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79659160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79659140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79659120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79659020() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79699920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79699480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79699440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79699420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79699340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79699080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79699060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79699040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79699020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_840_62631180;

SignalI base_62779300_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makebase_62779300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_62779300_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func1_58_840_62631180;
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

SignalI next__data_63002960_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makenext__data_63002960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_63002960_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func1_58_840_62631180;
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

SignalI address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeaddress_63002420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func1_58_840_62631180;
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

SignalI remaining_63285060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeremaining_63285060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_63285060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func1_58_840_62631180;
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

SignalI change_63433400_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makechange_63433400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_63433400_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func1_58_840_62631180;
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

SystemI my__lut_65891060;

SystemI makemy__lut_65891060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_65891060 = systemI;
   systemI->owner = (Object)func1_58_840_62631180;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8430_65485060;

   return systemI;
};

SystemI my__interpolator_55344140;

SystemI makemy__interpolator_55344140() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_55344140 = systemI;
   systemI->owner = (Object)func1_58_840_62631180;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8430_51017640;

   return systemI;
};

Behavior __79656000;

Behavior make__79656000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79656000 = behavior;
   behavior->owner = (Object)func1_58_840_62631180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79656260();

   return behavior;
}

Behavior __79655700;

Behavior make__79655700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79655700 = behavior;
   behavior->owner = (Object)func1_58_840_62631180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79655960();

   return behavior;
}

Behavior __79655180;

Behavior make__79655180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79655180 = behavior;
   behavior->owner = (Object)func1_58_840_62631180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79655640();

   return behavior;
}

Behavior __79654620;

Behavior make__79654620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79654620 = behavior;
   behavior->owner = (Object)func1_58_840_62631180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__79655140();

   return behavior;
}

Behavior __79665060;

Behavior make__79665060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79665060 = behavior;
   behavior->owner = (Object)func1_58_840_62631180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[address_63002420_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_62779300_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   base_62779300_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   base_62779300_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(base_62779300_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,base_62779300_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
base_62779300_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[base_62779300_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_63002960_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   next__data_63002960_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   next__data_63002960_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(next__data_63002960_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,next__data_63002960_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
next__data_63002960_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[next__data_63002960_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_63433400_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   change_63433400_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   change_63433400_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(change_63433400_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,change_63433400_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
change_63433400_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[change_63433400_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_63285060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   remaining_63285060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   remaining_63285060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(remaining_63285060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,remaining_63285060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
remaining_63285060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[remaining_63285060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_55344380_my__interpolator_58_8430_51017640_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   interpolated__value_55344380_my__interpolator_58_8430_51017640_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   interpolated__value_55344380_my__interpolator_58_8430_51017640_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(interpolated__value_55344380_my__interpolator_58_8430_51017640_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,interpolated__value_55344380_my__interpolator_58_8430_51017640_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
interpolated__value_55344380_my__interpolator_58_8430_51017640_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[interpolated__value_55344380_my__interpolator_58_8430_51017640_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79656480();

   return behavior;
}

Behavior __79664900;

Behavior make__79664900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79664900 = behavior;
   behavior->owner = (Object)func1_58_840_62631180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_65662040_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   base_65662040_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   base_65662040_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(base_65662040_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,base_65662040_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
base_65662040_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[base_65662040_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_65891260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   next__data_65891260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   next__data_65891260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(next__data_65891260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,next__data_65891260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
next__data_65891260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[next__data_65891260_my__lut_58_8430_65485060_func1_58_840_62631180_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79656420();

   return behavior;
}

Scope makefunc1_58_840_62631180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_840_62631180 = scope;
   scope->owner = (Object)func1_58_8400_65277520;
   scope->name = "func1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_65891060();
   scope->systemIs[1] = makemy__interpolator_55344140();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_62779300();
   scope->inners[1] = makenext__data_63002960();
   scope->inners[2] = makeaddress_63002420();
   scope->inners[3] = makeremaining_63285060();
   scope->inners[4] = makechange_63433400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79656000();
   scope->behaviors[1] = make__79655700();
   scope->behaviors[2] = make__79655180();
   scope->behaviors[3] = make__79654620();
   scope->behaviors[4] = make__79665060();
   scope->behaviors[5] = make__79664900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_8400_65277520() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_8400_65277520 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_65483340();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_65659000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_840_62631180();

   return systemT;
}