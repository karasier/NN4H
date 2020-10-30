#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_53507580;

SignalI z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makez__value_53637120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func0_58_841_53507580;
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

SignalI a_53776240_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makea_53776240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_53776240_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func0_58_841_53507580;
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

Block __50279780;

void code__50279780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            first = value2integer(make__61245160());
            last = value2integer(make__61245140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__50279780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50279780 = block;
   block->owner = (Object)__50279520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50279780;

   return block;
};

Block __50279480;

void code__50279480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860,value2integer(make__61245000()),value2integer(make__61244980())));
      set_value_pos(pool_state);
   }
}

Block make__50279480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50279480 = block;
   block->owner = (Object)__50279220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50279480;

   return block;
};

Block __50279180;

void code__50279180() {
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
            src0 = make__61244520();
            src1 = make__61244500();
            src2 = make__61244480();
            src3 = make__61244460();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            first = value2integer(make__61244360());
            last = value2integer(make__61244340());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53041780_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__50279180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50279180 = block;
   block->owner = (Object)__50278720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50279180;

   return block;
};

Block __50278680;

void code__50278680() {
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
            src0 = make__61243900();
            src1 = make__61243880();
            src2 = make__61243860();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__61243800();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__61243640();
            src1 = make__61243620();
            src2 = make__61243600();
            src3 = make__61243580();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_53084840_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__50278680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50278680 = block;
   block->owner = (Object)__50278220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50278680;

   return block;
};

Block __50280000;

void code__50280000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,address_53928020_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49896600_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,base_55391800_my__interpolator_58_842_55236340_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48917460_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,next__data_55475880_my__interpolator_58_842_55236340_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_53084840_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,change_55550840_my__interpolator_58_842_55236340_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53041780_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,remaining_55691320_my__interpolator_58_842_55236340_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_55955580_my__interpolator_58_842_55236340_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,a_53776240_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__50280000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50280000 = block;
   block->owner = (Object)__61250040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50280000;

   return block;
};

Block __50279940;

void code__50279940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54184260_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,base_49896600_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54301200_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,next__data_48917460_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__50279940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50279940 = block;
   block->owner = (Object)__61249880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50279940;

   return block;
};

Value make__61245160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61245140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61245000() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61244980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61244520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61244500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61244480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61244460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61244360() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61244340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61243900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61243880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61243860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61243800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61243640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61243620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61243600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61243580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_84_49780600;

SignalI base_49896600_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makebase_49896600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49896600_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func0_58_84_49780600;
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

SignalI next__data_48917460_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makenext__data_48917460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48917460_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func0_58_84_49780600;
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

SignalI address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeaddress_48917380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func0_58_84_49780600;
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

SignalI remaining_53041780_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeremaining_53041780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53041780_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func0_58_84_49780600;
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

SignalI change_53084840_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makechange_53084840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_53084840_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)func0_58_84_49780600;
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

SystemI my__lut_54301040;

SystemI makemy__lut_54301040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_54301040 = systemI;
   systemI->owner = (Object)func0_58_84_49780600;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_53930120;

   return systemI;
};

SystemI my__interpolator_55955420;

SystemI makemy__interpolator_55955420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_55955420 = systemI;
   systemI->owner = (Object)func0_58_84_49780600;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_55236340;

   return systemI;
};

Behavior __50279520;

Behavior make__50279520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50279520 = behavior;
   behavior->owner = (Object)func0_58_84_49780600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__50279780();

   return behavior;
}

Behavior __50279220;

Behavior make__50279220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50279220 = behavior;
   behavior->owner = (Object)func0_58_84_49780600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__50279480();

   return behavior;
}

Behavior __50278720;

Behavior make__50278720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50278720 = behavior;
   behavior->owner = (Object)func0_58_84_49780600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__50279180();

   return behavior;
}

Behavior __50278220;

Behavior make__50278220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50278220 = behavior;
   behavior->owner = (Object)func0_58_84_49780600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__50278680();

   return behavior;
}

Behavior __61250040;

Behavior make__61250040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61250040 = behavior;
   behavior->owner = (Object)func0_58_84_49780600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[address_48917380_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_49896600_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   base_49896600_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   base_49896600_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(base_49896600_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,base_49896600_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
base_49896600_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[base_49896600_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_48917460_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   next__data_48917460_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   next__data_48917460_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(next__data_48917460_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,next__data_48917460_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
next__data_48917460_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[next__data_48917460_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_53084840_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   change_53084840_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   change_53084840_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(change_53084840_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,change_53084840_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
change_53084840_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[change_53084840_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_53041780_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   remaining_53041780_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   remaining_53041780_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(remaining_53041780_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,remaining_53041780_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
remaining_53041780_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[remaining_53041780_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_55955580_my__interpolator_58_842_55236340_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   interpolated__value_55955580_my__interpolator_58_842_55236340_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   interpolated__value_55955580_my__interpolator_58_842_55236340_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(interpolated__value_55955580_my__interpolator_58_842_55236340_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,interpolated__value_55955580_my__interpolator_58_842_55236340_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
interpolated__value_55955580_my__interpolator_58_842_55236340_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[interpolated__value_55955580_my__interpolator_58_842_55236340_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__50280000();

   return behavior;
}

Behavior __61249880;

Behavior make__61249880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61249880 = behavior;
   behavior->owner = (Object)func0_58_84_49780600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_54184260_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   base_54184260_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   base_54184260_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(base_54184260_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,base_54184260_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
base_54184260_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[base_54184260_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_54301200_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   next__data_54301200_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   next__data_54301200_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(next__data_54301200_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,next__data_54301200_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
next__data_54301200_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[next__data_54301200_my__lut_58_842_53930120_func0_58_84_49780600_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__50279940();

   return behavior;
}

Scope makefunc0_58_84_49780600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_49780600 = scope;
   scope->owner = (Object)func0_58_841_53507580;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_54301040();
   scope->systemIs[1] = makemy__interpolator_55955420();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49896600();
   scope->inners[1] = makenext__data_48917460();
   scope->inners[2] = makeaddress_48917380();
   scope->inners[3] = makeremaining_53041780();
   scope->inners[4] = makechange_53084840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50279520();
   scope->behaviors[1] = make__50279220();
   scope->behaviors[2] = make__50278720();
   scope->behaviors[3] = make__50278220();
   scope->behaviors[4] = make__61250040();
   scope->behaviors[5] = make__61249880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_53507580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_53507580 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53637120();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_53776240();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_49780600();

   return systemT;
}