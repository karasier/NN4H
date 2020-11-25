#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_8400_62819800;

SignalI z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makez__value_63126780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func1_58_8400_62819800;
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

SignalI a_63371360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makea_63371360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_63371360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func1_58_8400_62819800;
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

Block __78720700;

void code__78720700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            first = value2integer(make__78757140());
            last = value2integer(make__78757120());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78720700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78720700 = block;
   block->owner = (Object)__78720380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78720700;

   return block;
};

Block __78720340;

void code__78720340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420,value2integer(make__78756980()),value2integer(make__78756960())));
      set_value_pos(pool_state);
   }
}

Block make__78720340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78720340 = block;
   block->owner = (Object)__78720080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78720340;

   return block;
};

Block __78720040;

void code__78720040() {
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
            src0 = make__78756500();
            src1 = make__78756480();
            src2 = make__78756460();
            src3 = make__78756440();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            first = value2integer(make__78756340());
            last = value2integer(make__78756320());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_55831760_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78720040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78720040 = block;
   block->owner = (Object)__78719560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78720040;

   return block;
};

Block __78719520;

void code__78719520() {
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
            src0 = make__78755860();
            src1 = make__78755840();
            src2 = make__78755820();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78755760();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__78755600();
            src1 = make__78755580();
            src2 = make__78755560();
            src3 = make__78755540();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_56358420_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78719520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78719520 = block;
   block->owner = (Object)__78719060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78719520;

   return block;
};

Block __78720960;

void code__78720960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,address_63389400_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54903960_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,base_65418140_my__interpolator_58_8430_65101460_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55508900_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,next__data_65787940_my__interpolator_58_8430_65101460_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_56358420_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,change_65879000_my__interpolator_58_8430_65101460_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_55831760_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,remaining_66026300_my__interpolator_58_8430_65101460_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_66355580_my__interpolator_58_8430_65101460_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,a_63371360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78720960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78720960 = block;
   block->owner = (Object)__78737820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78720960;

   return block;
};

Block __78720880;

void code__78720880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_63482520_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,base_54903960_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_63645060_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,next__data_55508900_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78720880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78720880 = block;
   block->owner = (Object)__78737660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78720880;

   return block;
};

Value make__78757140() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78757120() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78756980() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78756960() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78756500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78756480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78756460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78756440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78756340() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78756320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78755860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78755840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78755820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78755760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78755600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78755580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78755560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78755540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_840_54413360;

SignalI base_54903960_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makebase_54903960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54903960_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func1_58_840_54413360;
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

SignalI next__data_55508900_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makenext__data_55508900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_55508900_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func1_58_840_54413360;
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

SignalI address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeaddress_55508160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func1_58_840_54413360;
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

SignalI remaining_55831760_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeremaining_55831760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_55831760_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func1_58_840_54413360;
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

SignalI change_56358420_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makechange_56358420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_56358420_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)func1_58_840_54413360;
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

SystemI my__lut_63644880;

SystemI makemy__lut_63644880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_63644880 = systemI;
   systemI->owner = (Object)func1_58_840_54413360;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8430_63367980;

   return systemI;
};

SystemI my__interpolator_66355440;

SystemI makemy__interpolator_66355440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_66355440 = systemI;
   systemI->owner = (Object)func1_58_840_54413360;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8430_65101460;

   return systemI;
};

Behavior __78720380;

Behavior make__78720380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78720380 = behavior;
   behavior->owner = (Object)func1_58_840_54413360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78720700();

   return behavior;
}

Behavior __78720080;

Behavior make__78720080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78720080 = behavior;
   behavior->owner = (Object)func1_58_840_54413360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78720340();

   return behavior;
}

Behavior __78719560;

Behavior make__78719560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78719560 = behavior;
   behavior->owner = (Object)func1_58_840_54413360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78720040();

   return behavior;
}

Behavior __78719060;

Behavior make__78719060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78719060 = behavior;
   behavior->owner = (Object)func1_58_840_54413360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__78719520();

   return behavior;
}

Behavior __78737820;

Behavior make__78737820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78737820 = behavior;
   behavior->owner = (Object)func1_58_840_54413360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[address_55508160_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_54903960_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   base_54903960_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   base_54903960_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(base_54903960_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,base_54903960_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
base_54903960_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[base_54903960_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_55508900_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   next__data_55508900_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   next__data_55508900_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(next__data_55508900_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,next__data_55508900_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
next__data_55508900_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[next__data_55508900_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_56358420_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   change_56358420_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   change_56358420_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(change_56358420_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,change_56358420_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
change_56358420_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[change_56358420_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_55831760_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   remaining_55831760_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   remaining_55831760_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(remaining_55831760_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,remaining_55831760_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
remaining_55831760_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[remaining_55831760_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_66355580_my__interpolator_58_8430_65101460_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   interpolated__value_66355580_my__interpolator_58_8430_65101460_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   interpolated__value_66355580_my__interpolator_58_8430_65101460_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(interpolated__value_66355580_my__interpolator_58_8430_65101460_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,interpolated__value_66355580_my__interpolator_58_8430_65101460_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
interpolated__value_66355580_my__interpolator_58_8430_65101460_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[interpolated__value_66355580_my__interpolator_58_8430_65101460_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78720960();

   return behavior;
}

Behavior __78737660;

Behavior make__78737660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78737660 = behavior;
   behavior->owner = (Object)func1_58_840_54413360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_63482520_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   base_63482520_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   base_63482520_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(base_63482520_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,base_63482520_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
base_63482520_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[base_63482520_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_63645060_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   next__data_63645060_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   next__data_63645060_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(next__data_63645060_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,next__data_63645060_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
next__data_63645060_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[next__data_63645060_my__lut_58_8430_63367980_func1_58_840_54413360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78720880();

   return behavior;
}

Scope makefunc1_58_840_54413360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_840_54413360 = scope;
   scope->owner = (Object)func1_58_8400_62819800;
   scope->name = "func1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_63644880();
   scope->systemIs[1] = makemy__interpolator_66355440();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_54903960();
   scope->inners[1] = makenext__data_55508900();
   scope->inners[2] = makeaddress_55508160();
   scope->inners[3] = makeremaining_55831760();
   scope->inners[4] = makechange_56358420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78720380();
   scope->behaviors[1] = make__78720080();
   scope->behaviors[2] = make__78719560();
   scope->behaviors[3] = make__78719060();
   scope->behaviors[4] = make__78737820();
   scope->behaviors[5] = make__78737660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_8400_62819800() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_8400_62819800 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_63126780();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_63371360();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_840_54413360();

   return systemT;
}