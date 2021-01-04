#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_61728440;

SignalI clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeclk_61750820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_840_61728440;
   signalI->name = "clk";
   signalI->type = get_type_bit();
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

SignalI rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makerst_61750800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_840_61728440;
   signalI->name = "rst";
   signalI->type = get_type_bit();
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

SignalI req_61750780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makereq_61750780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_61750780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_840_61728440;
   signalI->name = "req";
   signalI->type = get_type_bit();
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

SignalI _58110_62084160_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58110_62084160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58110_62084160_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_840_61728440;
   signalI->name = ":110";
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

SignalI _58111_62164200_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58111_62164200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58111_62164200_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_840_61728440;
   signalI->name = ":111";
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

SignalI ack__layer_62164160_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeack__layer_62164160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_62164160_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_840_61728440;
   signalI->name = "ack_layer";
   signalI->type = get_type_bit();
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

SignalI _58112_62164000_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58112_62164000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58112_62164000_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_840_61728440;
   signalI->name = ":112";
   signalI->type = get_type_vector(get_type_bit(),1);
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

SignalI _5876_62309200_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_5876_62309200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5876_62309200_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_840_61728440;
   signalI->name = ":76";
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

Block __61042160;

Block __61041900;

void code__61041900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59738760(),ack_59348300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59738700(),ack__add_59348260_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__61041900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61041900 = block;
   block->owner = (Object)__61042160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61041900;

   return block;
};

void code__61042160() {
   {
      Value cond = rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61041900();
   }
      }
   }
}

Block make__61042160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61042160 = block;
   block->owner = (Object)__61040980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61042160;

   return block;
};

Block __61040820;

Block __61040200;

Block __61040040;

void code__61040040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_59836160_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,value__z0_60050600_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59738520(),flag__z0_60150540_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__61040040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61040040 = block;
   block->owner = (Object)__61040200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61040040;

   return block;
};

void code__61040200() {
 code__61040040();
}

Block make__61040200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61040200 = block;
   block->owner = (Object)__61040820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61040200;

   return block;
};

Block __61040580;

void code__61040580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59738460(),flag__z0_60150540_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__61040580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61040580 = block;
   block->owner = (Object)__61040820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61040580;

   return block;
};

void code__61040820() {
   {
      Value cond = ack__add_59348260_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61040200();
   }
   else {
  code__61040580();
   }
      }
   }
}

Block make__61040820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61040820 = block;
   block->owner = (Object)__61474280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61040820;

   return block;
};

Block __61474160;

Block __61473940;

void code__61473940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59738360(),ack__a0_60150520_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__61473940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61473940 = block;
   block->owner = (Object)__61474160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61473940;

   return block;
};

Block __61473460;

Block __61473240;

void code__61473240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_60150560_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_5876_62309200_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59738140(),ack__a0_60150520_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__61473240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61473240 = block;
   block->owner = (Object)__61473460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61473240;

   return block;
};

void code__61473460() {
 code__61473240();
}

Block make__61473460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61473460 = block;
   block->owner = (Object)__61474160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61473460;

   return block;
};

void code__61474160() {
   {
      Value cond = rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61473940();
   }
   else if (value2integer(flag__z0_60150540_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value)) {
  code__61473460();
   }
      }
   }
}

Block make__61474160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61474160 = block;
   block->owner = (Object)__61728760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61474160;

   return block;
};

Block __59370780;

void code__59370780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_61750780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_59348280_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_59348320_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59370780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59370780 = block;
   block->owner = (Object)__59370420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59370780;

   return block;
};

Block __59371020;

void code__59371020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,clk_60169080_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_59348300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,ack_60169060_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,rst_60169040_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_60050600_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_60150520_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,ack__layer_62164160_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59371020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59371020 = block;
   block->owner = (Object)__59543900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59371020;

   return block;
};

Block __59370960;

void code__59370960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_60169000_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,ack__mac_59348280_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58317_59769120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_60238200_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,value__a0_60150560_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59370960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59370960 = block;
   block->owner = (Object)__59543740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59370960;

   return block;
};

Block __59218860;

void code__59218860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54371640_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            idx = value2integer(abus__r_52950200_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_52950360_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59218860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59218860 = block;
   block->owner = (Object)__59629500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59218860;

   return block;
};

Block __59542440;

void code__59542440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_52950360_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58276_59562960_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59542440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59542440 = block;
   block->owner = (Object)__59542240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59542440;

   return block;
};

Block __59542200;

void code__59542200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58276_59562960_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,dbus__r_52950360_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59542200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59542200 = block;
   block->owner = (Object)__59542040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59542200;

   return block;
};

Block __59541740;

void code__59541740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_52755960_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59541740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59541740 = block;
   block->owner = (Object)__59541580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59541740;

   return block;
};

Block __59541540;

void code__59541540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,trig__r_52755960_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59541540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59541540 = block;
   block->owner = (Object)__59541380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59541540;

   return block;
};

Block __59541060;

void code__59541060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52950200_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59541060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59541060 = block;
   block->owner = (Object)__59540800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59541060;

   return block;
};

Block __59540720;

void code__59540720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,abus__r_52950200_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59540720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59540720 = block;
   block->owner = (Object)__59540360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59540720;

   return block;
};

Block __59563640;

