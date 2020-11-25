#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_8400_66942600;

SignalI clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeclk_66939260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_8400_66942600;
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

SignalI rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makerst_66939200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_8400_66942600;
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

SignalI req_66939180_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makereq_66939180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_66939180_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_8400_66942600;
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

SignalI _58430_67205780_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58430_67205780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58430_67205780_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_8400_66942600;
   signalI->name = ":430";
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

SignalI ack__layer_67205740_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeack__layer_67205740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_67205740_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_8400_66942600;
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

SignalI _58428_67205700_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58428_67205700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58428_67205700_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_8400_66942600;
   signalI->name = ":428";
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

SignalI _58429_67205580_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58429_67205580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58429_67205580_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_8400_66942600;
   signalI->name = ":429";
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

SignalI _58470_48521980_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58470_48521980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58470_48521980_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_8400_66942600;
   signalI->name = ":470";
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

SignalI _58471_51741940_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58471_51741940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58471_51741940_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_8400_66942600;
   signalI->name = ":471";
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

Block __65012360;

Block __65011980;

void code__65011980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78480700(),ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78480640(),ack__mac_66471720_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78480580(),ack__add_66471700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65011980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65011980 = block;
   block->owner = (Object)__65012360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65011980;

   return block;
};

void code__65012360() {
   {
      Value cond = rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65011980();
   }
      }
   }
}

Block make__65012360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65012360 = block;
   block->owner = (Object)__65034740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65012360;

   return block;
};

Block __65034540;

Block __65033440;

Block __65033080;

void code__65033080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58599_48063560_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,value__z0_51745480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78480400(),flag__z0_54686820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65033080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65033080 = block;
   block->owner = (Object)__65033440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65033080;

   return block;
};

Block __65753040;

void code__65753040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58600_50427940_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,value__z1_52069060_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78480260(),flag__z1_54686780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65753040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65753040 = block;
   block->owner = (Object)__65033440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65753040;

   return block;
};

void code__65033440() {
 code__65033080();
 code__65753040();
}

Block make__65033440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65033440 = block;
   block->owner = (Object)__65034540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65033440;

   return block;
};

Block __65034360;

void code__65034360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78480200(),flag__z0_54686820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78480140(),flag__z1_54686780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65034360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65034360 = block;
   block->owner = (Object)__65034540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65034360;

   return block;
};

void code__65034540() {
   {
      Value cond = ack__add_66471700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65033440();
   }
   else {
  code__65034360();
   }
      }
   }
}

Block make__65034540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65034540 = block;
   block->owner = (Object)__65991380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65034540;

   return block;
};

Block __65991200;

Block __65990740;

void code__65990740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78480020(),ack__a0_54686760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78479940(),ack__a1_54686740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65990740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65990740 = block;
   block->owner = (Object)__65991200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65990740;

   return block;
};

Block __65989520;

Block __65989240;

void code__65989240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_54320700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58470_48521980_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78479600(),ack__a0_54686760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65989240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65989240 = block;
   block->owner = (Object)__65989520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65989240;

   return block;
};

Block __66540160;

void code__66540160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_54686840_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58471_51741940_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78479460(),ack__a1_54686740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__66540160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66540160 = block;
   block->owner = (Object)__65989520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66540160;

   return block;
};

void code__65989520() {
 code__65989240();
 code__66540160();
}

Block make__65989520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65989520 = block;
   block->owner = (Object)__65991200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65989520;

   return block;
};

void code__65991200() {
   {
      Value cond = rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65990740();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_54686820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         src1 = flag__z1_54686780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__65989520();
   }
      }
   }
}

Block make__65991200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65991200 = block;
   block->owner = (Object)__66943100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65991200;

   return block;
};

Block __78000920;

void code__78000920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_66939180_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_66471720_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_66471760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78000920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78000920 = block;
   block->owner = (Object)__78000680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78000920;

   return block;
};

Block __78001140;

void code__78001140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,clk_54734040_counter_58_8410_54714680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,ack_54734020_counter_58_8410_54714680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,rst_54733900_counter_58_8410_54714680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_51745480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,z__value_52268780_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_52069060_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,z__value_63126780_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_54686760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      src1 = ack__a1_54686740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_67205740_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78001140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78001140 = block;
   block->owner = (Object)__78050200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78001140;

   return block;
};

Block __78001080;

void code__78001080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_54733760_counter_58_8410_54714680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,ack__mac_66471720_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58572_67236800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58587_51378660_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_54415260_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,value__a0_54320700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_63371360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,value__a1_54686840_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78001080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78001080 = block;
   block->owner = (Object)__78050040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78001080;

   return block;
};

Block __50947500;

void code__50947500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_46189180_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(abus__r_66746720_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_66746820_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__50947500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50947500 = block;
   block->owner = (Object)__52139220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50947500;

   return block;
};

Block __78049300;

void code__78049300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_66746820_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58507_66622700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78049300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78049300 = block;
   block->owner = (Object)__78049140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78049300;

   return block;
};

Block __78049100;

void code__78049100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58507_66622700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,dbus__r_66746820_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78049100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78049100 = block;
   block->owner = (Object)__78048940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78049100;

   return block;
};

Block __78048640;

void code__78048640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_66573400_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78048640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78048640 = block;
   block->owner = (Object)__78048440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78048640;

   return block;
};

Block __78048400;

void code__78048400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,trig__r_66573400_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78048400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78048400 = block;
   block->owner = (Object)__78048180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78048400;

   return block;
};

Block __78047880;

void code__78047880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_66746720_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78047880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78047880 = block;
   block->owner = (Object)__78047720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78047880;

   return block;
};

Block __78047680;

void code__78047680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,abus__r_66746720_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78047680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78047680 = block;
   block->owner = (Object)__78047520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78047680;

   return block;
};

Block __56764440;

void code__56764440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55863180_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(abus__r_54316740_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54316980_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56764440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56764440 = block;
   block->owner = (Object)__57823020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56764440;

   return block;
};

Block __78046220;

void code__78046220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54316980_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58522_67120920_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78046220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78046220 = block;
   block->owner = (Object)__78046020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78046220;

   return block;
};

Block __78045980;

void code__78045980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58522_67120920_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,dbus__r_54316980_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78045980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78045980 = block;
   block->owner = (Object)__78045820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78045980;

   return block;
};

Block __78045520;

void code__78045520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_52172340_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78045520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78045520 = block;
   block->owner = (Object)__78045360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78045520;

   return block;
};

Block __78045320;

void code__78045320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,trig__r_52172340_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78045320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78045320 = block;
   block->owner = (Object)__78069680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78045320;

   return block;
};

Block __78069380;

void code__78069380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_54316740_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78069380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78069380 = block;
   block->owner = (Object)__78069220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78069380;

   return block;
};

Block __78069180;

void code__78069180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,abus__r_54316740_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78069180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78069180 = block;
   block->owner = (Object)__78069020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78069180;

   return block;
};

Block __78067700;

void code__78067700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56247560_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58530_66840180_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78067700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78067700 = block;
   block->owner = (Object)__78067520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78067700;

   return block;
};

Block __78067480;

void code__78067480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58530_66840180_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,reg__0_56247560_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78067480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78067480 = block;
   block->owner = (Object)__78067320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78067480;

   return block;
};

Block __78067020;

void code__78067020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_62644120_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58531_66943400_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78067020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78067020 = block;
   block->owner = (Object)__78066840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78067020;

   return block;
};

Block __78066780;

void code__78066780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58531_66943400_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,reg__1_62644120_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78066780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78066780 = block;
   block->owner = (Object)__78066600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78066780;

   return block;
};

Block __63788960;

Block __63788760;

Block __63788400;

void code__63788400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78470080(),_58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63788400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63788400 = block;
   block->owner = (Object)__63788760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63788400;

   return block;
};

