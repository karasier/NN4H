#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_841_52694860;

SignalI clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeclk_52708520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_841_52694860;
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

SignalI rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makerst_52708500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_841_52694860;
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

SignalI req_52708420_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereq_52708420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_52708420_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_841_52694860;
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

SignalI _58154_52906580_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58154_52906580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58154_52906580_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_841_52694860;
   signalI->name = ":154";
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

SignalI _58155_53116160_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58155_53116160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58155_53116160_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_841_52694860;
   signalI->name = ":155";
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

SignalI ack__layer_53116080_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__layer_53116080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_53116080_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_841_52694860;
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

SignalI _58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58156_53115660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_841_52694860;
   signalI->name = ":156";
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

SignalI _58120_53306040_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58120_53306040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58120_53306040_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_841_52694860;
   signalI->name = ":120";
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

Block __50911440;

Block __50910820;

void code__50910820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72212800(),ack_61386080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72212740(),ack__mac_61386060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72212680(),ack__add_61386040_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50910820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50910820 = block;
   block->owner = (Object)__50911440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50910820;

   return block;
};

void code__50911440() {
   {
      Value cond = rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50910820();
   }
      }
   }
}

Block make__50911440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50911440 = block;
   block->owner = (Object)__50907300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50911440;

   return block;
};

Block __50907000;

Block __50905800;

Block __51388320;

void code__51388320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58373_62051700_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,value__z0_62124740_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72253400(),flag__z0_62376220_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__51388320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51388320 = block;
   block->owner = (Object)__50905800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51388320;

   return block;
};

void code__50905800() {
 code__51388320();
}

Block make__50905800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50905800 = block;
   block->owner = (Object)__50907000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50905800;

   return block;
};

Block __50906440;

void code__50906440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72253340(),flag__z0_62376220_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50906440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50906440 = block;
   block->owner = (Object)__50907000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50906440;

   return block;
};

void code__50907000() {
   {
      Value cond = ack__add_61386040_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50905800();
   }
   else {
  code__50906440();
   }
      }
   }
}

Block make__50907000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50907000 = block;
   block->owner = (Object)__52258020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50907000;

   return block;
};

Block __52257800;

Block __52257120;

void code__52257120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72253200(),ack__a0_62376200_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52257120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52257120 = block;
   block->owner = (Object)__52257800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52257120;

   return block;
};

Block __52280480;

Block __52280140;

void code__52280140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_62376240_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58120_53306040_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72252900(),ack__a0_62376200_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52280140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52280140 = block;
   block->owner = (Object)__52280480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52280140;

   return block;
};

void code__52280480() {
 code__52280140();
}

Block make__52280480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52280480 = block;
   block->owner = (Object)__52257800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52280480;

   return block;
};

void code__52257800() {
   {
      Value cond = rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52257120();
   }
   else if (value2integer(flag__z0_62376220_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value)) {
  code__52280480();
   }
      }
   }
}

Block make__52257800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52257800 = block;
   block->owner = (Object)__52697680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52257800;

   return block;
};

Block __71890260;

void code__71890260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_52708420_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_61386060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_61386100_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71890260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71890260 = block;
   block->owner = (Object)__71889860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71890260;

   return block;
};

Block __71890520;

void code__71890520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,clk_62393420_counter_58_8400_62395620_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_61386080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,ack_62393400_counter_58_8400_62395620_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,rst_62393380_counter_58_8400_62395620_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_62124740_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,z__value_62742660_func0_58_8400_62571800_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_62376200_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,ack__layer_53116080_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71890520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71890520 = block;
   block->owner = (Object)__71907040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71890520;

   return block;
};

Block __71890440;

void code__71890440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_62393340_counter_58_8400_62395620_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,ack__mac_61386060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58361_61776860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_48851700_func0_58_8400_62571800_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,value__a0_62376240_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71890440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71890440 = block;
   block->owner = (Object)__71906820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71890440;

   return block;
};

Block __61421100;

void code__61421100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_61271180_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(abus__r_60323520_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_60323600_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61421100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61421100 = block;
   block->owner = (Object)__61858940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61421100;

   return block;
};

Block __71905460;

void code__71905460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_60323600_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58320_61467080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71905460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71905460 = block;
   block->owner = (Object)__71905260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71905460;

   return block;
};

Block __71905220;

void code__71905220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58320_61467080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,dbus__r_60323600_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71905220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71905220 = block;
   block->owner = (Object)__71905060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71905220;

   return block;
};

Block __71904680;

void code__71904680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_60068220_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71904680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71904680 = block;
   block->owner = (Object)__71904460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71904680;

   return block;
};

Block __71904380;

void code__71904380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,trig__r_60068220_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71904380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71904380 = block;
   block->owner = (Object)__71903940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71904380;

   return block;
};

Block __71903540;

void code__71903540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_60323520_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71903540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71903540 = block;
   block->owner = (Object)__71903300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71903540;

   return block;
};

Block __71903160;

