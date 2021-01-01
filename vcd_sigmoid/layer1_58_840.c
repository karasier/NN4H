#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_48394520;

SignalI clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeclk_48428900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_840_48394520;
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

SignalI rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makerst_48428640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_840_48394520;
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

SignalI req_48428580_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makereq_48428580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_48428580_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_840_48394520;
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

SignalI _58110_48713820_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI make_58110_48713820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58110_48713820_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_840_48394520;
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

SignalI _58111_49147400_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI make_58111_49147400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58111_49147400_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_840_48394520;
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

SignalI ack__layer_49147340_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeack__layer_49147340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_49147340_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_840_48394520;
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

SignalI _58112_49147240_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI make_58112_49147240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58112_49147240_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_840_48394520;
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

SignalI _5876_49362900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI make_5876_49362900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5876_49362900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_840_48394520;
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

Block __56890720;

Block __56890440;

void code__56890440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54800220(),ack_49755880_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54799880(),ack__mac_49755800_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54799680(),ack__add_49755740_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__56890440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56890440 = block;
   block->owner = (Object)__56890720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56890440;

   return block;
};

void code__56890720() {
   {
      Value cond = rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56890440();
   }
      }
   }
}

Block make__56890720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56890720 = block;
   block->owner = (Object)__56889140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56890720;

   return block;
};

Block __56888960;

Block __56888040;

Block __56887720;

void code__56887720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_54519100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,value__z0_54600480_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54799280(),flag__z0_54782320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__56887720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56887720 = block;
   block->owner = (Object)__56888040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56887720;

   return block;
};

void code__56888040() {
 code__56887720();
}

Block make__56888040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56888040 = block;
   block->owner = (Object)__56888960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56888040;

   return block;
};

Block __56888580;

void code__56888580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54799180(),flag__z0_54782320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__56888580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56888580 = block;
   block->owner = (Object)__56888960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56888580;

   return block;
};

void code__56888960() {
   {
      Value cond = ack__add_49755740_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56888040();
   }
   else {
  code__56888580();
   }
      }
   }
}

Block make__56888960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56888960 = block;
   block->owner = (Object)__45970680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56888960;

   return block;
};

Block __45969660;

Block __45968620;

void code__45968620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54799080(),ack__a0_54782280_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__45968620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45968620 = block;
   block->owner = (Object)__45969660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45968620;

   return block;
};

Block __45983880;

Block __45983460;

void code__45983460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_54782340_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,_5876_49362900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54797080(),ack__a0_54782280_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__45983460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45983460 = block;
   block->owner = (Object)__45983880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45983460;

   return block;
};

void code__45983880() {
 code__45983460();
}

Block make__45983880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45983880 = block;
   block->owner = (Object)__45969660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45983880;

   return block;
};

void code__45969660() {
   {
      Value cond = rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45968620();
   }
   else if (value2integer(flag__z0_54782320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value)) {
  code__45983880();
   }
      }
   }
}

Block make__45969660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45969660 = block;
   block->owner = (Object)__48395660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45969660;

   return block;
};

Block __53838620;

void code__53838620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_48428580_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_49755800_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_49755900_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__53838620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53838620 = block;
   block->owner = (Object)__53960620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53838620;

   return block;
};

Block __53839000;

void code__53839000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,clk_54796580_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_49755880_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,ack_54796560_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,rst_54796540_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_54600480_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,z__value_55625300_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_54782280_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,ack__layer_49147340_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__53839000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53839000 = block;
   block->owner = (Object)__54056280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53839000;

   return block;
};

Block __53838920;

void code__53838920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_54796500_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,ack__mac_49755800_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,_58317_54238120_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_55808040_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,value__a0_54782340_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__53838920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53838920 = block;
   block->owner = (Object)__54056020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53838920;

   return block;
};

Block __56202220;

void code__56202220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55804420_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
            idx = value2integer(abus__r_55054300_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55054460_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__56202220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56202220 = block;
   block->owner = (Object)__56750260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56202220;

   return block;
};

Block __54054600;

void code__54054600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55054460_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,_58276_53793320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54054600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54054600 = block;
   block->owner = (Object)__54054280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54054600;

   return block;
};

Block __54054200;

void code__54054200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58276_53793320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,dbus__r_55054460_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54054200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54054200 = block;
   block->owner = (Object)__54053940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54054200;

   return block;
};

Block __54053540;

void code__54053540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_54949980_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,_58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54053540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54053540 = block;
   block->owner = (Object)__54053220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54053540;

   return block;
};

Block __54053020;

void code__54053020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,trig__r_54949980_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54053020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54053020 = block;
   block->owner = (Object)__54052820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54053020;

   return block;
};

Block __54052280;

void code__54052280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55054300_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,_58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54052280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54052280 = block;
   block->owner = (Object)__54051800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54052280;

   return block;
};

Block __54051760;

void code__54051760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,abus__r_55054300_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54051760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54051760 = block;
   block->owner = (Object)__54051480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54051760;

   return block;
};

Block __54171960;