void code__59563640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_59760200_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58284_59710120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59563640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59563640 = block;
   block->owner = (Object)__59563480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59563640;

   return block;
};

Block __59563440;

void code__59563440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_59710120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,reg__0_59760200_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59563440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59563440 = block;
   block->owner = (Object)__59563220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59563440;

   return block;
};

Block __60259320;

Block __60259160;

Block __60258840;

void code__60258840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59707140(),_58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59707080(),_58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__60258840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60258840 = block;
   block->owner = (Object)__60259160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60258840;

   return block;
};

void code__60259160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59707220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60258840();
   }
      }
   }
}

Block make__60259160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60259160 = block;
   block->owner = (Object)__60259320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60259160;

   return block;
};

Block __60258220;

Block __60257900;

void code__60257900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59706920(),_58112_62164000_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__60257900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60257900 = block;
   block->owner = (Object)__60258220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60257900;

   return block;
};

void code__60258220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59707000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60257900();
   }
      }
   }
}

Block make__60258220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60258220 = block;
   block->owner = (Object)__60259320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60258220;

   return block;
};

Block __60257040;

void code__60257040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59706680(),rvok_60259480_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59706620(),lvok0_60259500_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59706560(),wok0_60259460_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__60257040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60257040 = block;
   block->owner = (Object)__60259320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60257040;

   return block;
};

Block __60439400;

Block __60439000;

Block __60438840;

Block __60438520;

Block __60438060;

void code__60438060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58110_62084160_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,rv_60259520_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__60438060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60438060 = block;
   block->owner = (Object)__60438520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60438060;

   return block;
};

Block __60862100;

void code__60862100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58111_62164200_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,rv_60259520_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__60862100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60862100 = block;
   block->owner = (Object)__60438520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60862100;

   return block;
};

void code__60438520() {
{
      Value value = _58112_62164000_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__59706080())) {
    code__60438060();
         }
         else if (value2integer(value) == value2integer(make__59705880())) {
    code__60862100();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59705640(),rvok_60259480_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58112_62164000_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                  src1 = make__59705480();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59705440();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _58112_62164000_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__59705120();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__59705060();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58112_62164000_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__60438520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60438520 = block;
   block->owner = (Object)__60438840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60438520;

   return block;
};

void code__60438840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59706220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60438520();
   }
      }
   }
}

Block make__60438840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60438840 = block;
   block->owner = (Object)__60439000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60438840;

   return block;
};

void code__60439000() {
 code__60438840();
}

Block make__60439000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60439000 = block;
   block->owner = (Object)__60439400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60439000;

   return block;
};

Block __61055320;

Block __61055160;

Block __61095760;

Block __61093960;

Block __61093800;

void code__61093800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59704680(),_58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58276_59562960_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,lv0_60064500_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59704540(),lvok0_60259500_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__61093800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61093800 = block;
   block->owner = (Object)__61093960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61093800;

   return block;
};

void code__61093960() {
 code__61093800();
}

Block make__61093960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61093960 = block;
   block->owner = (Object)__61095760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61093960;

   return block;
};

Block __61095600;

void code__61095600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                  src1 = make__59704440();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59704400();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__59704160();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__59704100();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59703960(),_58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__61095600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61095600 = block;
   block->owner = (Object)__61095760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61095600;

   return block;
};

void code__61095760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59704760();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61093960();
   }
   else {
  code__61095600();
   }
      }
   }
}

Block make__61095760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61095760 = block;
   block->owner = (Object)__61055160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61095760;

   return block;
};

void code__61055160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59704860();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61095760();
   }
      }
   }
}

Block make__61055160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61055160 = block;
   block->owner = (Object)__61055320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61055160;

   return block;
};

void code__61055320() {
 code__61055160();
}

Block make__61055320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61055320 = block;
   block->owner = (Object)__60439400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61055320;

   return block;
};

Block __61476220;

Block __61475740;

Block __61475580;

void code__61475580() {
}

Block make__61475580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61475580 = block;
   block->owner = (Object)__61475740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61475580;

   return block;
};

Block __62163200;

void code__62163200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_60166100_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58284_59710120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59743700(),wok0_60259460_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__62163200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62163200 = block;
   block->owner = (Object)__61475740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62163200;

   return block;
};

void code__61475740() {
 code__61475580();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_60166100_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0,src1,dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = lv0_60064500_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_60259520_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59743880();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_60166100_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
 code__62163200();
}

Block make__61475740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61475740 = block;
   block->owner = (Object)__61476220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61475740;

   return block;
};

void code__61476220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59703560(),ack_59348300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59703500(),run_60259440_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
 code__61475740();
}

Block make__61476220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61476220 = block;
   block->owner = (Object)__60439400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61476220;

   return block;
};

Block __62439600;

void code__62439600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59743600(),wok0_60259460_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59743540(),lvok0_60259500_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59743480(),rvok_60259480_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__62439600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62439600 = block;
   block->owner = (Object)__60439400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62439600;

   return block;
};

void code__60439400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59706400(),run_60259440_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_60259480_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60439000();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_60259500_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61055320();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0,src1,dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = lvok0_60259500_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               src1 = rvok_60259480_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_60259460_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61476220();
   }
      }
   }
   {
      Value cond = wok0_60259460_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62439600();
   }
      }
   }
}