void code__71903160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,abus__r_60323520_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71903160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71903160 = block;
   block->owner = (Object)__71902980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71903160;

   return block;
};

Block __71901460;

void code__71901460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_62059580_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58328_61580920_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71901460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71901460 = block;
   block->owner = (Object)__71901220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71901460;

   return block;
};

Block __71925720;

void code__71925720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58328_61580920_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,reg__0_62059580_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71925720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71925720 = block;
   block->owner = (Object)__71925460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71925720;

   return block;
};

Block __62753020;

Block __62752820;

Block __62752400;

void code__62752400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72198740(),_58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__62752400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62752400 = block;
   block->owner = (Object)__62752820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62752400;

   return block;
};

void code__62752820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__72198880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62752400();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72198680(),_58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__62752820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62752820 = block;
   block->owner = (Object)__62753020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62752820;

   return block;
};

Block __62751520;

Block __62751100;

void code__62751100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72198460(),_58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__62751100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62751100 = block;
   block->owner = (Object)__62751520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62751100;

   return block;
};

void code__62751520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__72198560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62751100();
   }
      }
   }
}

Block make__62751520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62751520 = block;
   block->owner = (Object)__62753020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62751520;

   return block;
};

Block __62774260;

void code__62774260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72198140(),rvok_62753200_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72198080(),lvok0_62753220_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72198020(),wok0_62753180_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__62774260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62774260 = block;
   block->owner = (Object)__62753020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62774260;

   return block;
};

Block __48907020;

Block __48930580;

Block __48930340;

Block __48929640;

Block __48928500;

void code__48928500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58154_52906580_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,rv_62753240_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__48928500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48928500 = block;
   block->owner = (Object)__48929640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48928500;

   return block;
};

Block __50237800;

void code__50237800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58155_53116160_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,rv_62753240_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50237800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50237800 = block;
   block->owner = (Object)__48929640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50237800;

   return block;
};

void code__48929640() {
{
      Value value = _58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__72197320())) {
    code__48928500();
         }
         else if (value2integer(value) == value2integer(make__72197200())) {
    code__50237800();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72197060(),rvok_62753200_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
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
                  src0 = _58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__72196940();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__72196900();
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
                        src0 = _58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__72196640();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__72196560();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__48929640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48929640 = block;
   block->owner = (Object)__48930340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48929640;

   return block;
};

void code__48930340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__72197560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48929640();
   }
      }
   }
}

Block make__48930340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48930340 = block;
   block->owner = (Object)__48930580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48930340;

   return block;
};

void code__48930580() {
 code__48930340();
}

Block make__48930580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48930580 = block;
   block->owner = (Object)__48907020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48930580;

   return block;
};

Block __50951100;

Block __50950100;

Block __50947960;

Block __50998720;

Block __50996980;

void code__50996980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58320_61467080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,lv0_62528860_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__72220340(),lvok0_62753220_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50996980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50996980 = block;
   block->owner = (Object)__50998720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50996980;

   return block;
};

void code__50998720() {
 code__50996980();
}

Block make__50998720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50998720 = block;
   block->owner = (Object)__50947960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50998720;

   return block;
};

Block __50946600;

void code__50946600() {
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
                  src0 = _58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__72220240();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__72220200();
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
                        src0 = _58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__72219920();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__72219860();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72219660(),_58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50946600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50946600 = block;
   block->owner = (Object)__50947960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50946600;

   return block;
};

void code__50947960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__72220560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50998720();
   }
   else {
  code__50946600();
   }
      }
   }
}

Block make__50947960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50947960 = block;
   block->owner = (Object)__50950100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50947960;

   return block;
};

void code__50950100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__72196220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50947960();
   }
      }
   }
}

Block make__50950100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50950100 = block;
   block->owner = (Object)__50951100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50950100;

   return block;
};

void code__50951100() {
 code__50950100();
}

Block make__50951100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50951100 = block;
   block->owner = (Object)__48907020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50951100;

   return block;
};

Block __52146500;

Block __52145420;

Block __52145260;

void code__52145260() {
}

Block make__52145260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52145260 = block;
   block->owner = (Object)__52145420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52145260;

   return block;
};

Block __52875320;

void code__52875320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_62628840_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58328_61580920_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72218660(),wok0_62753180_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52875320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52875320 = block;
   block->owner = (Object)__52145420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52875320;

   return block;
};

void code__52145420() {
 code__52145260();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_62628840_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
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
                              src0 = lv0_62528860_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_62753240_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__72218900();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_62628840_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__52875320();
}

Block make__52145420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52145420 = block;
   block->owner = (Object)__52146500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52145420;

   return block;
};

void code__52146500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72219280(),ack_61386080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72219220(),run_62753140_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__52145420();
}

Block make__52146500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52146500 = block;
   block->owner = (Object)__48907020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52146500;

   return block;
};

Block __53177040;

void code__53177040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72218480(),wok0_62753180_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72218340(),lvok0_62753220_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72218180(),rvok_62753200_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53177040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53177040 = block;
   block->owner = (Object)__48907020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53177040;

   return block;
};

