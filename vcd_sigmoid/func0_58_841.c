#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_48125140;

SignalI z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makez__value_48540680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_841_48125140;
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

SignalI a_49127680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makea_49127680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49127680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_841_48125140;
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

Block __64485680;

void code__64485680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            first = value2integer(make__64591560());
            last = value2integer(make__64591540());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__64485680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64485680 = block;
   block->owner = (Object)__64485420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64485680;

   return block;
};

Block __64485380;

void code__64485380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920,value2integer(make__64591380()),value2integer(make__64591360())));
      set_value_pos(pool_state);
   }
}

Block make__64485380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64485380 = block;
   block->owner = (Object)__64485120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64485380;

   return block;
};

Block __64485080;

void code__64485080() {
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
            src0 = make__64590600();
            src1 = make__64590500();
            src2 = make__64590480();
            src3 = make__64590460();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            first = value2integer(make__64590280());
            last = value2integer(make__64590260());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_55666140_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__64485080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64485080 = block;
   block->owner = (Object)__64484320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64485080;

   return block;
};

Block __64484260;

void code__64484260() {
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
            src0 = make__64589560();
            src1 = make__64589540();
            src2 = make__64589520();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__64589460();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__64589300();
            src1 = make__64589280();
            src2 = make__64589260();
            src3 = make__64589240();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_55751840_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__64484260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64484260 = block;
   block->owner = (Object)__64483600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64484260;

   return block;
};

Block __64486140;

void code__64486140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,address_49131720_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_55422820_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,base_53299760_my__interpolator_58_844_53235900_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55572260_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,next__data_53421340_my__interpolator_58_844_53235900_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_55751840_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,change_53700240_my__interpolator_58_844_53235900_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_55666140_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,remaining_53774100_my__interpolator_58_844_53235900_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_54011600_my__interpolator_58_844_53235900_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,a_49127680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__64486140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64486140 = block;
   block->owner = (Object)__64574020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64486140;

   return block;
};

Block __64485960;

void code__64485960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49211380_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,base_55422820_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49328660_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,next__data_55572260_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__64485960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64485960 = block;
   block->owner = (Object)__64573700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64485960;

   return block;
};

Value make__64591560() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64591540() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64591380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64591360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64590600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64590500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64590480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64590460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64590280() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64590260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64589560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64589540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64589520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64589460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64589300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64589280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64589260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64589240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_84_55296400;

SignalI base_55422820_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makebase_55422820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_55422820_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_84_55296400;
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

SignalI next__data_55572260_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makenext__data_55572260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_55572260_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_84_55296400;
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

SignalI address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeaddress_55572180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_84_55296400;
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

SignalI remaining_55666140_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeremaining_55666140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_55666140_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_84_55296400;
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

SignalI change_55751840_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makechange_55751840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_55751840_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_84_55296400;
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

SystemI my__lut_49328460;

SystemI makemy__lut_49328460() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49328460 = systemI;
   systemI->owner = (Object)func0_58_84_55296400;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_844_49134980;

   return systemI;
};

SystemI my__interpolator_54011440;

SystemI makemy__interpolator_54011440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_54011440 = systemI;
   systemI->owner = (Object)func0_58_84_55296400;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_844_53235900;

   return systemI;
};

Behavior __64485420;

Behavior make__64485420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64485420 = behavior;
   behavior->owner = (Object)func0_58_84_55296400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__64485680();

   return behavior;
}

Behavior __64485120;

Behavior make__64485120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64485120 = behavior;
   behavior->owner = (Object)func0_58_84_55296400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__64485380();

   return behavior;
}

Behavior __64484320;

Behavior make__64484320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64484320 = behavior;
   behavior->owner = (Object)func0_58_84_55296400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__64485080();

   return behavior;
}

Behavior __64483600;

Behavior make__64483600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64483600 = behavior;
   behavior->owner = (Object)func0_58_84_55296400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__64484260();

   return behavior;
}

Behavior __64574020;

Behavior make__64574020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64574020 = behavior;
   behavior->owner = (Object)func0_58_84_55296400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[address_55572180_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_55422820_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   base_55422820_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   base_55422820_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(base_55422820_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,base_55422820_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
base_55422820_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[base_55422820_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_55572260_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   next__data_55572260_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   next__data_55572260_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(next__data_55572260_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,next__data_55572260_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
next__data_55572260_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[next__data_55572260_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_55751840_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   change_55751840_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   change_55751840_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(change_55751840_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,change_55751840_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
change_55751840_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[change_55751840_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_55666140_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   remaining_55666140_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   remaining_55666140_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(remaining_55666140_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,remaining_55666140_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
remaining_55666140_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[remaining_55666140_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_54011600_my__interpolator_58_844_53235900_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   interpolated__value_54011600_my__interpolator_58_844_53235900_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   interpolated__value_54011600_my__interpolator_58_844_53235900_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(interpolated__value_54011600_my__interpolator_58_844_53235900_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,interpolated__value_54011600_my__interpolator_58_844_53235900_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
interpolated__value_54011600_my__interpolator_58_844_53235900_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[interpolated__value_54011600_my__interpolator_58_844_53235900_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__64486140();

   return behavior;
}

Behavior __64573700;

Behavior make__64573700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64573700 = behavior;
   behavior->owner = (Object)func0_58_84_55296400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49211380_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   base_49211380_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   base_49211380_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(base_49211380_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,base_49211380_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
base_49211380_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[base_49211380_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49328660_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   next__data_49328660_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   next__data_49328660_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(next__data_49328660_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,next__data_49328660_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
next__data_49328660_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[next__data_49328660_my__lut_58_844_49134980_func0_58_84_55296400_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__64485960();

   return behavior;
}

Scope makefunc0_58_84_55296400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_55296400 = scope;
   scope->owner = (Object)func0_58_841_48125140;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49328460();
   scope->systemIs[1] = makemy__interpolator_54011440();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_55422820();
   scope->inners[1] = makenext__data_55572260();
   scope->inners[2] = makeaddress_55572180();
   scope->inners[3] = makeremaining_55666140();
   scope->inners[4] = makechange_55751840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__64485420();
   scope->behaviors[1] = make__64485120();
   scope->behaviors[2] = make__64484320();
   scope->behaviors[3] = make__64483600();
   scope->behaviors[4] = make__64574020();
   scope->behaviors[5] = make__64573700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_48125140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_48125140 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_48540680();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49127680();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_55296400();

   return systemT;
}