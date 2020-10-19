#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_54011460;

SignalI z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makez__value_54136880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_841_54011460;
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

SignalI a_54257340_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makea_54257340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_54257340_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_841_54011460;
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

Block __62640340;

void code__62640340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            first = value2integer(make__62725400());
            last = value2integer(make__62725380());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62640340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62640340 = block;
   block->owner = (Object)__62639660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62640340;

   return block;
};

Block __62639620;

void code__62639620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300,value2integer(make__62725220()),value2integer(make__62725200())));
      set_value_pos(pool_state);
   }
}

Block make__62639620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62639620 = block;
   block->owner = (Object)__62639360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62639620;

   return block;
};

Block __62639320;

void code__62639320() {
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
            src0 = make__62724460();
            src1 = make__62724440();
            src2 = make__62724420();
            src3 = make__62724400();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            first = value2integer(make__62724240());
            last = value2integer(make__62724220());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47977700_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62639320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62639320 = block;
   block->owner = (Object)__62638840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62639320;

   return block;
};

Block __62638780;

void code__62638780() {
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
            src0 = make__62723620();
            src1 = make__62723600();
            src2 = make__62723580();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__62723500();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__62723240();
            src1 = make__62723220();
            src2 = make__62723200();
            src3 = make__62723160();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_49005400_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62638780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62638780 = block;
   block->owner = (Object)__62638240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62638780;

   return block;
};

Block __62640780;

void code__62640780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,address_54089980_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_42582720_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,base_55476360_my__interpolator_58_844_55306500_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47463080_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,next__data_55640140_my__interpolator_58_844_55306500_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_49005400_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,change_55869820_my__interpolator_58_844_55306500_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47977700_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,remaining_56075080_my__interpolator_58_844_55306500_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_56156280_my__interpolator_58_844_55306500_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,a_54257340_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62640780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62640780 = block;
   block->owner = (Object)__62676260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62640780;

   return block;
};

Block __62640620;

void code__62640620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54212700_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,base_42582720_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54393320_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,next__data_47463080_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62640620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62640620 = block;
   block->owner = (Object)__62676060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62640620;

   return block;
};

Value make__62725400() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62725380() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62725220() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62725200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62724460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62724440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62724420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62724400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62724240() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62724220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62723620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62723600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62723580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62723500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62723240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62723220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62723200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62723160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_84_57009920;

SignalI base_42582720_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makebase_42582720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_42582720_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_84_57009920;
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

SignalI next__data_47463080_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makenext__data_47463080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47463080_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_84_57009920;
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

SignalI address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeaddress_47462140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_84_57009920;
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

SignalI remaining_47977700_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeremaining_47977700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47977700_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_84_57009920;
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

SignalI change_49005400_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makechange_49005400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_49005400_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)func0_58_84_57009920;
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

SystemI my__lut_54393180;

SystemI makemy__lut_54393180() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_54393180 = systemI;
   systemI->owner = (Object)func0_58_84_57009920;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_844_54043100;

   return systemI;
};

SystemI my__interpolator_56180660;

SystemI makemy__interpolator_56180660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_56180660 = systemI;
   systemI->owner = (Object)func0_58_84_57009920;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_844_55306500;

   return systemI;
};

Behavior __62639660;

Behavior make__62639660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62639660 = behavior;
   behavior->owner = (Object)func0_58_84_57009920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62640340();

   return behavior;
}

Behavior __62639360;

Behavior make__62639360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62639360 = behavior;
   behavior->owner = (Object)func0_58_84_57009920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62639620();

   return behavior;
}

Behavior __62638840;

Behavior make__62638840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62638840 = behavior;
   behavior->owner = (Object)func0_58_84_57009920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62639320();

   return behavior;
}

Behavior __62638240;

Behavior make__62638240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62638240 = behavior;
   behavior->owner = (Object)func0_58_84_57009920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__62638780();

   return behavior;
}

Behavior __62676260;

Behavior make__62676260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62676260 = behavior;
   behavior->owner = (Object)func0_58_84_57009920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[address_47462140_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_42582720_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   base_42582720_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   base_42582720_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(base_42582720_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,base_42582720_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
base_42582720_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[base_42582720_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_47463080_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   next__data_47463080_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   next__data_47463080_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(next__data_47463080_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,next__data_47463080_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
next__data_47463080_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[next__data_47463080_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_49005400_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   change_49005400_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   change_49005400_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(change_49005400_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,change_49005400_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
change_49005400_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[change_49005400_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_47977700_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   remaining_47977700_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   remaining_47977700_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(remaining_47977700_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,remaining_47977700_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
remaining_47977700_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[remaining_47977700_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_56156280_my__interpolator_58_844_55306500_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   interpolated__value_56156280_my__interpolator_58_844_55306500_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   interpolated__value_56156280_my__interpolator_58_844_55306500_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(interpolated__value_56156280_my__interpolator_58_844_55306500_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,interpolated__value_56156280_my__interpolator_58_844_55306500_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
interpolated__value_56156280_my__interpolator_58_844_55306500_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[interpolated__value_56156280_my__interpolator_58_844_55306500_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62640780();

   return behavior;
}

Behavior __62676060;

Behavior make__62676060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62676060 = behavior;
   behavior->owner = (Object)func0_58_84_57009920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_54212700_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   base_54212700_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   base_54212700_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(base_54212700_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,base_54212700_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
base_54212700_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[base_54212700_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_54393320_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   next__data_54393320_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   next__data_54393320_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(next__data_54393320_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,next__data_54393320_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
next__data_54393320_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[next__data_54393320_my__lut_58_844_54043100_func0_58_84_57009920_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62640620();

   return behavior;
}

Scope makefunc0_58_84_57009920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_57009920 = scope;
   scope->owner = (Object)func0_58_841_54011460;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_54393180();
   scope->systemIs[1] = makemy__interpolator_56180660();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_42582720();
   scope->inners[1] = makenext__data_47463080();
   scope->inners[2] = makeaddress_47462140();
   scope->inners[3] = makeremaining_47977700();
   scope->inners[4] = makechange_49005400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62639660();
   scope->behaviors[1] = make__62639360();
   scope->behaviors[2] = make__62638840();
   scope->behaviors[3] = make__62638240();
   scope->behaviors[4] = make__62676260();
   scope->behaviors[5] = make__62676060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_54011460() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_54011460 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_54136880();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_54257340();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_57009920();

   return systemT;
}