void code__48907020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72197780(),run_62753140_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_62753200_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48930580();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_62753220_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50951100();
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
               src0 = lvok0_62753220_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               src1 = rvok_62753200_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_62753180_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52146500();
   }
      }
   }
   {
      Value cond = wok0_62753180_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53177040();
   }
      }
   }
}

Block make__48907020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48907020 = block;
   block->owner = (Object)__62753020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48907020;

   return block;
};

Block __62773440;

void code__62773440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72218120(),av0_62628840_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__62773440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62773440 = block;
   block->owner = (Object)__62753020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62773440;

   return block;
};

void code__62753020() {
 code__62752820();
 code__62751520();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72198360(),ack_61386080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72198300(),run_62753140_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_62753140_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62774260();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_61386100_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         src1 = run_62753140_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48907020();
   }
   else {
  code__62773440();
   }
      }
   }
}

Block make__62753020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62753020 = block;
   block->owner = (Object)__53175080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62753020;

   return block;
};

Block __58741780;

void code__58741780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_58532340_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(abus__r_53355100_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53355280_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__58741780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58741780 = block;
   block->owner = (Object)__59268580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58741780;

   return block;
};

Block __71923160;

void code__71923160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53355280_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58360_61776880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71923160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71923160 = block;
   block->owner = (Object)__71922960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71923160;

   return block;
};

Block __71922900;

void code__71922900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58360_61776880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,dbus__r_53355280_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71922900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71922900 = block;
   block->owner = (Object)__71922720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71922900;

   return block;
};

Block __71922220;

void code__71922220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53195520_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71922220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71922220 = block;
   block->owner = (Object)__71921980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71922220;

   return block;
};

Block __71921920;

void code__71921920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,trig__r_53195520_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71921920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71921920 = block;
   block->owner = (Object)__71921760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71921920;

   return block;
};

Block __71921460;

void code__71921460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53355100_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58359_61776720_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71921460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71921460 = block;
   block->owner = (Object)__71921240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71921460;

   return block;
};

Block __71921180;

void code__71921180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58359_61776720_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,abus__r_53355100_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71921180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71921180 = block;
   block->owner = (Object)__71920900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71921180;

   return block;
};

Block __71919260;

void code__71919260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_59394780_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58373_62051700_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71919260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71919260 = block;
   block->owner = (Object)__71919100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71919260;

   return block;
};

Block __71919060;

void code__71919060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58373_62051700_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,reg__0_59394780_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71919060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71919060 = block;
   block->owner = (Object)__71918880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71919060;

   return block;
};

Block __59951160;

Block __59951000;

void code__59951000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72216420(),_58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59951000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59951000 = block;
   block->owner = (Object)__59951160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59951000;

   return block;
};

Block __59949400;

Block __59949060;

void code__59949060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58328_61580920_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,lv0_59822700_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72215840(),lvok0_59951340_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59949060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59949060 = block;
   block->owner = (Object)__59949400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59949060;

   return block;
};

Block __60322320;

Block __60321860;

Block __60320820;

void code__60320820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58360_61776880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,rv0_59951360_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72215180(),_58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72215040(),rvok0_59951320_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__60320820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60320820 = block;
   block->owner = (Object)__60321860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60320820;

   return block;
};

Block __60321640;

void code__60321640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72214980(),_58359_61776720_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72214920(),_58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__60321640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60321640 = block;
   block->owner = (Object)__60321860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60321640;

   return block;
};

void code__60321860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__72215380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60320820();
   }
   else {
  code__60321640();
   }
      }
   }
}

Block make__60321860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60321860 = block;
   block->owner = (Object)__60322320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60321860;

   return block;
};

void code__60322320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58361_61776860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__72215680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60321860();
   }
      }
   }
}

Block make__60322320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60322320 = block;
   block->owner = (Object)__59949400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60322320;

   return block;
};

Block __60892260;

Block __60891760;

void code__60891760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_59822700_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      src1 = rv0_59951360_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58373_62051700_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__60891760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60891760 = block;
   block->owner = (Object)__60892260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60891760;

   return block;
};

void code__60892260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72214760(),run_59951300_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72214700(),ack__add_61386040_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__60891760();
}

Block make__60892260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60892260 = block;
   block->owner = (Object)__59949400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60892260;

   return block;
};

void code__59949400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72216020(),run_59951300_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__59949060();
 code__60322320();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_59951340_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         src1 = rvok0_59951320_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60892260();
   }
      }
   }
}

Block make__59949400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59949400 = block;
   block->owner = (Object)__59951160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59949400;

   return block;
};

Block __59950280;

void code__59950280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72214420(),lvok0_59951340_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72214340(),rvok0_59951320_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59950280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59950280 = block;
   block->owner = (Object)__59951160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59950280;

   return block;
};

void code__59951160() {
 code__59951000();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72216360(),ack__add_61386040_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__72216280(),run_59951300_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_61386060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         src1 = run_59951300_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59949400();
   }
   else {
  code__59950280();
   }
      }
   }
}