void code__54171960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57012640_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,_58284_53957420_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54171960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54171960 = block;
   block->owner = (Object)__54171680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54171960;

   return block;
};

Block __54171580;

void code__54171580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_53957420_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,reg__0_57012640_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54171580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54171580 = block;
   block->owner = (Object)__54171360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54171580;

   return block;
};

Block __48391280;

Block __48391040;

Block __48414120;

void code__48414120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54685020(),_58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__48414120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48414120 = block;
   block->owner = (Object)__48391040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48414120;

   return block;
};

void code__48391040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54685160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48414120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54684940(),_58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__48391040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48391040 = block;
   block->owner = (Object)__48391280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48391040;

   return block;
};

Block __48413060;

Block __48412380;

void code__48412380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54684700(),_58112_49147240_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__48412380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48412380 = block;
   block->owner = (Object)__48413060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48412380;

   return block;
};

void code__48413060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54684860();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48412380();
   }
      }
   }
}

Block make__48413060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48413060 = block;
   block->owner = (Object)__48391280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48413060;

   return block;
};

Block __48408280;

void code__48408280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54684180(),rvok_48391720_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54683980(),lvok0_48391740_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54683880(),wok0_48391660_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__48408280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48408280 = block;
   block->owner = (Object)__48391280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48408280;

   return block;
};

Block __48651260;

Block __48650260;

Block __48649880;

Block __48648860;

Block __48646920;

void code__48646920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58110_48713820_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,rv_48391780_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__48646920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48646920 = block;
   block->owner = (Object)__48648860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48646920;

   return block;
};

Block __49192980;

void code__49192980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58111_49147400_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,rv_48391780_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49192980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49192980 = block;
   block->owner = (Object)__48648860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49192980;

   return block;
};

void code__48648860() {
{
      Value value = _58112_49147240_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__54683180())) {
    code__48646920();
         }
         else if (value2integer(value) == value2integer(make__54683000())) {
    code__49192980();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54682700(),rvok_48391720_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
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
                  src0 = _58112_49147240_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
                  src1 = make__54682600();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__54682560();
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
                        src0 = _58112_49147240_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__54682320();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__54682240();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58112_49147240_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__48648860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48648860 = block;
   block->owner = (Object)__48649880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48648860;

   return block;
};

void code__48649880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54683420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48648860();
   }
      }
   }
}

Block make__48649880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48649880 = block;
   block->owner = (Object)__48650260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48649880;

   return block;
};

void code__48650260() {
 code__48649880();
}

Block make__48650260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48650260 = block;
   block->owner = (Object)__48651260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48650260;

   return block;
};

Block __49599820;

Block __49599640;

Block __49598560;

Block __49617120;

Block __49616220;

void code__49616220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58276_53793320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,lv0_46828920_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54755140(),lvok0_48391740_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49616220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49616220 = block;
   block->owner = (Object)__49617120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49616220;

   return block;
};

void code__49617120() {
 code__49616220();
}

Block make__49617120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49617120 = block;
   block->owner = (Object)__49598560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49617120;

   return block;
};

Block __49597480;

void code__49597480() {
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
                  src0 = _58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
                  src1 = make__54754920();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__54754800();
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
                        src0 = _58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__54754400();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__54754340();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54754160(),_58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49597480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49597480 = block;
   block->owner = (Object)__49598560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49597480;

   return block;
};

void code__49598560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54681800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49617120();
   }
   else {
  code__49597480();
   }
      }
   }
}

Block make__49598560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49598560 = block;
   block->owner = (Object)__49599640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49598560;

   return block;
};

void code__49599640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54681980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49598560();
   }
      }
   }
}

Block make__49599640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49599640 = block;
   block->owner = (Object)__49599820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49599640;

   return block;
};

void code__49599820() {
 code__49599640();
}

Block make__49599820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49599820 = block;
   block->owner = (Object)__48651260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49599820;

   return block;
};

Block __53806940;

Block __53806220;

Block __53806040;

void code__53806040() {
}

Block make__53806040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53806040 = block;
   block->owner = (Object)__53806220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53806040;

   return block;
};

Block __54781340;

void code__54781340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_48023220_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,_58284_53957420_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54753060(),wok0_48391660_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54781340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54781340 = block;
   block->owner = (Object)__53806220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54781340;

   return block;
};

void code__53806220() {
 code__53806040();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_48023220_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
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
                              src0 = lv0_46828920_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48391780_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__54753460();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_48023220_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
 code__54781340();
}

Block make__53806220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53806220 = block;
   block->owner = (Object)__53806940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53806220;

   return block;
};

void code__53806940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54753920(),ack_49755880_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54753860(),run_48391640_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
 code__53806220();
}

Block make__53806940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53806940 = block;
   block->owner = (Object)__48651260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53806940;

   return block;
};

Block __54974820;

void code__54974820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54752780(),wok0_48391660_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54752700(),lvok0_48391740_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54752580(),rvok_48391720_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54974820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54974820 = block;
   block->owner = (Object)__48651260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54974820;

   return block;
};