Block make__60439400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60439400 = block;
   block->owner = (Object)__60259320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60439400;

   return block;
};

Block __60256320;

void code__60256320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59743420(),av0_60166100_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__60256320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60256320 = block;
   block->owner = (Object)__60259320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60256320;

   return block;
};

void code__60259320() {
 code__60259160();
 code__60258220();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59706860(),ack_59348300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59706800(),run_60259440_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_60259440_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60257040();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_59348320_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         src1 = run_60259440_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60439400();
   }
   else {
  code__60256320();
   }
      }
   }
}

Block make__60259320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60259320 = block;
   block->owner = (Object)__62463120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60259320;

   return block;
};

Block __43772360;

void code__43772360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_62736360_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            idx = value2integer(abus__r_62538400_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_62538480_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__43772360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43772360 = block;
   block->owner = (Object)__50102460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43772360;

   return block;
};

Block __59560880;

void code__59560880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_62538480_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58316_59769140_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59560880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59560880 = block;
   block->owner = (Object)__59560600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59560880;

   return block;
};

Block __59560540;

void code__59560540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_59769140_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,dbus__r_62538480_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59560540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59560540 = block;
   block->owner = (Object)__59560240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59560540;

   return block;
};

Block __59559860;

void code__59559860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_62461420_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59559860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59559860 = block;
   block->owner = (Object)__59559700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59559860;

   return block;
};

Block __59559660;

void code__59559660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,trig__r_62461420_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59559660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59559660 = block;
   block->owner = (Object)__59559500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59559660;

   return block;
};

Block __59559200;

void code__59559200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_62538400_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58315_59769020_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59559200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59559200 = block;
   block->owner = (Object)__59559040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59559200;

   return block;
};

Block __59559000;

void code__59559000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_59769020_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,abus__r_62538400_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59559000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59559000 = block;
   block->owner = (Object)__59558800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59559000;

   return block;
};

Block __59557220;

void code__59557220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50447760_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58329_59836160_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59557220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59557220 = block;
   block->owner = (Object)__59557060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59557220;

   return block;
};

Block __59557020;

void code__59557020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_59836160_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,reg__0_50447760_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59557020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59557020 = block;
   block->owner = (Object)__59556840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59557020;

   return block;
};

Block __53106060;

Block __53105720;

void code__53105720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59741640(),_58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53105720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53105720 = block;
   block->owner = (Object)__53106060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53105720;

   return block;
};

Block __53102940;

Block __53102540;

void code__53102540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_59710120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,lv0_52750760_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59741220(),lvok0_53106240_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53102540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53102540 = block;
   block->owner = (Object)__53102940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53102540;

   return block;
};

Block __53687600;

Block __53686800;

Block __53684300;

void code__53684300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_59769140_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,rv0_53106260_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59740880(),_58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59740820(),rvok0_53106220_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53684300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53684300 = block;
   block->owner = (Object)__53686800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53684300;

   return block;
};

Block __53686460;

void code__53686460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59740760(),_58315_59769020_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59740700(),_58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53686460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53686460 = block;
   block->owner = (Object)__53686800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53686460;

   return block;
};

void code__53686800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59741040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53684300();
   }
   else {
  code__53686460();
   }
      }
   }
}

Block make__53686800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53686800 = block;
   block->owner = (Object)__53687600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53686800;

   return block;
};

void code__53687600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58317_59769120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59741140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53686800();
   }
      }
   }
}

Block make__53687600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53687600 = block;
   block->owner = (Object)__53102940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53687600;

   return block;
};

Block __54241720;

Block __54239960;

void code__54239960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_52750760_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      src1 = rv0_53106260_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58329_59836160_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54239960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54239960 = block;
   block->owner = (Object)__54241720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54239960;

   return block;
};

void code__54241720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59740540(),run_53106180_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59740480(),ack__add_59348260_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
 code__54239960();
}

Block make__54241720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54241720 = block;
   block->owner = (Object)__53102940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54241720;

   return block;
};

void code__53102940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59741360(),run_53106180_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
 code__53102540();
 code__53687600();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53106240_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         src1 = rvok0_53106220_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54241720();
   }
      }
   }
}

Block make__53102940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53102940 = block;
   block->owner = (Object)__53106060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53102940;

   return block;
};

Block __53103920;

void code__53103920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59740220(),lvok0_53106240_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59740120(),rvok0_53106220_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53103920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53103920 = block;
   block->owner = (Object)__53106060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53103920;

   return block;
};

void code__53106060() {
 code__53105720();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59741580(),ack__add_59348260_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59741520(),run_53106180_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_59348280_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         src1 = run_53106180_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53102940();
   }
   else {
  code__53103920();
   }
      }
   }
}

Block make__53106060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53106060 = block;
   block->owner = (Object)__59348460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53106060;

   return block;
};