Block make__59951160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59951160 = block;
   block->owner = (Object)__61386240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59951160;

   return block;
};

Value make__72200580() {
   static unsigned long long data[] = { 4294967244ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__72200560() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__72218100() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__72198880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72198740() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__72198680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72198560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72198460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__72198360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72198300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72198140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72198080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72198020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72197780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72197560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72197320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__72197200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__72197060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72196940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72196900() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72196640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72196560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__72196220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72220560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72220340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72220240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72220200() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72219920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72219860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__72219660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72219280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72219220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72218900() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72218660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72218480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72218340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72218180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72218120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__72216420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72216360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72216280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72216020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72215840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72215680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72215380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__72215180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72215040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72214980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__72214920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72214760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72214700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72214420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72214340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72212800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72212740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72212680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72253400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72253340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72253200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__72252900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_60070900;

SignalI req__mac_61386100_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereq__mac_61386100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_61386100_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
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

SignalI ack_61386080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack_61386080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_61386080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
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

SignalI ack__mac_61386060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__mac_61386060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_61386060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
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

SignalI ack__add_61386040_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__add_61386040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_61386040_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
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

SignalI _58320_61467080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58320_61467080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58320_61467080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
   signalI->name = ":320";
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

SignalI _58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58318_61467060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
   signalI->name = ":318";
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

SignalI _58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58319_61466980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
   signalI->name = ":319";
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

SignalI _58328_61580920_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58328_61580920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58328_61580920_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
   signalI->name = ":328";
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

SignalI _58360_61776880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58360_61776880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58360_61776880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
   signalI->name = ":360";
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

SignalI _58361_61776860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58361_61776860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58361_61776860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
   signalI->name = ":361";
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

SignalI _58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58358_61776820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
   signalI->name = ":358";
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

SignalI _58359_61776720_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58359_61776720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58359_61776720_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
   signalI->name = ":359";
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

SignalI _58373_62051700_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58373_62051700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58373_62051700_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
   signalI->name = ":373";
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

SignalI value__z0_62124740_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makevalue__z0_62124740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_62124740_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
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

SignalI value__a0_62376240_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makevalue__a0_62376240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_62376240_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
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

SignalI flag__z0_62376220_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeflag__z0_62376220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_62376220_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
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

SignalI ack__a0_62376200_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__a0_62376200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_62376200_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_84_60070900;
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

SystemI counter_62393200;

SystemI makecounter_62393200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_62393200 = systemI;
   systemI->owner = (Object)layer1_58_84_60070900;
   systemI->name = "counter";
   systemI->system = counter_58_8400_62395620;

   return systemI;
};

SystemI func0_48851120;

SystemI makefunc0_48851120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_48851120 = systemI;
   systemI->owner = (Object)layer1_58_84_60070900;
   systemI->name = "func0";
   systemI->system = func0_58_8400_62571800;

   return systemI;
};

Scope channel__w0_58311_60070560;

SignalI trig__r_60068220_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI maketrig__r_60068220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_60068220_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58311_60070560;
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

SignalI dbus__r_60323600_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makedbus__r_60323600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_60323600_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58311_60070560;
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

SignalI abus__r_60323520_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_60323520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_60323520_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58311_60070560;
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

SignalI mem_61271180_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makemem_61271180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_61271180_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58311_60070560;
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
         src0 = make__72200580();
         src1 = make__72200560();
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

Scope raddr_58312_60070260;

Scope makeraddr_58312_60070260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58312_60070260 = scope;
   scope->owner = (Object)channel__w0_58311_60070560;
   scope->name = "raddr:312";
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

Scope rinc_58317_60069740;

Scope makerinc_58317_60069740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58317_60069740 = scope;
   scope->owner = (Object)channel__w0_58311_60070560;
   scope->name = "rinc:317";
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

Scope rdec_58321_60068800;

Scope makerdec_58321_60068800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58321_60068800 = scope;
   scope->owner = (Object)channel__w0_58311_60070560;
   scope->name = "rdec:321";
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

Behavior __61858940;