void code__63788760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78470160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63788400();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78469960(),_58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63788760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63788760 = block;
   block->owner = (Object)__63788960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63788760;

   return block;
};

Block __63787660;

Block __63787260;

void code__63787260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78469800(),_58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63787260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63787260 = block;
   block->owner = (Object)__63787660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63787260;

   return block;
};

void code__63787660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78469880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63787260();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78469740(),_58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63787660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63787660 = block;
   block->owner = (Object)__63788960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63787660;

   return block;
};

Block __63786340;

Block __63786020;

void code__63786020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78469580(),_58429_67205580_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63786020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63786020 = block;
   block->owner = (Object)__63786340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63786020;

   return block;
};

void code__63786340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78469660();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63786020();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78469520(),_58428_67205700_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63786340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63786340 = block;
   block->owner = (Object)__63788960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63786340;

   return block;
};

Block __63784780;

void code__63784780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78469280(),rvok_63789180_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78469220(),lvok0_63789220_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78469160(),wok0_63789140_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78469100(),lvok1_63789200_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78469040(),wok1_63789120_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63784780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63784780 = block;
   block->owner = (Object)__63788960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63784780;

   return block;
};

Block __64119960;

Block __64119180;

Block __64118820;

Block __64175740;

Block __64173580;

Block __64173420;

void code__64173420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58430_67205780_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,rv_63789240_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78468460(),rvok_63789180_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64173420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64173420 = block;
   block->owner = (Object)__64173580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64173420;

   return block;
};

void code__64173580() {
 code__64173420();
}

Block make__64173580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64173580 = block;
   block->owner = (Object)__64175740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64173580;

   return block;
};

Block __64175580;

void code__64175580() {
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
                  src0 = _58429_67205580_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__78468360();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78468320();
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
                        src0 = _58429_67205580_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78468040();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78467960();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58429_67205580_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78467800(),_58428_67205700_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64175580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64175580 = block;
   block->owner = (Object)__64175740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64175580;

   return block;
};

void code__64175740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58428_67205700_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78468620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64173580();
   }
   else {
  code__64175580();
   }
      }
   }
}

Block make__64175740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64175740 = block;
   block->owner = (Object)__64118820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64175740;

   return block;
};

void code__64118820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78468720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64175740();
   }
      }
   }
}

Block make__64118820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64118820 = block;
   block->owner = (Object)__64119180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64118820;

   return block;
};

void code__64119180() {
 code__64118820();
}

Block make__64119180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64119180 = block;
   block->owner = (Object)__64119960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64119180;

   return block;
};

Block __64350340;

Block __64350180;

Block __64349800;

Block __64478660;

Block __64478440;

void code__64478440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58507_66622700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,lv0_63383960_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78467400(),lvok0_63789220_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64478440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64478440 = block;
   block->owner = (Object)__64478660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64478440;

   return block;
};

void code__64478660() {
 code__64478440();
}

Block make__64478660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64478660 = block;
   block->owner = (Object)__64349800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64478660;

   return block;
};

Block __64349580;

void code__64349580() {
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
                  src0 = _58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__78467300();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78467260();
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
                        src0 = _58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78467020();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78466960();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78466820(),_58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64349580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64349580 = block;
   block->owner = (Object)__64349800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64349580;

   return block;
};

void code__64349800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78467560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64478660();
   }
   else {
  code__64349580();
   }
      }
   }
}

Block make__64349800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64349800 = block;
   block->owner = (Object)__64350180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64349800;

   return block;
};

void code__64350180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78467660();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64349800();
   }
      }
   }
}

Block make__64350180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64350180 = block;
   block->owner = (Object)__64350340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64350180;

   return block;
};

void code__64350340() {
 code__64350180();
}

Block make__64350340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64350340 = block;
   block->owner = (Object)__64119960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64350340;

   return block;
};

Block __64883420;

Block __64882840;

Block __64882680;

void code__64882680() {
}

Block make__64882680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64882680 = block;
   block->owner = (Object)__64882840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64882680;

   return block;
};

Block __65754740;

void code__65754740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_63569400_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58530_66840180_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78465980(),wok0_63789140_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65754740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65754740 = block;
   block->owner = (Object)__64882840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65754740;

   return block;
};

void code__64882840() {
 code__64882680();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_63569400_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
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
                              src0 = lv0_63383960_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_63789240_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78466200();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_63569400_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__65754740();
}

Block make__64882840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64882840 = block;
   block->owner = (Object)__64883420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64882840;

   return block;
};

void code__64883420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78466580(),ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78466520(),run_63789100_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__64882840();
}

Block make__64883420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64883420 = block;
   block->owner = (Object)__64119960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64883420;

   return block;
};

Block __65874780;

void code__65874780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78465760(),wok0_63789140_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78465700(),wok1_63789120_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78465640(),lvok0_63789220_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78465580(),lvok1_63789200_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78465520(),rvok_63789180_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65874780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65874780 = block;
   block->owner = (Object)__64119960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65874780;

   return block;
};

Block __65873220;

Block __65873000;

Block __65872680;

Block __65927820;

Block __65927660;

void code__65927660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58522_67120920_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,lv1_63465280_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78465120(),lvok1_63789200_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65927660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65927660 = block;
   block->owner = (Object)__65927820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65927660;

   return block;
};

void code__65927820() {
 code__65927660();
}

Block make__65927820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65927820 = block;
   block->owner = (Object)__65872680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65927820;

   return block;
};

Block __65872520;

void code__65872520() {
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
                  src0 = _58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__78465020();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78464980();
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
                        src0 = _58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78464720();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78464660();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78464540(),_58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65872520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65872520 = block;
   block->owner = (Object)__65872680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65872520;

   return block;
};

void code__65872680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78465280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65927820();
   }
   else {
  code__65872520();
   }
      }
   }
}

Block make__65872680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65872680 = block;
   block->owner = (Object)__65873000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65872680;

   return block;
};

void code__65873000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78465380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65872680();
   }
      }
   }
}

Block make__65873000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65873000 = block;
   block->owner = (Object)__65873220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65873000;

   return block;
};

void code__65873220() {
 code__65873000();
}

Block make__65873220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65873220 = block;
   block->owner = (Object)__64119960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65873220;

   return block;
};

Block __66261300;

Block __66260820;

Block __66260580;

void code__66260580() {
}

Block make__66260580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66260580 = block;
   block->owner = (Object)__66260820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66260580;

   return block;
};

Block __66924380;

void code__66924380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_63683420_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58531_66943400_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78463640(),wok1_63789120_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__66924380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66924380 = block;
   block->owner = (Object)__66260820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66924380;

   return block;
};

void code__66260820() {
 code__66260580();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_63683420_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
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
                              src0 = lv1_63465280_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_63789240_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78463880();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_63683420_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__66924380();
}

Block make__66260820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66260820 = block;
   block->owner = (Object)__66261300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66260820;

   return block;
};

void code__66261300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78464300(),ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78464240(),run_63789100_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__66260820();
}

Block make__66261300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66261300 = block;
   block->owner = (Object)__64119960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66261300;

   return block;
};

Block __67200460;

void code__67200460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78463480(),wok0_63789140_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78463420(),wok1_63789120_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78463360(),lvok0_63789220_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78463300(),lvok1_63789200_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78463240(),rvok_63789180_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__67200460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67200460 = block;
   block->owner = (Object)__64119960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67200460;

   return block;
};

void code__64119960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78468860(),run_63789100_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_63789180_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64119180();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_63789220_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64350340();
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
               src0 = lvok0_63789220_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               src1 = rvok_63789180_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_63789140_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64883420();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_63789140_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         src1 = wok1_63789120_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65874780();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_63789200_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65873220();
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
               src0 = lvok1_63789200_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               src1 = rvok_63789180_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_63789120_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66261300();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_63789140_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         src1 = wok1_63789120_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__67200460();
   }
      }
   }
}