Value make__59708880() {
   static unsigned long long data[] = { 20ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59708860() {
   static unsigned long long data[] = { 13ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59743260() {
   static unsigned long long data[] = { 4294967294ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59707220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59707140() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59707080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59707000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59706920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59706860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59706800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59706680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59706620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59706560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59706400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59706220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59706080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59705880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59705640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59705480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59705440() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59705120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59705060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59704860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59704760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59704680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59704540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59704440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59704400() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59704160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59704100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59703960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59703560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59703500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59743880() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59743700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59743600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59743540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59743480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59743420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59741640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59741580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59741520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59741360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59741220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59741140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59741040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59740880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59740820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59740760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59740700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59740540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59740480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59740220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59740120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59738760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59738700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59738520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59738460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59738360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59738140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_52734780;

SignalI req__mac_59348320_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makereq__mac_59348320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_59348320_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = "req_mac";
   signalI->type = get_type_bit();
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

SignalI ack_59348300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeack_59348300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_59348300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = "ack";
   signalI->type = get_type_bit();
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

SignalI ack__mac_59348280_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeack__mac_59348280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_59348280_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = "ack_mac";
   signalI->type = get_type_bit();
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

SignalI ack__add_59348260_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeack__add_59348260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_59348260_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = "ack_add";
   signalI->type = get_type_bit();
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

SignalI _58276_59562960_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58276_59562960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58276_59562960_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = ":276";
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

SignalI _58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58274_59562940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = ":274";
   signalI->type = get_type_bit();
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

SignalI _58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58275_59562860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = ":275";
   signalI->type = get_type_vector(get_type_bit(),1);
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

SignalI _58284_59710120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58284_59710120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58284_59710120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = ":284";
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

SignalI _58316_59769140_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58316_59769140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58316_59769140_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = ":316";
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

SignalI _58317_59769120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58317_59769120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58317_59769120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = ":317";
   signalI->type = get_type_bit();
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

SignalI _58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58314_59769100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = ":314";
   signalI->type = get_type_bit();
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

SignalI _58315_59769020_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58315_59769020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_59769020_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = ":315";
   signalI->type = get_type_vector(get_type_bit(),1);
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

SignalI _58329_59836160_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58329_59836160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58329_59836160_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = ":329";
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

SignalI value__z0_60050600_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makevalue__z0_60050600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_60050600_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = "value_z0";
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

SignalI value__a0_60150560_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makevalue__a0_60150560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_60150560_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = "value_a0";
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

SignalI flag__z0_60150540_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeflag__z0_60150540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_60150540_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = "flag_z0";
   signalI->type = get_type_bit();
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

SignalI ack__a0_60150520_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeack__a0_60150520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_60150520_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer1_58_84_52734780;
   signalI->name = "ack_a0";
   signalI->type = get_type_bit();
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

SystemI counter_60168860;

SystemI makecounter_60168860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_60168860 = systemI;
   systemI->owner = (Object)layer1_58_84_52734780;
   systemI->name = "counter";
   systemI->system = counter_58_8400_60146480;

   return systemI;
};

SystemI func0_60238060;

SystemI makefunc0_60238060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_60238060 = systemI;
   systemI->owner = (Object)layer1_58_84_52734780;
   systemI->name = "func0";
   systemI->system = func0_58_8400_59904460;

   return systemI;
};

Scope channel__w0_58267_52734300;

SignalI trig__r_52755960_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI maketrig__r_52755960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_52755960_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__w0_58267_52734300;
   signalI->name = "trig_r";
   signalI->type = get_type_bit();
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

SignalI dbus__r_52950360_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makedbus__r_52950360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_52950360_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__w0_58267_52734300;
   signalI->name = "dbus_r";
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

SignalI abus__r_52950200_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_52950200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52950200_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__w0_58267_52734300;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
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

SignalI mem_54371640_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makemem_54371640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54371640_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__w0_58267_52734300;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__59708880();
         src1 = make__59708860();
         concat_value(2,0,dst,src0,src1);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
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

Scope raddr_58268_52733420;

Scope makeraddr_58268_52733420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58268_52733420 = scope;
   scope->owner = (Object)channel__w0_58267_52734300;
   scope->name = "raddr:268";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_58273_52732900;

Scope makerinc_58273_52732900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_52732900 = scope;
   scope->owner = (Object)channel__w0_58267_52734300;
   scope->name = "rinc:273";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58277_52732220;

Scope makerdec_58277_52732220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58277_52732220 = scope;
   scope->owner = (Object)channel__w0_58267_52734300;
   scope->name = "rdec:277";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59629500;

Behavior make__59629500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59629500 = behavior;
   behavior->owner = (Object)channel__w0_58267_52734300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg += 1;
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg = realloc(clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg*sizeof(Object));
clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg[clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg-1] = (Object)behavior;
   behavior->block = make__59218860();

   return behavior;
}

Behavior __59542240;

Behavior make__59542240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59542240 = behavior;
   behavior->owner = (Object)channel__w0_58267_52734300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_52950360_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   dbus__r_52950360_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   dbus__r_52950360_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(dbus__r_52950360_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,dbus__r_52950360_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
dbus__r_52950360_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[dbus__r_52950360_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59542440();

   return behavior;
}

Behavior __59542040;

Behavior make__59542040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59542040 = behavior;
   behavior->owner = (Object)channel__w0_58267_52734300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58276_59562960_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58276_59562960_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58276_59562960_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58276_59562960_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58276_59562960_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58276_59562960_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58276_59562960_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59542200();

   return behavior;
}

Behavior __59541580;

Behavior make__59541580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59541580 = behavior;
   behavior->owner = (Object)channel__w0_58267_52734300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_52755960_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   trig__r_52755960_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   trig__r_52755960_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(trig__r_52755960_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,trig__r_52755960_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
trig__r_52755960_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[trig__r_52755960_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59541740();

   return behavior;
}

Behavior __59541380;

Behavior make__59541380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59541380 = behavior;
   behavior->owner = (Object)channel__w0_58267_52734300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58274_59562940_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59541540();

   return behavior;
}

Behavior __59540800;

Behavior make__59540800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59540800 = behavior;
   behavior->owner = (Object)channel__w0_58267_52734300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52950200_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   abus__r_52950200_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   abus__r_52950200_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(abus__r_52950200_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,abus__r_52950200_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
abus__r_52950200_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[abus__r_52950200_channel__w0_58267_52734300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59541060();

   return behavior;
}

Behavior __59540360;

Behavior make__59540360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59540360 = behavior;
   behavior->owner = (Object)channel__w0_58267_52734300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58275_59562860_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59540720();

   return behavior;
}

Scope makechannel__w0_58267_52734300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58267_52734300 = scope;
   scope->owner = (Object)layer1_58_84_52734780;
   scope->name = "channel_w0:267";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_52755960();
   scope->inners[1] = makedbus__r_52950360();
   scope->inners[2] = makeabus__r_52950200();
   scope->inners[3] = makemem_54371640();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58268_52733420();
   scope->scopes[1] = makerinc_58273_52732900();
   scope->scopes[2] = makerdec_58277_52732220();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59629500();
   scope->behaviors[1] = make__59542240();
   scope->behaviors[2] = make__59542040();
   scope->behaviors[3] = make__59541580();
   scope->behaviors[4] = make__59541380();
   scope->behaviors[5] = make__59540800();
   scope->behaviors[6] = make__59540360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58282_59629380;

SignalI reg__0_59760200_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makereg__0_59760200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_59760200_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__accum_58282_59629380;
   signalI->name = "reg_0";
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

Scope anum_58283_59629080;

Scope makeanum_58283_59629080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58283_59629080 = scope;
   scope->owner = (Object)channel__accum_58282_59629380;
   scope->name = "anum:283";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58285_59628660;

Scope makeraddr_58285_59628660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58285_59628660 = scope;
   scope->owner = (Object)channel__accum_58282_59629380;
   scope->name = "raddr:285";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope waddr_58288_59628240;

Scope makewaddr_58288_59628240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58288_59628240 = scope;
   scope->owner = (Object)channel__accum_58282_59629380;
   scope->name = "waddr:288";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_58291_59627820;

SignalI abus__r_59627440_rinc_58291_59627820_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_59627440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59627440_rinc_58291_59627820_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)rinc_58291_59627820;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
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

Scope makerinc_58291_59627820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58291_59627820 = scope;
   scope->owner = (Object)channel__accum_58282_59629380;
   scope->name = "rinc:291";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59627440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58295_59627320;

SignalI abus__w_59626940_winc_58295_59627320_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__w_59626940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59626940_winc_58295_59627320_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)winc_58295_59627320;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
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

Scope makewinc_58295_59627320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58295_59627320 = scope;
   scope->owner = (Object)channel__accum_58282_59629380;
   scope->name = "winc:295";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59626940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58299_59626820;

SignalI abus__r_59626440_rdec_58299_59626820_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_59626440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59626440_rdec_58299_59626820_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)rdec_58299_59626820;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
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

