#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_48843960;

SignalI clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeclk_48877220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_840_48843960;
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

SignalI rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makerst_48877180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_840_48843960;
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

SignalI req_48877160_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makereq_48877160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_48877160_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_840_48843960;
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

SignalI _58110_49350620_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58110_49350620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58110_49350620_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_840_48843960;
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

SignalI _58111_49984980_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58111_49984980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58111_49984980_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_840_48843960;
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

SignalI ack__layer_49984920_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack__layer_49984920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_49984920_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_840_48843960;
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

SignalI _58112_49984800_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58112_49984800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58112_49984800_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_840_48843960;
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

SignalI _5876_50219700_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_5876_50219700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5876_50219700_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_840_48843960;
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

Block __57591760;

Block __57591500;

void code__57591500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55468880(),ack_50564320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55468780(),ack__mac_50564300_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55468640(),ack__add_50564240_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57591500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57591500 = block;
   block->owner = (Object)__57591760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57591500;

   return block;
};

void code__57591760() {
   {
      Value cond = rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57591500();
   }
      }
   }
}

Block make__57591760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57591760 = block;
   block->owner = (Object)__57590060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57591760;

   return block;
};

Block __57614240;

Block __57613420;

Block __57613200;

void code__57613200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_54957880_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,value__z0_55188260_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55468440(),flag__z0_55507780_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57613200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57613200 = block;
   block->owner = (Object)__57613420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57613200;

   return block;
};

void code__57613420() {
 code__57613200();
}

Block make__57613420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57613420 = block;
   block->owner = (Object)__57614240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57613420;

   return block;
};

Block __57614020;

void code__57614020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55468300(),flag__z0_55507780_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57614020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57614020 = block;
   block->owner = (Object)__57614240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57614020;

   return block;
};

void code__57614240() {
   {
      Value cond = ack__add_50564240_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57613420();
   }
   else {
  code__57614020();
   }
      }
   }
}

Block make__57614240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57614240 = block;
   block->owner = (Object)__46128380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57614240;

   return block;
};

Block __46128040;

Block __46127300;

void code__46127300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55508920(),ack__a0_55507720_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__46127300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46127300 = block;
   block->owner = (Object)__46128040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46127300;

   return block;
};

Block __46126280;

Block __46125920;

void code__46125920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_55507800_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_5876_50219700_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55508660(),ack__a0_55507720_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__46125920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46125920 = block;
   block->owner = (Object)__46126280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46125920;

   return block;
};

void code__46126280() {
 code__46125920();
}

Block make__46126280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46126280 = block;
   block->owner = (Object)__46128040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46126280;

   return block;
};

void code__46128040() {
   {
      Value cond = rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46127300();
   }
   else if (value2integer(flag__z0_55507780_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value)) {
  code__46126280();
   }
      }
   }
}

Block make__46128040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46128040 = block;
   block->owner = (Object)__48846920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46128040;

   return block;
};

Block __54622000;

void code__54622000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_48877160_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_50564300_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_50564340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54622000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54622000 = block;
   block->owner = (Object)__54621360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54622000;

   return block;
};

Block __54622480;

void code__54622480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,clk_55522140_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_50564320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,ack_55522120_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,rst_55522100_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_55188260_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,z__value_56448980_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_55507720_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,ack__layer_49984920_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54622480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54622480 = block;
   block->owner = (Object)__54666980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54622480;

   return block;
};

Block __54622380;

void code__54622380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_55522040_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,ack__mac_50564300_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58317_54808340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_56607400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,value__a0_55507800_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54622380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54622380 = block;
   block->owner = (Object)__54666660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54622380;

   return block;
};

Block __57009000;

void code__57009000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_56627540_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            idx = value2integer(abus__r_55820020_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55820100_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57009000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57009000 = block;
   block->owner = (Object)__57548960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57009000;

   return block;
};

Block __54714320;

void code__54714320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55820100_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58276_50744360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54714320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54714320 = block;
   block->owner = (Object)__54714000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54714320;

   return block;
};

Block __54713960;

void code__54713960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58276_50744360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,dbus__r_55820100_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54713960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54713960 = block;
   block->owner = (Object)__54713720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54713960;

   return block;
};

Block __54713360;

void code__54713360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_55658440_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54713360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54713360 = block;
   block->owner = (Object)__54713200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54713360;

   return block;
};

Block __54713160;

void code__54713160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,trig__r_55658440_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54713160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54713160 = block;
   block->owner = (Object)__54713000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54713160;

   return block;
};

Block __54712400;

void code__54712400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55820020_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54712400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54712400 = block;
   block->owner = (Object)__54711500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54712400;

   return block;
};

Block __54711460;

void code__54711460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,abus__r_55820020_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54711460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54711460 = block;
   block->owner = (Object)__54711220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54711460;

   return block;
};

Block __54708540;

void code__54708540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57655920_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58284_54666600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54708540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54708540 = block;
   block->owner = (Object)__54708380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54708540;

   return block;
};