void code__48651260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54683620(),run_48391640_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_48391720_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48650260();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_48391740_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49599820();
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
               src0 = lvok0_48391740_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               src1 = rvok_48391720_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_48391660_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53806940();
   }
      }
   }
   {
      Value cond = wok0_48391660_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54974820();
   }
      }
   }
}

Block make__48651260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48651260 = block;
   block->owner = (Object)__48391280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48651260;

   return block;
};

Block __48430560;

void code__48430560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54752440(),av0_48023220_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__48430560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48430560 = block;
   block->owner = (Object)__48391280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48430560;

   return block;
};

void code__48391280() {
 code__48391040();
 code__48413060();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54684580(),ack_49755880_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54684480(),run_48391640_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_48391640_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48408280();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_49755900_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
         src1 = run_48391640_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48651260();
   }
   else {
  code__48430560();
   }
      }
   }
}

Block make__48391280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48391280 = block;
   block->owner = (Object)__54973340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48391280;

   return block;
};

Block __55793200;

void code__55793200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55407900_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
            idx = value2integer(abus__r_55147680_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55147780_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__55793200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55793200 = block;
   block->owner = (Object)__56334940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55793200;

   return block;
};

Block __54168520;

void code__54168520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55147780_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,_58316_54238140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54168520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54168520 = block;
   block->owner = (Object)__54168360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54168520;

   return block;
};

Block __54168320;

void code__54168320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_54238140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,dbus__r_55147780_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54168320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54168320 = block;
   block->owner = (Object)__54168100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54168320;

   return block;
};

Block __54167440;

void code__54167440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_54971140_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,_58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54167440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54167440 = block;
   block->owner = (Object)__54167220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54167440;

   return block;
};

Block __54167120;

void code__54167120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,trig__r_54971140_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54167120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54167120 = block;
   block->owner = (Object)__54166940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54167120;

   return block;
};

Block __54166500;

void code__54166500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55147680_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,_58315_54238020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54166500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54166500 = block;
   block->owner = (Object)__54166200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54166500;

   return block;
};

Block __54166140;

void code__54166140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_54238020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,abus__r_55147680_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54166140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54166140 = block;
   block->owner = (Object)__54165880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54166140;

   return block;
};

Block __54270240;

void code__54270240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56621420_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,_58329_54519100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54270240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54270240 = block;
   block->owner = (Object)__54270000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54270240;

   return block;
};

Block __54269920;

void code__54269920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_54519100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,reg__0_56621420_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__54269920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54269920 = block;
   block->owner = (Object)__54269640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54269920;

   return block;
};

Block __46257080;

Block __46256600;

void code__46256600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54750520(),_58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__46256600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46256600 = block;
   block->owner = (Object)__46257080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46256600;

   return block;
};

Block __46596380;

Block __46618140;

void code__46618140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_53957420_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,lv0_57169420_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54749560(),lvok0_46260100_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__46618140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46618140 = block;
   block->owner = (Object)__46596380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46618140;

   return block;
};

Block __48139680;

Block __48137820;

Block __48215320;

void code__48215320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_54238140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value,rv0_46236760_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54748760(),_58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54748700(),rvok0_46257540_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__48215320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48215320 = block;
   block->owner = (Object)__48137820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48215320;

   return block;
};

Block __48156720;

void code__48156720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54748640(),_58315_54238020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54748580(),_58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__48156720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48156720 = block;
   block->owner = (Object)__48137820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48156720;

   return block;
};

void code__48137820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54748960();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48215320();
   }
   else {
  code__48156720();
   }
      }
   }
}

Block make__48137820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48137820 = block;
   block->owner = (Object)__48139680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48137820;

   return block;
};

void code__48139680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58317_54238120_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54749140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48137820();
   }
      }
   }
}

Block make__48139680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48139680 = block;
   block->owner = (Object)__46596380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48139680;

   return block;
};

Block __48953980;

Block __48953040;

void code__48953040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_57169420_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
      src1 = rv0_46236760_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58329_54519100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__48953040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48953040 = block;
   block->owner = (Object)__48953980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48953040;

   return block;
};

void code__48953980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54748380(),run_46257380_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54748320(),ack__add_49755740_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
 code__48953040();
}

Block make__48953980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48953980 = block;
   block->owner = (Object)__46596380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48953980;

   return block;
};

void code__46596380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54749860(),run_46257380_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
 code__46618140();
 code__48139680();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_46260100_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
         src1 = rvok0_46257540_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48953980();
   }
      }
   }
}

Block make__46596380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46596380 = block;
   block->owner = (Object)__46257080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46596380;

   return block;
};

Block __46289420;

void code__46289420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54747920(),lvok0_46260100_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54747820(),rvok0_46257540_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__46289420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46289420 = block;
   block->owner = (Object)__46257080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46289420;

   return block;
};

void code__46257080() {
 code__46256600();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54750380(),ack__add_49755740_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54750320(),run_46257380_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_49755800_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
         src1 = run_46257380_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46596380();
   }
   else {
  code__46289420();
   }
      }
   }
}

Block make__46257080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46257080 = block;
   block->owner = (Object)__49756260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46257080;

   return block;
};