Scope makerdec_58299_59626820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58299_59626820 = scope;
   scope->owner = (Object)channel__accum_58282_59629380;
   scope->name = "rdec:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59626440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58303_59626320;

SignalI abus__w_59625940_wdec_58303_59626320_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__w_59625940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59625940_wdec_58303_59626320_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)wdec_58303_59626320;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
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

Scope makewdec_58303_59626320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58303_59626320 = scope;
   scope->owner = (Object)channel__accum_58282_59629380;
   scope->name = "wdec:303";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59625940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59563480;

Behavior make__59563480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59563480 = behavior;
   behavior->owner = (Object)channel__accum_58282_59629380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_59760200_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   reg__0_59760200_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   reg__0_59760200_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(reg__0_59760200_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,reg__0_59760200_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
reg__0_59760200_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[reg__0_59760200_channel__accum_58282_59629380_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59563640();

   return behavior;
}

Behavior __59563220;

Behavior make__59563220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59563220 = behavior;
   behavior->owner = (Object)channel__accum_58282_59629380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58284_59710120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58284_59710120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58284_59710120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58284_59710120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58284_59710120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58284_59710120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58284_59710120_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59563440();

   return behavior;
}

Scope makechannel__accum_58282_59629380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58282_59629380 = scope;
   scope->owner = (Object)layer1_58_84_52734780;
   scope->name = "channel_accum:282";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_59760200();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58283_59629080();
   scope->scopes[1] = makeraddr_58285_59628660();
   scope->scopes[2] = makewaddr_58288_59628240();
   scope->scopes[3] = makerinc_58291_59627820();
   scope->scopes[4] = makewinc_58295_59627320();
   scope->scopes[5] = makerdec_58299_59626820();
   scope->scopes[6] = makewdec_58303_59626320();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59563480();
   scope->behaviors[1] = make__59563220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58307_59889480;

