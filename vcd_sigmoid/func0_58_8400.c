#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_62831980;

SignalI z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makez__value_62930440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_8400_62831980;
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

SignalI a_63071000_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makea_63071000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_63071000_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_8400_62831980;
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

Block __49229160;

void code__49229160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            first = value2integer(make__49364440());
            last = value2integer(make__49364380());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49229160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49229160 = block;
   block->owner = (Object)__49249820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49229160;

   return block;
};

Block __49249600;

void code__49249600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920,value2integer(make__49363580()),value2integer(make__49363540())));
      set_value_pos(pool_state);
   }
}

Block make__49249600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49249600 = block;
   block->owner = (Object)__49248760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49249600;

   return block;
};

Block __49248660;

void code__49248660() {
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
            src0 = make__49360860();
            src1 = make__49360800();
            src2 = make__49360760();
            src3 = make__49360700();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            first = value2integer(make__49359880());
            last = value2integer(make__49359840());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53587540_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49248660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49248660 = block;
   block->owner = (Object)__49245040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49248660;

   return block;
};

Block __49244880;

void code__49244880() {
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
            src0 = make__49358960();
            src1 = make__49358800();
            src2 = make__49358780();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__49358680();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__49357920();
            src1 = make__49357860();
            src2 = make__49357700();
            src3 = make__49357680();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_53981040_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49244880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49244880 = block;
   block->owner = (Object)__49242460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49244880;

   return block;
};

Block __49231140;

void code__49231140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,address_48436480_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53103640_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,base_54635920_my__interpolator_58_8410_54372520_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53288180_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,next__data_54888520_my__interpolator_58_8410_54372520_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_53981040_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,change_55297280_my__interpolator_58_8410_54372520_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53587540_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,remaining_55589380_my__interpolator_58_8410_54372520_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_55763460_my__interpolator_58_8410_54372520_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,a_63071000_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49231140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49231140 = block;
   block->owner = (Object)__49315380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49231140;

   return block;
};

Block __49231020;

void code__49231020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48944060_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,base_53103640_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49397200_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,next__data_53288180_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49231020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49231020 = block;
   block->owner = (Object)__49314980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49231020;

   return block;
};

Value make__49364440() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49364380() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49363580() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49363540() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49360860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49360800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49360760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49360700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49359880() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49359840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49358960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49358800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49358780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49358680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49357920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49357860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49357700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49357680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_840_50155320;

SignalI base_53103640_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makebase_53103640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53103640_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_840_50155320;
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

SignalI next__data_53288180_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makenext__data_53288180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53288180_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_840_50155320;
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

SignalI address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeaddress_53288100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_840_50155320;
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

SignalI remaining_53587540_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeremaining_53587540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53587540_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_840_50155320;
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

SignalI change_53981040_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makechange_53981040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_53981040_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func0_58_840_50155320;
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

SystemI my__lut_49396840;

SystemI makemy__lut_49396840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49396840 = systemI;
   systemI->owner = (Object)func0_58_840_50155320;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_48371740;

   return systemI;
};

SystemI my__interpolator_55763060;

SystemI makemy__interpolator_55763060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_55763060 = systemI;
   systemI->owner = (Object)func0_58_840_50155320;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_54372520;

   return systemI;
};

Behavior __49249820;

Behavior make__49249820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49249820 = behavior;
   behavior->owner = (Object)func0_58_840_50155320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__49229160();

   return behavior;
}

Behavior __49248760;

Behavior make__49248760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49248760 = behavior;
   behavior->owner = (Object)func0_58_840_50155320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__49249600();

   return behavior;
}

Behavior __49245040;

Behavior make__49245040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49245040 = behavior;
   behavior->owner = (Object)func0_58_840_50155320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[z__value_62930440_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__49248660();

   return behavior;
}

Behavior __49242460;

Behavior make__49242460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49242460 = behavior;
   behavior->owner = (Object)func0_58_840_50155320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__49244880();

   return behavior;
}

Behavior __49315380;

Behavior make__49315380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49315380 = behavior;
   behavior->owner = (Object)func0_58_840_50155320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[address_53288100_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_53103640_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   base_53103640_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   base_53103640_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(base_53103640_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,base_53103640_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
base_53103640_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[base_53103640_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_53288180_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   next__data_53288180_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   next__data_53288180_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(next__data_53288180_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,next__data_53288180_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
next__data_53288180_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[next__data_53288180_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_53981040_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   change_53981040_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   change_53981040_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(change_53981040_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,change_53981040_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
change_53981040_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[change_53981040_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_53587540_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   remaining_53587540_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   remaining_53587540_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(remaining_53587540_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,remaining_53587540_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
remaining_53587540_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[remaining_53587540_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_55763460_my__interpolator_58_8410_54372520_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   interpolated__value_55763460_my__interpolator_58_8410_54372520_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   interpolated__value_55763460_my__interpolator_58_8410_54372520_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(interpolated__value_55763460_my__interpolator_58_8410_54372520_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,interpolated__value_55763460_my__interpolator_58_8410_54372520_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
interpolated__value_55763460_my__interpolator_58_8410_54372520_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[interpolated__value_55763460_my__interpolator_58_8410_54372520_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__49231140();

   return behavior;
}

Behavior __49314980;

Behavior make__49314980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49314980 = behavior;
   behavior->owner = (Object)func0_58_840_50155320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_48944060_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   base_48944060_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   base_48944060_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(base_48944060_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,base_48944060_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
base_48944060_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[base_48944060_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49397200_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   next__data_49397200_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   next__data_49397200_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(next__data_49397200_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,next__data_49397200_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
next__data_49397200_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[next__data_49397200_my__lut_58_8410_48371740_func0_58_840_50155320_func0_58_8400_62831980_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__49231020();

   return behavior;
}

Scope makefunc0_58_840_50155320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_50155320 = scope;
   scope->owner = (Object)func0_58_8400_62831980;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49396840();
   scope->systemIs[1] = makemy__interpolator_55763060();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53103640();
   scope->inners[1] = makenext__data_53288180();
   scope->inners[2] = makeaddress_53288100();
   scope->inners[3] = makeremaining_53587540();
   scope->inners[4] = makechange_53981040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49249820();
   scope->behaviors[1] = make__49248760();
   scope->behaviors[2] = make__49245040();
   scope->behaviors[3] = make__49242460();
   scope->behaviors[4] = make__49315380();
   scope->behaviors[5] = make__49314980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_62831980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_62831980 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_62930440();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_63071000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_50155320();

   return systemT;
}