Value make__54687180() {
   static unsigned long long data[] = { 4294967244ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54687160() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54752420() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__54685160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54685020() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54684940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54684860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54684700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54684580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54684480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54684180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54683980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54683880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54683620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54683420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54683180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54683000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54682700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54682600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54682560() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54682320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54682240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54681980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54681800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54755140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54754920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54754800() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54754400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54754340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54754160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54753920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54753860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54753460() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54753060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54752780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54752700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54752580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54752440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54750520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54750380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54750320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54749860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54749560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54749140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54748960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54748760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54748700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54748640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54748580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54748380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54748320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54747920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54747820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54800220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54799880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54799680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54799280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54799180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54799080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54797080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_54927880;

SignalI req__mac_49755900_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makereq__mac_49755900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_49755900_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI ack_49755880_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeack_49755880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_49755880_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI ack__mac_49755800_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeack__mac_49755800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_49755800_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI ack__add_49755740_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeack__add_49755740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_49755740_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI _58276_53793320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI make_58276_53793320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58276_53793320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI _58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI make_58274_53793300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI _58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI make_58275_53793200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI _58284_53957420_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI make_58284_53957420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58284_53957420_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI _58316_54238140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI make_58316_54238140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58316_54238140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI _58317_54238120_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI make_58317_54238120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58317_54238120_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI _58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI make_58314_54238100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI _58315_54238020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI make_58315_54238020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_54238020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI _58329_54519100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI make_58329_54519100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58329_54519100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI value__z0_54600480_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makevalue__z0_54600480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_54600480_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI value__a0_54782340_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makevalue__a0_54782340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_54782340_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI flag__z0_54782320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeflag__z0_54782320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_54782320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SignalI ack__a0_54782280_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeack__a0_54782280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_54782280_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)layer1_58_84_54927880;
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

SystemI counter_54796360;

SystemI makecounter_54796360() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_54796360 = systemI;
   systemI->owner = (Object)layer1_58_84_54927880;
   systemI->name = "counter";
   systemI->system = counter_58_8400_54799020;

   return systemI;
};

SystemI func0_55807780;

SystemI makefunc0_55807780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_55807780 = systemI;
   systemI->owner = (Object)layer1_58_84_54927880;
   systemI->name = "func0";
   systemI->system = func0_58_8400_55382140;

   return systemI;
};

Scope channel__w0_58267_54927580;

SignalI trig__r_54949980_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI maketrig__r_54949980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_54949980_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)channel__w0_58267_54927580;
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

SignalI dbus__r_55054460_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makedbus__r_55054460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55054460_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)channel__w0_58267_54927580;
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

SignalI abus__r_55054300_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeabus__r_55054300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55054300_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)channel__w0_58267_54927580;
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

SignalI mem_55804420_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makemem_55804420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55804420_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)channel__w0_58267_54927580;
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
         src0 = make__54687180();
         src1 = make__54687160();
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

Scope raddr_58268_54951780;

Scope makeraddr_58268_54951780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58268_54951780 = scope;
   scope->owner = (Object)channel__w0_58267_54927580;
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

Scope rinc_58273_54951240;

Scope makerinc_58273_54951240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_54951240 = scope;
   scope->owner = (Object)channel__w0_58267_54927580;
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

Scope rdec_58277_54950760;

Scope makerdec_58277_54950760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58277_54950760 = scope;
   scope->owner = (Object)channel__w0_58267_54927580;
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

Behavior __56750260;

Behavior make__56750260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56750260 = behavior;
   behavior->owner = (Object)channel__w0_58267_54927580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_neg += 1;
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->neg = realloc(clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->neg,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_neg*sizeof(Object));
clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->neg[clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_neg-1] = (Object)behavior;
   behavior->block = make__56202220();

   return behavior;
}

Behavior __54054280;