SignalI lv0_60064500_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makelv0_60064500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_60064500_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58307_59889480;
   signalI->name = "lv0";
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

SignalI av0_60166100_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeav0_60166100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_60166100_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58307_59889480;
   signalI->name = "av0";
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

SignalI rv_60259520_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makerv_60259520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_60259520_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58307_59889480;
   signalI->name = "rv";
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

SignalI lvok0_60259500_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makelvok0_60259500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_60259500_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58307_59889480;
   signalI->name = "lvok0";
   signalI->type = get_type_bit();
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

SignalI rvok_60259480_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makervok_60259480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_60259480_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58307_59889480;
   signalI->name = "rvok";
   signalI->type = get_type_bit();
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

SignalI wok0_60259460_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makewok0_60259460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_60259460_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58307_59889480;
   signalI->name = "wok0";
   signalI->type = get_type_bit();
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

SignalI run_60259440_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makerun_60259440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_60259440_mac__n1_58307_59889480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58307_59889480;
   signalI->name = "run";
   signalI->type = get_type_bit();
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

Behavior __62463120;

Behavior make__62463120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62463120 = behavior;
   behavior->owner = (Object)mac__n1_58307_59889480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos += 1;
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos = realloc(clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos*sizeof(Object));
clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos[clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos-1] = (Object)behavior;
   behavior->block = make__60259320();

   return behavior;
}

Scope makemac__n1_58307_59889480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58307_59889480 = scope;
   scope->owner = (Object)layer1_58_84_52734780;
   scope->name = "mac_n1:307";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_60064500();
   scope->inners[1] = makeav0_60166100();
   scope->inners[2] = makerv_60259520();
   scope->inners[3] = makelvok0_60259500();
   scope->inners[4] = makervok_60259480();
   scope->inners[5] = makewok0_60259460();
   scope->inners[6] = makerun_60259440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62463120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58312_62463000;

SignalI trig__r_62461420_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI maketrig__r_62461420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_62461420_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__b0_58312_62463000;
   signalI->name = "trig_r";
   signalI->type = get_type_bit();
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

SignalI dbus__r_62538480_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makedbus__r_62538480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_62538480_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__b0_58312_62463000;
   signalI->name = "dbus_r";
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

SignalI abus__r_62538400_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_62538400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62538400_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__b0_58312_62463000;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
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

SignalI mem_62736360_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makemem_62736360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_62736360_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__b0_58312_62463000;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__59743260();
         concat_value(1,1,dst,src0);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
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

Scope raddr_58313_62462700;

Scope makeraddr_58313_62462700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58313_62462700 = scope;
   scope->owner = (Object)channel__b0_58312_62463000;
   scope->name = "raddr:313";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_58318_62462280;

Scope makerinc_58318_62462280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58318_62462280 = scope;
   scope->owner = (Object)channel__b0_58312_62463000;
   scope->name = "rinc:318";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58322_62461860;

Scope makerdec_58322_62461860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58322_62461860 = scope;
   scope->owner = (Object)channel__b0_58312_62463000;
   scope->name = "rdec:322";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50102460;

Behavior make__50102460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50102460 = behavior;
   behavior->owner = (Object)channel__b0_58312_62463000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg += 1;
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg = realloc(clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg*sizeof(Object));
clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg[clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg-1] = (Object)behavior;
   behavior->block = make__43772360();

   return behavior;
}

Behavior __59560600;

Behavior make__59560600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59560600 = behavior;
   behavior->owner = (Object)channel__b0_58312_62463000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_62538480_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   dbus__r_62538480_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   dbus__r_62538480_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(dbus__r_62538480_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,dbus__r_62538480_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
dbus__r_62538480_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[dbus__r_62538480_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59560880();

   return behavior;
}

Behavior __59560240;

Behavior make__59560240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59560240 = behavior;
   behavior->owner = (Object)channel__b0_58312_62463000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58316_59769140_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58316_59769140_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58316_59769140_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58316_59769140_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58316_59769140_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58316_59769140_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58316_59769140_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59560540();

   return behavior;
}

Behavior __59559700;

Behavior make__59559700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59559700 = behavior;
   behavior->owner = (Object)channel__b0_58312_62463000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_62461420_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   trig__r_62461420_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   trig__r_62461420_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(trig__r_62461420_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,trig__r_62461420_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
trig__r_62461420_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[trig__r_62461420_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59559860();

   return behavior;
}

Behavior __59559500;

Behavior make__59559500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59559500 = behavior;
   behavior->owner = (Object)channel__b0_58312_62463000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58314_59769100_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59559660();

   return behavior;
}

Behavior __59559040;

Behavior make__59559040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59559040 = behavior;
   behavior->owner = (Object)channel__b0_58312_62463000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_62538400_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   abus__r_62538400_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   abus__r_62538400_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(abus__r_62538400_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,abus__r_62538400_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
abus__r_62538400_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[abus__r_62538400_channel__b0_58312_62463000_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59559200();

   return behavior;
}

Behavior __59558800;

Behavior make__59558800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59558800 = behavior;
   behavior->owner = (Object)channel__b0_58312_62463000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_59769020_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58315_59769020_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58315_59769020_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58315_59769020_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58315_59769020_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58315_59769020_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58315_59769020_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59559000();

   return behavior;
}

