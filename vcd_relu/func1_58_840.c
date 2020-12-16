#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_57727900;

SignalI z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makez__value_57762400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func1_58_840_57727900;
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

SignalI a_57905400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makea_57905400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_57905400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func1_58_840_57727900;
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

Block __51861600;

void code__51861600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
            first = value2integer(make__51928660());
            last = value2integer(make__51928600());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51861600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51861600 = block;
   block->owner = (Object)__51859800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51861600;

   return block;
};

Block __51859740;

void code__51859740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660,value2integer(make__51928380()),value2integer(make__51928300())));
      set_value_pos(pool_state);
   }
}

Block make__51859740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51859740 = block;
   block->owner = (Object)__51855840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51859740;

   return block;
};

Block __51855760;

void code__51855760() {
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
            src0 = make__51926020();
            src1 = make__51926000();
            src2 = make__51925980();
            src3 = make__51925960();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
            first = value2integer(make__51925700());
            last = value2integer(make__51925680());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_51661660_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51855760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51855760 = block;
   block->owner = (Object)__51879540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51855760;

   return block;
};

Block __51862380;

void code__51862380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,address_59939560_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51216200_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,base_61387540_my__interpolator_58_8400_61269300_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51443040_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,next__data_61655080_my__interpolator_58_8400_61269300_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_51661660_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,remaining_46203160_my__interpolator_58_8400_61269300_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_48330460_my__interpolator_58_8400_61269300_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,a_57905400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51862380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51862380 = block;
   block->owner = (Object)__51888680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51862380;

   return block;
};

Block __51862120;

void code__51862120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_60002280_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,base_51216200_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_60081420_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,next__data_51443040_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51862120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51862120 = block;
   block->owner = (Object)__51888440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51862120;

   return block;
};

Value make__51928660() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51928600() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51928380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51928300() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51926020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51926000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51925980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51925960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51925700() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51925680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_49577060;

SignalI base_51216200_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makebase_51216200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51216200_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func1_58_84_49577060;
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

SignalI next__data_51443040_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makenext__data_51443040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51443040_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func1_58_84_49577060;
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

SignalI address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeaddress_51442940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func1_58_84_49577060;
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

SignalI remaining_51661660_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeremaining_51661660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51661660_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func1_58_84_49577060;
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

SignalI change_51928000_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makechange_51928000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_51928000_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func1_58_84_49577060;
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

SystemI my__lut_60081280;

SystemI makemy__lut_60081280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_60081280 = systemI;
   systemI->owner = (Object)func1_58_84_49577060;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_59884160;

   return systemI;
};

SystemI my__interpolator_48329420;

SystemI makemy__interpolator_48329420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_48329420 = systemI;
   systemI->owner = (Object)func1_58_84_49577060;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_61269300;

   return systemI;
};

Behavior __51859800;

Behavior make__51859800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51859800 = behavior;
   behavior->owner = (Object)func1_58_84_49577060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__51861600();

   return behavior;
}

Behavior __51855840;

Behavior make__51855840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51855840 = behavior;
   behavior->owner = (Object)func1_58_84_49577060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__51859740();

   return behavior;
}

Behavior __51879540;

Behavior make__51879540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51879540 = behavior;
   behavior->owner = (Object)func1_58_84_49577060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[z__value_57762400_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__51855760();

   return behavior;
}

Behavior __51888680;

Behavior make__51888680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51888680 = behavior;
   behavior->owner = (Object)func1_58_84_49577060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[address_51442940_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_51216200_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   base_51216200_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   base_51216200_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(base_51216200_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,base_51216200_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
base_51216200_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[base_51216200_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_51443040_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   next__data_51443040_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   next__data_51443040_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(next__data_51443040_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,next__data_51443040_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
next__data_51443040_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[next__data_51443040_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,remaining_51661660_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   remaining_51661660_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   remaining_51661660_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(remaining_51661660_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,remaining_51661660_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
remaining_51661660_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[remaining_51661660_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_48330460_my__interpolator_58_8400_61269300_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   interpolated__value_48330460_my__interpolator_58_8400_61269300_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   interpolated__value_48330460_my__interpolator_58_8400_61269300_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(interpolated__value_48330460_my__interpolator_58_8400_61269300_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,interpolated__value_48330460_my__interpolator_58_8400_61269300_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
interpolated__value_48330460_my__interpolator_58_8400_61269300_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[interpolated__value_48330460_my__interpolator_58_8400_61269300_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__51862380();

   return behavior;
}

Behavior __51888440;

Behavior make__51888440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51888440 = behavior;
   behavior->owner = (Object)func1_58_84_49577060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_60002280_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   base_60002280_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   base_60002280_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(base_60002280_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,base_60002280_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
base_60002280_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[base_60002280_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_60081420_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   next__data_60081420_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   next__data_60081420_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(next__data_60081420_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,next__data_60081420_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
next__data_60081420_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[next__data_60081420_my__lut_58_8400_59884160_func1_58_84_49577060_func1_58_840_57727900_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__51862120();

   return behavior;
}

Scope makefunc1_58_84_49577060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_49577060 = scope;
   scope->owner = (Object)func1_58_840_57727900;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_60081280();
   scope->systemIs[1] = makemy__interpolator_48329420();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51216200();
   scope->inners[1] = makenext__data_51443040();
   scope->inners[2] = makeaddress_51442940();
   scope->inners[3] = makeremaining_51661660();
   scope->inners[4] = makechange_51928000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51859800();
   scope->behaviors[1] = make__51855840();
   scope->behaviors[2] = make__51879540();
   scope->behaviors[3] = make__51888680();
   scope->behaviors[4] = make__51888440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_57727900() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_57727900 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_57762400();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_57905400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_49577060();

   return systemT;
}