Block __54708340;

void code__54708340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_54666600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,reg__0_57655920_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54708340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54708340 = block;
   block->owner = (Object)__54708160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54708340;

   return block;
};

Block __48845800;

Block __48845120;

Block __48843080;

void code__48843080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55343280(),_58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48843080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48843080 = block;
   block->owner = (Object)__48845120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48843080;

   return block;
};

void code__48845120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55343440();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48843080();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55343180(),_58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48845120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48845120 = block;
   block->owner = (Object)__48845800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48845120;

   return block;
};

Block __48865120;

Block __48864420;

void code__48864420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55342860(),_58112_49984800_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48864420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48864420 = block;
   block->owner = (Object)__48865120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48864420;

   return block;
};

void code__48865120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55343020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48864420();
   }
      }
   }
}

Block make__48865120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48865120 = block;
   block->owner = (Object)__48845800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48865120;

   return block;
};

Block __48861060;

void code__48861060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55342560(),rvok_48846380_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55342500(),lvok0_48846460_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55342440(),wok0_48846220_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48861060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48861060 = block;
   block->owner = (Object)__48845800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48861060;

   return block;
};

Block __49197100;

Block __49196240;

Block __49195520;

Block __49195060;

Block __49194500;

void code__49194500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58110_49350620_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,rv_48846500_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49194500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49194500 = block;
   block->owner = (Object)__49195060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49194500;

   return block;
};

Block __50014880;

void code__50014880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58111_49984980_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,rv_48846500_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50014880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50014880 = block;
   block->owner = (Object)__49195060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50014880;

   return block;
};

void code__49195060() {
{
      Value value = _58112_49984800_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__55341740())) {
    code__49194500();
         }
         else if (value2integer(value) == value2integer(make__55340980())) {
    code__50014880();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55340780(),rvok_48846380_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
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
                  src0 = _58112_49984800_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                  src1 = make__55340660();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55340580();
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
                        src0 = _58112_49984800_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__55340140();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__55340040();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58112_49984800_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49195060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49195060 = block;
   block->owner = (Object)__49195520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49195060;

   return block;
};

void code__49195520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55342020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49195060();
   }
      }
   }
}

Block make__49195520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49195520 = block;
   block->owner = (Object)__49196240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49195520;

   return block;
};

void code__49196240() {
 code__49195520();
}

Block make__49196240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49196240 = block;
   block->owner = (Object)__49197100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49196240;

   return block;
};

Block __50413640;

Block __50437340;

Block __50434980;

Block __50430160;

Block __50487060;

void code__50487060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58276_50744360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,lv0_47143240_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55339300(),lvok0_48846460_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50487060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50487060 = block;
   block->owner = (Object)__50430160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50487060;

   return block;
};

void code__50430160() {
 code__50487060();
}

Block make__50430160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50430160 = block;
   block->owner = (Object)__50434980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50430160;

   return block;
};

Block __50434340;

void code__50434340() {
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
                  src0 = _58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                  src1 = make__55339120();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55339020();
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
                        src0 = _58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__55338560();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__55338340();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55338220(),_58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50434340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50434340 = block;
   block->owner = (Object)__50434980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50434340;

   return block;
};

void code__50434980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55339700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50430160();
   }
   else {
  code__50434340();
   }
      }
   }
}

Block make__50434980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50434980 = block;
   block->owner = (Object)__50437340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50434980;

   return block;
};

void code__50437340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55339820();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50434980();
   }
      }
   }
}

Block make__50437340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50437340 = block;
   block->owner = (Object)__50413640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50437340;

   return block;
};

void code__50413640() {
 code__50437340();
}

Block make__50413640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50413640 = block;
   block->owner = (Object)__49197100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50413640;

   return block;
};

Block __54450400;

Block __54449920;

Block __54449760;

void code__54449760() {
}

Block make__54449760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54449760 = block;
   block->owner = (Object)__54449920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54449760;

   return block;
};

Block __55506980;

void code__55506980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_48536420_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58284_54666600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55475940(),wok0_48846220_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__55506980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55506980 = block;
   block->owner = (Object)__54449920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55506980;

   return block;
};

void code__54449920() {
 code__54449760();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_48536420_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
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
                              src0 = lv0_47143240_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48846500_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55337220();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_48536420_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
 code__55506980();
}

Block make__54449920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54449920 = block;
   block->owner = (Object)__54450400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54449920;

   return block;
};

void code__54450400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55337920(),ack_50564320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55337780(),run_48846200_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
 code__54449920();
}

Block make__54450400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54450400 = block;
   block->owner = (Object)__49197100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54450400;

   return block;
};

Block __55708520;

void code__55708520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55475700(),wok0_48846220_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55475540(),lvok0_48846460_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55475320(),rvok_48846380_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__55708520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55708520 = block;
   block->owner = (Object)__49197100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55708520;

   return block;
};