Behavior make__54054280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54054280 = behavior;
   behavior->owner = (Object)channel__w0_58267_54927580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55054460_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   dbus__r_55054460_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   dbus__r_55054460_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(dbus__r_55054460_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,dbus__r_55054460_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
dbus__r_55054460_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[dbus__r_55054460_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54054600();

   return behavior;
}

Behavior __54053940;

Behavior make__54053940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54053940 = behavior;
   behavior->owner = (Object)channel__w0_58267_54927580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58276_53793320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   _58276_53793320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   _58276_53793320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(_58276_53793320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,_58276_53793320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
_58276_53793320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[_58276_53793320_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54054200();

   return behavior;
}

Behavior __54053220;

Behavior make__54053220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54053220 = behavior;
   behavior->owner = (Object)channel__w0_58267_54927580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_54949980_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   trig__r_54949980_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   trig__r_54949980_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(trig__r_54949980_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,trig__r_54949980_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
trig__r_54949980_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[trig__r_54949980_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54053540();

   return behavior;
}

Behavior __54052820;

Behavior make__54052820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54052820 = behavior;
   behavior->owner = (Object)channel__w0_58267_54927580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   _58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   _58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(_58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,_58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
_58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[_58274_53793300_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54053020();

   return behavior;
}

Behavior __54051800;

Behavior make__54051800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54051800 = behavior;
   behavior->owner = (Object)channel__w0_58267_54927580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55054300_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   abus__r_55054300_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   abus__r_55054300_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(abus__r_55054300_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,abus__r_55054300_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
abus__r_55054300_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[abus__r_55054300_channel__w0_58267_54927580_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54052280();

   return behavior;
}

Behavior __54051480;

Behavior make__54051480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54051480 = behavior;
   behavior->owner = (Object)channel__w0_58267_54927580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   _58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   _58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(_58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,_58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
_58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[_58275_53793200_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54051760();

   return behavior;
}

Scope makechannel__w0_58267_54927580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58267_54927580 = scope;
   scope->owner = (Object)layer1_58_84_54927880;
   scope->name = "channel_w0:267";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_54949980();
   scope->inners[1] = makedbus__r_55054460();
   scope->inners[2] = makeabus__r_55054300();
   scope->inners[3] = makemem_55804420();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58268_54951780();
   scope->scopes[1] = makerinc_58273_54951240();
   scope->scopes[2] = makerdec_58277_54950760();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56750260();
   scope->behaviors[1] = make__54054280();
   scope->behaviors[2] = make__54053940();
   scope->behaviors[3] = make__54053220();
   scope->behaviors[4] = make__54052820();
   scope->behaviors[5] = make__54051800();
   scope->behaviors[6] = make__54051480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58282_56750140;

SignalI reg__0_57012640_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makereg__0_57012640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_57012640_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)channel__accum_58282_56750140;
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

Scope anum_58283_56749800;

Scope makeanum_58283_56749800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58283_56749800 = scope;
   scope->owner = (Object)channel__accum_58282_56750140;
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

Scope raddr_58285_56749260;

Scope makeraddr_58285_56749260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58285_56749260 = scope;
   scope->owner = (Object)channel__accum_58282_56750140;
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

Scope waddr_58288_56748760;

Scope makewaddr_58288_56748760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58288_56748760 = scope;
   scope->owner = (Object)channel__accum_58282_56750140;
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

Scope rinc_58291_56748240;

SignalI abus__r_56747760_rinc_58291_56748240_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeabus__r_56747760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56747760_rinc_58291_56748240_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)rinc_58291_56748240;
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

Scope makerinc_58291_56748240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58291_56748240 = scope;
   scope->owner = (Object)channel__accum_58282_56750140;
   scope->name = "rinc:291";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56747760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58295_56747580;

SignalI abus__w_56747200_winc_58295_56747580_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeabus__w_56747200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56747200_winc_58295_56747580_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)winc_58295_56747580;
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

Scope makewinc_58295_56747580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58295_56747580 = scope;
   scope->owner = (Object)channel__accum_58282_56750140;
   scope->name = "winc:295";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56747200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58299_56747040;

SignalI abus__r_56746540_rdec_58299_56747040_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeabus__r_56746540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56746540_rdec_58299_56747040_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)rdec_58299_56747040;
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

Scope makerdec_58299_56747040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58299_56747040 = scope;
   scope->owner = (Object)channel__accum_58282_56750140;
   scope->name = "rdec:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56746540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58303_56746380;

SignalI abus__w_56844220_wdec_58303_56746380_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeabus__w_56844220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56844220_wdec_58303_56746380_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)wdec_58303_56746380;
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

Scope makewdec_58303_56746380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58303_56746380 = scope;
   scope->owner = (Object)channel__accum_58282_56750140;
   scope->name = "wdec:303";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56844220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54171680;

Behavior make__54171680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54171680 = behavior;
   behavior->owner = (Object)channel__accum_58282_56750140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57012640_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   reg__0_57012640_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   reg__0_57012640_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(reg__0_57012640_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,reg__0_57012640_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
reg__0_57012640_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[reg__0_57012640_channel__accum_58282_56750140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54171960();

   return behavior;
}

Behavior __54171360;

Behavior make__54171360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54171360 = behavior;
   behavior->owner = (Object)channel__accum_58282_56750140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58284_53957420_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   _58284_53957420_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   _58284_53957420_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(_58284_53957420_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,_58284_53957420_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
_58284_53957420_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[_58284_53957420_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54171580();

   return behavior;
}

Scope makechannel__accum_58282_56750140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58282_56750140 = scope;
   scope->owner = (Object)layer1_58_84_54927880;
   scope->name = "channel_accum:282";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_57012640();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58283_56749800();
   scope->scopes[1] = makeraddr_58285_56749260();
   scope->scopes[2] = makewaddr_58288_56748760();
   scope->scopes[3] = makerinc_58291_56748240();
   scope->scopes[4] = makewinc_58295_56747580();
   scope->scopes[5] = makerdec_58299_56747040();
   scope->scopes[6] = makewdec_58303_56746380();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54171680();
   scope->behaviors[1] = make__54171360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58307_45951840;

SignalI lv0_46828920_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makelv0_46828920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_46828920_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)mac__n1_58307_45951840;
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

SignalI av0_48023220_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeav0_48023220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_48023220_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)mac__n1_58307_45951840;
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

SignalI rv_48391780_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makerv_48391780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_48391780_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)mac__n1_58307_45951840;
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

