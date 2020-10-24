#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_56148540;

SignalI z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makez__value_56448980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_8400_56148540;
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

SignalI a_56607400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makea_56607400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_56607400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_8400_56148540;
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

Block __55538280;

void code__55538280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            first = value2integer(make__55664480());
            last = value2integer(make__55664460());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__55538280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55538280 = block;
   block->owner = (Object)__55537920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55538280;

   return block;
};

Block __55537880;

void code__55537880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140,value2integer(make__55664240()),value2integer(make__55664220())));
      set_value_pos(pool_state);
   }
}

Block make__55537880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55537880 = block;
   block->owner = (Object)__55537560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55537880;

   return block;
};

Block __55537520;

void code__55537520() {
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
            src0 = make__55663420();
            src1 = make__55663400();
            src2 = make__55663380();
            src3 = make__55663360();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            first = value2integer(make__55663180());
            last = value2integer(make__55663120());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_55867400_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__55537520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55537520 = block;
   block->owner = (Object)__55536940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55537520;

   return block;
};

Block __55536880;

void code__55536880() {
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
            src0 = make__55662600();
            src1 = make__55662540();
            src2 = make__55662500();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__55662380();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__55661960();
            src1 = make__55661860();
            src2 = make__55661680();
            src3 = make__55661620();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_56132520_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__55536880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55536880 = block;
   block->owner = (Object)__55535980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55536880;

   return block;
};

Block __55539000;

void code__55539000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,address_50775520_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_55629780_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,base_56600280_my__interpolator_58_8410_56400980_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55744040_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,next__data_56761340_my__interpolator_58_8410_56400980_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_56132520_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,change_57052800_my__interpolator_58_8410_56400980_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_55867400_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,remaining_57235960_my__interpolator_58_8410_56400980_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_57520460_my__interpolator_58_8410_56400980_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,a_56607400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__55539000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55539000 = block;
   block->owner = (Object)__55591700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55539000;

   return block;
};

Block __55538940;

void code__55538940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54710740_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,base_55629780_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54871720_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,next__data_55744040_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__55538940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55538940 = block;
   block->owner = (Object)__55591060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55538940;

   return block;
};

Value make__55664480() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55664460() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55664240() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55664220() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55663420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55663400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55663380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55663360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55663180() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55663120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55662600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55662540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55662500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55662380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55661960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55661860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55661680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55661620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_840_55521400;

SignalI base_55629780_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makebase_55629780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_55629780_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_840_55521400;
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

SignalI next__data_55744040_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makenext__data_55744040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_55744040_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_840_55521400;
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

SignalI address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeaddress_55743940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_840_55521400;
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

SignalI remaining_55867400_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeremaining_55867400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_55867400_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_840_55521400;
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

SignalI change_56132520_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makechange_56132520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_56132520_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)func0_58_840_55521400;
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

SystemI my__lut_54871580;

SystemI makemy__lut_54871580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_54871580 = systemI;
   systemI->owner = (Object)func0_58_840_55521400;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_50781920;

   return systemI;
};

SystemI my__interpolator_57520320;

SystemI makemy__interpolator_57520320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_57520320 = systemI;
   systemI->owner = (Object)func0_58_840_55521400;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_56400980;

   return systemI;
};

Behavior __55537920;

Behavior make__55537920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55537920 = behavior;
   behavior->owner = (Object)func0_58_840_55521400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__55538280();

   return behavior;
}

Behavior __55537560;

Behavior make__55537560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55537560 = behavior;
   behavior->owner = (Object)func0_58_840_55521400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__55537880();

   return behavior;
}

Behavior __55536940;

Behavior make__55536940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55536940 = behavior;
   behavior->owner = (Object)func0_58_840_55521400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__55537520();

   return behavior;
}

Behavior __55535980;

Behavior make__55535980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55535980 = behavior;
   behavior->owner = (Object)func0_58_840_55521400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__55536880();

   return behavior;
}

Behavior __55591700;

Behavior make__55591700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55591700 = behavior;
   behavior->owner = (Object)func0_58_840_55521400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[address_55743940_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_55629780_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   base_55629780_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   base_55629780_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(base_55629780_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,base_55629780_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
base_55629780_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[base_55629780_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_55744040_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   next__data_55744040_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   next__data_55744040_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(next__data_55744040_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,next__data_55744040_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
next__data_55744040_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[next__data_55744040_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_56132520_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   change_56132520_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   change_56132520_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(change_56132520_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,change_56132520_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
change_56132520_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[change_56132520_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_55867400_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   remaining_55867400_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   remaining_55867400_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(remaining_55867400_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,remaining_55867400_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
remaining_55867400_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[remaining_55867400_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_57520460_my__interpolator_58_8410_56400980_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   interpolated__value_57520460_my__interpolator_58_8410_56400980_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   interpolated__value_57520460_my__interpolator_58_8410_56400980_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(interpolated__value_57520460_my__interpolator_58_8410_56400980_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,interpolated__value_57520460_my__interpolator_58_8410_56400980_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
interpolated__value_57520460_my__interpolator_58_8410_56400980_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[interpolated__value_57520460_my__interpolator_58_8410_56400980_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__55539000();

   return behavior;
}

Behavior __55591060;

Behavior make__55591060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55591060 = behavior;
   behavior->owner = (Object)func0_58_840_55521400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_54710740_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   base_54710740_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   base_54710740_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(base_54710740_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,base_54710740_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
base_54710740_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[base_54710740_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_54871720_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   next__data_54871720_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   next__data_54871720_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(next__data_54871720_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,next__data_54871720_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
next__data_54871720_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[next__data_54871720_my__lut_58_8410_50781920_func0_58_840_55521400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__55538940();

   return behavior;
}

Scope makefunc0_58_840_55521400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_55521400 = scope;
   scope->owner = (Object)func0_58_8400_56148540;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_54871580();
   scope->systemIs[1] = makemy__interpolator_57520320();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_55629780();
   scope->inners[1] = makenext__data_55744040();
   scope->inners[2] = makeaddress_55743940();
   scope->inners[3] = makeremaining_55867400();
   scope->inners[4] = makechange_56132520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55537920();
   scope->behaviors[1] = make__55537560();
   scope->behaviors[2] = make__55536940();
   scope->behaviors[3] = make__55535980();
   scope->behaviors[4] = make__55591700();
   scope->behaviors[5] = make__55591060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_56148540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_56148540 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_56448980();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_56607400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_55521400();

   return systemT;
}