void code__49197100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55342240(),run_48846200_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_48846380_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49196240();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_48846460_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50413640();
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
               src0 = lvok0_48846460_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               src1 = rvok_48846380_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_48846220_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54450400();
   }
      }
   }
   {
      Value cond = wok0_48846220_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55708520();
   }
      }
   }
}

Block make__49197100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49197100 = block;
   block->owner = (Object)__48845800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49197100;

   return block;
};

Block __48857720;

void code__48857720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55475260(),av0_48536420_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48857720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48857720 = block;
   block->owner = (Object)__48845800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48857720;

   return block;
};

void code__48845800() {
 code__48845120();
 code__48865120();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55342800(),ack_50564320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55342720(),run_48846200_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_48846200_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48861060();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_50564340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         src1 = run_48846200_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49197100();
   }
   else {
  code__48857720();
   }
      }
   }
}

Block make__48845800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48845800 = block;
   block->owner = (Object)__55707220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48845800;

   return block;
};

Block __56600920;

void code__56600920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_56297460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            idx = value2integer(abus__r_55832380_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55832460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__56600920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56600920 = block;
   block->owner = (Object)__57134700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56600920;

   return block;
};

Block __54777860;

void code__54777860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55832460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58316_54808360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54777860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54777860 = block;
   block->owner = (Object)__54777660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54777860;

   return block;
};

Block __54777540;

void code__54777540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_54808360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,dbus__r_55832460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54777540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54777540 = block;
   block->owner = (Object)__54777260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54777540;

   return block;
};

Block __54776800;

void code__54776800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_55729680_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54776800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54776800 = block;
   block->owner = (Object)__54776560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54776800;

   return block;
};

Block __54776500;

void code__54776500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,trig__r_55729680_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54776500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54776500 = block;
   block->owner = (Object)__54776240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54776500;

   return block;
};

Block __54775680;

void code__54775680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55832380_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58315_54808200_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54775680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54775680 = block;
   block->owner = (Object)__54775400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54775680;

   return block;
};

Block __54775320;

void code__54775320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_54808200_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,abus__r_55832380_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54775320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54775320 = block;
   block->owner = (Object)__54775040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54775320;

   return block;
};

Block __54772880;

void code__54772880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57314500_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58329_54957880_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54772880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54772880 = block;
   block->owner = (Object)__54772700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54772880;

   return block;
};

Block __54772620;

void code__54772620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_54957880_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,reg__0_57314500_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54772620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54772620 = block;
   block->owner = (Object)__54772360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54772620;

   return block;
};

Block __46172400;

Block __46171800;

void code__46171800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55472960(),_58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__46171800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46171800 = block;
   block->owner = (Object)__46172400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46171800;

   return block;
};

Block __46604320;

Block __46626540;

void code__46626540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_54666600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,lv0_57864320_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55472420(),lvok0_46175740_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__46626540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46626540 = block;
   block->owner = (Object)__46604320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46626540;

   return block;
};

Block __48700900;

Block __48700260;

Block __48695580;

void code__48695580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_54808360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,rv0_46176320_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55471740(),_58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55471600(),rvok0_46173280_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48695580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48695580 = block;
   block->owner = (Object)__48700260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48695580;

   return block;
};

Block __48698360;

void code__48698360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55471540(),_58315_54808200_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55471440(),_58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48698360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48698360 = block;
   block->owner = (Object)__48700260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48698360;

   return block;
};

void code__48700260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55471940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48695580();
   }
   else {
  code__48698360();
   }
      }
   }
}

Block make__48700260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48700260 = block;
   block->owner = (Object)__48700900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48700260;

   return block;
};

void code__48700900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58317_54808340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55472240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48700260();
   }
      }
   }
}

Block make__48700900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48700900 = block;
   block->owner = (Object)__46604320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48700900;

   return block;
};

Block __49799760;

Block __49445460;

void code__49445460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_57864320_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      src1 = rv0_46176320_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58329_54957880_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49445460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49445460 = block;
   block->owner = (Object)__49799760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49445460;

   return block;
};

void code__49799760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55471160(),run_46173220_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55471000(),ack__add_50564240_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
 code__49445460();
}

Block make__49799760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49799760 = block;
   block->owner = (Object)__46604320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49799760;

   return block;
};

void code__46604320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55472640(),run_46173220_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
 code__46626540();
 code__48700900();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_46175740_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         src1 = rvok0_46173280_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49799760();
   }
      }
   }
}

Block make__46604320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46604320 = block;
   block->owner = (Object)__46172400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46604320;

   return block;
};

Block __46207660;

void code__46207660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55470700(),lvok0_46175740_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55470640(),rvok0_46173280_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__46207660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46207660 = block;
   block->owner = (Object)__46172400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46207660;

   return block;
};

void code__46172400() {
 code__46171800();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55472900(),ack__add_50564240_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55472840(),run_46173220_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_50564300_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         src1 = run_46173220_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46604320();
   }
   else {
  code__46207660();
   }
      }
   }
}

