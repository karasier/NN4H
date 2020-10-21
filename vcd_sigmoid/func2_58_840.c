#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func2_58_840_61397440;

SignalI z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makez__value_61633120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func2_58_840_61397440;
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

SignalI a_61765020_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makea_61765020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_61765020_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func2_58_840_61397440;
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

Block __50594600;

void code__50594600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            first = value2integer(make__53063140());
            last = value2integer(make__53063000());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__50594600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50594600 = block;
   block->owner = (Object)__48660320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50594600;

   return block;
};

Block __48660260;

void code__48660260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920,value2integer(make__53062760()),value2integer(make__53062740())));
      set_value_pos(pool_state);
   }
}

Block make__48660260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48660260 = block;
   block->owner = (Object)__48659620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48660260;

   return block;
};

Block __48659500;

void code__48659500() {
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
            src0 = make__53061500();
            src1 = make__53061380();
            src2 = make__53061360();
            src3 = make__53061340();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            first = value2integer(make__53061100());
            last = value2integer(make__53061080());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_62099140_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__48659500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48659500 = block;
   block->owner = (Object)__48658280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48659500;

   return block;
};

Block __48658200;

void code__48658200() {
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
            src0 = make__53059620();
            src1 = make__53108540();
            src2 = make__53108400();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__53108080();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__53107760();
            src1 = make__53107740();
            src2 = make__53107720();
            src3 = make__53107700();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_62302360_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__48658200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48658200 = block;
   block->owner = (Object)__48656400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48658200;

   return block;
};

Block __50594980;

void code__50594980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,address_62750540_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_61858640_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,base_64465580_my__interpolator_58_8430_64127420_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_61987320_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,next__data_64657580_my__interpolator_58_8430_64127420_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_62302360_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,change_64775500_my__interpolator_58_8430_64127420_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_62099140_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,remaining_64903420_my__interpolator_58_8430_64127420_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_45636240_my__interpolator_58_8430_64127420_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,a_61765020_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__50594980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50594980 = block;
   block->owner = (Object)__50227400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50594980;

   return block;
};

Block __50594880;

void code__50594880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_62826740_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,base_61858640_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_63011360_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,next__data_61987320_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__50594880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50594880 = block;
   block->owner = (Object)__50227100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50594880;

   return block;
};

Value make__53063140() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53063000() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53062760() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53062740() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53061500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53061380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53061360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53061340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53061100() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53061080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53059620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53108540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53108400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53108080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53107760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53107740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53107720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53107700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func2_58_84_61745700;

SignalI base_61858640_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makebase_61858640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_61858640_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func2_58_84_61745700;
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

SignalI next__data_61987320_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makenext__data_61987320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_61987320_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func2_58_84_61745700;
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

SignalI address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeaddress_61987180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func2_58_84_61745700;
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

SignalI remaining_62099140_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeremaining_62099140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_62099140_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func2_58_84_61745700;
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

SignalI change_62302360_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makechange_62302360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_62302360_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func2_58_84_61745700;
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

SystemI my__lut_63011160;

SystemI makemy__lut_63011160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_63011160 = systemI;
   systemI->owner = (Object)func2_58_84_61745700;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8430_62728580;

   return systemI;
};

SystemI my__interpolator_45635780;

SystemI makemy__interpolator_45635780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_45635780 = systemI;
   systemI->owner = (Object)func2_58_84_61745700;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8430_64127420;

   return systemI;
};

Behavior __48660320;

Behavior make__48660320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48660320 = behavior;
   behavior->owner = (Object)func2_58_84_61745700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__50594600();

   return behavior;
}

Behavior __48659620;

Behavior make__48659620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48659620 = behavior;
   behavior->owner = (Object)func2_58_84_61745700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__48660260();

   return behavior;
}

Behavior __48658280;

Behavior make__48658280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48658280 = behavior;
   behavior->owner = (Object)func2_58_84_61745700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[z__value_61633120_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__48659500();

   return behavior;
}

Behavior __48656400;

Behavior make__48656400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48656400 = behavior;
   behavior->owner = (Object)func2_58_84_61745700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__48658200();

   return behavior;
}

Behavior __50227400;

Behavior make__50227400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50227400 = behavior;
   behavior->owner = (Object)func2_58_84_61745700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[address_61987180_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_61858640_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   base_61858640_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   base_61858640_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(base_61858640_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,base_61858640_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
base_61858640_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[base_61858640_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_61987320_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   next__data_61987320_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   next__data_61987320_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(next__data_61987320_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,next__data_61987320_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
next__data_61987320_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[next__data_61987320_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_62302360_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   change_62302360_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   change_62302360_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(change_62302360_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,change_62302360_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
change_62302360_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[change_62302360_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_62099140_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   remaining_62099140_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   remaining_62099140_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(remaining_62099140_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,remaining_62099140_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
remaining_62099140_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[remaining_62099140_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_45636240_my__interpolator_58_8430_64127420_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   interpolated__value_45636240_my__interpolator_58_8430_64127420_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   interpolated__value_45636240_my__interpolator_58_8430_64127420_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(interpolated__value_45636240_my__interpolator_58_8430_64127420_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,interpolated__value_45636240_my__interpolator_58_8430_64127420_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
interpolated__value_45636240_my__interpolator_58_8430_64127420_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[interpolated__value_45636240_my__interpolator_58_8430_64127420_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__50594980();

   return behavior;
}

Behavior __50227100;

Behavior make__50227100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50227100 = behavior;
   behavior->owner = (Object)func2_58_84_61745700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_62826740_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   base_62826740_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   base_62826740_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(base_62826740_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,base_62826740_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
base_62826740_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[base_62826740_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_63011360_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   next__data_63011360_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   next__data_63011360_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(next__data_63011360_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,next__data_63011360_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
next__data_63011360_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[next__data_63011360_my__lut_58_8430_62728580_func2_58_84_61745700_func2_58_840_61397440_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__50594880();

   return behavior;
}

Scope makefunc2_58_84_61745700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func2_58_84_61745700 = scope;
   scope->owner = (Object)func2_58_840_61397440;
   scope->name = "func2:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_63011160();
   scope->systemIs[1] = makemy__interpolator_45635780();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_61858640();
   scope->inners[1] = makenext__data_61987320();
   scope->inners[2] = makeaddress_61987180();
   scope->inners[3] = makeremaining_62099140();
   scope->inners[4] = makechange_62302360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48660320();
   scope->behaviors[1] = make__48659620();
   scope->behaviors[2] = make__48658280();
   scope->behaviors[3] = make__48656400();
   scope->behaviors[4] = make__50227400();
   scope->behaviors[5] = make__50227100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc2_58_840_61397440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func2_58_840_61397440 = systemT;
systemT->owner = NULL;
   systemT->name = "func2:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_61633120();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_61765020();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc2_58_84_61745700();

   return systemT;
}