Behavior make__61858940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61858940 = behavior;
   behavior->owner = (Object)channel__w0_58311_60070560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg = realloc(clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg[clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__61421100();

   return behavior;
}

Behavior __71905260;

Behavior make__71905260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71905260 = behavior;
   behavior->owner = (Object)channel__w0_58311_60070560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_60323600_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   dbus__r_60323600_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__r_60323600_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(dbus__r_60323600_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,dbus__r_60323600_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__r_60323600_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[dbus__r_60323600_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71905460();

   return behavior;
}

Behavior __71905060;

Behavior make__71905060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71905060 = behavior;
   behavior->owner = (Object)channel__w0_58311_60070560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58320_61467080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58320_61467080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58320_61467080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58320_61467080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58320_61467080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58320_61467080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58320_61467080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71905220();

   return behavior;
}

Behavior __71904460;

Behavior make__71904460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71904460 = behavior;
   behavior->owner = (Object)channel__w0_58311_60070560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_60068220_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   trig__r_60068220_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   trig__r_60068220_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(trig__r_60068220_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,trig__r_60068220_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
trig__r_60068220_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[trig__r_60068220_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71904680();

   return behavior;
}

Behavior __71903940;

Behavior make__71903940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71903940 = behavior;
   behavior->owner = (Object)channel__w0_58311_60070560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58318_61467060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71904380();

   return behavior;
}

Behavior __71903300;

Behavior make__71903300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71903300 = behavior;
   behavior->owner = (Object)channel__w0_58311_60070560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_60323520_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   abus__r_60323520_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_60323520_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(abus__r_60323520_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,abus__r_60323520_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_60323520_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[abus__r_60323520_channel__w0_58311_60070560_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71903540();

   return behavior;
}

Behavior __71902980;

Behavior make__71902980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71902980 = behavior;
   behavior->owner = (Object)channel__w0_58311_60070560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58319_61466980_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71903160();

   return behavior;
}

Scope makechannel__w0_58311_60070560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58311_60070560 = scope;
   scope->owner = (Object)layer1_58_84_60070900;
   scope->name = "channel_w0:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_60068220();
   scope->inners[1] = makedbus__r_60323600();
   scope->inners[2] = makeabus__r_60323520();
   scope->inners[3] = makemem_61271180();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58312_60070260();
   scope->scopes[1] = makerinc_58317_60069740();
   scope->scopes[2] = makerdec_58321_60068800();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61858940();
   scope->behaviors[1] = make__71905260();
   scope->behaviors[2] = make__71905060();
   scope->behaviors[3] = make__71904460();
   scope->behaviors[4] = make__71903940();
   scope->behaviors[5] = make__71903300();
   scope->behaviors[6] = make__71902980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58326_61858760;

SignalI reg__0_62059580_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereg__0_62059580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_62059580_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__accum_58326_61858760;
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

Scope anum_58327_61858460;

Scope makeanum_58327_61858460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58327_61858460 = scope;
   scope->owner = (Object)channel__accum_58326_61858760;
   scope->name = "anum:327";
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

Scope raddr_58329_61858020;

Scope makeraddr_58329_61858020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58329_61858020 = scope;
   scope->owner = (Object)channel__accum_58326_61858760;
   scope->name = "raddr:329";
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

Scope waddr_58332_61898500;

Scope makewaddr_58332_61898500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58332_61898500 = scope;
   scope->owner = (Object)channel__accum_58326_61858760;
   scope->name = "waddr:332";
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

Scope rinc_58335_61897820;

SignalI abus__r_61896860_rinc_58335_61897820_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_61896860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_61896860_rinc_58335_61897820_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rinc_58335_61897820;
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

Scope makerinc_58335_61897820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58335_61897820 = scope;
   scope->owner = (Object)channel__accum_58326_61858760;
   scope->name = "rinc:335";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_61896860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58339_61896740;

SignalI abus__w_61895720_winc_58339_61896740_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__w_61895720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_61895720_winc_58339_61896740_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)winc_58339_61896740;
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

Scope makewinc_58339_61896740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58339_61896740 = scope;
   scope->owner = (Object)channel__accum_58326_61858760;
   scope->name = "winc:339";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_61895720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58343_61895540;

SignalI abus__r_61895160_rdec_58343_61895540_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_61895160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_61895160_rdec_58343_61895540_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rdec_58343_61895540;
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

Scope makerdec_58343_61895540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58343_61895540 = scope;
   scope->owner = (Object)channel__accum_58326_61858760;
   scope->name = "rdec:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_61895160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58347_61895040;

SignalI abus__w_61894620_wdec_58347_61895040_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__w_61894620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_61894620_wdec_58347_61895040_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)wdec_58347_61895040;
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

Scope makewdec_58347_61895040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58347_61895040 = scope;
   scope->owner = (Object)channel__accum_58326_61858760;
   scope->name = "wdec:347";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_61894620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __71901220;

Behavior make__71901220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71901220 = behavior;
   behavior->owner = (Object)channel__accum_58326_61858760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_62059580_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   reg__0_62059580_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   reg__0_62059580_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(reg__0_62059580_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,reg__0_62059580_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__0_62059580_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[reg__0_62059580_channel__accum_58326_61858760_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71901460();

   return behavior;
}

Behavior __71925460;

Behavior make__71925460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71925460 = behavior;
   behavior->owner = (Object)channel__accum_58326_61858760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58328_61580920_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58328_61580920_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58328_61580920_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58328_61580920_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58328_61580920_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58328_61580920_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58328_61580920_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71925720();

   return behavior;
}