Block make__46172400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46172400 = block;
   block->owner = (Object)__50564520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46172400;

   return block;
};

Value make__55132640() {
   static unsigned long long data[] = { 20ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55132620() {
   static unsigned long long data[] = { 13ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55475200() {
   static unsigned long long data[] = { 4294967294ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__55343440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55343280() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55343180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55343020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55342860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55342800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55342720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55342560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55342500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55342440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55342240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55342020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55341740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55340980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55340780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55340660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55340580() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55340140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55340040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55339820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55339700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55339300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55339120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55339020() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55338560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55338340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55338220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55337920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55337780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55337220() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55475940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55475700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55475540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55475320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55475260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55472960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55472900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55472840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55472640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55472420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55472240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55471940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55471740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55471600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55471540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55471440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55471160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55471000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55470700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55470640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55468880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55468780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55468640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55468440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55468300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55508920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55508660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_55660900;

SignalI req__mac_50564340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makereq__mac_50564340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_50564340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI ack_50564320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack_50564320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_50564320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI ack__mac_50564300_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack__mac_50564300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50564300_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI ack__add_50564240_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack__add_50564240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_50564240_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI _58276_50744360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58276_50744360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58276_50744360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI _58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58274_50744280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI _58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58275_50744020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI _58284_54666600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58284_54666600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58284_54666600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI _58316_54808360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58316_54808360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58316_54808360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI _58317_54808340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58317_54808340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58317_54808340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI _58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58314_54808280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI _58315_54808200_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58315_54808200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_54808200_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI _58329_54957880_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58329_54957880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58329_54957880_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI value__z0_55188260_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makevalue__z0_55188260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_55188260_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI value__a0_55507800_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makevalue__a0_55507800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_55507800_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI flag__z0_55507780_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeflag__z0_55507780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_55507780_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SignalI ack__a0_55507720_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack__a0_55507720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_55507720_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer1_58_84_55660900;
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

SystemI counter_55521860;

SystemI makecounter_55521860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_55521860 = systemI;
   systemI->owner = (Object)layer1_58_84_55660900;
   systemI->name = "counter";
   systemI->system = counter_58_8400_55524600;

   return systemI;
};

SystemI func0_56607160;

SystemI makefunc0_56607160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_56607160 = systemI;
   systemI->owner = (Object)layer1_58_84_55660900;
   systemI->name = "func0";
   systemI->system = func0_58_8400_56148540;

   return systemI;
};

Scope channel__w0_58267_55660540;

SignalI trig__r_55658440_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI maketrig__r_55658440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_55658440_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__w0_58267_55660540;
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

SignalI dbus__r_55820100_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makedbus__r_55820100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55820100_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__w0_58267_55660540;
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

SignalI abus__r_55820020_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_55820020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55820020_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__w0_58267_55660540;
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

SignalI mem_56627540_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makemem_56627540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_56627540_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__w0_58267_55660540;
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
         src0 = make__55132640();
         src1 = make__55132620();
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

Scope raddr_58268_55660200;

Scope makeraddr_58268_55660200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58268_55660200 = scope;
   scope->owner = (Object)channel__w0_58267_55660540;
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

Scope rinc_58273_55659680;

Scope makerinc_58273_55659680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_55659680 = scope;
   scope->owner = (Object)channel__w0_58267_55660540;
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

Scope rdec_58277_55659180;

Scope makerdec_58277_55659180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58277_55659180 = scope;
   scope->owner = (Object)channel__w0_58267_55660540;
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

Behavior __57548960;

Behavior make__57548960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57548960 = behavior;
   behavior->owner = (Object)channel__w0_58267_55660540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg += 1;
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg = realloc(clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg*sizeof(Object));
clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg[clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg-1] = (Object)behavior;
   behavior->block = make__57009000();

   return behavior;
}

Behavior __54714000;

Behavior make__54714000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54714000 = behavior;
   behavior->owner = (Object)channel__w0_58267_55660540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55820100_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   dbus__r_55820100_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   dbus__r_55820100_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(dbus__r_55820100_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,dbus__r_55820100_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
dbus__r_55820100_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[dbus__r_55820100_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54714320();

   return behavior;
}

Behavior __54713720;

Behavior make__54713720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54713720 = behavior;
   behavior->owner = (Object)channel__w0_58267_55660540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58276_50744360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58276_50744360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58276_50744360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58276_50744360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58276_50744360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58276_50744360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58276_50744360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54713960();

   return behavior;
}

Behavior __54713200;

Behavior make__54713200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54713200 = behavior;
   behavior->owner = (Object)channel__w0_58267_55660540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_55658440_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   trig__r_55658440_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   trig__r_55658440_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(trig__r_55658440_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,trig__r_55658440_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
trig__r_55658440_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[trig__r_55658440_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54713360();

   return behavior;
}

Behavior __54713000;

Behavior make__54713000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54713000 = behavior;
   behavior->owner = (Object)channel__w0_58267_55660540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58274_50744280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54713160();

   return behavior;
}

Behavior __54711500;

Behavior make__54711500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54711500 = behavior;
   behavior->owner = (Object)channel__w0_58267_55660540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55820020_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   abus__r_55820020_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   abus__r_55820020_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(abus__r_55820020_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,abus__r_55820020_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
abus__r_55820020_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[abus__r_55820020_channel__w0_58267_55660540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54712400();

   return behavior;
}

Behavior __54711220;

Behavior make__54711220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54711220 = behavior;
   behavior->owner = (Object)channel__w0_58267_55660540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58275_50744020_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54711460();

   return behavior;
}

Scope makechannel__w0_58267_55660540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58267_55660540 = scope;
   scope->owner = (Object)layer1_58_84_55660900;
   scope->name = "channel_w0:267";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_55658440();
   scope->inners[1] = makedbus__r_55820100();
   scope->inners[2] = makeabus__r_55820020();
   scope->inners[3] = makemem_56627540();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58268_55660200();
   scope->scopes[1] = makerinc_58273_55659680();
   scope->scopes[2] = makerdec_58277_55659180();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57548960();
   scope->behaviors[1] = make__54714000();
   scope->behaviors[2] = make__54713720();
   scope->behaviors[3] = make__54713200();
   scope->behaviors[4] = make__54713000();
   scope->behaviors[5] = make__54711500();
   scope->behaviors[6] = make__54711220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58282_57573320;

SignalI reg__0_57655920_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makereg__0_57655920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_57655920_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__accum_58282_57573320;
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

Scope anum_58283_57572980;

Scope makeanum_58283_57572980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58283_57572980 = scope;
   scope->owner = (Object)channel__accum_58282_57573320;
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

Scope raddr_58285_57572400;

Scope makeraddr_58285_57572400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58285_57572400 = scope;
   scope->owner = (Object)channel__accum_58282_57573320;
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

Scope waddr_58288_57571880;

Scope makewaddr_58288_57571880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58288_57571880 = scope;
   scope->owner = (Object)channel__accum_58282_57573320;
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

Scope rinc_58291_57571440;

SignalI abus__r_57570940_rinc_58291_57571440_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_57570940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57570940_rinc_58291_57571440_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)rinc_58291_57571440;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makerinc_58291_57571440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58291_57571440 = scope;
   scope->owner = (Object)channel__accum_58282_57573320;
   scope->name = "rinc:291";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57570940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58295_57570820;

SignalI abus__w_57570360_winc_58295_57570820_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__w_57570360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57570360_winc_58295_57570820_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)winc_58295_57570820;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makewinc_58295_57570820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58295_57570820 = scope;
   scope->owner = (Object)channel__accum_58282_57573320;
   scope->name = "winc:295";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57570360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58299_57570220;

SignalI abus__r_57569680_rdec_58299_57570220_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_57569680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57569680_rdec_58299_57570220_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)rdec_58299_57570220;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makerdec_58299_57570220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58299_57570220 = scope;
   scope->owner = (Object)channel__accum_58282_57573320;
   scope->name = "rdec:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57569680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58303_57569560;

