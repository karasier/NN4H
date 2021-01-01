#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_56837240;

SignalI z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makez__value_57048560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func1_58_840_56837240;
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

SignalI a_57171600_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makea_57171600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_57171600_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func1_58_840_56837240;
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

Block __49601980;

void code__49601980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
            first = value2integer(make__49800300());
            last = value2integer(make__49800220());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49601980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49601980 = block;
   block->owner = (Object)__49599720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49601980;

   return block;
};

Block __49599320;

void code__49599320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060,value2integer(make__49799460()),value2integer(make__49799420())));
      set_value_pos(pool_state);
   }
}

Block make__49599320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49599320 = block;
   block->owner = (Object)__49595980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49599320;

   return block;
};

Block __49595700;

void code__49595700() {
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
            src0 = make__49838340();
            src1 = make__49838320();
            src2 = make__49838260();
            src3 = make__49838180();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
            first = value2integer(make__49838020());
            last = value2integer(make__49837980());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_55807400_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49595700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49595700 = block;
   block->owner = (Object)__49633460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49595700;

   return block;
};

Block __49633080;

void code__49633080() {
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
            src0 = make__49834780();
            src1 = make__49834580();
            src2 = make__49834520();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__49833200();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__49832740();
            src1 = make__49832700();
            src2 = make__49832680();
            src3 = make__49832660();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_56040560_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49633080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49633080 = block;
   block->owner = (Object)__49631580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49633080;

   return block;
};

Block __49564660;

void code__49564660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,address_42335960_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_55578980_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,base_49616940_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55656640_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,next__data_49789340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_56040560_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,change_53791540_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_55807400_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,remaining_53939340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_54086960_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,a_57171600_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49564660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49564660 = block;
   block->owner = (Object)__49712360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49564660;

   return block;
};

Block __49564560;

void code__49564560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_46631960_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,base_55578980_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_46861740_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,next__data_55656640_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49564560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49564560 = block;
   block->owner = (Object)__49711840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49564560;

   return block;
};

Value make__49800300() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49800220() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49799460() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49799420() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49838340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49838320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49838260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49838180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49838020() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49837980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49834780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49834580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49834520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49833200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49832740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49832700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49832680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49832660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_84_55387080;

SignalI base_55578980_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makebase_55578980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_55578980_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func1_58_84_55387080;
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

SignalI next__data_55656640_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makenext__data_55656640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_55656640_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func1_58_84_55387080;
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

SignalI address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeaddress_55656540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func1_58_84_55387080;
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

SignalI remaining_55807400_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeremaining_55807400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_55807400_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func1_58_84_55387080;
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

SignalI change_56040560_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makechange_56040560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_56040560_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func1_58_84_55387080;
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

SystemI my__lut_46861380;

SystemI makemy__lut_46861380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_46861380 = systemI;
   systemI->owner = (Object)func1_58_84_55387080;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_40311080;

   return systemI;
};

SystemI my__interpolator_54086760;

SystemI makemy__interpolator_54086760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_54086760 = systemI;
   systemI->owner = (Object)func1_58_84_55387080;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_49419120;

   return systemI;
};

Behavior __49599720;

Behavior make__49599720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49599720 = behavior;
   behavior->owner = (Object)func1_58_84_55387080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__49601980();

   return behavior;
}

Behavior __49595980;

Behavior make__49595980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49595980 = behavior;
   behavior->owner = (Object)func1_58_84_55387080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__49599320();

   return behavior;
}

Behavior __49633460;

Behavior make__49633460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49633460 = behavior;
   behavior->owner = (Object)func1_58_84_55387080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[z__value_57048560_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__49595700();

   return behavior;
}

Behavior __49631580;

Behavior make__49631580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49631580 = behavior;
   behavior->owner = (Object)func1_58_84_55387080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__49633080();

   return behavior;
}

Behavior __49712360;

Behavior make__49712360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49712360 = behavior;
   behavior->owner = (Object)func1_58_84_55387080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[address_55656540_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_55578980_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   base_55578980_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   base_55578980_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(base_55578980_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,base_55578980_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
base_55578980_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[base_55578980_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_55656640_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   next__data_55656640_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   next__data_55656640_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(next__data_55656640_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,next__data_55656640_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
next__data_55656640_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[next__data_55656640_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_56040560_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   change_56040560_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   change_56040560_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(change_56040560_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,change_56040560_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
change_56040560_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[change_56040560_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_55807400_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   remaining_55807400_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   remaining_55807400_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(remaining_55807400_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,remaining_55807400_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
remaining_55807400_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[remaining_55807400_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_54086960_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   interpolated__value_54086960_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   interpolated__value_54086960_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(interpolated__value_54086960_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,interpolated__value_54086960_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
interpolated__value_54086960_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[interpolated__value_54086960_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__49564660();

   return behavior;
}

Behavior __49711840;

Behavior make__49711840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49711840 = behavior;
   behavior->owner = (Object)func1_58_84_55387080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_46631960_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   base_46631960_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   base_46631960_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(base_46631960_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,base_46631960_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
base_46631960_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[base_46631960_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_46861740_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   next__data_46861740_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   next__data_46861740_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(next__data_46861740_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,next__data_46861740_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
next__data_46861740_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[next__data_46861740_my__lut_58_8400_40311080_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__49564560();

   return behavior;
}

Scope makefunc1_58_84_55387080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_55387080 = scope;
   scope->owner = (Object)func1_58_840_56837240;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_46861380();
   scope->systemIs[1] = makemy__interpolator_54086760();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_55578980();
   scope->inners[1] = makenext__data_55656640();
   scope->inners[2] = makeaddress_55656540();
   scope->inners[3] = makeremaining_55807400();
   scope->inners[4] = makechange_56040560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49599720();
   scope->behaviors[1] = make__49595980();
   scope->behaviors[2] = make__49633460();
   scope->behaviors[3] = make__49631580();
   scope->behaviors[4] = make__49712360();
   scope->behaviors[5] = make__49711840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_56837240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_56837240 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_57048560();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_57171600();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_55387080();

   return systemT;
}