Scope makechannel__accum_58326_61858760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58326_61858760 = scope;
   scope->owner = (Object)layer1_58_84_60070900;
   scope->name = "channel_accum:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_62059580();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58327_61858460();
   scope->scopes[1] = makeraddr_58329_61858020();
   scope->scopes[2] = makewaddr_58332_61898500();
   scope->scopes[3] = makerinc_58335_61897820();
   scope->scopes[4] = makewinc_58339_61896740();
   scope->scopes[5] = makerdec_58343_61895540();
   scope->scopes[6] = makewdec_58347_61895040();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__71901220();
   scope->behaviors[1] = make__71925460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58351_62396580;

SignalI lv0_62528860_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelv0_62528860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_62528860_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58351_62396580;
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

SignalI av0_62628840_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeav0_62628840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_62628840_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58351_62396580;
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

SignalI rv_62753240_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makerv_62753240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_62753240_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58351_62396580;
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

SignalI lvok0_62753220_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelvok0_62753220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_62753220_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58351_62396580;
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

SignalI rvok_62753200_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makervok_62753200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_62753200_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58351_62396580;
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

SignalI wok0_62753180_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makewok0_62753180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_62753180_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58351_62396580;
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

SignalI run_62753140_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makerun_62753140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_62753140_mac__n1_58351_62396580_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58351_62396580;
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

Behavior __53175080;

Behavior make__53175080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53175080 = behavior;
   behavior->owner = (Object)mac__n1_58351_62396580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos = realloc(clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos[clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__62753020();

   return behavior;
}

Scope makemac__n1_58351_62396580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58351_62396580 = scope;
   scope->owner = (Object)layer1_58_84_60070900;
   scope->name = "mac_n1:351";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_62528860();
   scope->inners[1] = makeav0_62628840();
   scope->inners[2] = makerv_62753240();
   scope->inners[3] = makelvok0_62753220();
   scope->inners[4] = makervok_62753200();
   scope->inners[5] = makewok0_62753180();
   scope->inners[6] = makerun_62753140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53175080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58356_53174880;

SignalI trig__r_53195520_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI maketrig__r_53195520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53195520_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58356_53174880;
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

SignalI dbus__r_53355280_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makedbus__r_53355280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53355280_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58356_53174880;
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

SignalI abus__r_53355100_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_53355100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53355100_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58356_53174880;
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

SignalI mem_58532340_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makemem_58532340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_58532340_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58356_53174880;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__72218100(),signalI->c_value);
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

Scope raddr_58357_53198240;

Scope makeraddr_58357_53198240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58357_53198240 = scope;
   scope->owner = (Object)channel__b0_58356_53174880;
   scope->name = "raddr:357";
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

Scope rinc_58362_53197380;

Scope makerinc_58362_53197380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58362_53197380 = scope;
   scope->owner = (Object)channel__b0_58356_53174880;
   scope->name = "rinc:362";
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

Scope rdec_58366_53196620;

Scope makerdec_58366_53196620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58366_53196620 = scope;
   scope->owner = (Object)channel__b0_58356_53174880;
   scope->name = "rdec:366";
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

Behavior __59268580;

Behavior make__59268580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59268580 = behavior;
   behavior->owner = (Object)channel__b0_58356_53174880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg = realloc(clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg[clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__58741780();

   return behavior;
}

Behavior __71922960;

Behavior make__71922960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71922960 = behavior;
   behavior->owner = (Object)channel__b0_58356_53174880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53355280_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   dbus__r_53355280_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__r_53355280_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(dbus__r_53355280_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,dbus__r_53355280_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__r_53355280_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[dbus__r_53355280_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71923160();

   return behavior;
}

Behavior __71922720;

Behavior make__71922720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71922720 = behavior;
   behavior->owner = (Object)channel__b0_58356_53174880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58360_61776880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58360_61776880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58360_61776880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58360_61776880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58360_61776880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58360_61776880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58360_61776880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71922900();

   return behavior;
}

Behavior __71921980;

Behavior make__71921980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71921980 = behavior;
   behavior->owner = (Object)channel__b0_58356_53174880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53195520_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   trig__r_53195520_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   trig__r_53195520_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(trig__r_53195520_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,trig__r_53195520_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
trig__r_53195520_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[trig__r_53195520_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71922220();

   return behavior;
}

Behavior __71921760;

Behavior make__71921760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71921760 = behavior;
   behavior->owner = (Object)channel__b0_58356_53174880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58358_61776820_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71921920();

   return behavior;
}

Behavior __71921240;

Behavior make__71921240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71921240 = behavior;
   behavior->owner = (Object)channel__b0_58356_53174880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53355100_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   abus__r_53355100_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_53355100_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(abus__r_53355100_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,abus__r_53355100_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_53355100_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[abus__r_53355100_channel__b0_58356_53174880_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71921460();

   return behavior;
}

Behavior __71920900;

Behavior make__71920900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71920900 = behavior;
   behavior->owner = (Object)channel__b0_58356_53174880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58359_61776720_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58359_61776720_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58359_61776720_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58359_61776720_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58359_61776720_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58359_61776720_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58359_61776720_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71921180();

   return behavior;
}

Scope makechannel__b0_58356_53174880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58356_53174880 = scope;
   scope->owner = (Object)layer1_58_84_60070900;
   scope->name = "channel_b0:356";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53195520();
   scope->inners[1] = makedbus__r_53355280();
   scope->inners[2] = makeabus__r_53355100();
   scope->inners[3] = makemem_58532340();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58357_53198240();
   scope->scopes[1] = makerinc_58362_53197380();
   scope->scopes[2] = makerdec_58366_53196620();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59268580();
   scope->behaviors[1] = make__71922960();
   scope->behaviors[2] = make__71922720();
   scope->behaviors[3] = make__71921980();
   scope->behaviors[4] = make__71921760();
   scope->behaviors[5] = make__71921240();
   scope->behaviors[6] = make__71920900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58371_59268460;

SignalI reg__0_59394780_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereg__0_59394780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_59394780_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__z_58371_59268460;
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

Scope anum_58372_59268140;

Scope makeanum_58372_59268140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58372_59268140 = scope;
   scope->owner = (Object)channel__z_58371_59268460;
   scope->name = "anum:372";
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

Scope raddr_58374_59267700;

Scope makeraddr_58374_59267700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58374_59267700 = scope;
   scope->owner = (Object)channel__z_58371_59268460;
   scope->name = "raddr:374";
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

Scope waddr_58377_59267180;

Scope makewaddr_58377_59267180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58377_59267180 = scope;
   scope->owner = (Object)channel__z_58371_59268460;
   scope->name = "waddr:377";
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

Scope rinc_58380_59266600;

SignalI abus__r_59266160_rinc_58380_59266600_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_59266160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59266160_rinc_58380_59266600_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rinc_58380_59266600;
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

Scope makerinc_58380_59266600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58380_59266600 = scope;
   scope->owner = (Object)channel__z_58371_59268460;
   scope->name = "rinc:380";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59266160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58383_59266040;

SignalI abus__w_59265620_winc_58383_59266040_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__w_59265620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59265620_winc_58383_59266040_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)winc_58383_59266040;
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