Scope makechannel__b0_58312_62463000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58312_62463000 = scope;
   scope->owner = (Object)layer1_58_84_52734780;
   scope->name = "channel_b0:312";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_62461420();
   scope->inners[1] = makedbus__r_62538480();
   scope->inners[2] = makeabus__r_62538400();
   scope->inners[3] = makemem_62736360();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58313_62462700();
   scope->scopes[1] = makerinc_58318_62462280();
   scope->scopes[2] = makerdec_58322_62461860();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50102460();
   scope->behaviors[1] = make__59560600();
   scope->behaviors[2] = make__59560240();
   scope->behaviors[3] = make__59559700();
   scope->behaviors[4] = make__59559500();
   scope->behaviors[5] = make__59559040();
   scope->behaviors[6] = make__59558800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58327_50126700;

SignalI reg__0_50447760_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makereg__0_50447760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50447760_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__z_58327_50126700;
   signalI->name = "reg_0";
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

Scope anum_58328_50126240;

Scope makeanum_58328_50126240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58328_50126240 = scope;
   scope->owner = (Object)channel__z_58327_50126700;
   scope->name = "anum:328";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58330_50124800;

Scope makeraddr_58330_50124800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58330_50124800 = scope;
   scope->owner = (Object)channel__z_58327_50126700;
   scope->name = "raddr:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope waddr_58333_50124220;

Scope makewaddr_58333_50124220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58333_50124220 = scope;
   scope->owner = (Object)channel__z_58327_50126700;
   scope->name = "waddr:333";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_58336_50122720;

SignalI abus__r_50120920_rinc_58336_50122720_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_50120920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50120920_rinc_58336_50122720_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)rinc_58336_50122720;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
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

Scope makerinc_58336_50122720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58336_50122720 = scope;
   scope->owner = (Object)channel__z_58327_50126700;
   scope->name = "rinc:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50120920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58339_50120700;

SignalI abus__w_50119560_winc_58339_50120700_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__w_50119560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50119560_winc_58339_50120700_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)winc_58339_50120700;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
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

Scope makewinc_58339_50120700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58339_50120700 = scope;
   scope->owner = (Object)channel__z_58327_50126700;
   scope->name = "winc:339";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50119560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58342_50142420;

SignalI abus__r_50140060_rdec_58342_50142420_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_50140060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50140060_rdec_58342_50142420_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)rdec_58342_50142420;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
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

Scope makerdec_58342_50142420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58342_50142420 = scope;
   scope->owner = (Object)channel__z_58327_50126700;
   scope->name = "rdec:342";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50140060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58346_50139180;

SignalI abus__w_50137880_wdec_58346_50139180_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__w_50137880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50137880_wdec_58346_50139180_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)wdec_58346_50139180;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
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

Scope makewdec_58346_50139180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58346_50139180 = scope;
   scope->owner = (Object)channel__z_58327_50126700;
   scope->name = "wdec:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50137880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59557060;

Behavior make__59557060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59557060 = behavior;
   behavior->owner = (Object)channel__z_58327_50126700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50447760_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   reg__0_50447760_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   reg__0_50447760_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(reg__0_50447760_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,reg__0_50447760_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
reg__0_50447760_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[reg__0_50447760_channel__z_58327_50126700_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59557220();

   return behavior;
}

Behavior __59556840;

Behavior make__59556840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59556840 = behavior;
   behavior->owner = (Object)channel__z_58327_50126700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58329_59836160_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58329_59836160_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58329_59836160_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58329_59836160_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58329_59836160_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58329_59836160_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58329_59836160_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59557020();

   return behavior;
}

Scope makechannel__z_58327_50126700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58327_50126700 = scope;
   scope->owner = (Object)layer1_58_84_52734780;
   scope->name = "channel_z:327";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50447760();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58328_50126240();
   scope->scopes[1] = makeraddr_58330_50124800();
   scope->scopes[2] = makewaddr_58333_50124220();
   scope->scopes[3] = makerinc_58336_50122720();
   scope->scopes[4] = makewinc_58339_50120700();
   scope->scopes[5] = makerdec_58342_50142420();
   scope->scopes[6] = makewdec_58346_50139180();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59557060();
   scope->behaviors[1] = make__59556840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58350_52461580;

SignalI lv0_52750760_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makelv0_52750760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52750760_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58350_52461580;
   signalI->name = "lv0";
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

SignalI rv0_53106260_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makerv0_53106260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_53106260_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58350_52461580;
   signalI->name = "rv0";
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

SignalI lvok0_53106240_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makelvok0_53106240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53106240_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58350_52461580;
   signalI->name = "lvok0";
   signalI->type = get_type_bit();
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

SignalI rvok0_53106220_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makervok0_53106220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_53106220_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58350_52461580;
   signalI->name = "rvok0";
   signalI->type = get_type_bit();
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

SignalI run_53106180_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makerun_53106180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53106180_add__n_58350_52461580_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58350_52461580;
   signalI->name = "run";
   signalI->type = get_type_bit();
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

Behavior __59348460;

Behavior make__59348460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59348460 = behavior;
   behavior->owner = (Object)add__n_58350_52461580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos += 1;
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos = realloc(clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos*sizeof(Object));
clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos[clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos-1] = (Object)behavior;
   behavior->block = make__53106060();

   return behavior;
}