SignalI abus__w_57569160_wdec_58303_57569560_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__w_57569160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57569160_wdec_58303_57569560_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)wdec_58303_57569560;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makewdec_58303_57569560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58303_57569560 = scope;
   scope->owner = (Object)channel__accum_58282_57573320;
   scope->name = "wdec:303";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57569160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54708380;

Behavior make__54708380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54708380 = behavior;
   behavior->owner = (Object)channel__accum_58282_57573320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57655920_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   reg__0_57655920_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   reg__0_57655920_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(reg__0_57655920_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,reg__0_57655920_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
reg__0_57655920_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[reg__0_57655920_channel__accum_58282_57573320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54708540();

   return behavior;
}

Behavior __54708160;

Behavior make__54708160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54708160 = behavior;
   behavior->owner = (Object)channel__accum_58282_57573320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58284_54666600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58284_54666600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58284_54666600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58284_54666600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58284_54666600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58284_54666600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58284_54666600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54708340();

   return behavior;
}

Scope makechannel__accum_58282_57573320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58282_57573320 = scope;
   scope->owner = (Object)layer1_58_84_55660900;
   scope->name = "channel_accum:282";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_57655920();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58283_57572980();
   scope->scopes[1] = makeraddr_58285_57572400();
   scope->scopes[2] = makewaddr_58288_57571880();
   scope->scopes[3] = makerinc_58291_57571440();
   scope->scopes[4] = makewinc_58295_57570820();
   scope->scopes[5] = makerdec_58299_57570220();
   scope->scopes[6] = makewdec_58303_57569560();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54708380();
   scope->behaviors[1] = make__54708160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58307_45885340;

