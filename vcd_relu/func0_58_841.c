#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_55845740;

SignalI z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makez__value_56118100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_841_55845740;
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

SignalI a_56300940_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makea_56300940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_56300940_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_841_55845740;
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

Block __49917940;

void code__49917940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            first = value2integer(make__50118240());
            last = value2integer(make__50118200());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49917940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49917940 = block;
   block->owner = (Object)__49917300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49917940;

   return block;
};

Block __49917160;

void code__49917160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140,value2integer(make__50116720()),value2integer(make__50116360())));
      set_value_pos(pool_state);
   }
}

Block make__49917160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49917160 = block;
   block->owner = (Object)__49914440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49917160;

   return block;
};

Block __49914160;

void code__49914160() {
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
            src0 = make__50113780();
            src1 = make__50113760();
            src2 = make__50113700();
            src3 = make__50113640();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            first = value2integer(make__50113420());
            last = value2integer(make__50113400());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_48894040_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49914160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49914160 = block;
   block->owner = (Object)__49954240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49914160;

   return block;
};

Block __49954180;

void code__49954180() {
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
            src0 = make__50175820();
            src1 = make__50175800();
            src2 = make__50175780();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__50175520();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__50174420();
            src1 = make__50174300();
            src2 = make__50174280();
            src3 = make__50174200();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_49349440_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49954180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49954180 = block;
   block->owner = (Object)__49951700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49954180;

   return block;
};

Block __49918520;

void code__49918520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,address_57054980_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_46627520_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,base_48369080_my__interpolator_58_842_47267140_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48432840_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,next__data_48679460_my__interpolator_58_842_47267140_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_49349440_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,change_48859900_my__interpolator_58_842_47267140_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_48894040_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,remaining_48600680_my__interpolator_58_842_47267140_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49440120_my__interpolator_58_842_47267140_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,a_56300940_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49918520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49918520 = block;
   block->owner = (Object)__50013760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49918520;

   return block;
};

Block __49918420;

void code__49918420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_57134100_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,base_46627520_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57229600_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,next__data_48432840_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49918420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49918420 = block;
   block->owner = (Object)__50013200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49918420;

   return block;
};

Value make__50118240() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50118200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50116720() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50116360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50113780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50113760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50113700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50113640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50113420() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50113400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50175820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50175800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50175780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50175520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50174420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50174300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50174280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50174200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_84_50711240;

SignalI base_46627520_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makebase_46627520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_46627520_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_84_50711240;
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

SignalI next__data_48432840_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makenext__data_48432840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48432840_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_84_50711240;
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

SignalI address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeaddress_48432700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_84_50711240;
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

SignalI remaining_48894040_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeremaining_48894040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_48894040_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_84_50711240;
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

SignalI change_49349440_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makechange_49349440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_49349440_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_84_50711240;
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

SystemI my__lut_57229460;

SystemI makemy__lut_57229460() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_57229460 = systemI;
   systemI->owner = (Object)func0_58_84_50711240;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_57056880;

   return systemI;
};

SystemI my__interpolator_49439140;

SystemI makemy__interpolator_49439140() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49439140 = systemI;
   systemI->owner = (Object)func0_58_84_50711240;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_47267140;

   return systemI;
};

Behavior __49917300;

Behavior make__49917300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49917300 = behavior;
   behavior->owner = (Object)func0_58_84_50711240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__49917940();

   return behavior;
}

Behavior __49914440;

Behavior make__49914440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49914440 = behavior;
   behavior->owner = (Object)func0_58_84_50711240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__49917160();

   return behavior;
}

Behavior __49954240;

Behavior make__49954240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49954240 = behavior;
   behavior->owner = (Object)func0_58_84_50711240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__49914160();

   return behavior;
}

Behavior __49951700;

Behavior make__49951700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49951700 = behavior;
   behavior->owner = (Object)func0_58_84_50711240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__49954180();

   return behavior;
}

Behavior __50013760;

Behavior make__50013760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50013760 = behavior;
   behavior->owner = (Object)func0_58_84_50711240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[address_48432700_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_46627520_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   base_46627520_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   base_46627520_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(base_46627520_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,base_46627520_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
base_46627520_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[base_46627520_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_48432840_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   next__data_48432840_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   next__data_48432840_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(next__data_48432840_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,next__data_48432840_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
next__data_48432840_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[next__data_48432840_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_49349440_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   change_49349440_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   change_49349440_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(change_49349440_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,change_49349440_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
change_49349440_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[change_49349440_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_48894040_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   remaining_48894040_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   remaining_48894040_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(remaining_48894040_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,remaining_48894040_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
remaining_48894040_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[remaining_48894040_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_49440120_my__interpolator_58_842_47267140_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   interpolated__value_49440120_my__interpolator_58_842_47267140_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   interpolated__value_49440120_my__interpolator_58_842_47267140_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(interpolated__value_49440120_my__interpolator_58_842_47267140_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,interpolated__value_49440120_my__interpolator_58_842_47267140_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
interpolated__value_49440120_my__interpolator_58_842_47267140_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[interpolated__value_49440120_my__interpolator_58_842_47267140_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__49918520();

   return behavior;
}

Behavior __50013200;

Behavior make__50013200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50013200 = behavior;
   behavior->owner = (Object)func0_58_84_50711240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_57134100_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   base_57134100_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   base_57134100_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(base_57134100_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,base_57134100_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
base_57134100_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[base_57134100_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_57229600_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   next__data_57229600_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   next__data_57229600_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(next__data_57229600_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,next__data_57229600_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
next__data_57229600_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[next__data_57229600_my__lut_58_842_57056880_func0_58_84_50711240_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__49918420();

   return behavior;
}

Scope makefunc0_58_84_50711240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_50711240 = scope;
   scope->owner = (Object)func0_58_841_55845740;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_57229460();
   scope->systemIs[1] = makemy__interpolator_49439140();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_46627520();
   scope->inners[1] = makenext__data_48432840();
   scope->inners[2] = makeaddress_48432700();
   scope->inners[3] = makeremaining_48894040();
   scope->inners[4] = makechange_49349440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49917300();
   scope->behaviors[1] = make__49914440();
   scope->behaviors[2] = make__49954240();
   scope->behaviors[3] = make__49951700();
   scope->behaviors[4] = make__50013760();
   scope->behaviors[5] = make__50013200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_55845740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_55845740 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_56118100();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_56300940();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_50711240();

   return systemT;
}