Scope makeadd__n_58350_52461580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58350_52461580 = scope;
   scope->owner = (Object)layer1_58_84_52734780;
   scope->name = "add_n:350";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52750760();
   scope->inners[1] = makerv0_53106260();
   scope->inners[2] = makelvok0_53106240();
   scope->inners[3] = makervok0_53106220();
   scope->inners[4] = makerun_53106180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59348460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61040980;

Behavior make__61040980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61040980 = behavior;
   behavior->owner = (Object)layer1_58_84_52734780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos += 1;
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos = realloc(clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos*sizeof(Object));
clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos[clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos-1] = (Object)behavior;
   behavior->block = make__61042160();

   return behavior;
}

Behavior __61474280;

Behavior make__61474280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61474280 = behavior;
   behavior->owner = (Object)layer1_58_84_52734780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos += 1;
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos = realloc(clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos*sizeof(Object));
clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos[clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos-1] = (Object)behavior;
   behavior->block = make__61040820();

   return behavior;
}

Behavior __61728760;

Behavior make__61728760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61728760 = behavior;
   behavior->owner = (Object)layer1_58_84_52734780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos += 1;
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos = realloc(clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos*sizeof(Object));
clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos[clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos-1] = (Object)behavior;
   behavior->block = make__61474160();

   return behavior;
}

Behavior __59370420;

Behavior make__59370420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59370420 = behavior;
   behavior->owner = (Object)layer1_58_84_52734780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_61750780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   req_61750780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   req_61750780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(req_61750780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,req_61750780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
req_61750780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[req_61750780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_59348280_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   ack__mac_59348280_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   ack__mac_59348280_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(ack__mac_59348280_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,ack__mac_59348280_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
ack__mac_59348280_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[ack__mac_59348280_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59370780();

   return behavior;
}

Behavior __59543900;

Behavior make__59543900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59543900 = behavior;
   behavior->owner = (Object)layer1_58_84_52734780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[clk_61750820_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_59348300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   ack_59348300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   ack_59348300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(ack_59348300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,ack_59348300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
ack_59348300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[ack_59348300_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_60050600_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   value__z0_60050600_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   value__z0_60050600_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(value__z0_60050600_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,value__z0_60050600_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
value__z0_60050600_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[value__z0_60050600_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_60150520_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   ack__a0_60150520_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   ack__a0_60150520_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(ack__a0_60150520_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,ack__a0_60150520_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
ack__a0_60150520_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[ack__a0_60150520_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59371020();

   return behavior;
}

Behavior __59543740;

Behavior make__59543740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59543740 = behavior;
   behavior->owner = (Object)layer1_58_84_52734780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_60169000_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   ack__mac_60169000_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   ack__mac_60169000_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(ack__mac_60169000_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,ack__mac_60169000_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
ack__mac_60169000_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[ack__mac_60169000_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[rst_61750800_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_60238200_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   a_60238200_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   a_60238200_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(a_60238200_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,a_60238200_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
a_60238200_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[a_60238200_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59370960();

   return behavior;
}

Scope makelayer1_58_84_52734780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_52734780 = scope;
   scope->owner = (Object)layer1_58_840_61728440;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_60168860();
   scope->systemIs[1] = makefunc0_60238060();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_59348320();
   scope->inners[1] = makeack_59348300();
   scope->inners[2] = makeack__mac_59348280();
   scope->inners[3] = makeack__add_59348260();
   scope->inners[4] = make_58276_59562960();
   scope->inners[5] = make_58274_59562940();
   scope->inners[6] = make_58275_59562860();
   scope->inners[7] = make_58284_59710120();
   scope->inners[8] = make_58316_59769140();
   scope->inners[9] = make_58317_59769120();
   scope->inners[10] = make_58314_59769100();
   scope->inners[11] = make_58315_59769020();
   scope->inners[12] = make_58329_59836160();
   scope->inners[13] = makevalue__z0_60050600();
   scope->inners[14] = makevalue__a0_60150560();
   scope->inners[15] = makeflag__z0_60150540();
   scope->inners[16] = makeack__a0_60150520();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58267_52734300();
   scope->scopes[1] = makechannel__accum_58282_59629380();
   scope->scopes[2] = makemac__n1_58307_59889480();
   scope->scopes[3] = makechannel__b0_58312_62463000();
   scope->scopes[4] = makechannel__z_58327_50126700();
   scope->scopes[5] = makeadd__n_58350_52461580();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61040980();
   scope->behaviors[1] = make__61474280();
   scope->behaviors[2] = make__61728760();
   scope->behaviors[3] = make__59370420();
   scope->behaviors[4] = make__59543900();
   scope->behaviors[5] = make__59543740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_61728440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_61728440 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_61750820();
   systemT->inputs[1] = makerst_61750800();
   systemT->inputs[2] = makereq_61750780();
   systemT->inputs[3] = make_58110_62084160();
   systemT->inputs[4] = make_58111_62164200();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_62164160();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58112_62164000();
   systemT->inouts[1] = make_5876_62309200();

   systemT->scope = makelayer1_58_84_52734780();

   return systemT;
}