SignalI lv0_47143240_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makelv0_47143240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47143240_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58307_45885340;
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

SignalI av0_48536420_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeav0_48536420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_48536420_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58307_45885340;
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

SignalI rv_48846500_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makerv_48846500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_48846500_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58307_45885340;
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

SignalI lvok0_48846460_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makelvok0_48846460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_48846460_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58307_45885340;
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

SignalI rvok_48846380_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makervok_48846380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_48846380_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58307_45885340;
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

SignalI wok0_48846220_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makewok0_48846220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_48846220_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58307_45885340;
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

SignalI run_48846200_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makerun_48846200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_48846200_mac__n1_58307_45885340_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58307_45885340;
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

Behavior __55707220;

Behavior make__55707220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55707220 = behavior;
   behavior->owner = (Object)mac__n1_58307_45885340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos += 1;
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos = realloc(clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos*sizeof(Object));
clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos[clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos-1] = (Object)behavior;
   behavior->block = make__48845800();

   return behavior;
}

Scope makemac__n1_58307_45885340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58307_45885340 = scope;
   scope->owner = (Object)layer1_58_84_55660900;
   scope->name = "mac_n1:307";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47143240();
   scope->inners[1] = makeav0_48536420();
   scope->inners[2] = makerv_48846500();
   scope->inners[3] = makelvok0_48846460();
   scope->inners[4] = makervok_48846380();
   scope->inners[5] = makewok0_48846220();
   scope->inners[6] = makerun_48846200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55707220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58312_55707000;

SignalI trig__r_55729680_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI maketrig__r_55729680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_55729680_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__b0_58312_55707000;
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

SignalI dbus__r_55832460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makedbus__r_55832460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55832460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__b0_58312_55707000;
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

SignalI abus__r_55832380_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_55832380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55832380_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__b0_58312_55707000;
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

SignalI mem_56297460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makemem_56297460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_56297460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__b0_58312_55707000;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__55475200(),signalI->c_value);
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

Scope raddr_58313_55706580;

Scope makeraddr_58313_55706580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58313_55706580 = scope;
   scope->owner = (Object)channel__b0_58312_55707000;
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

Scope rinc_58318_55706160;

Scope makerinc_58318_55706160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58318_55706160 = scope;
   scope->owner = (Object)channel__b0_58312_55707000;
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

Scope rdec_58322_55705740;

Scope makerdec_58322_55705740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58322_55705740 = scope;
   scope->owner = (Object)channel__b0_58312_55707000;
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

Behavior __57134700;

Behavior make__57134700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57134700 = behavior;
   behavior->owner = (Object)channel__b0_58312_55707000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg += 1;
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg = realloc(clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg*sizeof(Object));
clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg[clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg-1] = (Object)behavior;
   behavior->block = make__56600920();

   return behavior;
}

Behavior __54777660;

Behavior make__54777660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54777660 = behavior;
   behavior->owner = (Object)channel__b0_58312_55707000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55832460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   dbus__r_55832460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   dbus__r_55832460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(dbus__r_55832460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,dbus__r_55832460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
dbus__r_55832460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[dbus__r_55832460_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54777860();

   return behavior;
}

Behavior __54777260;

Behavior make__54777260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54777260 = behavior;
   behavior->owner = (Object)channel__b0_58312_55707000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58316_54808360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58316_54808360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58316_54808360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58316_54808360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58316_54808360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58316_54808360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58316_54808360_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54777540();

   return behavior;
}

Behavior __54776560;

Behavior make__54776560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54776560 = behavior;
   behavior->owner = (Object)channel__b0_58312_55707000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_55729680_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   trig__r_55729680_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   trig__r_55729680_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(trig__r_55729680_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,trig__r_55729680_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
trig__r_55729680_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[trig__r_55729680_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54776800();

   return behavior;
}

Behavior __54776240;

Behavior make__54776240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54776240 = behavior;
   behavior->owner = (Object)channel__b0_58312_55707000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58314_54808280_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54776500();

   return behavior;
}

Behavior __54775400;

Behavior make__54775400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54775400 = behavior;
   behavior->owner = (Object)channel__b0_58312_55707000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55832380_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   abus__r_55832380_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   abus__r_55832380_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(abus__r_55832380_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,abus__r_55832380_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
abus__r_55832380_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[abus__r_55832380_channel__b0_58312_55707000_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54775680();

   return behavior;
}

Behavior __54775040;

Behavior make__54775040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54775040 = behavior;
   behavior->owner = (Object)channel__b0_58312_55707000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_54808200_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58315_54808200_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58315_54808200_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58315_54808200_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58315_54808200_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58315_54808200_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58315_54808200_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54775320();

   return behavior;
}

