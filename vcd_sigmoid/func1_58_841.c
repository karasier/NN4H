#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_841_55238560;

SignalI z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makez__value_55423120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_841_55238560;
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

SignalI a_55587700_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makea_55587700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_55587700_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_841_55238560;
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

Block __64654640;

void code__64654640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            first = value2integer(make__64744080());
            last = value2integer(make__64744060());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__64654640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64654640 = block;
   block->owner = (Object)__64654240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64654640;

   return block;
};

Block __64654200;

void code__64654200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920,value2integer(make__64743900()),value2integer(make__64743860())));
      set_value_pos(pool_state);
   }
}

Block make__64654200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64654200 = block;
   block->owner = (Object)__64653880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64654200;

   return block;
};

Block __64653840;

void code__64653840() {
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
            src0 = make__64743160();
            src1 = make__64743140();
            src2 = make__64743100();
            src3 = make__64743080();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            first = value2integer(make__64742940());
            last = value2integer(make__64742900());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_49508640_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__64653840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64653840 = block;
   block->owner = (Object)__64653200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64653840;

   return block;
};

Block __64653140;

void code__64653140() {
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
            src0 = make__64742040();
            src1 = make__64742020();
            src2 = make__64742000();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__64741880();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__64741720();
            src1 = make__64741700();
            src2 = make__64741680();
            src3 = make__64741660();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_49720660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__64653140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64653140 = block;
   block->owner = (Object)__64652440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64653140;

   return block;
};

Block __64655140;

void code__64655140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,address_54703980_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49245660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,base_47660440_my__interpolator_58_8400_45567180_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49361940_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,next__data_47946780_my__interpolator_58_8400_45567180_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_49720660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,change_48333720_my__interpolator_58_8400_45567180_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_49508640_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,remaining_47852460_my__interpolator_58_8400_45567180_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_48959460_my__interpolator_58_8400_45567180_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,a_55587700_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__64655140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64655140 = block;
   block->owner = (Object)__64661040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64655140;

   return block;
};

Block __64655040;

void code__64655040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54781860_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,base_49245660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54926040_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,next__data_49361940_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__64655040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64655040 = block;
   block->owner = (Object)__64660860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64655040;

   return block;
};

Value make__64744080() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64744060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64743900() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64743860() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64743160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64743140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64743100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64743080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64742940() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64742900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64742040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64742020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64742000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64741880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64741720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64741700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64741680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64741660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_84_49060760;

SignalI base_49245660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makebase_49245660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49245660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_84_49060760;
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

SignalI next__data_49361940_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makenext__data_49361940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49361940_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_84_49060760;
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

SignalI address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeaddress_49361840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_84_49060760;
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

SignalI remaining_49508640_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeremaining_49508640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_49508640_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_84_49060760;
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

SignalI change_49720660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makechange_49720660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_49720660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_84_49060760;
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

SystemI my__lut_54925880;

SystemI makemy__lut_54925880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_54925880 = systemI;
   systemI->owner = (Object)func1_58_84_49060760;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_54632900;

   return systemI;
};

SystemI my__interpolator_48959220;

SystemI makemy__interpolator_48959220() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_48959220 = systemI;
   systemI->owner = (Object)func1_58_84_49060760;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_45567180;

   return systemI;
};

Behavior __64654240;

Behavior make__64654240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64654240 = behavior;
   behavior->owner = (Object)func1_58_84_49060760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__64654640();

   return behavior;
}

Behavior __64653880;

Behavior make__64653880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64653880 = behavior;
   behavior->owner = (Object)func1_58_84_49060760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__64654200();

   return behavior;
}

Behavior __64653200;

Behavior make__64653200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64653200 = behavior;
   behavior->owner = (Object)func1_58_84_49060760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__64653840();

   return behavior;
}

Behavior __64652440;

Behavior make__64652440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64652440 = behavior;
   behavior->owner = (Object)func1_58_84_49060760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__64653140();

   return behavior;
}

Behavior __64661040;

Behavior make__64661040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64661040 = behavior;
   behavior->owner = (Object)func1_58_84_49060760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[address_49361840_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_49245660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   base_49245660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   base_49245660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(base_49245660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,base_49245660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
base_49245660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[base_49245660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_49361940_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   next__data_49361940_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   next__data_49361940_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(next__data_49361940_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,next__data_49361940_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
next__data_49361940_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[next__data_49361940_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_49720660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   change_49720660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   change_49720660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(change_49720660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,change_49720660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
change_49720660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[change_49720660_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_49508640_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   remaining_49508640_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   remaining_49508640_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(remaining_49508640_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,remaining_49508640_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
remaining_49508640_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[remaining_49508640_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_48959460_my__interpolator_58_8400_45567180_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   interpolated__value_48959460_my__interpolator_58_8400_45567180_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   interpolated__value_48959460_my__interpolator_58_8400_45567180_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(interpolated__value_48959460_my__interpolator_58_8400_45567180_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,interpolated__value_48959460_my__interpolator_58_8400_45567180_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
interpolated__value_48959460_my__interpolator_58_8400_45567180_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[interpolated__value_48959460_my__interpolator_58_8400_45567180_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__64655140();

   return behavior;
}

Behavior __64660860;

Behavior make__64660860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64660860 = behavior;
   behavior->owner = (Object)func1_58_84_49060760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_54781860_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   base_54781860_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   base_54781860_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(base_54781860_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,base_54781860_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
base_54781860_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[base_54781860_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_54926040_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   next__data_54926040_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   next__data_54926040_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(next__data_54926040_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,next__data_54926040_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
next__data_54926040_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[next__data_54926040_my__lut_58_8400_54632900_func1_58_84_49060760_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__64655040();

   return behavior;
}

Scope makefunc1_58_84_49060760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_49060760 = scope;
   scope->owner = (Object)func1_58_841_55238560;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_54925880();
   scope->systemIs[1] = makemy__interpolator_48959220();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49245660();
   scope->inners[1] = makenext__data_49361940();
   scope->inners[2] = makeaddress_49361840();
   scope->inners[3] = makeremaining_49508640();
   scope->inners[4] = makechange_49720660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__64654240();
   scope->behaviors[1] = make__64653880();
   scope->behaviors[2] = make__64653200();
   scope->behaviors[3] = make__64652440();
   scope->behaviors[4] = make__64661040();
   scope->behaviors[5] = make__64660860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_841_55238560() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_841_55238560 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_55423120();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_55587700();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_49060760();

   return systemT;
}