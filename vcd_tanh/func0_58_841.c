#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_56114000;

SignalI z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makez__value_56227640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)func0_58_841_56114000;
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

SignalI a_56352660_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makea_56352660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_56352660_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)func0_58_841_56114000;
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

Block __57405720;

void code__57405720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
            first = value2integer(make__57711740());
            last = value2integer(make__57711700());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__57405720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57405720 = block;
   block->owner = (Object)__57405260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57405720;

   return block;
};

Block __57405200;

void code__57405200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140,value2integer(make__57711360()),value2integer(make__57711300())));
      set_value_pos(pool_state);
   }
}

Block make__57405200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57405200 = block;
   block->owner = (Object)__57404720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57405200;

   return block;
};

Block __57404640;

void code__57404640() {
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
            src0 = make__57710540();
            src1 = make__57710520();
            src2 = make__57710500();
            src3 = make__57710480();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
            first = value2integer(make__57710300());
            last = value2integer(make__57710280());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_56434460_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__57404640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57404640 = block;
   block->owner = (Object)__57403960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57404640;

   return block;
};

Block __57403880;

void code__57403880() {
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
            src0 = make__57709540();
            src1 = make__57709520();
            src2 = make__57709500();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__57709420();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__57709100();
            src1 = make__57709060();
            src2 = make__57709020();
            src3 = make__57709000();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_56480820_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__57403880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57403880 = block;
   block->owner = (Object)__57403120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57403880;

   return block;
};

Block __57406360;

void code__57406360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,address_56992840_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56161620_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,base_48160260_my__interpolator_58_842_47629340_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56240760_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,next__data_48333200_my__interpolator_58_842_47629340_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_56480820_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,change_48697420_my__interpolator_58_842_47629340_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_56434460_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,remaining_50209940_my__interpolator_58_842_47629340_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50003200_my__interpolator_58_842_47629340_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,a_56352660_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__57406360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57406360 = block;
   block->owner = (Object)__57568040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57406360;

   return block;
};

Block __57406240;

void code__57406240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_57095000_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,base_56161620_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57139880_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,next__data_56240760_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__57406240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57406240 = block;
   block->owner = (Object)__57567480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57406240;

   return block;
};

Value make__57711740() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57711700() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57711360() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57711300() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57710540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57710520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57710500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57710480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57710300() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57710280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57709540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57709520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57709500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57709420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57709100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57709060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57709020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57709000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_84_56058240;

SignalI base_56161620_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makebase_56161620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56161620_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)func0_58_84_56058240;
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

SignalI next__data_56240760_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makenext__data_56240760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_56240760_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)func0_58_84_56058240;
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

SignalI address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeaddress_56240680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)func0_58_84_56058240;
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

SignalI remaining_56434460_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeremaining_56434460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_56434460_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)func0_58_84_56058240;
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

SignalI change_56480820_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makechange_56480820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_56480820_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)func0_58_84_56058240;
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

SystemI my__lut_57139740;

SystemI makemy__lut_57139740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_57139740 = systemI;
   systemI->owner = (Object)func0_58_84_56058240;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_56994840;

   return systemI;
};

SystemI my__interpolator_50001740;

SystemI makemy__interpolator_50001740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50001740 = systemI;
   systemI->owner = (Object)func0_58_84_56058240;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_47629340;

   return systemI;
};

Behavior __57405260;

Behavior make__57405260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57405260 = behavior;
   behavior->owner = (Object)func0_58_84_56058240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__57405720();

   return behavior;
}

Behavior __57404720;

Behavior make__57404720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57404720 = behavior;
   behavior->owner = (Object)func0_58_84_56058240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__57405200();

   return behavior;
}

Behavior __57403960;

Behavior make__57403960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57403960 = behavior;
   behavior->owner = (Object)func0_58_84_56058240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__57404640();

   return behavior;
}

Behavior __57403120;

Behavior make__57403120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57403120 = behavior;
   behavior->owner = (Object)func0_58_84_56058240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__57403880();

   return behavior;
}

Behavior __57568040;

Behavior make__57568040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57568040 = behavior;
   behavior->owner = (Object)func0_58_84_56058240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[address_56240680_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_56161620_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   base_56161620_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   base_56161620_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(base_56161620_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,base_56161620_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
base_56161620_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[base_56161620_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_56240760_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   next__data_56240760_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   next__data_56240760_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(next__data_56240760_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,next__data_56240760_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
next__data_56240760_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[next__data_56240760_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_56480820_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   change_56480820_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   change_56480820_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(change_56480820_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,change_56480820_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
change_56480820_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[change_56480820_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_56434460_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   remaining_56434460_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   remaining_56434460_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(remaining_56434460_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,remaining_56434460_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
remaining_56434460_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[remaining_56434460_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_50003200_my__interpolator_58_842_47629340_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   interpolated__value_50003200_my__interpolator_58_842_47629340_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   interpolated__value_50003200_my__interpolator_58_842_47629340_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(interpolated__value_50003200_my__interpolator_58_842_47629340_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,interpolated__value_50003200_my__interpolator_58_842_47629340_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
interpolated__value_50003200_my__interpolator_58_842_47629340_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[interpolated__value_50003200_my__interpolator_58_842_47629340_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__57406360();

   return behavior;
}

Behavior __57567480;

Behavior make__57567480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57567480 = behavior;
   behavior->owner = (Object)func0_58_84_56058240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_57095000_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   base_57095000_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   base_57095000_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(base_57095000_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,base_57095000_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
base_57095000_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[base_57095000_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_57139880_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   next__data_57139880_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   next__data_57139880_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(next__data_57139880_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,next__data_57139880_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
next__data_57139880_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[next__data_57139880_my__lut_58_842_56994840_func0_58_84_56058240_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__57406240();

   return behavior;
}

Scope makefunc0_58_84_56058240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_56058240 = scope;
   scope->owner = (Object)func0_58_841_56114000;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_57139740();
   scope->systemIs[1] = makemy__interpolator_50001740();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_56161620();
   scope->inners[1] = makenext__data_56240760();
   scope->inners[2] = makeaddress_56240680();
   scope->inners[3] = makeremaining_56434460();
   scope->inners[4] = makechange_56480820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57405260();
   scope->behaviors[1] = make__57404720();
   scope->behaviors[2] = make__57403960();
   scope->behaviors[3] = make__57403120();
   scope->behaviors[4] = make__57568040();
   scope->behaviors[5] = make__57567480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_56114000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_56114000 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_56227640();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_56352660();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_56058240();

   return systemT;
}