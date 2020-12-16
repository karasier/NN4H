#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8450_194669260;

SignalI z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makez__value_194750480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_8450_194669260;
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

SignalI a_194816200_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makea_194816200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_194816200_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_8450_194669260;
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

Block __89557840;

void code__89557840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__108555420());
            last = value2integer(make__108555400());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__89557840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __89557840 = block;
   block->owner = (Object)__89557440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__89557840;

   return block;
};

Block __89557400;

void code__89557400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400,value2integer(make__108555260()),value2integer(make__108555240())));
      set_value_pos(pool_state);
   }
}

Block make__89557400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __89557400 = block;
   block->owner = (Object)__89557120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__89557400;

   return block;
};

Block __89557080;

void code__89557080() {
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
            src0 = make__108554520();
            src1 = make__108554500();
            src2 = make__108554480();
            src3 = make__108554460();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__108554360());
            last = value2integer(make__108554340());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_156647440_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__89557080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __89557080 = block;
   block->owner = (Object)__89556460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__89557080;

   return block;
};

Block __89556420;

void code__89556420() {
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
            src0 = make__108553780();
            src1 = make__108553760();
            src2 = make__108553700();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__108553620();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__108553360();
            src1 = make__108553340();
            src2 = make__108553320();
            src3 = make__108553280();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_157032380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__89556420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __89556420 = block;
   block->owner = (Object)__89555800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__89556420;

   return block;
};

Block __89558140;

void code__89558140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,address_189978120_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_156158840_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,base_191361460_my__interpolator_58_84290_191190380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_156474360_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,next__data_191690520_my__interpolator_58_84290_191190380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_157032380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,change_192027980_my__interpolator_58_84290_191190380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_156647440_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,remaining_192184700_my__interpolator_58_84290_191190380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_192284560_my__interpolator_58_84290_191190380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,a_194816200_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__89558140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __89558140 = block;
   block->owner = (Object)__104416880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__89558140;

   return block;
};

Block __89558040;

void code__89558040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_190151380_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,base_156158840_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_190382140_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,next__data_156474360_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__89558040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __89558040 = block;
   block->owner = (Object)__104416600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__89558040;

   return block;
};

Value make__108555420() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__108555400() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__108555260() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__108555240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__108554520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__108554500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__108554480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__108554460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__108554360() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__108554340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__108553780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__108553760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__108553700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__108553620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__108553360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__108553340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__108553320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__108553280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_845_156032340;

SignalI base_156158840_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makebase_156158840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_156158840_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_845_156032340;
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

SignalI next__data_156474360_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makenext__data_156474360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_156474360_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_845_156032340;
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

SignalI address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeaddress_156474260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_845_156032340;
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

SignalI remaining_156647440_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeremaining_156647440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_156647440_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_845_156032340;
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

SignalI change_157032380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makechange_157032380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_157032380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_845_156032340;
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

SystemI my__lut_190406500;

SystemI makemy__lut_190406500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_190406500 = systemI;
   systemI->owner = (Object)func0_58_845_156032340;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84290_189980260;

   return systemI;
};

SystemI my__interpolator_192284420;

SystemI makemy__interpolator_192284420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_192284420 = systemI;
   systemI->owner = (Object)func0_58_845_156032340;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84290_191190380;

   return systemI;
};

Behavior __89557440;

Behavior make__89557440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __89557440 = behavior;
   behavior->owner = (Object)func0_58_845_156032340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__89557840();

   return behavior;
}

Behavior __89557120;

Behavior make__89557120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __89557120 = behavior;
   behavior->owner = (Object)func0_58_845_156032340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__89557400();

   return behavior;
}

Behavior __89556460;

Behavior make__89556460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __89556460 = behavior;
   behavior->owner = (Object)func0_58_845_156032340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[z__value_194750480_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__89557080();

   return behavior;
}

Behavior __89555800;

Behavior make__89555800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __89555800 = behavior;
   behavior->owner = (Object)func0_58_845_156032340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__89556420();

   return behavior;
}

Behavior __104416880;

Behavior make__104416880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __104416880 = behavior;
   behavior->owner = (Object)func0_58_845_156032340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[address_156474260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_156158840_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   base_156158840_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   base_156158840_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(base_156158840_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,base_156158840_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_156158840_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[base_156158840_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_156474360_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   next__data_156474360_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_156474360_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(next__data_156474360_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,next__data_156474360_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_156474360_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[next__data_156474360_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_157032380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   change_157032380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   change_157032380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(change_157032380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,change_157032380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_157032380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[change_157032380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_156647440_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   remaining_156647440_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_156647440_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(remaining_156647440_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,remaining_156647440_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_156647440_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[remaining_156647440_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_192284560_my__interpolator_58_84290_191190380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   interpolated__value_192284560_my__interpolator_58_84290_191190380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_192284560_my__interpolator_58_84290_191190380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_192284560_my__interpolator_58_84290_191190380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,interpolated__value_192284560_my__interpolator_58_84290_191190380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_192284560_my__interpolator_58_84290_191190380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[interpolated__value_192284560_my__interpolator_58_84290_191190380_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__89558140();

   return behavior;
}

Behavior __104416600;

Behavior make__104416600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __104416600 = behavior;
   behavior->owner = (Object)func0_58_845_156032340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_190151380_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   base_190151380_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   base_190151380_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(base_190151380_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,base_190151380_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_190151380_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[base_190151380_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_190382140_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   next__data_190382140_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_190382140_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(next__data_190382140_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,next__data_190382140_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_190382140_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[next__data_190382140_my__lut_58_84290_189980260_func0_58_845_156032340_func0_58_8450_194669260_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__89558040();

   return behavior;
}

Scope makefunc0_58_845_156032340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_845_156032340 = scope;
   scope->owner = (Object)func0_58_8450_194669260;
   scope->name = "func0:T5";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_190406500();
   scope->systemIs[1] = makemy__interpolator_192284420();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_156158840();
   scope->inners[1] = makenext__data_156474360();
   scope->inners[2] = makeaddress_156474260();
   scope->inners[3] = makeremaining_156647440();
   scope->inners[4] = makechange_157032380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__89557440();
   scope->behaviors[1] = make__89557120();
   scope->behaviors[2] = make__89556460();
   scope->behaviors[3] = make__89555800();
   scope->behaviors[4] = make__104416880();
   scope->behaviors[5] = make__104416600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8450_194669260() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8450_194669260 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T50";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_194750480();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_194816200();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_845_156032340();

   return systemT;
}