SignalI lvok0_48391740_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makelvok0_48391740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_48391740_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)mac__n1_58307_45951840;
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

SignalI rvok_48391720_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makervok_48391720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_48391720_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)mac__n1_58307_45951840;
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

SignalI wok0_48391660_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makewok0_48391660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_48391660_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)mac__n1_58307_45951840;
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

SignalI run_48391640_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makerun_48391640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_48391640_mac__n1_58307_45951840_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)mac__n1_58307_45951840;
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

Behavior __54973340;

Behavior make__54973340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54973340 = behavior;
   behavior->owner = (Object)mac__n1_58307_45951840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos += 1;
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos = realloc(clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos*sizeof(Object));
clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos[clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos-1] = (Object)behavior;
   behavior->block = make__48391280();

   return behavior;
}

Scope makemac__n1_58307_45951840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58307_45951840 = scope;
   scope->owner = (Object)layer1_58_84_54927880;
   scope->name = "mac_n1:307";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_46828920();
   scope->inners[1] = makeav0_48023220();
   scope->inners[2] = makerv_48391780();
   scope->inners[3] = makelvok0_48391740();
   scope->inners[4] = makervok_48391720();
   scope->inners[5] = makewok0_48391660();
   scope->inners[6] = makerun_48391640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54973340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58312_54973220;

SignalI trig__r_54971140_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI maketrig__r_54971140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_54971140_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)channel__b0_58312_54973220;
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

SignalI dbus__r_55147780_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makedbus__r_55147780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55147780_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)channel__b0_58312_54973220;
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

SignalI abus__r_55147680_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeabus__r_55147680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55147680_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)channel__b0_58312_54973220;
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

SignalI mem_55407900_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makemem_55407900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55407900_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)channel__b0_58312_54973220;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__54752420(),signalI->c_value);
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

Scope raddr_58313_54972920;

Scope makeraddr_58313_54972920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58313_54972920 = scope;
   scope->owner = (Object)channel__b0_58312_54973220;
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

Scope rinc_58318_54972460;

Scope makerinc_58318_54972460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58318_54972460 = scope;
   scope->owner = (Object)channel__b0_58312_54973220;
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

Scope rdec_58322_54971820;

Scope makerdec_58322_54971820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58322_54971820 = scope;
   scope->owner = (Object)channel__b0_58312_54973220;
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

Behavior __56334940;

Behavior make__56334940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56334940 = behavior;
   behavior->owner = (Object)channel__b0_58312_54973220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_neg += 1;
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->neg = realloc(clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->neg,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_neg*sizeof(Object));
clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->neg[clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_neg-1] = (Object)behavior;
   behavior->block = make__55793200();

   return behavior;
}

Behavior __54168360;