Block make__64119960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64119960 = block;
   block->owner = (Object)__63788960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64119960;

   return block;
};

Block __63783580;

void code__63783580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78463180(),av0_63569400_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78463120(),av1_63683420_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63783580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63783580 = block;
   block->owner = (Object)__63788960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63783580;

   return block;
};

void code__63788960() {
 code__63788760();
 code__63787660();
 code__63786340();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78469460(),ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78469400(),run_63789100_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_63789100_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63784780();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_66471760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         src1 = run_63789100_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64119960();
   }
   else {
  code__63783580();
   }
      }
   }
}

Block make__63788960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63788960 = block;
   block->owner = (Object)__67223320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63788960;

   return block;
};

Block __51872220;

void code__51872220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51078720_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(abus__r_46170700_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_46170840_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__51872220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51872220 = block;
   block->owner = (Object)__54751420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51872220;

   return block;
};

Block __78064800;

void code__78064800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_46170840_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58571_67236820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78064800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78064800 = block;
   block->owner = (Object)__78064620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78064800;

   return block;
};

Block __78064580;

void code__78064580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58571_67236820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,dbus__r_46170840_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78064580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78064580 = block;
   block->owner = (Object)__78064360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78064580;

   return block;
};

Block __78064060;

void code__78064060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_67221120_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78064060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78064060 = block;
   block->owner = (Object)__78063900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78064060;

   return block;
};

Block __78063860;

void code__78063860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,trig__r_67221120_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78063860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78063860 = block;
   block->owner = (Object)__78063700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78063860;

   return block;
};

Block __78063380;

void code__78063380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_46170700_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58570_67236600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78063380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78063380 = block;
   block->owner = (Object)__78063220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78063380;

   return block;
};

Block __78063180;

void code__78063180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58570_67236600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,abus__r_46170700_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78063180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78063180 = block;
   block->owner = (Object)__78063020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78063180;

   return block;
};

Block __56554480;

void code__56554480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55834800_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(abus__r_55278640_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55278780_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56554480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56554480 = block;
   block->owner = (Object)__55227560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56554480;

   return block;
};

Block __78135240;

void code__78135240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55278780_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58586_51378680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78135240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78135240 = block;
   block->owner = (Object)__78135080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78135240;

   return block;
};

Block __78135040;

void code__78135040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58586_51378680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,dbus__r_55278780_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78135040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78135040 = block;
   block->owner = (Object)__78134860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78135040;

   return block;
};

Block __78134560;

void code__78134560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_54765960_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78134560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78134560 = block;
   block->owner = (Object)__78134400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78134560;

   return block;
};

Block __78134360;

void code__78134360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,trig__r_54765960_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78134360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78134360 = block;
   block->owner = (Object)__78134200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78134360;

   return block;
};

Block __78133800;

void code__78133800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55278640_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58585_51378200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78133800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78133800 = block;
   block->owner = (Object)__78133640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78133800;

   return block;
};

Block __78133600;

void code__78133600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58585_51378200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,abus__r_55278640_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78133600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78133600 = block;
   block->owner = (Object)__78133440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78133600;

   return block;
};

Block __78132200;

void code__78132200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52538220_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58599_48063560_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78132200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78132200 = block;
   block->owner = (Object)__78132020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78132200;

   return block;
};

Block __78131960;

void code__78131960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58599_48063560_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,reg__0_52538220_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78131960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78131960 = block;
   block->owner = (Object)__78131780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78131960;

   return block;
};

Block __78131440;

void code__78131440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_62660020_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58600_50427940_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78131440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78131440 = block;
   block->owner = (Object)__78131280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78131440;

   return block;
};

Block __78131240;

void code__78131240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58600_50427940_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,reg__1_62660020_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78131240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78131240 = block;
   block->owner = (Object)__78131080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78131240;

   return block;
};

Block __63778700;

Block __63778540;

void code__63778540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78485180(),_58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63778540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63778540 = block;
   block->owner = (Object)__63778700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63778540;

   return block;
};

Block __63778140;

void code__63778140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78485120(),_58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63778140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63778140 = block;
   block->owner = (Object)__63778700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63778140;

   return block;
};

Block __63776140;

Block __63775780;

void code__63775780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58530_66840180_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,lv0_63453500_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78484700(),lvok0_63778960_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63775780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63775780 = block;
   block->owner = (Object)__63776140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63775780;

   return block;
};

Block __64121620;

Block __64119840;

Block __64174620;

void code__64174620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58571_67236820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,rv0_63667280_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78484320(),_58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78484260(),rvok0_63778920_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64174620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64174620 = block;
   block->owner = (Object)__64119840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64174620;

   return block;
};

Block __64119120;

void code__64119120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78484180(),_58570_67236600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78484080(),_58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64119120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64119120 = block;
   block->owner = (Object)__64119840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64119120;

   return block;
};

void code__64119840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78484520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64174620();
   }
   else {
  code__64119120();
   }
      }
   }
}

Block make__64119840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64119840 = block;
   block->owner = (Object)__64121620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64119840;

   return block;
};

void code__64121620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58572_67236800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78484620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64119840();
   }
      }
   }
}

Block make__64121620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64121620 = block;
   block->owner = (Object)__63776140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64121620;

   return block;
};

Block __64474620;

Block __64473940;

void code__64473940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_63453500_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      src1 = rv0_63667280_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58599_48063560_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64473940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64473940 = block;
   block->owner = (Object)__64474620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64473940;

   return block;
};

void code__64474620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78483920(),run_63778880_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78483860(),ack__add_66471700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__64473940();
}

Block make__64474620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64474620 = block;
   block->owner = (Object)__63776140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64474620;

   return block;
};

Block __65081180;

void code__65081180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58531_66943400_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,lv1_63514440_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78483540(),lvok1_63778940_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65081180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65081180 = block;
   block->owner = (Object)__63776140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65081180;

   return block;
};

Block __65656340;

Block __65655880;

Block __65654860;

void code__65654860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58586_51378680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,rv1_63778980_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78483200(),_58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78483120(),rvok1_63778900_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65654860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65654860 = block;
   block->owner = (Object)__65655880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65654860;

   return block;
};

Block __65655640;

void code__65655640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78483060(),_58585_51378200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78483000(),_58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65655640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65655640 = block;
   block->owner = (Object)__65655880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65655640;

   return block;
};

void code__65655880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78483360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65654860();
   }
   else {
  code__65655640();
   }
      }
   }
}

Block make__65655880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65655880 = block;
   block->owner = (Object)__65656340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65655880;

   return block;
};

void code__65656340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58587_51378660_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78483460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65655880();
   }
      }
   }
}

Block make__65656340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65656340 = block;
   block->owner = (Object)__63776140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65656340;

   return block;
};

Block __65859700;

Block __65859160;

void code__65859160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_63514440_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      src1 = rv1_63778980_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58600_50427940_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__65859160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65859160 = block;
   block->owner = (Object)__65859700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65859160;

   return block;
};

void code__65859700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78482840(),run_63778880_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78482780(),ack__add_66471700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__65859160();
}

Block make__65859700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65859700 = block;
   block->owner = (Object)__63776140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65859700;

   return block;
};

void code__63776140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78484840(),run_63778880_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__63775780();
 code__64121620();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_63778960_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         src1 = rvok0_63778920_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64474620();
   }
      }
   }
 code__65081180();
 code__65656340();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_63778940_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         src1 = rvok1_63778900_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65859700();
   }
      }
   }
}

Block make__63776140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63776140 = block;
   block->owner = (Object)__63778700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63776140;

   return block;
};

Block __63777340;

