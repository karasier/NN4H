#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8410_62300320;

SignalI z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makez__value_62512600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_8410_62300320;
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

SignalI a_62631840_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makea_62631840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_62631840_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_8410_62300320;
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

Block __79517200;

void code__79517200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            first = value2integer(make__79545540());
            last = value2integer(make__79545520());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79517200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79517200 = block;
   block->owner = (Object)__79516940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79517200;

   return block;
};

Block __79516880;

void code__79516880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040,value2integer(make__79545380()),value2integer(make__79545340())));
      set_value_pos(pool_state);
   }
}

Block make__79516880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79516880 = block;
   block->owner = (Object)__79516620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79516880;

   return block;
};

Block __79516580;

void code__79516580() {
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
            src0 = make__79544880();
            src1 = make__79544860();
            src2 = make__79544840();
            src3 = make__79544820();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            first = value2integer(make__79544720());
            last = value2integer(make__79544700());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_62782720_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79516580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79516580 = block;
   block->owner = (Object)__79516100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79516580;

   return block;
};

Block __79516060;

void code__79516060() {
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
            src0 = make__79642420();
            src1 = make__79642400();
            src2 = make__79642380();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79642320();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__79642160();
            src1 = make__79642140();
            src2 = make__79642120();
            src3 = make__79642100();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_62971300_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79516060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79516060 = block;
   block->owner = (Object)__79515520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79516060;

   return block;
};

Block __79517420;

void code__79517420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,address_63564180_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_62527420_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,base_65580600_my__interpolator_58_8420_65446180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_62628180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,next__data_65775160_my__interpolator_58_8420_65446180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_62971300_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,change_65922060_my__interpolator_58_8420_65446180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_62782720_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,remaining_66084720_my__interpolator_58_8420_65446180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_66264440_my__interpolator_58_8420_65446180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,a_62631840_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79517420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79517420 = block;
   block->owner = (Object)__79550740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79517420;

   return block;
};

Block __79517360;

void code__79517360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_63859340_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,base_62527420_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_63965480_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,next__data_62628180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79517360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79517360 = block;
   block->owner = (Object)__79550540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79517360;

   return block;
};

Value make__79545540() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79545520() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79545380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79545340() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79544880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79544860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79544840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79544820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79544720() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79544700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79642420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79642400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79642380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79642320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79642160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79642140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79642120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79642100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_841_62388000;

SignalI base_62527420_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makebase_62527420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_62527420_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_841_62388000;
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

SignalI next__data_62628180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makenext__data_62628180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_62628180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_841_62388000;
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

SignalI address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeaddress_62628100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_841_62388000;
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

SignalI remaining_62782720_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeremaining_62782720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_62782720_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_841_62388000;
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

SignalI change_62971300_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makechange_62971300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_62971300_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_841_62388000;
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

SystemI my__lut_63965240;

SystemI makemy__lut_63965240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_63965240 = systemI;
   systemI->owner = (Object)func0_58_841_62388000;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8420_63566900;

   return systemI;
};

SystemI my__interpolator_66264280;

SystemI makemy__interpolator_66264280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_66264280 = systemI;
   systemI->owner = (Object)func0_58_841_62388000;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8420_65446180;

   return systemI;
};

Behavior __79516940;

Behavior make__79516940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79516940 = behavior;
   behavior->owner = (Object)func0_58_841_62388000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79517200();

   return behavior;
}

Behavior __79516620;

Behavior make__79516620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79516620 = behavior;
   behavior->owner = (Object)func0_58_841_62388000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79516880();

   return behavior;
}

Behavior __79516100;

Behavior make__79516100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79516100 = behavior;
   behavior->owner = (Object)func0_58_841_62388000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79516580();

   return behavior;
}

Behavior __79515520;

Behavior make__79515520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79515520 = behavior;
   behavior->owner = (Object)func0_58_841_62388000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__79516060();

   return behavior;
}

Behavior __79550740;

Behavior make__79550740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79550740 = behavior;
   behavior->owner = (Object)func0_58_841_62388000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[address_62628100_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_62527420_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   base_62527420_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   base_62527420_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(base_62527420_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,base_62527420_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
base_62527420_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[base_62527420_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_62628180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   next__data_62628180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   next__data_62628180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(next__data_62628180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,next__data_62628180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
next__data_62628180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[next__data_62628180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_62971300_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   change_62971300_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   change_62971300_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(change_62971300_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,change_62971300_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
change_62971300_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[change_62971300_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_62782720_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   remaining_62782720_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   remaining_62782720_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(remaining_62782720_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,remaining_62782720_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
remaining_62782720_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[remaining_62782720_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_66264440_my__interpolator_58_8420_65446180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   interpolated__value_66264440_my__interpolator_58_8420_65446180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   interpolated__value_66264440_my__interpolator_58_8420_65446180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(interpolated__value_66264440_my__interpolator_58_8420_65446180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,interpolated__value_66264440_my__interpolator_58_8420_65446180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
interpolated__value_66264440_my__interpolator_58_8420_65446180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[interpolated__value_66264440_my__interpolator_58_8420_65446180_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79517420();

   return behavior;
}

Behavior __79550540;

Behavior make__79550540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79550540 = behavior;
   behavior->owner = (Object)func0_58_841_62388000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_63859340_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   base_63859340_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   base_63859340_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(base_63859340_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,base_63859340_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
base_63859340_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[base_63859340_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_63965480_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   next__data_63965480_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   next__data_63965480_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(next__data_63965480_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,next__data_63965480_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
next__data_63965480_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[next__data_63965480_my__lut_58_8420_63566900_func0_58_841_62388000_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79517360();

   return behavior;
}

Scope makefunc0_58_841_62388000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_841_62388000 = scope;
   scope->owner = (Object)func0_58_8410_62300320;
   scope->name = "func0:T1";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_63965240();
   scope->systemIs[1] = makemy__interpolator_66264280();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_62527420();
   scope->inners[1] = makenext__data_62628180();
   scope->inners[2] = makeaddress_62628100();
   scope->inners[3] = makeremaining_62782720();
   scope->inners[4] = makechange_62971300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79516940();
   scope->behaviors[1] = make__79516620();
   scope->behaviors[2] = make__79516100();
   scope->behaviors[3] = make__79515520();
   scope->behaviors[4] = make__79550740();
   scope->behaviors[5] = make__79550540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8410_62300320() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8410_62300320 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_62512600();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_62631840();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_841_62388000();

   return systemT;
}