Behavior make__54168360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54168360 = behavior;
   behavior->owner = (Object)channel__b0_58312_54973220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55147780_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   dbus__r_55147780_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   dbus__r_55147780_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(dbus__r_55147780_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,dbus__r_55147780_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
dbus__r_55147780_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[dbus__r_55147780_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54168520();

   return behavior;
}

Behavior __54168100;

Behavior make__54168100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54168100 = behavior;
   behavior->owner = (Object)channel__b0_58312_54973220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58316_54238140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   _58316_54238140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   _58316_54238140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(_58316_54238140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,_58316_54238140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
_58316_54238140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[_58316_54238140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54168320();

   return behavior;
}

Behavior __54167220;

Behavior make__54167220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54167220 = behavior;
   behavior->owner = (Object)channel__b0_58312_54973220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_54971140_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   trig__r_54971140_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   trig__r_54971140_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(trig__r_54971140_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,trig__r_54971140_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
trig__r_54971140_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[trig__r_54971140_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54167440();

   return behavior;
}

Behavior __54166940;

Behavior make__54166940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54166940 = behavior;
   behavior->owner = (Object)channel__b0_58312_54973220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   _58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   _58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(_58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,_58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
_58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[_58314_54238100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54167120();

   return behavior;
}

Behavior __54166200;

Behavior make__54166200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54166200 = behavior;
   behavior->owner = (Object)channel__b0_58312_54973220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55147680_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   abus__r_55147680_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   abus__r_55147680_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(abus__r_55147680_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,abus__r_55147680_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
abus__r_55147680_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[abus__r_55147680_channel__b0_58312_54973220_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54166500();

   return behavior;
}

Behavior __54165880;

Behavior make__54165880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54165880 = behavior;
   behavior->owner = (Object)channel__b0_58312_54973220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_54238020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   _58315_54238020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   _58315_54238020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(_58315_54238020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,_58315_54238020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
_58315_54238020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[_58315_54238020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54166140();

   return behavior;
}

Scope makechannel__b0_58312_54973220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58312_54973220 = scope;
   scope->owner = (Object)layer1_58_84_54927880;
   scope->name = "channel_b0:312";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_54971140();
   scope->inners[1] = makedbus__r_55147780();
   scope->inners[2] = makeabus__r_55147680();
   scope->inners[3] = makemem_55407900();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58313_54972920();
   scope->scopes[1] = makerinc_58318_54972460();
   scope->scopes[2] = makerdec_58322_54971820();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56334940();
   scope->behaviors[1] = make__54168360();
   scope->behaviors[2] = make__54168100();
   scope->behaviors[3] = make__54167220();
   scope->behaviors[4] = make__54166940();
   scope->behaviors[5] = make__54166200();
   scope->behaviors[6] = make__54165880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58327_56334820;

SignalI reg__0_56621420_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makereg__0_56621420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56621420_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)channel__z_58327_56334820;
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

Scope anum_58328_56334520;

Scope makeanum_58328_56334520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58328_56334520 = scope;
   scope->owner = (Object)channel__z_58327_56334820;
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

Scope raddr_58330_56334060;

Scope makeraddr_58330_56334060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58330_56334060 = scope;
   scope->owner = (Object)channel__z_58327_56334820;
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

Scope waddr_58333_56333460;

Scope makewaddr_58333_56333460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58333_56333460 = scope;
   scope->owner = (Object)channel__z_58327_56334820;
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

Scope rinc_58336_56332760;

SignalI abus__r_56332380_rinc_58336_56332760_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeabus__r_56332380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56332380_rinc_58336_56332760_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)rinc_58336_56332760;
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

Scope makerinc_58336_56332760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58336_56332760 = scope;
   scope->owner = (Object)channel__z_58327_56334820;
   scope->name = "rinc:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56332380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58339_56332260;

SignalI abus__w_56331880_winc_58339_56332260_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeabus__w_56331880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56331880_winc_58339_56332260_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)winc_58339_56332260;
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

Scope makewinc_58339_56332260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58339_56332260 = scope;
   scope->owner = (Object)channel__z_58327_56334820;
   scope->name = "winc:339";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56331880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58342_56331740;

SignalI abus__r_56331040_rdec_58342_56331740_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeabus__r_56331040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56331040_rdec_58342_56331740_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)rdec_58342_56331740;
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

Scope makerdec_58342_56331740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58342_56331740 = scope;
   scope->owner = (Object)channel__z_58327_56334820;
   scope->name = "rdec:342";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56331040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58346_56330860;

SignalI abus__w_56330380_wdec_58346_56330860_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeabus__w_56330380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56330380_wdec_58346_56330860_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)wdec_58346_56330860;
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

Scope makewdec_58346_56330860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58346_56330860 = scope;
   scope->owner = (Object)channel__z_58327_56334820;
   scope->name = "wdec:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56330380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54270000;

Behavior make__54270000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54270000 = behavior;
   behavior->owner = (Object)channel__z_58327_56334820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56621420_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   reg__0_56621420_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   reg__0_56621420_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(reg__0_56621420_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,reg__0_56621420_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
reg__0_56621420_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[reg__0_56621420_channel__z_58327_56334820_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54270240();

   return behavior;
}

Behavior __54269640;

Behavior make__54269640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54269640 = behavior;
   behavior->owner = (Object)channel__z_58327_56334820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58329_54519100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   _58329_54519100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   _58329_54519100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(_58329_54519100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,_58329_54519100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
_58329_54519100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[_58329_54519100_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__54269920();

   return behavior;
}

Scope makechannel__z_58327_56334820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58327_56334820 = scope;
   scope->owner = (Object)layer1_58_84_54927880;
   scope->name = "channel_z:327";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56621420();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58328_56334520();
   scope->scopes[1] = makeraddr_58330_56334060();
   scope->scopes[2] = makewaddr_58333_56333460();
   scope->scopes[3] = makerinc_58336_56332760();
   scope->scopes[4] = makewinc_58339_56332260();
   scope->scopes[5] = makerdec_58342_56331740();
   scope->scopes[6] = makewdec_58346_56330860();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54270000();
   scope->behaviors[1] = make__54269640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58350_57011140;

SignalI lv0_57169420_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makelv0_57169420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_57169420_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)add__n_58350_57011140;
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

SignalI rv0_46236760_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makerv0_46236760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_46236760_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)add__n_58350_57011140;
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

SignalI lvok0_46260100_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makelvok0_46260100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_46260100_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)add__n_58350_57011140;
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

SignalI rvok0_46257540_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makervok0_46257540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_46257540_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)add__n_58350_57011140;
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

SignalI run_46257380_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makerun_46257380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_46257380_add__n_58350_57011140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)add__n_58350_57011140;
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

Behavior __49756260;

Behavior make__49756260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49756260 = behavior;
   behavior->owner = (Object)add__n_58350_57011140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos += 1;
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos = realloc(clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos*sizeof(Object));
clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos[clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos-1] = (Object)behavior;
   behavior->block = make__46257080();

   return behavior;
}

Scope makeadd__n_58350_57011140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58350_57011140 = scope;
   scope->owner = (Object)layer1_58_84_54927880;
   scope->name = "add_n:350";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_57169420();
   scope->inners[1] = makerv0_46236760();
   scope->inners[2] = makelvok0_46260100();
   scope->inners[3] = makervok0_46257540();
   scope->inners[4] = makerun_46257380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49756260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56889140;