Scope makewinc_58383_59266040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58383_59266040 = scope;
   scope->owner = (Object)channel__z_58371_59268460;
   scope->name = "winc:383";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59265620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58386_59265500;

SignalI abus__r_59265060_rdec_58386_59265500_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_59265060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59265060_rdec_58386_59265500_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rdec_58386_59265500;
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

Scope makerdec_58386_59265500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58386_59265500 = scope;
   scope->owner = (Object)channel__z_58371_59268460;
   scope->name = "rdec:386";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59265060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58390_59264900;

SignalI abus__w_59264360_wdec_58390_59264900_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__w_59264360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59264360_wdec_58390_59264900_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)wdec_58390_59264900;
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

Scope makewdec_58390_59264900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58390_59264900 = scope;
   scope->owner = (Object)channel__z_58371_59268460;
   scope->name = "wdec:390";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59264360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __71919100;

Behavior make__71919100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71919100 = behavior;
   behavior->owner = (Object)channel__z_58371_59268460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_59394780_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   reg__0_59394780_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   reg__0_59394780_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(reg__0_59394780_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,reg__0_59394780_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__0_59394780_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[reg__0_59394780_channel__z_58371_59268460_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71919260();

   return behavior;
}

Behavior __71918880;

Behavior make__71918880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71918880 = behavior;
   behavior->owner = (Object)channel__z_58371_59268460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58373_62051700_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58373_62051700_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58373_62051700_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58373_62051700_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58373_62051700_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58373_62051700_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58373_62051700_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71919060();

   return behavior;
}

Scope makechannel__z_58371_59268460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58371_59268460 = scope;
   scope->owner = (Object)layer1_58_84_60070900;
   scope->name = "channel_z:371";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_59394780();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58372_59268140();
   scope->scopes[1] = makeraddr_58374_59267700();
   scope->scopes[2] = makewaddr_58377_59267180();
   scope->scopes[3] = makerinc_58380_59266600();
   scope->scopes[4] = makewinc_58383_59266040();
   scope->scopes[5] = makerdec_58386_59265500();
   scope->scopes[6] = makewdec_58390_59264900();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__71919100();
   scope->behaviors[1] = make__71918880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58394_59669860;

SignalI lv0_59822700_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelv0_59822700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_59822700_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58394_59669860;
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

SignalI rv0_59951360_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makerv0_59951360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_59951360_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58394_59669860;
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

SignalI lvok0_59951340_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelvok0_59951340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_59951340_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58394_59669860;
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

SignalI rvok0_59951320_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makervok0_59951320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_59951320_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58394_59669860;
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

SignalI run_59951300_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makerun_59951300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_59951300_add__n_58394_59669860_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58394_59669860;
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

Behavior __61386240;

