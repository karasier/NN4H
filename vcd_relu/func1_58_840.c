#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_57595000;

SignalI z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makez__value_57675200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func1_58_840_57595000;
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

SignalI a_57864160_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makea_57864160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_57864160_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func1_58_840_57595000;
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

Block __50333700;

void code__50333700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            first = value2integer(make__50601740());
            last = value2integer(make__50601720());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50333700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50333700 = block;
   block->owner = (Object)__50332800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50333700;

   return block;
};

Block __50332720;

void code__50332720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140,value2integer(make__50601360()),value2integer(make__50601340())));
      set_value_pos(pool_state);
   }
}

Block make__50332720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50332720 = block;
   block->owner = (Object)__50331680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50332720;

   return block;
};

Block __50372480;

void code__50372480() {
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
            src0 = make__50599120();
            src1 = make__50598340();
            src2 = make__50598160();
            src3 = make__50597500();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            first = value2integer(make__50597180());
            last = value2integer(make__50597160());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_56630600_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50372480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50372480 = block;
   block->owner = (Object)__50369300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50372480;

   return block;
};

Block __50368440;

void code__50368440() {
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
            src0 = make__50595960();
            src1 = make__50595940();
            src2 = make__50595920();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__50595860();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__50595400();
            src1 = make__50595280();
            src2 = make__50595260();
            src3 = make__50595200();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_56691780_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50368440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50368440 = block;
   block->owner = (Object)__50367340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50368440;

   return block;
};

Block __50334680;

void code__50334680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,address_57939900_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56361280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,base_50484480_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56488060_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,next__data_50618180_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_56691780_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,change_50763200_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_56630600_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,remaining_54672160_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_54778760_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,a_57864160_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50334680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50334680 = block;
   block->owner = (Object)__50498520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50334680;

   return block;
};

Block __50334560;

void code__50334560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_46685280_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,base_56361280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48075440_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,next__data_56488060_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50334560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50334560 = block;
   block->owner = (Object)__50497880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50334560;

   return block;
};

Value make__50601740() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50601720() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50601360() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50601340() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50599120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50598340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50598160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50597500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50597180() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50597160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50595960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50595940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50595920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50595860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50595400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50595280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50595260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50595200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_84_56300400;

SignalI base_56361280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makebase_56361280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56361280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func1_58_84_56300400;
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

SignalI next__data_56488060_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makenext__data_56488060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_56488060_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func1_58_84_56300400;
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

SignalI address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeaddress_56487980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func1_58_84_56300400;
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

SignalI remaining_56630600_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeremaining_56630600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_56630600_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func1_58_84_56300400;
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

SignalI change_56691780_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makechange_56691780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_56691780_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func1_58_84_56300400;
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

SystemI my__lut_48075080;

SystemI makemy__lut_48075080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_48075080 = systemI;
   systemI->owner = (Object)func1_58_84_56300400;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_57909280;

   return systemI;
};

SystemI my__interpolator_54778580;

SystemI makemy__interpolator_54778580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_54778580 = systemI;
   systemI->owner = (Object)func1_58_84_56300400;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_50266160;

   return systemI;
};

Behavior __50332800;

Behavior make__50332800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50332800 = behavior;
   behavior->owner = (Object)func1_58_84_56300400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__50333700();

   return behavior;
}

Behavior __50331680;

Behavior make__50331680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50331680 = behavior;
   behavior->owner = (Object)func1_58_84_56300400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__50332720();

   return behavior;
}

Behavior __50369300;

Behavior make__50369300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50369300 = behavior;
   behavior->owner = (Object)func1_58_84_56300400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__50372480();

   return behavior;
}

Behavior __50367340;

Behavior make__50367340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50367340 = behavior;
   behavior->owner = (Object)func1_58_84_56300400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__50368440();

   return behavior;
}

Behavior __50498520;

Behavior make__50498520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50498520 = behavior;
   behavior->owner = (Object)func1_58_84_56300400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[address_56487980_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_56361280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   base_56361280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   base_56361280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(base_56361280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,base_56361280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
base_56361280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[base_56361280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_56488060_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   next__data_56488060_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   next__data_56488060_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(next__data_56488060_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,next__data_56488060_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
next__data_56488060_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[next__data_56488060_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_56691780_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   change_56691780_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   change_56691780_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(change_56691780_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,change_56691780_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
change_56691780_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[change_56691780_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_56630600_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   remaining_56630600_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   remaining_56630600_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(remaining_56630600_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,remaining_56630600_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
remaining_56630600_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[remaining_56630600_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_54778760_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   interpolated__value_54778760_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   interpolated__value_54778760_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(interpolated__value_54778760_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,interpolated__value_54778760_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
interpolated__value_54778760_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[interpolated__value_54778760_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__50334680();

   return behavior;
}

Behavior __50497880;

Behavior make__50497880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50497880 = behavior;
   behavior->owner = (Object)func1_58_84_56300400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_46685280_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   base_46685280_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   base_46685280_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(base_46685280_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,base_46685280_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
base_46685280_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[base_46685280_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_48075440_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   next__data_48075440_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   next__data_48075440_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(next__data_48075440_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,next__data_48075440_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
next__data_48075440_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[next__data_48075440_my__lut_58_8400_57909280_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__50334560();

   return behavior;
}

Scope makefunc1_58_84_56300400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_56300400 = scope;
   scope->owner = (Object)func1_58_840_57595000;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_48075080();
   scope->systemIs[1] = makemy__interpolator_54778580();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_56361280();
   scope->inners[1] = makenext__data_56488060();
   scope->inners[2] = makeaddress_56487980();
   scope->inners[3] = makeremaining_56630600();
   scope->inners[4] = makechange_56691780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50332800();
   scope->behaviors[1] = make__50331680();
   scope->behaviors[2] = make__50369300();
   scope->behaviors[3] = make__50367340();
   scope->behaviors[4] = make__50498520();
   scope->behaviors[5] = make__50497880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_57595000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_57595000 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_57675200();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_57864160();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_56300400();

   return systemT;
}