Behavior make__56889140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56889140 = behavior;
   behavior->owner = (Object)layer1_58_84_54927880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos += 1;
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos = realloc(clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos*sizeof(Object));
clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos[clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos-1] = (Object)behavior;
   behavior->block = make__56890720();

   return behavior;
}

Behavior __45970680;

Behavior make__45970680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45970680 = behavior;
   behavior->owner = (Object)layer1_58_84_54927880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos += 1;
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos = realloc(clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos*sizeof(Object));
clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos[clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos-1] = (Object)behavior;
   behavior->block = make__56888960();

   return behavior;
}

Behavior __48395660;

Behavior make__48395660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48395660 = behavior;
   behavior->owner = (Object)layer1_58_84_54927880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos += 1;
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos = realloc(clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos*sizeof(Object));
clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->pos[clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_pos-1] = (Object)behavior;
   behavior->block = make__45969660();

   return behavior;
}

Behavior __53960620;

Behavior make__53960620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53960620 = behavior;
   behavior->owner = (Object)layer1_58_84_54927880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_48428580_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   req_48428580_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   req_48428580_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(req_48428580_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,req_48428580_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
req_48428580_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[req_48428580_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_49755800_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   ack__mac_49755800_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   ack__mac_49755800_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(ack__mac_49755800_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,ack__mac_49755800_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
ack__mac_49755800_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[ack__mac_49755800_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__53838620();

   return behavior;
}

Behavior __54056280;

Behavior make__54056280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54056280 = behavior;
   behavior->owner = (Object)layer1_58_84_54927880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[clk_48428900_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_49755880_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   ack_49755880_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   ack_49755880_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(ack_49755880_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,ack_49755880_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
ack_49755880_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[ack_49755880_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_54600480_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   value__z0_54600480_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   value__z0_54600480_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(value__z0_54600480_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,value__z0_54600480_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
value__z0_54600480_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[value__z0_54600480_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_54782280_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   ack__a0_54782280_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   ack__a0_54782280_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(ack__a0_54782280_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,ack__a0_54782280_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
ack__a0_54782280_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[ack__a0_54782280_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__53839000();

   return behavior;
}

Behavior __54056020;

Behavior make__54056020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54056020 = behavior;
   behavior->owner = (Object)layer1_58_84_54927880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_54796500_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   ack__mac_54796500_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   ack__mac_54796500_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(ack__mac_54796500_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,ack__mac_54796500_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
ack__mac_54796500_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[ack__mac_54796500_counter_58_8400_54799020_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[rst_48428640_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_55808040_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   a_55808040_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   a_55808040_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(a_55808040_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,a_55808040_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
a_55808040_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[a_55808040_func0_58_8400_55382140_layer1_58_84_54927880_layer1_58_840_48394520_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__53838920();

   return behavior;
}

Scope makelayer1_58_84_54927880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_54927880 = scope;
   scope->owner = (Object)layer1_58_840_48394520;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_54796360();
   scope->systemIs[1] = makefunc0_55807780();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_49755900();
   scope->inners[1] = makeack_49755880();
   scope->inners[2] = makeack__mac_49755800();
   scope->inners[3] = makeack__add_49755740();
   scope->inners[4] = make_58276_53793320();
   scope->inners[5] = make_58274_53793300();
   scope->inners[6] = make_58275_53793200();
   scope->inners[7] = make_58284_53957420();
   scope->inners[8] = make_58316_54238140();
   scope->inners[9] = make_58317_54238120();
   scope->inners[10] = make_58314_54238100();
   scope->inners[11] = make_58315_54238020();
   scope->inners[12] = make_58329_54519100();
   scope->inners[13] = makevalue__z0_54600480();
   scope->inners[14] = makevalue__a0_54782340();
   scope->inners[15] = makeflag__z0_54782320();
   scope->inners[16] = makeack__a0_54782280();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58267_54927580();
   scope->scopes[1] = makechannel__accum_58282_56750140();
   scope->scopes[2] = makemac__n1_58307_45951840();
   scope->scopes[3] = makechannel__b0_58312_54973220();
   scope->scopes[4] = makechannel__z_58327_56334820();
   scope->scopes[5] = makeadd__n_58350_57011140();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56889140();
   scope->behaviors[1] = make__45970680();
   scope->behaviors[2] = make__48395660();
   scope->behaviors[3] = make__53960620();
   scope->behaviors[4] = make__54056280();
   scope->behaviors[5] = make__54056020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_48394520() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_48394520 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_48428900();
   systemT->inputs[1] = makerst_48428640();
   systemT->inputs[2] = makereq_48428580();
   systemT->inputs[3] = make_58110_48713820();
   systemT->inputs[4] = make_58111_49147400();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_49147340();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58112_49147240();
   systemT->inouts[1] = make_5876_49362900();

   systemT->scope = makelayer1_58_84_54927880();

   return systemT;
}