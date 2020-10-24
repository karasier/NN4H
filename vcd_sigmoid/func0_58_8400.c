#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_55382140;

SignalI z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makez__value_55625300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_8400_55382140;
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

SignalI a_55808040_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makea_55808040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_55808040_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_8400_55382140;
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

Block __54832000;

void code__54832000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
            first = value2integer(make__54946580());
            last = value2integer(make__54946560());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54832000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54832000 = block;
   block->owner = (Object)__54831480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54832000;

   return block;
};

Block __54831440;

void code__54831440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060,value2integer(make__54946320()),value2integer(make__54946300())));
      set_value_pos(pool_state);
   }
}

Block make__54831440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54831440 = block;
   block->owner = (Object)__54830940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54831440;

   return block;
};

Block __54830800;

void code__54830800() {
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
            src0 = make__54945480();
            src1 = make__54945400();
            src2 = make__54945380();
            src3 = make__54945360();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
            first = value2integer(make__54945240());
            last = value2integer(make__54945220());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_55158280_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54830800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54830800 = block;
   block->owner = (Object)__54830140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54830800;

   return block;
};

Block __54830080;

void code__54830080() {
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
            src0 = make__54944360();
            src1 = make__54944300();
            src2 = make__54944280();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__54944200();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__54943980();
            src1 = make__54943940();
            src2 = make__54943900();
            src3 = make__55009220();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_55365240_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54830080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54830080 = block;
   block->owner = (Object)__54829340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54830080;

   return block;
};

Block __54832320;

void code__54832320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,address_53808140_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54895940_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,base_55791160_my__interpolator_58_8410_55575920_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55002060_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,next__data_56034840_my__interpolator_58_8410_55575920_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_55365240_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,change_56268520_my__interpolator_58_8410_55575920_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_55158280_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,remaining_56402460_my__interpolator_58_8410_55575920_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_56720020_my__interpolator_58_8410_55575920_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,a_55808040_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54832320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54832320 = block;
   block->owner = (Object)__54915900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54832320;

   return block;
};

Block __54832260;

void code__54832260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54057420_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,base_54895940_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54284360_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,next__data_55002060_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54832260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54832260 = block;
   block->owner = (Object)__54915640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54832260;

   return block;
};

Value make__54946580() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54946560() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54946320() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54946300() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54945480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54945400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54945380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54945360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54945240() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54945220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54944360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54944300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54944280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54944200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54943980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54943940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54943900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55009220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_840_54820520;

SignalI base_54895940_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makebase_54895940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54895940_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_840_54820520;
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

SignalI next__data_55002060_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makenext__data_55002060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_55002060_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_840_54820520;
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

SignalI address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeaddress_55001980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_840_54820520;
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

SignalI remaining_55158280_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeremaining_55158280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_55158280_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_840_54820520;
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

SignalI change_55365240_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makechange_55365240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_55365240_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)func0_58_840_54820520;
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

SystemI my__lut_54284160;

SystemI makemy__lut_54284160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_54284160 = systemI;
   systemI->owner = (Object)func0_58_840_54820520;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_53811320;

   return systemI;
};

SystemI my__interpolator_56719860;

SystemI makemy__interpolator_56719860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_56719860 = systemI;
   systemI->owner = (Object)func0_58_840_54820520;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_55575920;

   return systemI;
};

Behavior __54831480;

Behavior make__54831480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54831480 = behavior;
   behavior->owner = (Object)func0_58_840_54820520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54832000();

   return behavior;
}

Behavior __54830940;

Behavior make__54830940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54830940 = behavior;
   behavior->owner = (Object)func0_58_840_54820520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54831440();

   return behavior;
}

Behavior __54830140;

Behavior make__54830140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54830140 = behavior;
   behavior->owner = (Object)func0_58_840_54820520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54830800();

   return behavior;
}

Behavior __54829340;

Behavior make__54829340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54829340 = behavior;
   behavior->owner = (Object)func0_58_840_54820520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__54830080();

   return behavior;
}

Behavior __54915900;

Behavior make__54915900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54915900 = behavior;
   behavior->owner = (Object)func0_58_840_54820520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[address_55001980_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_54895940_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   base_54895940_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   base_54895940_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(base_54895940_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,base_54895940_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
base_54895940_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[base_54895940_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_55002060_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   next__data_55002060_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   next__data_55002060_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(next__data_55002060_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,next__data_55002060_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
next__data_55002060_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[next__data_55002060_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_55365240_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   change_55365240_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   change_55365240_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(change_55365240_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,change_55365240_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
change_55365240_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[change_55365240_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_55158280_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   remaining_55158280_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   remaining_55158280_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(remaining_55158280_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,remaining_55158280_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
remaining_55158280_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[remaining_55158280_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_56720020_my__interpolator_58_8410_55575920_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   interpolated__value_56720020_my__interpolator_58_8410_55575920_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   interpolated__value_56720020_my__interpolator_58_8410_55575920_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(interpolated__value_56720020_my__interpolator_58_8410_55575920_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,interpolated__value_56720020_my__interpolator_58_8410_55575920_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
interpolated__value_56720020_my__interpolator_58_8410_55575920_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[interpolated__value_56720020_my__interpolator_58_8410_55575920_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54832320();

   return behavior;
}

Behavior __54915640;

Behavior make__54915640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54915640 = behavior;
   behavior->owner = (Object)func0_58_840_54820520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_54057420_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   base_54057420_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   base_54057420_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(base_54057420_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,base_54057420_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
base_54057420_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[base_54057420_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_54284360_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   next__data_54284360_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   next__data_54284360_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(next__data_54284360_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,next__data_54284360_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
next__data_54284360_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[next__data_54284360_my__lut_58_8410_53811320_func0_58_840_54820520_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54832260();

   return behavior;
}

Scope makefunc0_58_840_54820520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_54820520 = scope;
   scope->owner = (Object)func0_58_8400_55382140;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_54284160();
   scope->systemIs[1] = makemy__interpolator_56719860();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_54895940();
   scope->inners[1] = makenext__data_55002060();
   scope->inners[2] = makeaddress_55001980();
   scope->inners[3] = makeremaining_55158280();
   scope->inners[4] = makechange_55365240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54831480();
   scope->behaviors[1] = make__54830940();
   scope->behaviors[2] = make__54830140();
   scope->behaviors[3] = make__54829340();
   scope->behaviors[4] = make__54915900();
   scope->behaviors[5] = make__54915640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_55382140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_55382140 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_55625300();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_55808040();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_54820520();

   return systemT;
}