Behavior make__61386240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61386240 = behavior;
   behavior->owner = (Object)add__n_58394_59669860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos = realloc(clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos[clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__59951160();

   return behavior;
}

Scope makeadd__n_58394_59669860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58394_59669860 = scope;
   scope->owner = (Object)layer1_58_84_60070900;
   scope->name = "add_n:394";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_59822700();
   scope->inners[1] = makerv0_59951360();
   scope->inners[2] = makelvok0_59951340();
   scope->inners[3] = makervok0_59951320();
   scope->inners[4] = makerun_59951300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61386240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50907300;

Behavior make__50907300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50907300 = behavior;
   behavior->owner = (Object)layer1_58_84_60070900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos = realloc(clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos[clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__50911440();

   return behavior;
}

Behavior __52258020;

Behavior make__52258020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52258020 = behavior;
   behavior->owner = (Object)layer1_58_84_60070900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos = realloc(clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos[clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__50907000();

   return behavior;
}

Behavior __52697680;

Behavior make__52697680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52697680 = behavior;
   behavior->owner = (Object)layer1_58_84_60070900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos = realloc(clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos[clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__52257800();

   return behavior;
}

Behavior __71889860;

Behavior make__71889860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71889860 = behavior;
   behavior->owner = (Object)layer1_58_84_60070900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_52708420_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   req_52708420_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   req_52708420_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(req_52708420_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,req_52708420_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
req_52708420_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[req_52708420_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_61386060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__mac_61386060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__mac_61386060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__mac_61386060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__mac_61386060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__mac_61386060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__mac_61386060_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71890260();

   return behavior;
}

Behavior __71907040;

Behavior make__71907040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71907040 = behavior;
   behavior->owner = (Object)layer1_58_84_60070900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_61386080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack_61386080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack_61386080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack_61386080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack_61386080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack_61386080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack_61386080_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_62124740_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   value__z0_62124740_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   value__z0_62124740_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(value__z0_62124740_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,value__z0_62124740_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
value__z0_62124740_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[value__z0_62124740_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_62376200_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__a0_62376200_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__a0_62376200_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__a0_62376200_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__a0_62376200_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__a0_62376200_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__a0_62376200_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71890520();

   return behavior;
}

Behavior __71906820;

Behavior make__71906820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71906820 = behavior;
   behavior->owner = (Object)layer1_58_84_60070900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_62393340_counter_58_8400_62395620_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__mac_62393340_counter_58_8400_62395620_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__mac_62393340_counter_58_8400_62395620_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__mac_62393340_counter_58_8400_62395620_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__mac_62393340_counter_58_8400_62395620_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__mac_62393340_counter_58_8400_62395620_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__mac_62393340_counter_58_8400_62395620_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_48851700_func0_58_8400_62571800_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   a_48851700_func0_58_8400_62571800_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   a_48851700_func0_58_8400_62571800_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(a_48851700_func0_58_8400_62571800_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,a_48851700_func0_58_8400_62571800_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
a_48851700_func0_58_8400_62571800_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[a_48851700_func0_58_8400_62571800_layer1_58_84_60070900_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71890440();

   return behavior;
}

Scope makelayer1_58_84_60070900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_60070900 = scope;
   scope->owner = (Object)layer1_58_841_52694860;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_62393200();
   scope->systemIs[1] = makefunc0_48851120();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_61386100();
   scope->inners[1] = makeack_61386080();
   scope->inners[2] = makeack__mac_61386060();
   scope->inners[3] = makeack__add_61386040();
   scope->inners[4] = make_58320_61467080();
   scope->inners[5] = make_58318_61467060();
   scope->inners[6] = make_58319_61466980();
   scope->inners[7] = make_58328_61580920();
   scope->inners[8] = make_58360_61776880();
   scope->inners[9] = make_58361_61776860();
   scope->inners[10] = make_58358_61776820();
   scope->inners[11] = make_58359_61776720();
   scope->inners[12] = make_58373_62051700();
   scope->inners[13] = makevalue__z0_62124740();
   scope->inners[14] = makevalue__a0_62376240();
   scope->inners[15] = makeflag__z0_62376220();
   scope->inners[16] = makeack__a0_62376200();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58311_60070560();
   scope->scopes[1] = makechannel__accum_58326_61858760();
   scope->scopes[2] = makemac__n1_58351_62396580();
   scope->scopes[3] = makechannel__b0_58356_53174880();
   scope->scopes[4] = makechannel__z_58371_59268460();
   scope->scopes[5] = makeadd__n_58394_59669860();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50907300();
   scope->behaviors[1] = make__52258020();
   scope->behaviors[2] = make__52697680();
   scope->behaviors[3] = make__71889860();
   scope->behaviors[4] = make__71907040();
   scope->behaviors[5] = make__71906820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_841_52694860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_841_52694860 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T1";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_52708520();
   systemT->inputs[1] = makerst_52708500();
   systemT->inputs[2] = makereq_52708420();
   systemT->inputs[3] = make_58154_52906580();
   systemT->inputs[4] = make_58155_53116160();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_53116080();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58156_53115660();
   systemT->inouts[1] = make_58120_53306040();

   systemT->scope = makelayer1_58_84_60070900();

   return systemT;
}