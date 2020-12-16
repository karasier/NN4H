#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_49560140;

SignalI z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makez__value_50102440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_841_49560140;
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

SignalI a_50579700_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makea_50579700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50579700_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_841_49560140;
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

Block __51715660;

void code__51715660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
            first = value2integer(make__51761800());
            last = value2integer(make__51761780());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51715660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51715660 = block;
   block->owner = (Object)__51715160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51715660;

   return block;
};

Block __51715100;

void code__51715100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660,value2integer(make__51761540()),value2integer(make__51761500())));
      set_value_pos(pool_state);
   }
}

Block make__51715100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51715100 = block;
   block->owner = (Object)__51714600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51715100;

   return block;
};

Block __51714480;

void code__51714480() {
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
            src0 = make__51760060();
            src1 = make__51760040();
            src2 = make__51760000();
            src3 = make__51759920();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
            first = value2integer(make__51759520());
            last = value2integer(make__51759500());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_50020460_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51714480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51714480 = block;
   block->owner = (Object)__51713160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51714480;

   return block;
};

Block __51715920;

void code__51715920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,address_51182060_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49604440_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,base_48033580_my__interpolator_58_842_44274720_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49751240_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,next__data_49478380_my__interpolator_58_842_44274720_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_50020460_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,remaining_49707560_my__interpolator_58_842_44274720_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49972080_my__interpolator_58_842_44274720_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,a_50579700_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51715920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51715920 = block;
   block->owner = (Object)__51748740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51715920;

   return block;
};

Block __51715860;

void code__51715860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51294660_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,base_49604440_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51394940_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value,next__data_49751240_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51715860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51715860 = block;
   block->owner = (Object)__51748320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51715860;

   return block;
};

Value make__51761800() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51761780() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51761540() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51761500() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51760060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51760040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51760000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51759920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51759520() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51759500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_48411820;

SignalI base_49604440_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makebase_49604440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49604440_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_84_48411820;
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

SignalI next__data_49751240_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makenext__data_49751240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49751240_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_84_48411820;
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

SignalI address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeaddress_49750600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_84_48411820;
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

SignalI remaining_50020460_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeremaining_50020460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_50020460_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_84_48411820;
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

SignalI change_50293500_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makechange_50293500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_50293500_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)func0_58_84_48411820;
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

SystemI my__lut_51394700;

SystemI makemy__lut_51394700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_51394700 = systemI;
   systemI->owner = (Object)func0_58_84_48411820;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_51160700;

   return systemI;
};

SystemI my__interpolator_49971380;

SystemI makemy__interpolator_49971380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49971380 = systemI;
   systemI->owner = (Object)func0_58_84_48411820;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_44274720;

   return systemI;
};

Behavior __51715160;

Behavior make__51715160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51715160 = behavior;
   behavior->owner = (Object)func0_58_84_48411820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__51715660();

   return behavior;
}

Behavior __51714600;

Behavior make__51714600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51714600 = behavior;
   behavior->owner = (Object)func0_58_84_48411820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__51715100();

   return behavior;
}

Behavior __51713160;

Behavior make__51713160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51713160 = behavior;
   behavior->owner = (Object)func0_58_84_48411820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[z__value_50102440_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__51714480();

   return behavior;
}

Behavior __51748740;

Behavior make__51748740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51748740 = behavior;
   behavior->owner = (Object)func0_58_84_48411820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[address_49750600_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_49604440_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   base_49604440_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   base_49604440_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(base_49604440_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,base_49604440_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
base_49604440_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[base_49604440_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_49751240_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   next__data_49751240_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   next__data_49751240_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(next__data_49751240_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,next__data_49751240_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
next__data_49751240_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[next__data_49751240_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,remaining_50020460_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   remaining_50020460_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   remaining_50020460_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(remaining_50020460_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,remaining_50020460_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
remaining_50020460_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[remaining_50020460_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49972080_my__interpolator_58_842_44274720_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   interpolated__value_49972080_my__interpolator_58_842_44274720_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   interpolated__value_49972080_my__interpolator_58_842_44274720_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(interpolated__value_49972080_my__interpolator_58_842_44274720_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,interpolated__value_49972080_my__interpolator_58_842_44274720_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
interpolated__value_49972080_my__interpolator_58_842_44274720_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[interpolated__value_49972080_my__interpolator_58_842_44274720_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__51715920();

   return behavior;
}

Behavior __51748320;

Behavior make__51748320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51748320 = behavior;
   behavior->owner = (Object)func0_58_84_48411820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51294660_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   base_51294660_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   base_51294660_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(base_51294660_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,base_51294660_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
base_51294660_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[base_51294660_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51394940_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   next__data_51394940_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any += 1;
   next__data_51394940_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any = realloc(next__data_51394940_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any,next__data_51394940_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any*sizeof(Object));
next__data_51394940_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->any[next__data_51394940_my__lut_58_842_51160700_func0_58_84_48411820_func0_58_841_49560140_layer0_58_84_51807440_layer0_58_840_60018760_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_any-1] = (Object)behavior;
   behavior->block = make__51715860();

   return behavior;
}

Scope makefunc0_58_84_48411820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_48411820 = scope;
   scope->owner = (Object)func0_58_841_49560140;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_51394700();
   scope->systemIs[1] = makemy__interpolator_49971380();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49604440();
   scope->inners[1] = makenext__data_49751240();
   scope->inners[2] = makeaddress_49750600();
   scope->inners[3] = makeremaining_50020460();
   scope->inners[4] = makechange_50293500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51715160();
   scope->behaviors[1] = make__51714600();
   scope->behaviors[2] = make__51713160();
   scope->behaviors[3] = make__51748740();
   scope->behaviors[4] = make__51748320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_49560140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_49560140 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_50102440();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50579700();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_48411820();

   return systemT;
}