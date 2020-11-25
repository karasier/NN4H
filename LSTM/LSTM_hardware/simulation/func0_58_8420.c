#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8420_66440540;

SignalI z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makez__value_66762960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_8420_66440540;
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

SignalI a_67091540_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makea_67091540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_67091540_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_8420_66440540;
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

Block __79067040;

void code__79067040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            first = value2integer(make__79078840());
            last = value2integer(make__79078820());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__79067040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79067040 = block;
   block->owner = (Object)__79066720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79067040;

   return block;
};

Block __79066540;

void code__79066540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420,value2integer(make__79078660()),value2integer(make__79078620())));
      set_value_pos(pool_state);
   }
}

Block make__79066540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79066540 = block;
   block->owner = (Object)__79066240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79066540;

   return block;
};

Block __79066200;

void code__79066200() {
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
            src0 = make__79078120();
            src1 = make__79078100();
            src2 = make__79078080();
            src3 = make__79078060();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            first = value2integer(make__79077960());
            last = value2integer(make__79077940());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_56013960_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__79066200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79066200 = block;
   block->owner = (Object)__79065740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79066200;

   return block;
};

Block __79065700;

void code__79065700() {
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
            src0 = make__79077480();
            src1 = make__79077460();
            src2 = make__79077440();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79077380();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__79118140();
            src1 = make__79118120();
            src2 = make__79118100();
            src3 = make__79118080();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_64514480_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__79065700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79065700 = block;
   block->owner = (Object)__79065220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79065700;

   return block;
};

Block __79067260;

void code__79067260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56879860_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,base_50517660_my__interpolator_58_8440_80466320_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_64225240_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,next__data_51622620_my__interpolator_58_8440_80466320_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_64514480_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,change_52281380_my__interpolator_58_8440_80466320_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_56013960_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,remaining_54733000_my__interpolator_58_8440_80466320_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_55448380_my__interpolator_58_8440_80466320_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,a_67091540_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__79067260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79067260 = block;
   block->owner = (Object)__79084000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79067260;

   return block;
};

Block __79067200;

void code__79067200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_79475240_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,base_56879860_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_79644480_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,next__data_64225240_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__79067200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79067200 = block;
   block->owner = (Object)__79083820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79067200;

   return block;
};

Value make__79078840() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79078820() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79078660() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79078620() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79078120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79078100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79078080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79078060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79077960() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79077940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79077480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79077460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79077440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79077380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79118140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79118120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79118100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79118080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_842_55580420;

SignalI base_56879860_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makebase_56879860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56879860_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_842_55580420;
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

SignalI next__data_64225240_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makenext__data_64225240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_64225240_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_842_55580420;
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

SignalI address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeaddress_64225160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_842_55580420;
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

SignalI remaining_56013960_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeremaining_56013960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_56013960_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_842_55580420;
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

SignalI change_64514480_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makechange_64514480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_64514480_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func0_58_842_55580420;
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

SystemI my__lut_79644340;

SystemI makemy__lut_79644340() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_79644340 = systemI;
   systemI->owner = (Object)func0_58_842_55580420;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8440_79389880;

   return systemI;
};

SystemI my__interpolator_55447820;

SystemI makemy__interpolator_55447820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_55447820 = systemI;
   systemI->owner = (Object)func0_58_842_55580420;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8440_80466320;

   return systemI;
};

Behavior __79066720;

Behavior make__79066720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79066720 = behavior;
   behavior->owner = (Object)func0_58_842_55580420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__79067040();

   return behavior;
}

Behavior __79066240;

Behavior make__79066240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79066240 = behavior;
   behavior->owner = (Object)func0_58_842_55580420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__79066540();

   return behavior;
}

Behavior __79065740;

Behavior make__79065740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79065740 = behavior;
   behavior->owner = (Object)func0_58_842_55580420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__79066200();

   return behavior;
}

Behavior __79065220;

Behavior make__79065220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79065220 = behavior;
   behavior->owner = (Object)func0_58_842_55580420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__79065700();

   return behavior;
}

Behavior __79084000;

Behavior make__79084000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79084000 = behavior;
   behavior->owner = (Object)func0_58_842_55580420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[address_64225160_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_56879860_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   base_56879860_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   base_56879860_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(base_56879860_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,base_56879860_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
base_56879860_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[base_56879860_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_64225240_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   next__data_64225240_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   next__data_64225240_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(next__data_64225240_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,next__data_64225240_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
next__data_64225240_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[next__data_64225240_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_64514480_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   change_64514480_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   change_64514480_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(change_64514480_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,change_64514480_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
change_64514480_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[change_64514480_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_56013960_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   remaining_56013960_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   remaining_56013960_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(remaining_56013960_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,remaining_56013960_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
remaining_56013960_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[remaining_56013960_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_55448380_my__interpolator_58_8440_80466320_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   interpolated__value_55448380_my__interpolator_58_8440_80466320_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   interpolated__value_55448380_my__interpolator_58_8440_80466320_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(interpolated__value_55448380_my__interpolator_58_8440_80466320_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,interpolated__value_55448380_my__interpolator_58_8440_80466320_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
interpolated__value_55448380_my__interpolator_58_8440_80466320_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[interpolated__value_55448380_my__interpolator_58_8440_80466320_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__79067260();

   return behavior;
}

Behavior __79083820;

Behavior make__79083820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79083820 = behavior;
   behavior->owner = (Object)func0_58_842_55580420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_79475240_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   base_79475240_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   base_79475240_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(base_79475240_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,base_79475240_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
base_79475240_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[base_79475240_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_79644480_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   next__data_79644480_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   next__data_79644480_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(next__data_79644480_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,next__data_79644480_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
next__data_79644480_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[next__data_79644480_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__79067200();

   return behavior;
}

Scope makefunc0_58_842_55580420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_842_55580420 = scope;
   scope->owner = (Object)func0_58_8420_66440540;
   scope->name = "func0:T2";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_79644340();
   scope->systemIs[1] = makemy__interpolator_55447820();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_56879860();
   scope->inners[1] = makenext__data_64225240();
   scope->inners[2] = makeaddress_64225160();
   scope->inners[3] = makeremaining_56013960();
   scope->inners[4] = makechange_64514480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79066720();
   scope->behaviors[1] = make__79066240();
   scope->behaviors[2] = make__79065740();
   scope->behaviors[3] = make__79065220();
   scope->behaviors[4] = make__79084000();
   scope->behaviors[5] = make__79083820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8420_66440540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8420_66440540 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_66762960();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_67091540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_842_55580420();

   return systemT;
}