Scope makechannel__b0_58312_55707000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58312_55707000 = scope;
   scope->owner = (Object)layer1_58_84_55660900;
   scope->name = "channel_b0:312";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_55729680();
   scope->inners[1] = makedbus__r_55832460();
   scope->inners[2] = makeabus__r_55832380();
   scope->inners[3] = makemem_56297460();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58313_55706580();
   scope->scopes[1] = makerinc_58318_55706160();
   scope->scopes[2] = makerdec_58322_55705740();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57134700();
   scope->behaviors[1] = make__54777660();
   scope->behaviors[2] = make__54777260();
   scope->behaviors[3] = make__54776560();
   scope->behaviors[4] = make__54776240();
   scope->behaviors[5] = make__54775400();
   scope->behaviors[6] = make__54775040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58327_57134480;

SignalI reg__0_57314500_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makereg__0_57314500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_57314500_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__z_58327_57134480;
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

Scope anum_58328_57133780;

Scope makeanum_58328_57133780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58328_57133780 = scope;
   scope->owner = (Object)channel__z_58327_57134480;
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

Scope raddr_58330_57133360;

Scope makeraddr_58330_57133360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58330_57133360 = scope;
   scope->owner = (Object)channel__z_58327_57134480;
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

Scope waddr_58333_57132940;

Scope makewaddr_58333_57132940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58333_57132940 = scope;
   scope->owner = (Object)channel__z_58327_57134480;
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

Scope rinc_58336_57132400;

SignalI abus__r_57131700_rinc_58336_57132400_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_57131700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57131700_rinc_58336_57132400_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)rinc_58336_57132400;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makerinc_58336_57132400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58336_57132400 = scope;
   scope->owner = (Object)channel__z_58327_57134480;
   scope->name = "rinc:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57131700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58339_57131560;

SignalI abus__w_57131140_winc_58339_57131560_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__w_57131140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57131140_winc_58339_57131560_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)winc_58339_57131560;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makewinc_58339_57131560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58339_57131560 = scope;
   scope->owner = (Object)channel__z_58327_57134480;
   scope->name = "winc:339";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57131140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58342_57131020;

SignalI abus__r_57187940_rdec_58342_57131020_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_57187940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57187940_rdec_58342_57131020_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)rdec_58342_57131020;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makerdec_58342_57131020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58342_57131020 = scope;
   scope->owner = (Object)channel__z_58327_57134480;
   scope->name = "rdec:342";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57187940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58346_57187820;

SignalI abus__w_57187260_wdec_58346_57187820_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__w_57187260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57187260_wdec_58346_57187820_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)wdec_58346_57187820;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makewdec_58346_57187820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58346_57187820 = scope;
   scope->owner = (Object)channel__z_58327_57134480;
   scope->name = "wdec:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57187260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54772700;

Behavior make__54772700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54772700 = behavior;
   behavior->owner = (Object)channel__z_58327_57134480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57314500_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   reg__0_57314500_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   reg__0_57314500_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(reg__0_57314500_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,reg__0_57314500_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
reg__0_57314500_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[reg__0_57314500_channel__z_58327_57134480_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54772880();

   return behavior;
}

Behavior __54772360;

Behavior make__54772360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54772360 = behavior;
   behavior->owner = (Object)channel__z_58327_57134480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58329_54957880_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58329_54957880_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58329_54957880_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58329_54957880_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58329_54957880_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58329_54957880_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58329_54957880_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54772620();

   return behavior;
}

Scope makechannel__z_58327_57134480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58327_57134480 = scope;
   scope->owner = (Object)layer1_58_84_55660900;
   scope->name = "channel_z:327";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_57314500();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58328_57133780();
   scope->scopes[1] = makeraddr_58330_57133360();
   scope->scopes[2] = makewaddr_58333_57132940();
   scope->scopes[3] = makerinc_58336_57132400();
   scope->scopes[4] = makewinc_58339_57131560();
   scope->scopes[5] = makerdec_58342_57131020();
   scope->scopes[6] = makewdec_58346_57187820();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54772700();
   scope->behaviors[1] = make__54772360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58350_57679400;

SignalI lv0_57864320_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makelv0_57864320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_57864320_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58350_57679400;
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

SignalI rv0_46176320_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makerv0_46176320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_46176320_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58350_57679400;
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

SignalI lvok0_46175740_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makelvok0_46175740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_46175740_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58350_57679400;
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

SignalI rvok0_46173280_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makervok0_46173280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_46173280_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58350_57679400;
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

SignalI run_46173220_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makerun_46173220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_46173220_add__n_58350_57679400_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58350_57679400;
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

Behavior __50564520;

Behavior make__50564520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50564520 = behavior;
   behavior->owner = (Object)add__n_58350_57679400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos += 1;
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos = realloc(clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos*sizeof(Object));
clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos[clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos-1] = (Object)behavior;
   behavior->block = make__46172400();

   return behavior;
}

Scope makeadd__n_58350_57679400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58350_57679400 = scope;
   scope->owner = (Object)layer1_58_84_55660900;
   scope->name = "add_n:350";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_57864320();
   scope->inners[1] = makerv0_46176320();
   scope->inners[2] = makelvok0_46175740();
   scope->inners[3] = makervok0_46173280();
   scope->inners[4] = makerun_46173220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50564520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57590060;

