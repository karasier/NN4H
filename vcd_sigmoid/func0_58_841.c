#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_55161720;

SignalI z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makez__value_55303020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_841_55161720;
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

SignalI a_55387560_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makea_55387560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_55387560_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_841_55161720;
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

Block __49116360;

void code__49116360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
            first = value2integer(make__49311780());
            last = value2integer(make__49311640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49116360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49116360 = block;
   block->owner = (Object)__49115840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49116360;

   return block;
};

Block __49115760;

void code__49115760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060,value2integer(make__49311360()),value2integer(make__49311240())));
      set_value_pos(pool_state);
   }
}

Block make__49115760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49115760 = block;
   block->owner = (Object)__49114940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49115760;

   return block;
};

Block __49114900;

void code__49114900() {
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
            src0 = make__49309360();
            src1 = make__49309280();
            src2 = make__49309240();
            src3 = make__49309220();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
            first = value2integer(make__49308840());
            last = value2integer(make__49308820());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_48612520_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49114900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49114900 = block;
   block->owner = (Object)__49113000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49114900;

   return block;
};

Block __49112960;

void code__49112960() {
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
            src0 = make__49348540();
            src1 = make__49348420();
            src2 = make__49348300();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__49346840();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__49345320();
            src1 = make__49345300();
            src2 = make__49345260();
            src3 = make__49345180();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_49049880_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49112960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49112960 = block;
   block->owner = (Object)__49111840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49112960;

   return block;
};

Block __49116660;

void code__49116660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_46847140_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,base_47686420_my__interpolator_58_842_46764580_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48259300_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,next__data_48123900_my__interpolator_58_842_46764580_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_49049880_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,change_48409200_my__interpolator_58_842_46764580_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_48612520_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,remaining_48894040_my__interpolator_58_842_46764580_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_48951680_my__interpolator_58_842_46764580_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,a_55387560_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49116660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49116660 = block;
   block->owner = (Object)__49211160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49116660;

   return block;
};

Block __49116540;

void code__49116540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56335500_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,base_46847140_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56570280_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,next__data_48259300_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49116540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49116540 = block;
   block->owner = (Object)__49210520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49116540;

   return block;
};

Value make__49311780() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49311640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49311360() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49311240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49309360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49309280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49309240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49309220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49308840() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49308820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49348540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49348420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49348300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49346840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49345320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49345300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49345260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49345180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_84_45938840;

SignalI base_46847140_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makebase_46847140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_46847140_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_84_45938840;
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

SignalI next__data_48259300_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makenext__data_48259300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48259300_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_84_45938840;
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

SignalI address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeaddress_48259200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_84_45938840;
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

SignalI remaining_48612520_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeremaining_48612520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_48612520_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_84_45938840;
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

SignalI change_49049880_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makechange_49049880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_49049880_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_84_45938840;
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

SystemI my__lut_56570140;

SystemI makemy__lut_56570140() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_56570140 = systemI;
   systemI->owner = (Object)func0_58_84_45938840;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_56201000;

   return systemI;
};

SystemI my__interpolator_48951540;

SystemI makemy__interpolator_48951540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_48951540 = systemI;
   systemI->owner = (Object)func0_58_84_45938840;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_46764580;

   return systemI;
};

Behavior __49115840;

Behavior make__49115840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49115840 = behavior;
   behavior->owner = (Object)func0_58_84_45938840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__49116360();

   return behavior;
}

Behavior __49114940;

Behavior make__49114940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49114940 = behavior;
   behavior->owner = (Object)func0_58_84_45938840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__49115760();

   return behavior;
}

Behavior __49113000;

Behavior make__49113000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49113000 = behavior;
   behavior->owner = (Object)func0_58_84_45938840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[z__value_55303020_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__49114900();

   return behavior;
}

Behavior __49111840;

Behavior make__49111840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49111840 = behavior;
   behavior->owner = (Object)func0_58_84_45938840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__49112960();

   return behavior;
}

Behavior __49211160;

Behavior make__49211160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49211160 = behavior;
   behavior->owner = (Object)func0_58_84_45938840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[address_48259200_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_46847140_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   base_46847140_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   base_46847140_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(base_46847140_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,base_46847140_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
base_46847140_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[base_46847140_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_48259300_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   next__data_48259300_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   next__data_48259300_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(next__data_48259300_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,next__data_48259300_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
next__data_48259300_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[next__data_48259300_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_49049880_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   change_49049880_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   change_49049880_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(change_49049880_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,change_49049880_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
change_49049880_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[change_49049880_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_48612520_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   remaining_48612520_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   remaining_48612520_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(remaining_48612520_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,remaining_48612520_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
remaining_48612520_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[remaining_48612520_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_48951680_my__interpolator_58_842_46764580_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   interpolated__value_48951680_my__interpolator_58_842_46764580_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   interpolated__value_48951680_my__interpolator_58_842_46764580_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(interpolated__value_48951680_my__interpolator_58_842_46764580_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,interpolated__value_48951680_my__interpolator_58_842_46764580_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
interpolated__value_48951680_my__interpolator_58_842_46764580_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[interpolated__value_48951680_my__interpolator_58_842_46764580_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__49116660();

   return behavior;
}

Behavior __49210520;

Behavior make__49210520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49210520 = behavior;
   behavior->owner = (Object)func0_58_84_45938840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56335500_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   base_56335500_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   base_56335500_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(base_56335500_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,base_56335500_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
base_56335500_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[base_56335500_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_56570280_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   next__data_56570280_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   next__data_56570280_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(next__data_56570280_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,next__data_56570280_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
next__data_56570280_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[next__data_56570280_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__49116540();

   return behavior;
}

Scope makefunc0_58_84_45938840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_45938840 = scope;
   scope->owner = (Object)func0_58_841_55161720;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_56570140();
   scope->systemIs[1] = makemy__interpolator_48951540();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_46847140();
   scope->inners[1] = makenext__data_48259300();
   scope->inners[2] = makeaddress_48259200();
   scope->inners[3] = makeremaining_48612520();
   scope->inners[4] = makechange_49049880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49115840();
   scope->behaviors[1] = make__49114940();
   scope->behaviors[2] = make__49113000();
   scope->behaviors[3] = make__49111840();
   scope->behaviors[4] = make__49211160();
   scope->behaviors[5] = make__49210520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_55161720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_55161720 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_55303020();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_55387560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_45938840();

   return systemT;
}