void code__63777340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78482540(),lvok0_63778960_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78482480(),rvok0_63778920_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78482420(),lvok1_63778940_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78482340(),rvok1_63778900_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63777340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63777340 = block;
   block->owner = (Object)__63778700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63777340;

   return block;
};

void code__63778700() {
 code__63778540();
 code__63778140();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78485060(),ack__add_66471700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78485000(),run_63778880_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_66471720_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         src1 = run_63778880_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63776140();
   }
   else {
  code__63777340();
   }
      }
   }
}

Block make__63778700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63778700 = block;
   block->owner = (Object)__66471940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63778700;

   return block;
};

Value make__78366460() {
   static unsigned long long data[] = { 4294967267ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366440() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78365260() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78365240() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78463100() {
   static unsigned long long data[] = { 5ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__78486720() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__78470160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78470080() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78469960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78469880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78469800() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78469740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78469660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78469580() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78469520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78469460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78469400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78469280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78469220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78469160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78469100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78469040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78468860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78468720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78468620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78468460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78468360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78468320() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78468040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78467960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78467800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78467660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78467560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78467400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78467300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78467260() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78467020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78466960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78466820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78466580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78466520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78466200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78465980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78465760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78465700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78465640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78465580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78465520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78465380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78465280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78465120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78465020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78464980() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78464720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78464660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78464540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78464300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78464240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78463880() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78463640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78463480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78463420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78463360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78463300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78463240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78463180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78463120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78485180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78485120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78485060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78485000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78484840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78484700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78484620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78484520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78484320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78484260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78484180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78484080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78483920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78483860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78483540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78483460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78483360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78483200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78483120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78483060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78483000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78482840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78482780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78482540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78482480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78482420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78482340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78480700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78480640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78480580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78480400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78480260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78480200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78480140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78480020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78479940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78479600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78479460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_840_66575520;

SignalI req__mac_66471760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makereq__mac_66471760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_66471760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
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

SignalI ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeack_66471740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
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

SignalI ack__mac_66471720_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeack__mac_66471720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_66471720_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
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

SignalI ack__add_66471700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeack__add_66471700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_66471700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
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

SignalI _58507_66622700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58507_66622700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58507_66622700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":507";
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

SignalI _58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58505_66622680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":505";
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

SignalI _58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58506_66622600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":506";
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

SignalI _58530_66840180_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58530_66840180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58530_66840180_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":530";
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

SignalI _58531_66943400_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58531_66943400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58531_66943400_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":531";
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

SignalI _58522_67120920_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58522_67120920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58522_67120920_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":522";
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

SignalI _58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58520_67120900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":520";
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

SignalI _58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58521_67120820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":521";
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

SignalI _58571_67236820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58571_67236820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58571_67236820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":571";
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

SignalI _58572_67236800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58572_67236800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58572_67236800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":572";
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

SignalI _58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58569_67236780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":569";
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

SignalI _58570_67236600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58570_67236600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58570_67236600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":570";
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

SignalI _58599_48063560_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58599_48063560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58599_48063560_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":599";
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

SignalI _58600_50427940_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58600_50427940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58600_50427940_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":600";
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

SignalI _58586_51378680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58586_51378680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58586_51378680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":586";
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

SignalI _58587_51378660_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58587_51378660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58587_51378660_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":587";
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

SignalI _58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58584_51378620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":584";
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

SignalI _58585_51378200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58585_51378200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58585_51378200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = ":585";
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

SignalI value__z0_51745480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makevalue__z0_51745480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_51745480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
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

SignalI value__z1_52069060_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makevalue__z1_52069060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_52069060_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = "value_z1";
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

SignalI value__a0_54320700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makevalue__a0_54320700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_54320700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
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

SignalI value__a1_54686840_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makevalue__a1_54686840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_54686840_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = "value_a1";
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

SignalI flag__z0_54686820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeflag__z0_54686820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_54686820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
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

SignalI flag__z1_54686780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeflag__z1_54686780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_54686780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = "flag_z1";
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

SignalI ack__a0_54686760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeack__a0_54686760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_54686760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
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

SignalI ack__a1_54686740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeack__a1_54686740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_54686740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_840_66575520;
   signalI->name = "ack_a1";
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

SystemI counter_54733320;

SystemI makecounter_54733320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_54733320 = systemI;
   systemI->owner = (Object)layer0_58_840_66575520;
   systemI->name = "counter";
   systemI->system = counter_58_8410_54714680;

   return systemI;
};

SystemI func0_54414880;

SystemI makefunc0_54414880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_54414880 = systemI;
   systemI->owner = (Object)layer0_58_840_66575520;
   systemI->name = "func0";
   systemI->system = func0_58_8410_51776220;

   return systemI;
};

SystemI func1_63371200;

SystemI makefunc1_63371200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_63371200 = systemI;
   systemI->owner = (Object)layer0_58_840_66575520;
   systemI->name = "func1";
   systemI->system = func1_58_8400_62819800;

   return systemI;
};

Scope channel__w0_58498_66575160;

SignalI trig__r_66573400_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI maketrig__r_66573400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_66573400_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58498_66575160;
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

SignalI dbus__r_66746820_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makedbus__r_66746820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_66746820_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58498_66575160;
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

SignalI abus__r_66746720_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_66746720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_66746720_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58498_66575160;
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

SignalI mem_46189180_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makemem_46189180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_46189180_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58498_66575160;
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
         src0 = make__78366460();
         src1 = make__78366440();
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

Scope raddr_58499_66574860;

Scope makeraddr_58499_66574860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58499_66574860 = scope;
   scope->owner = (Object)channel__w0_58498_66575160;
   scope->name = "raddr:499";
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

Scope rinc_58504_66574400;

Scope makerinc_58504_66574400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58504_66574400 = scope;
   scope->owner = (Object)channel__w0_58498_66575160;
   scope->name = "rinc:504";
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

Scope rdec_58508_66573980;

Scope makerdec_58508_66573980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58508_66573980 = scope;
   scope->owner = (Object)channel__w0_58498_66575160;
   scope->name = "rdec:508";
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

Behavior __52139220;

Behavior make__52139220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52139220 = behavior;
   behavior->owner = (Object)channel__w0_58498_66575160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg = realloc(clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg[clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__50947500();

   return behavior;
}

Behavior __78049140;

Behavior make__78049140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78049140 = behavior;
   behavior->owner = (Object)channel__w0_58498_66575160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_66746820_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   dbus__r_66746820_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__r_66746820_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(dbus__r_66746820_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,dbus__r_66746820_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__r_66746820_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[dbus__r_66746820_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78049300();

   return behavior;
}

Behavior __78048940;

Behavior make__78048940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78048940 = behavior;
   behavior->owner = (Object)channel__w0_58498_66575160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58507_66622700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58507_66622700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58507_66622700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58507_66622700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58507_66622700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58507_66622700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58507_66622700_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78049100();

   return behavior;
}

Behavior __78048440;

Behavior make__78048440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78048440 = behavior;
   behavior->owner = (Object)channel__w0_58498_66575160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_66573400_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   trig__r_66573400_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   trig__r_66573400_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(trig__r_66573400_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,trig__r_66573400_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
trig__r_66573400_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[trig__r_66573400_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78048640();

   return behavior;
}

Behavior __78048180;

Behavior make__78048180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78048180 = behavior;
   behavior->owner = (Object)channel__w0_58498_66575160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58505_66622680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78048400();

   return behavior;
}

Behavior __78047720;

Behavior make__78047720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78047720 = behavior;
   behavior->owner = (Object)channel__w0_58498_66575160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_66746720_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   abus__r_66746720_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_66746720_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(abus__r_66746720_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,abus__r_66746720_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_66746720_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[abus__r_66746720_channel__w0_58498_66575160_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78047880();

   return behavior;
}

Behavior __78047520;

Behavior make__78047520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78047520 = behavior;
   behavior->owner = (Object)channel__w0_58498_66575160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58506_66622600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78047680();

   return behavior;
}

Scope makechannel__w0_58498_66575160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58498_66575160 = scope;
   scope->owner = (Object)layer0_58_840_66575520;
   scope->name = "channel_w0:498";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_66573400();
   scope->inners[1] = makedbus__r_66746820();
   scope->inners[2] = makeabus__r_66746720();
   scope->inners[3] = makemem_46189180();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58499_66574860();
   scope->scopes[1] = makerinc_58504_66574400();
   scope->scopes[2] = makerdec_58508_66573980();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52139220();
   scope->behaviors[1] = make__78049140();
   scope->behaviors[2] = make__78048940();
   scope->behaviors[3] = make__78048440();
   scope->behaviors[4] = make__78048180();
   scope->behaviors[5] = make__78047720();
   scope->behaviors[6] = make__78047520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58513_52138800;

SignalI trig__r_52172340_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI maketrig__r_52172340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_52172340_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w1_58513_52138800;
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

SignalI dbus__r_54316980_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makedbus__r_54316980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54316980_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w1_58513_52138800;
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

SignalI abus__r_54316740_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_54316740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54316740_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w1_58513_52138800;
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

SignalI mem_55863180_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makemem_55863180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55863180_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w1_58513_52138800;
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
         src0 = make__78365260();
         src1 = make__78365240();
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

Scope raddr_58514_52137860;

Scope makeraddr_58514_52137860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58514_52137860 = scope;
   scope->owner = (Object)channel__w1_58513_52138800;
   scope->name = "raddr:514";
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

Scope rinc_58519_52158360;

Scope makerinc_58519_52158360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58519_52158360 = scope;
   scope->owner = (Object)channel__w1_58513_52138800;
   scope->name = "rinc:519";
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

Scope rdec_58523_52151720;

Scope makerdec_58523_52151720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58523_52151720 = scope;
   scope->owner = (Object)channel__w1_58513_52138800;
   scope->name = "rdec:523";
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

Behavior __57823020;

Behavior make__57823020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57823020 = behavior;
   behavior->owner = (Object)channel__w1_58513_52138800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg = realloc(clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg[clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__56764440();

   return behavior;
}

Behavior __78046020;

Behavior make__78046020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78046020 = behavior;
   behavior->owner = (Object)channel__w1_58513_52138800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54316980_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   dbus__r_54316980_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__r_54316980_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(dbus__r_54316980_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,dbus__r_54316980_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__r_54316980_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[dbus__r_54316980_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78046220();

   return behavior;
}

Behavior __78045820;

Behavior make__78045820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78045820 = behavior;
   behavior->owner = (Object)channel__w1_58513_52138800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58522_67120920_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58522_67120920_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58522_67120920_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58522_67120920_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58522_67120920_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58522_67120920_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58522_67120920_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78045980();

   return behavior;
}

Behavior __78045360;

Behavior make__78045360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78045360 = behavior;
   behavior->owner = (Object)channel__w1_58513_52138800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_52172340_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   trig__r_52172340_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   trig__r_52172340_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(trig__r_52172340_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,trig__r_52172340_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
trig__r_52172340_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[trig__r_52172340_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78045520();

   return behavior;
}

Behavior __78069680;

Behavior make__78069680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78069680 = behavior;
   behavior->owner = (Object)channel__w1_58513_52138800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58520_67120900_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78045320();

   return behavior;
}

Behavior __78069220;

Behavior make__78069220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78069220 = behavior;
   behavior->owner = (Object)channel__w1_58513_52138800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_54316740_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   abus__r_54316740_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_54316740_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(abus__r_54316740_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,abus__r_54316740_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_54316740_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[abus__r_54316740_channel__w1_58513_52138800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78069380();

   return behavior;
}

Behavior __78069020;

Behavior make__78069020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78069020 = behavior;
   behavior->owner = (Object)channel__w1_58513_52138800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58521_67120820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78069180();

   return behavior;
}

Scope makechannel__w1_58513_52138800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58513_52138800 = scope;
   scope->owner = (Object)layer0_58_840_66575520;
   scope->name = "channel_w1:513";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_52172340();
   scope->inners[1] = makedbus__r_54316980();
   scope->inners[2] = makeabus__r_54316740();
   scope->inners[3] = makemem_55863180();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58514_52137860();
   scope->scopes[1] = makerinc_58519_52158360();
   scope->scopes[2] = makerdec_58523_52151720();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57823020();
   scope->behaviors[1] = make__78046020();
   scope->behaviors[2] = make__78045820();
   scope->behaviors[3] = make__78045360();
   scope->behaviors[4] = make__78069680();
   scope->behaviors[5] = make__78069220();
   scope->behaviors[6] = make__78069020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58528_57822480;

SignalI reg__0_56247560_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makereg__0_56247560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56247560_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__accum_58528_57822480;
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

SignalI reg__1_62644120_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makereg__1_62644120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_62644120_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__accum_58528_57822480;
   signalI->name = "reg_1";
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

Scope anum_58529_57821000;

Scope makeanum_58529_57821000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58529_57821000 = scope;
   scope->owner = (Object)channel__accum_58528_57822480;
   scope->name = "anum:529";
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

Scope raddr_58532_55230240;

Scope makeraddr_58532_55230240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58532_55230240 = scope;
   scope->owner = (Object)channel__accum_58528_57822480;
   scope->name = "raddr:532";
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

Scope waddr_58536_55229820;

Scope makewaddr_58536_55229820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58536_55229820 = scope;
   scope->owner = (Object)channel__accum_58528_57822480;
   scope->name = "waddr:536";
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

Scope rinc_58540_55229280;

SignalI abus__r_55228800_rinc_58540_55229280_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_55228800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55228800_rinc_58540_55229280_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rinc_58540_55229280;
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

Scope makerinc_58540_55229280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58540_55229280 = scope;
   scope->owner = (Object)channel__accum_58528_57822480;
   scope->name = "rinc:540";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55228800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58545_55228680;

SignalI abus__w_55228240_winc_58545_55228680_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__w_55228240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55228240_winc_58545_55228680_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)winc_58545_55228680;
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

Scope makewinc_58545_55228680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58545_55228680 = scope;
   scope->owner = (Object)channel__accum_58528_57822480;
   scope->name = "winc:545";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55228240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58550_55228080;

SignalI abus__r_55227440_rdec_58550_55228080_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_55227440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55227440_rdec_58550_55228080_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rdec_58550_55228080;
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

Scope makerdec_58550_55228080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58550_55228080 = scope;
   scope->owner = (Object)channel__accum_58528_57822480;
   scope->name = "rdec:550";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55227440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58555_55227300;

SignalI abus__w_55226760_wdec_58555_55227300_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__w_55226760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55226760_wdec_58555_55227300_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)wdec_58555_55227300;
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

Scope makewdec_58555_55227300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58555_55227300 = scope;
   scope->owner = (Object)channel__accum_58528_57822480;
   scope->name = "wdec:555";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55226760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78067520;

Behavior make__78067520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78067520 = behavior;
   behavior->owner = (Object)channel__accum_58528_57822480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56247560_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   reg__0_56247560_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   reg__0_56247560_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(reg__0_56247560_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,reg__0_56247560_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__0_56247560_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[reg__0_56247560_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78067700();

   return behavior;
}

Behavior __78067320;

Behavior make__78067320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78067320 = behavior;
   behavior->owner = (Object)channel__accum_58528_57822480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58530_66840180_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58530_66840180_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58530_66840180_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58530_66840180_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58530_66840180_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58530_66840180_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58530_66840180_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78067480();

   return behavior;
}

Behavior __78066840;

Behavior make__78066840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78066840 = behavior;
   behavior->owner = (Object)channel__accum_58528_57822480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_62644120_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   reg__1_62644120_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   reg__1_62644120_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(reg__1_62644120_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,reg__1_62644120_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__1_62644120_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[reg__1_62644120_channel__accum_58528_57822480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78067020();

   return behavior;
}

Behavior __78066600;

Behavior make__78066600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78066600 = behavior;
   behavior->owner = (Object)channel__accum_58528_57822480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58531_66943400_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58531_66943400_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58531_66943400_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58531_66943400_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58531_66943400_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58531_66943400_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58531_66943400_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78066780();

   return behavior;
}

Scope makechannel__accum_58528_57822480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58528_57822480 = scope;
   scope->owner = (Object)layer0_58_840_66575520;
   scope->name = "channel_accum:528";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56247560();
   scope->inners[1] = makereg__1_62644120();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58529_57821000();
   scope->scopes[1] = makeraddr_58532_55230240();
   scope->scopes[2] = makewaddr_58536_55229820();
   scope->scopes[3] = makerinc_58540_55229280();
   scope->scopes[4] = makewinc_58545_55228680();
   scope->scopes[5] = makerdec_58550_55228080();
   scope->scopes[6] = makewdec_58555_55227300();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78067520();
   scope->behaviors[1] = make__78067320();
   scope->behaviors[2] = make__78066840();
   scope->behaviors[3] = make__78066600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58560_63253980;

SignalI lv0_63383960_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelv0_63383960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_63383960_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58560_63253980;
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

SignalI lv1_63465280_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelv1_63465280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_63465280_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58560_63253980;
   signalI->name = "lv1";
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

SignalI av0_63569400_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeav0_63569400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_63569400_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58560_63253980;
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

SignalI av1_63683420_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeav1_63683420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_63683420_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58560_63253980;
   signalI->name = "av1";
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

SignalI rv_63789240_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makerv_63789240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_63789240_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58560_63253980;
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

SignalI lvok0_63789220_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelvok0_63789220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_63789220_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58560_63253980;
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

SignalI lvok1_63789200_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelvok1_63789200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_63789200_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58560_63253980;
   signalI->name = "lvok1";
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

SignalI rvok_63789180_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makervok_63789180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_63789180_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58560_63253980;
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

SignalI wok0_63789140_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makewok0_63789140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_63789140_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58560_63253980;
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

SignalI wok1_63789120_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makewok1_63789120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_63789120_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58560_63253980;
   signalI->name = "wok1";
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

SignalI run_63789100_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makerun_63789100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_63789100_mac__n1_58560_63253980_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58560_63253980;
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

Behavior __67223320;

Behavior make__67223320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __67223320 = behavior;
   behavior->owner = (Object)mac__n1_58560_63253980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos = realloc(clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos[clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__63788960();

   return behavior;
}

Scope makemac__n1_58560_63253980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58560_63253980 = scope;
   scope->owner = (Object)layer0_58_840_66575520;
   scope->name = "mac_n1:560";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_63383960();
   scope->inners[1] = makelv1_63465280();
   scope->inners[2] = makeav0_63569400();
   scope->inners[3] = makeav1_63683420();
   scope->inners[4] = makerv_63789240();
   scope->inners[5] = makelvok0_63789220();
   scope->inners[6] = makelvok1_63789200();
   scope->inners[7] = makervok_63789180();
   scope->inners[8] = makewok0_63789140();
   scope->inners[9] = makewok1_63789120();
   scope->inners[10] = makerun_63789100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__67223320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58567_67223200;

SignalI trig__r_67221120_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI maketrig__r_67221120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_67221120_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58567_67223200;
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

SignalI dbus__r_46170840_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makedbus__r_46170840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_46170840_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58567_67223200;
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

SignalI abus__r_46170700_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_46170700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46170700_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58567_67223200;
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

SignalI mem_51078720_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makemem_51078720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51078720_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58567_67223200;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__78463100(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58568_67222880;

Scope makeraddr_58568_67222880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58568_67222880 = scope;
   scope->owner = (Object)channel__b0_58567_67223200;
   scope->name = "raddr:568";
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

Scope rinc_58573_67222440;

Scope makerinc_58573_67222440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58573_67222440 = scope;
   scope->owner = (Object)channel__b0_58567_67223200;
   scope->name = "rinc:573";
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

Scope rdec_58577_67221960;

Scope makerdec_58577_67221960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58577_67221960 = scope;
   scope->owner = (Object)channel__b0_58567_67223200;
   scope->name = "rdec:577";
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

Behavior __54751420;

Behavior make__54751420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54751420 = behavior;
   behavior->owner = (Object)channel__b0_58567_67223200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg = realloc(clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg[clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__51872220();

   return behavior;
}

Behavior __78064620;

Behavior make__78064620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78064620 = behavior;
   behavior->owner = (Object)channel__b0_58567_67223200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_46170840_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   dbus__r_46170840_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__r_46170840_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(dbus__r_46170840_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,dbus__r_46170840_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__r_46170840_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[dbus__r_46170840_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78064800();

   return behavior;
}

Behavior __78064360;

Behavior make__78064360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78064360 = behavior;
   behavior->owner = (Object)channel__b0_58567_67223200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58571_67236820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58571_67236820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58571_67236820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58571_67236820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58571_67236820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58571_67236820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58571_67236820_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78064580();

   return behavior;
}

Behavior __78063900;

Behavior make__78063900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78063900 = behavior;
   behavior->owner = (Object)channel__b0_58567_67223200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_67221120_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   trig__r_67221120_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   trig__r_67221120_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(trig__r_67221120_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,trig__r_67221120_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
trig__r_67221120_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[trig__r_67221120_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78064060();

   return behavior;
}

Behavior __78063700;

Behavior make__78063700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78063700 = behavior;
   behavior->owner = (Object)channel__b0_58567_67223200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58569_67236780_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78063860();

   return behavior;
}

Behavior __78063220;

Behavior make__78063220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78063220 = behavior;
   behavior->owner = (Object)channel__b0_58567_67223200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_46170700_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   abus__r_46170700_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_46170700_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(abus__r_46170700_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,abus__r_46170700_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_46170700_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[abus__r_46170700_channel__b0_58567_67223200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78063380();

   return behavior;
}

Behavior __78063020;

Behavior make__78063020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78063020 = behavior;
   behavior->owner = (Object)channel__b0_58567_67223200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58570_67236600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58570_67236600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58570_67236600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58570_67236600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58570_67236600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58570_67236600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58570_67236600_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78063180();

   return behavior;
}

Scope makechannel__b0_58567_67223200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58567_67223200 = scope;
   scope->owner = (Object)layer0_58_840_66575520;
   scope->name = "channel_b0:567";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_67221120();
   scope->inners[1] = makedbus__r_46170840();
   scope->inners[2] = makeabus__r_46170700();
   scope->inners[3] = makemem_51078720();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58568_67222880();
   scope->scopes[1] = makerinc_58573_67222440();
   scope->scopes[2] = makerdec_58577_67221960();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54751420();
   scope->behaviors[1] = make__78064620();
   scope->behaviors[2] = make__78064360();
   scope->behaviors[3] = make__78063900();
   scope->behaviors[4] = make__78063700();
   scope->behaviors[5] = make__78063220();
   scope->behaviors[6] = make__78063020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58582_54751100;

SignalI trig__r_54765960_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI maketrig__r_54765960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_54765960_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b1_58582_54751100;
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

SignalI dbus__r_55278780_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makedbus__r_55278780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55278780_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b1_58582_54751100;
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

SignalI abus__r_55278640_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_55278640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55278640_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b1_58582_54751100;
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

SignalI mem_55834800_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makemem_55834800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55834800_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b1_58582_54751100;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__78486720(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58583_54749600;

Scope makeraddr_58583_54749600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58583_54749600 = scope;
   scope->owner = (Object)channel__b1_58582_54751100;
   scope->name = "raddr:583";
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

Scope rinc_58588_54771480;

Scope makerinc_58588_54771480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58588_54771480 = scope;
   scope->owner = (Object)channel__b1_58582_54751100;
   scope->name = "rinc:588";
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

Scope rdec_58592_54768980;

Scope makerdec_58592_54768980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58592_54768980 = scope;
   scope->owner = (Object)channel__b1_58582_54751100;
   scope->name = "rdec:592";
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

Behavior __55227560;

Behavior make__55227560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55227560 = behavior;
   behavior->owner = (Object)channel__b1_58582_54751100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg = realloc(clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg[clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__56554480();

   return behavior;
}

Behavior __78135080;

Behavior make__78135080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78135080 = behavior;
   behavior->owner = (Object)channel__b1_58582_54751100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55278780_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   dbus__r_55278780_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__r_55278780_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(dbus__r_55278780_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,dbus__r_55278780_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__r_55278780_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[dbus__r_55278780_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78135240();

   return behavior;
}

Behavior __78134860;

Behavior make__78134860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78134860 = behavior;
   behavior->owner = (Object)channel__b1_58582_54751100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58586_51378680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58586_51378680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58586_51378680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58586_51378680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58586_51378680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58586_51378680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58586_51378680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78135040();

   return behavior;
}

Behavior __78134400;

Behavior make__78134400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78134400 = behavior;
   behavior->owner = (Object)channel__b1_58582_54751100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_54765960_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   trig__r_54765960_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   trig__r_54765960_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(trig__r_54765960_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,trig__r_54765960_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
trig__r_54765960_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[trig__r_54765960_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78134560();

   return behavior;
}

Behavior __78134200;

Behavior make__78134200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78134200 = behavior;
   behavior->owner = (Object)channel__b1_58582_54751100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58584_51378620_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78134360();

   return behavior;
}

Behavior __78133640;

Behavior make__78133640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78133640 = behavior;
   behavior->owner = (Object)channel__b1_58582_54751100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55278640_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   abus__r_55278640_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_55278640_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(abus__r_55278640_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,abus__r_55278640_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_55278640_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[abus__r_55278640_channel__b1_58582_54751100_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78133800();

   return behavior;
}

Behavior __78133440;

Behavior make__78133440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78133440 = behavior;
   behavior->owner = (Object)channel__b1_58582_54751100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58585_51378200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58585_51378200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58585_51378200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58585_51378200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58585_51378200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58585_51378200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58585_51378200_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78133600();

   return behavior;
}

Scope makechannel__b1_58582_54751100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58582_54751100 = scope;
   scope->owner = (Object)layer0_58_840_66575520;
   scope->name = "channel_b1:582";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_54765960();
   scope->inners[1] = makedbus__r_55278780();
   scope->inners[2] = makeabus__r_55278640();
   scope->inners[3] = makemem_55834800();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58583_54749600();
   scope->scopes[1] = makerinc_58588_54771480();
   scope->scopes[2] = makerdec_58592_54768980();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55227560();
   scope->behaviors[1] = make__78135080();
   scope->behaviors[2] = make__78134860();
   scope->behaviors[3] = make__78134400();
   scope->behaviors[4] = make__78134200();
   scope->behaviors[5] = make__78133640();
   scope->behaviors[6] = make__78133440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58597_55227340;

SignalI reg__0_52538220_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makereg__0_52538220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52538220_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__z_58597_55227340;
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

SignalI reg__1_62660020_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makereg__1_62660020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_62660020_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__z_58597_55227340;
   signalI->name = "reg_1";
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

Scope anum_58598_55226640;

Scope makeanum_58598_55226640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58598_55226640 = scope;
   scope->owner = (Object)channel__z_58597_55227340;
   scope->name = "anum:598";
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

Scope raddr_58601_55226040;

Scope makeraddr_58601_55226040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58601_55226040 = scope;
   scope->owner = (Object)channel__z_58597_55227340;
   scope->name = "raddr:601";
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

Scope waddr_58605_55225560;

Scope makewaddr_58605_55225560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58605_55225560 = scope;
   scope->owner = (Object)channel__z_58597_55227340;
   scope->name = "waddr:605";
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

Scope rinc_58609_55224940;

SignalI abus__r_55224480_rinc_58609_55224940_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_55224480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55224480_rinc_58609_55224940_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rinc_58609_55224940;
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

Scope makerinc_58609_55224940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58609_55224940 = scope;
   scope->owner = (Object)channel__z_58597_55227340;
   scope->name = "rinc:609";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55224480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58613_55224340;

SignalI abus__w_55223840_winc_58613_55224340_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__w_55223840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55223840_winc_58613_55224340_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)winc_58613_55224340;
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

Scope makewinc_58613_55224340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58613_55224340 = scope;
   scope->owner = (Object)channel__z_58597_55227340;
   scope->name = "winc:613";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55223840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58617_55223720;

SignalI abus__r_55223260_rdec_58617_55223720_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_55223260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55223260_rdec_58617_55223720_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rdec_58617_55223720;
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

Scope makerdec_58617_55223720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58617_55223720 = scope;
   scope->owner = (Object)channel__z_58597_55227340;
   scope->name = "rdec:617";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55223260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58622_55223100;

SignalI abus__w_55222540_wdec_58622_55223100_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__w_55222540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55222540_wdec_58622_55223100_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)wdec_58622_55223100;
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

Scope makewdec_58622_55223100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58622_55223100 = scope;
   scope->owner = (Object)channel__z_58597_55227340;
   scope->name = "wdec:622";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55222540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78132020;

Behavior make__78132020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78132020 = behavior;
   behavior->owner = (Object)channel__z_58597_55227340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52538220_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   reg__0_52538220_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   reg__0_52538220_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(reg__0_52538220_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,reg__0_52538220_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__0_52538220_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[reg__0_52538220_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78132200();

   return behavior;
}

Behavior __78131780;

Behavior make__78131780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78131780 = behavior;
   behavior->owner = (Object)channel__z_58597_55227340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58599_48063560_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58599_48063560_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58599_48063560_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58599_48063560_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58599_48063560_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58599_48063560_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58599_48063560_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78131960();

   return behavior;
}

Behavior __78131280;

Behavior make__78131280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78131280 = behavior;
   behavior->owner = (Object)channel__z_58597_55227340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_62660020_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   reg__1_62660020_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   reg__1_62660020_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(reg__1_62660020_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,reg__1_62660020_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__1_62660020_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[reg__1_62660020_channel__z_58597_55227340_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78131440();

   return behavior;
}

Behavior __78131080;

Behavior make__78131080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78131080 = behavior;
   behavior->owner = (Object)channel__z_58597_55227340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58600_50427940_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58600_50427940_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58600_50427940_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58600_50427940_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58600_50427940_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58600_50427940_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58600_50427940_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78131240();

   return behavior;
}

Scope makechannel__z_58597_55227340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58597_55227340 = scope;
   scope->owner = (Object)layer0_58_840_66575520;
   scope->name = "channel_z:597";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52538220();
   scope->inners[1] = makereg__1_62660020();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58598_55226640();
   scope->scopes[1] = makeraddr_58601_55226040();
   scope->scopes[2] = makewaddr_58605_55225560();
   scope->scopes[3] = makerinc_58609_55224940();
   scope->scopes[4] = makewinc_58613_55224340();
   scope->scopes[5] = makerdec_58617_55223720();
   scope->scopes[6] = makewdec_58622_55223100();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78132020();
   scope->behaviors[1] = make__78131780();
   scope->behaviors[2] = make__78131280();
   scope->behaviors[3] = make__78131080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58627_63351040;

SignalI lv0_63453500_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelv0_63453500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_63453500_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58627_63351040;
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

SignalI lv1_63514440_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelv1_63514440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_63514440_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58627_63351040;
   signalI->name = "lv1";
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

SignalI rv0_63667280_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makerv0_63667280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_63667280_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58627_63351040;
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

SignalI rv1_63778980_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makerv1_63778980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_63778980_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58627_63351040;
   signalI->name = "rv1";
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

SignalI lvok0_63778960_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelvok0_63778960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_63778960_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58627_63351040;
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

SignalI lvok1_63778940_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelvok1_63778940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_63778940_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58627_63351040;
   signalI->name = "lvok1";
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

SignalI rvok0_63778920_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makervok0_63778920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_63778920_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58627_63351040;
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

SignalI rvok1_63778900_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makervok1_63778900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_63778900_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58627_63351040;
   signalI->name = "rvok1";
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

SignalI run_63778880_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makerun_63778880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_63778880_add__n_58627_63351040_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58627_63351040;
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

Behavior __66471940;

Behavior make__66471940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66471940 = behavior;
   behavior->owner = (Object)add__n_58627_63351040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos = realloc(clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos[clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__63778700();

   return behavior;
}

Scope makeadd__n_58627_63351040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58627_63351040 = scope;
   scope->owner = (Object)layer0_58_840_66575520;
   scope->name = "add_n:627";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_63453500();
   scope->inners[1] = makelv1_63514440();
   scope->inners[2] = makerv0_63667280();
   scope->inners[3] = makerv1_63778980();
   scope->inners[4] = makelvok0_63778960();
   scope->inners[5] = makelvok1_63778940();
   scope->inners[6] = makervok0_63778920();
   scope->inners[7] = makervok1_63778900();
   scope->inners[8] = makerun_63778880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__66471940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __65034740;

Behavior make__65034740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65034740 = behavior;
   behavior->owner = (Object)layer0_58_840_66575520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos = realloc(clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos[clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__65012360();

   return behavior;
}

Behavior __65991380;

Behavior make__65991380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65991380 = behavior;
   behavior->owner = (Object)layer0_58_840_66575520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos = realloc(clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos[clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__65034540();

   return behavior;
}

Behavior __66943100;

Behavior make__66943100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66943100 = behavior;
   behavior->owner = (Object)layer0_58_840_66575520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos = realloc(clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos[clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__65991200();

   return behavior;
}

Behavior __78000680;

Behavior make__78000680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78000680 = behavior;
   behavior->owner = (Object)layer0_58_840_66575520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_66939180_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   req_66939180_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   req_66939180_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(req_66939180_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,req_66939180_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
req_66939180_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[req_66939180_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_66471720_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   ack__mac_66471720_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   ack__mac_66471720_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(ack__mac_66471720_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,ack__mac_66471720_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__mac_66471720_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[ack__mac_66471720_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78000920();

   return behavior;
}

Behavior __78050200;

Behavior make__78050200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78050200 = behavior;
   behavior->owner = (Object)layer0_58_840_66575520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[clk_66939260_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[ack_66471740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_51745480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   value__z0_51745480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   value__z0_51745480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(value__z0_51745480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,value__z0_51745480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
value__z0_51745480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[value__z0_51745480_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_52069060_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   value__z1_52069060_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   value__z1_52069060_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(value__z1_52069060_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,value__z1_52069060_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
value__z1_52069060_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[value__z1_52069060_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_54686760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   ack__a0_54686760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   ack__a0_54686760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(ack__a0_54686760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,ack__a0_54686760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__a0_54686760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[ack__a0_54686760_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_54686740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   ack__a1_54686740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   ack__a1_54686740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(ack__a1_54686740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,ack__a1_54686740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__a1_54686740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[ack__a1_54686740_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78001140();

   return behavior;
}

Behavior __78050040;

Behavior make__78050040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78050040 = behavior;
   behavior->owner = (Object)layer0_58_840_66575520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_54733760_counter_58_8410_54714680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   ack__mac_54733760_counter_58_8410_54714680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   ack__mac_54733760_counter_58_8410_54714680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(ack__mac_54733760_counter_58_8410_54714680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,ack__mac_54733760_counter_58_8410_54714680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__mac_54733760_counter_58_8410_54714680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[ack__mac_54733760_counter_58_8410_54714680_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[rst_66939200_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_54415260_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   a_54415260_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   a_54415260_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(a_54415260_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,a_54415260_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
a_54415260_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[a_54415260_func0_58_8410_51776220_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_63371360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   a_63371360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   a_63371360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(a_63371360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,a_63371360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
a_63371360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[a_63371360_func1_58_8400_62819800_layer0_58_840_66575520_layer0_58_8400_66942600_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78001080();

   return behavior;
}

Scope makelayer0_58_840_66575520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_840_66575520 = scope;
   scope->owner = (Object)layer0_58_8400_66942600;
   scope->name = "layer0:T0";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_54733320();
   scope->systemIs[1] = makefunc0_54414880();
   scope->systemIs[2] = makefunc1_63371200();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_66471760();
   scope->inners[1] = makeack_66471740();
   scope->inners[2] = makeack__mac_66471720();
   scope->inners[3] = makeack__add_66471700();
   scope->inners[4] = make_58507_66622700();
   scope->inners[5] = make_58505_66622680();
   scope->inners[6] = make_58506_66622600();
   scope->inners[7] = make_58530_66840180();
   scope->inners[8] = make_58531_66943400();
   scope->inners[9] = make_58522_67120920();
   scope->inners[10] = make_58520_67120900();
   scope->inners[11] = make_58521_67120820();
   scope->inners[12] = make_58571_67236820();
   scope->inners[13] = make_58572_67236800();
   scope->inners[14] = make_58569_67236780();
   scope->inners[15] = make_58570_67236600();
   scope->inners[16] = make_58599_48063560();
   scope->inners[17] = make_58600_50427940();
   scope->inners[18] = make_58586_51378680();
   scope->inners[19] = make_58587_51378660();
   scope->inners[20] = make_58584_51378620();
   scope->inners[21] = make_58585_51378200();
   scope->inners[22] = makevalue__z0_51745480();
   scope->inners[23] = makevalue__z1_52069060();
   scope->inners[24] = makevalue__a0_54320700();
   scope->inners[25] = makevalue__a1_54686840();
   scope->inners[26] = makeflag__z0_54686820();
   scope->inners[27] = makeflag__z1_54686780();
   scope->inners[28] = makeack__a0_54686760();
   scope->inners[29] = makeack__a1_54686740();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58498_66575160();
   scope->scopes[1] = makechannel__w1_58513_52138800();
   scope->scopes[2] = makechannel__accum_58528_57822480();
   scope->scopes[3] = makemac__n1_58560_63253980();
   scope->scopes[4] = makechannel__b0_58567_67223200();
   scope->scopes[5] = makechannel__b1_58582_54751100();
   scope->scopes[6] = makechannel__z_58597_55227340();
   scope->scopes[7] = makeadd__n_58627_63351040();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65034740();
   scope->behaviors[1] = make__65991380();
   scope->behaviors[2] = make__66943100();
   scope->behaviors[3] = make__78000680();
   scope->behaviors[4] = make__78050200();
   scope->behaviors[5] = make__78050040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_8400_66942600() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_8400_66942600 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T00";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_66939260();
   systemT->inputs[1] = makerst_66939200();
   systemT->inputs[2] = makereq_66939180();
   systemT->inputs[3] = make_58430_67205780();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_67205740();
   systemT->outputs[1] = make_58428_67205700();
   systemT->outputs[2] = make_58429_67205580();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58470_48521980();
   systemT->inouts[1] = make_58471_51741940();

   systemT->scope = makelayer0_58_840_66575520();

   return systemT;
}