Behavior make__57590060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57590060 = behavior;
   behavior->owner = (Object)layer1_58_84_55660900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos += 1;
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos = realloc(clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos*sizeof(Object));
clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos[clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos-1] = (Object)behavior;
   behavior->block = make__57591760();

   return behavior;
}

Behavior __46128380;

Behavior make__46128380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46128380 = behavior;
   behavior->owner = (Object)layer1_58_84_55660900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos += 1;
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos = realloc(clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos*sizeof(Object));
clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos[clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos-1] = (Object)behavior;
   behavior->block = make__57614240();

   return behavior;
}

Behavior __48846920;

Behavior make__48846920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48846920 = behavior;
   behavior->owner = (Object)layer1_58_84_55660900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos += 1;
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos = realloc(clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos*sizeof(Object));
clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos[clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos-1] = (Object)behavior;
   behavior->block = make__46128040();

   return behavior;
}

Behavior __54621360;

Behavior make__54621360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54621360 = behavior;
   behavior->owner = (Object)layer1_58_84_55660900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_48877160_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   req_48877160_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   req_48877160_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(req_48877160_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,req_48877160_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
req_48877160_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[req_48877160_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_50564300_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   ack__mac_50564300_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   ack__mac_50564300_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(ack__mac_50564300_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,ack__mac_50564300_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
ack__mac_50564300_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[ack__mac_50564300_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54622000();

   return behavior;
}

Behavior __54666980;

Behavior make__54666980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54666980 = behavior;
   behavior->owner = (Object)layer1_58_84_55660900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[clk_48877220_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_50564320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   ack_50564320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   ack_50564320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(ack_50564320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,ack_50564320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
ack_50564320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[ack_50564320_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_55188260_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   value__z0_55188260_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   value__z0_55188260_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(value__z0_55188260_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,value__z0_55188260_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
value__z0_55188260_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[value__z0_55188260_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_55507720_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   ack__a0_55507720_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   ack__a0_55507720_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(ack__a0_55507720_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,ack__a0_55507720_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
ack__a0_55507720_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[ack__a0_55507720_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54622480();

   return behavior;
}

Behavior __54666660;

Behavior make__54666660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54666660 = behavior;
   behavior->owner = (Object)layer1_58_84_55660900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_55522040_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   ack__mac_55522040_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   ack__mac_55522040_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(ack__mac_55522040_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,ack__mac_55522040_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
ack__mac_55522040_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[ack__mac_55522040_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[rst_48877180_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_56607400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   a_56607400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   a_56607400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(a_56607400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,a_56607400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
a_56607400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[a_56607400_func0_58_8400_56148540_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__54622380();

   return behavior;
}

Scope makelayer1_58_84_55660900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_55660900 = scope;
   scope->owner = (Object)layer1_58_840_48843960;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_55521860();
   scope->systemIs[1] = makefunc0_56607160();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_50564340();
   scope->inners[1] = makeack_50564320();
   scope->inners[2] = makeack__mac_50564300();
   scope->inners[3] = makeack__add_50564240();
   scope->inners[4] = make_58276_50744360();
   scope->inners[5] = make_58274_50744280();
   scope->inners[6] = make_58275_50744020();
   scope->inners[7] = make_58284_54666600();
   scope->inners[8] = make_58316_54808360();
   scope->inners[9] = make_58317_54808340();
   scope->inners[10] = make_58314_54808280();
   scope->inners[11] = make_58315_54808200();
   scope->inners[12] = make_58329_54957880();
   scope->inners[13] = makevalue__z0_55188260();
   scope->inners[14] = makevalue__a0_55507800();
   scope->inners[15] = makeflag__z0_55507780();
   scope->inners[16] = makeack__a0_55507720();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58267_55660540();
   scope->scopes[1] = makechannel__accum_58282_57573320();
   scope->scopes[2] = makemac__n1_58307_45885340();
   scope->scopes[3] = makechannel__b0_58312_55707000();
   scope->scopes[4] = makechannel__z_58327_57134480();
   scope->scopes[5] = makeadd__n_58350_57679400();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57590060();
   scope->behaviors[1] = make__46128380();
   scope->behaviors[2] = make__48846920();
   scope->behaviors[3] = make__54621360();
   scope->behaviors[4] = make__54666980();
   scope->behaviors[5] = make__54666660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_48843960() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_48843960 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_48877220();
   systemT->inputs[1] = makerst_48877180();
   systemT->inputs[2] = makereq_48877160();
   systemT->inputs[3] = make_58110_49350620();
   systemT->inputs[4] = make_58111_49984980();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_49984920();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58112_49984800();
   systemT->inouts[1] = make_5876_50219700();

   systemT->scope = makelayer1_58_84_55660900();

   return systemT;
}