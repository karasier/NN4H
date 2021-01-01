#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_56064100;

SignalI z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makez__value_44617720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func1_58_840_56064100;
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

SignalI a_46519980_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makea_46519980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_46519980_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func1_58_840_56064100;
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

Block __55540280;

void code__55540280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            first = value2integer(make__53242820());
            last = value2integer(make__53242800());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55540280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55540280 = block;
   block->owner = (Object)__55540020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55540280;

   return block;
};

Block __55539980;

void code__55539980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860,value2integer(make__53242660()),value2integer(make__53242640())));
      set_value_pos(pool_state);
   }
}

Block make__55539980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55539980 = block;
   block->owner = (Object)__55539720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55539980;

   return block;
};

Block __55539680;

void code__55539680() {
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
            src0 = make__53242180();
            src1 = make__53242160();
            src2 = make__53242140();
            src3 = make__53242120();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            first = value2integer(make__53242020());
            last = value2integer(make__53242000());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_54184040_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55539680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55539680 = block;
   block->owner = (Object)__55539220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55539680;

   return block;
};

Block __55539180;

void code__55539180() {
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
            src0 = make__53241560();
            src1 = make__53241540();
            src2 = make__53241520();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__53241460();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__53241300();
            src1 = make__53241280();
            src2 = make__53241260();
            src3 = make__53241240();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_54298860_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55539180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55539180 = block;
   block->owner = (Object)__55538720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55539180;

   return block;
};

Block __55540500;

void code__55540500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,address_55969340_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53857240_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,base_49569860_my__interpolator_58_8400_49412800_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53931700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,next__data_49744540_my__interpolator_58_8400_49412800_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_54298860_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,change_49893140_my__interpolator_58_8400_49412800_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_54184040_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,remaining_52939120_my__interpolator_58_8400_49412800_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_53072860_my__interpolator_58_8400_49412800_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,a_46519980_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55540500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55540500 = block;
   block->owner = (Object)__53247700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55540500;

   return block;
};

Block __55540440;

void code__55540440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56058080_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,base_53857240_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_45559640_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,next__data_53931700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55540440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55540440 = block;
   block->owner = (Object)__53247540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55540440;

   return block;
};

Value make__53242820() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53242800() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53242660() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53242640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53242180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53242160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53242140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53242120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53242020() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53242000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53241560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53241540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53241520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53241460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53241300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53241280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53241260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53241240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_84_53775680;

SignalI base_53857240_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makebase_53857240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53857240_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func1_58_84_53775680;
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

SignalI next__data_53931700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makenext__data_53931700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53931700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func1_58_84_53775680;
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

SignalI address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeaddress_53931620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func1_58_84_53775680;
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

SignalI remaining_54184040_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeremaining_54184040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_54184040_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func1_58_84_53775680;
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

SignalI change_54298860_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makechange_54298860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_54298860_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func1_58_84_53775680;
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

SystemI my__lut_45559280;

SystemI makemy__lut_45559280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_45559280 = systemI;
   systemI->owner = (Object)func1_58_84_53775680;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_55971700;

   return systemI;
};

SystemI my__interpolator_53072720;

SystemI makemy__interpolator_53072720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_53072720 = systemI;
   systemI->owner = (Object)func1_58_84_53775680;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_49412800;

   return systemI;
};

Behavior __55540020;

Behavior make__55540020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55540020 = behavior;
   behavior->owner = (Object)func1_58_84_53775680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55540280();

   return behavior;
}

Behavior __55539720;

Behavior make__55539720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55539720 = behavior;
   behavior->owner = (Object)func1_58_84_53775680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55539980();

   return behavior;
}

Behavior __55539220;

Behavior make__55539220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55539220 = behavior;
   behavior->owner = (Object)func1_58_84_53775680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55539680();

   return behavior;
}

Behavior __55538720;

Behavior make__55538720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55538720 = behavior;
   behavior->owner = (Object)func1_58_84_53775680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__55539180();

   return behavior;
}

Behavior __53247700;

Behavior make__53247700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53247700 = behavior;
   behavior->owner = (Object)func1_58_84_53775680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[address_53931620_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_53857240_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   base_53857240_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   base_53857240_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(base_53857240_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,base_53857240_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
base_53857240_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[base_53857240_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_53931700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   next__data_53931700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   next__data_53931700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(next__data_53931700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,next__data_53931700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
next__data_53931700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[next__data_53931700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_54298860_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   change_54298860_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   change_54298860_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(change_54298860_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,change_54298860_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
change_54298860_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[change_54298860_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_54184040_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   remaining_54184040_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   remaining_54184040_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(remaining_54184040_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,remaining_54184040_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
remaining_54184040_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[remaining_54184040_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_53072860_my__interpolator_58_8400_49412800_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   interpolated__value_53072860_my__interpolator_58_8400_49412800_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   interpolated__value_53072860_my__interpolator_58_8400_49412800_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(interpolated__value_53072860_my__interpolator_58_8400_49412800_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,interpolated__value_53072860_my__interpolator_58_8400_49412800_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
interpolated__value_53072860_my__interpolator_58_8400_49412800_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[interpolated__value_53072860_my__interpolator_58_8400_49412800_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55540500();

   return behavior;
}

Behavior __53247540;

Behavior make__53247540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53247540 = behavior;
   behavior->owner = (Object)func1_58_84_53775680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56058080_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   base_56058080_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   base_56058080_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(base_56058080_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,base_56058080_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
base_56058080_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[base_56058080_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_45559640_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   next__data_45559640_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   next__data_45559640_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(next__data_45559640_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,next__data_45559640_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
next__data_45559640_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[next__data_45559640_my__lut_58_8400_55971700_func1_58_84_53775680_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55540440();

   return behavior;
}

Scope makefunc1_58_84_53775680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_53775680 = scope;
   scope->owner = (Object)func1_58_840_56064100;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_45559280();
   scope->systemIs[1] = makemy__interpolator_53072720();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53857240();
   scope->inners[1] = makenext__data_53931700();
   scope->inners[2] = makeaddress_53931620();
   scope->inners[3] = makeremaining_54184040();
   scope->inners[4] = makechange_54298860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55540020();
   scope->behaviors[1] = make__55539720();
   scope->behaviors[2] = make__55539220();
   scope->behaviors[3] = make__55538720();
   scope->behaviors[4] = make__53247700();
   scope->behaviors[5] = make__53247540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_56064100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_56064100 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_44617720();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_46519980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_53775680();

   return systemT;
}