#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_8400_73978880;

SignalI clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeclk_73976780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_8400_73978880;
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

SignalI rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makerst_73976760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_8400_73978880;
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

SignalI req_73976740_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makereq_73976740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_73976740_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_8400_73978880;
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

SignalI _58481_74054000_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58481_74054000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58481_74054000_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_8400_73978880;
   signalI->name = ":481";
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

SignalI _58482_74131340_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58482_74131340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58482_74131340_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_8400_73978880;
   signalI->name = ":482";
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

SignalI ack__layer_74131300_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeack__layer_74131300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_74131300_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_8400_73978880;
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

SignalI _58483_74131200_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58483_74131200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58483_74131200_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_8400_73978880;
   signalI->name = ":483";
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

SignalI _58447_74216680_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58447_74216680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58447_74216680_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_8400_73978880;
   signalI->name = ":447";
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

Block __63533380;

Block __63533120;

void code__63533120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79047040(),ack_66023700_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79046980(),ack__mac_66023660_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79046920(),ack__add_66023640_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63533120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63533120 = block;
   block->owner = (Object)__63533380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63533120;

   return block;
};

void code__63533380() {
   {
      Value cond = rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63533120();
   }
      }
   }
}

Block make__63533380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63533380 = block;
   block->owner = (Object)__63532160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63533380;

   return block;
};

Block __63532040;

Block __63531460;

Block __63531280;

void code__63531280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58700_67120280_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,value__z0_65231500_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79046740(),flag__z0_66858900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63531280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63531280 = block;
   block->owner = (Object)__63531460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63531280;

   return block;
};

void code__63531460() {
 code__63531280();
}

Block make__63531460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63531460 = block;
   block->owner = (Object)__63532040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63531460;

   return block;
};

Block __63531880;

void code__63531880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79046680(),flag__z0_66858900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63531880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63531880 = block;
   block->owner = (Object)__63532040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63531880;

   return block;
};

void code__63532040() {
   {
      Value cond = ack__add_66023640_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63531460();
   }
   else {
  code__63531880();
   }
      }
   }
}

Block make__63532040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63532040 = block;
   block->owner = (Object)__64504180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63532040;

   return block;
};

Block __64504060;

Block __64503840;

void code__64503840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79046560(),ack__a0_66858880_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64503840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64503840 = block;
   block->owner = (Object)__64504060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64503840;

   return block;
};

Block __64519700;

Block __64519540;

void code__64519540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_66858920_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58447_74216680_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79046260(),ack__a0_66858880_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64519540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64519540 = block;
   block->owner = (Object)__64519700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64519540;

   return block;
};

void code__64519700() {
 code__64519540();
}

Block make__64519700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64519700 = block;
   block->owner = (Object)__64504060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64519700;

   return block;
};

void code__64504060() {
   {
      Value cond = rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64503840();
   }
   else if (value2integer(flag__z0_66858900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value)) {
  code__64519700();
   }
      }
   }
}

Block make__64504060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64504060 = block;
   block->owner = (Object)__73979200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64504060;

   return block;
};

Block __78766900;

void code__78766900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_73976740_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_66023660_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_66023720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78766900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78766900 = block;
   block->owner = (Object)__78766660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78766900;

   return block;
};

Block __78767200;

void code__78767200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,clk_55580980_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_66023700_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,ack_55580960_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,rst_55580940_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_65231500_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,z__value_66762960_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_66858880_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,ack__layer_74131300_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78767200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78767200 = block;
   block->owner = (Object)__78801740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78767200;

   return block;
};

Block __78767120;

void code__78767120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_55580900_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,ack__mac_66023660_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58688_66893740_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_67091540_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,value__a0_66858920_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78767120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78767120 = block;
   block->owner = (Object)__78801520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78767120;

   return block;
};

Block __64288700;

void code__64288700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_63470180_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(abus__r_54799460_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54799920_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64288700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64288700 = block;
   block->owner = (Object)__65926180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64288700;

   return block;
};

Block __78800800;

void code__78800800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54799920_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58647_66391380_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78800800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78800800 = block;
   block->owner = (Object)__78800620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78800800;

   return block;
};

Block __78800580;

void code__78800580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58647_66391380_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,dbus__r_54799920_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78800580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78800580 = block;
   block->owner = (Object)__78800420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78800580;

   return block;
};

Block __78800120;

void code__78800120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_51806760_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78800120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78800120 = block;
   block->owner = (Object)__78799960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78800120;

   return block;
};

Block __78799920;

void code__78799920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,trig__r_51806760_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78799920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78799920 = block;
   block->owner = (Object)__78799720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78799920;

   return block;
};

Block __78799360;

void code__78799360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_54799460_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78799360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78799360 = block;
   block->owner = (Object)__78799200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78799360;

   return block;
};

Block __78799160;

void code__78799160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,abus__r_54799460_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78799160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78799160 = block;
   block->owner = (Object)__78799000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78799160;

   return block;
};

Block __78822280;

void code__78822280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_66421480_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58655_66568420_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78822280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78822280 = block;
   block->owner = (Object)__78822100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78822280;

   return block;
};

Block __78822040;

void code__78822040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58655_66568420_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,reg__0_66421480_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78822040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78822040 = block;
   block->owner = (Object)__78821840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78822040;

   return block;
};

Block __55993120;

Block __55992580;

Block __55900780;

void code__55900780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78964900(),_58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55900780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55900780 = block;
   block->owner = (Object)__55992580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55900780;

   return block;
};

void code__55992580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78964980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55900780();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78964820(),_58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55992580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55992580 = block;
   block->owner = (Object)__55993120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55992580;

   return block;
};

Block __55895900;

Block __55894520;

void code__55894520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78964640(),_58483_74131200_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55894520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55894520 = block;
   block->owner = (Object)__55895900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55894520;

   return block;
};

void code__55895900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78964720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55894520();
   }
      }
   }
}

Block make__55895900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55895900 = block;
   block->owner = (Object)__55993120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55895900;

   return block;
};

Block __55849080;

void code__55849080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78964340(),rvok_55993680_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78964280(),lvok0_55993780_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78964220(),wok0_55993620_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55849080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55849080 = block;
   block->owner = (Object)__55993120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55849080;

   return block;
};

Block __57134540;

Block __57132320;

Block __57131420;

Block __57063700;

Block __57062360;

void code__57062360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58481_74054000_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,rv_55994160_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57062360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57062360 = block;
   block->owner = (Object)__57063700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57062360;

   return block;
};

Block __63120120;

void code__63120120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58482_74131340_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,rv_55994160_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63120120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63120120 = block;
   block->owner = (Object)__57063700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63120120;

   return block;
};

void code__57063700() {
{
      Value value = _58483_74131200_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__78963800())) {
    code__57062360();
         }
         else if (value2integer(value) == value2integer(make__78963700())) {
    code__63120120();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78963540(),rvok_55993680_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
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
                  src0 = _58483_74131200_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__78963440();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78963400();
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
                        src0 = _58483_74131200_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78963160();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78963100();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58483_74131200_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57063700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57063700 = block;
   block->owner = (Object)__57131420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57063700;

   return block;
};

void code__57131420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78963920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57063700();
   }
      }
   }
}

Block make__57131420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57131420 = block;
   block->owner = (Object)__57132320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57131420;

   return block;
};

void code__57132320() {
 code__57131420();
}

Block make__57132320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57132320 = block;
   block->owner = (Object)__57134540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57132320;

   return block;
};

Block __64055520;

Block __64055280;

Block __64054720;

Block __63936660;

Block __63936360;

void code__63936360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58647_66391380_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,lv0_51506020_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79052680(),lvok0_55993780_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63936360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63936360 = block;
   block->owner = (Object)__63936660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63936360;

   return block;
};

void code__63936660() {
 code__63936360();
}

Block make__63936660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63936660 = block;
   block->owner = (Object)__64054720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63936660;

   return block;
};

Block __64054500;

void code__64054500() {
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
                  src0 = _58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__79052520();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79052480();
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
                        src0 = _58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79052240();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79052180();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79052060(),_58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64054500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64054500 = block;
   block->owner = (Object)__64054720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64054500;

   return block;
};

void code__64054720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78962780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63936660();
   }
   else {
  code__64054500();
   }
      }
   }
}

Block make__64054720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64054720 = block;
   block->owner = (Object)__64055280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64054720;

   return block;
};

void code__64055280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78962900();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64054720();
   }
      }
   }
}

Block make__64055280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64055280 = block;
   block->owner = (Object)__64055520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64055280;

   return block;
};

void code__64055520() {
 code__64055280();
}

Block make__64055520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64055520 = block;
   block->owner = (Object)__57134540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64055520;

   return block;
};

Block __65062220;

Block __65061400;

Block __65061120;

void code__65061120() {
}

Block make__65061120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65061120 = block;
   block->owner = (Object)__65061400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65061120;

   return block;
};

Block __46127020;

void code__46127020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_54363280_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58655_66568420_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79051240(),wok0_55993620_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__46127020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46127020 = block;
   block->owner = (Object)__65061400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46127020;

   return block;
};

void code__65061400() {
 code__65061120();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_54363280_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
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
                              src0 = lv0_51506020_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_55994160_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79051420();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_54363280_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__46127020();
}

Block make__65061400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65061400 = block;
   block->owner = (Object)__65062220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65061400;

   return block;
};

void code__65062220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79051820(),ack_66023700_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79051760(),run_55993540_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__65061400();
}

Block make__65062220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65062220 = block;
   block->owner = (Object)__57134540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65062220;

   return block;
};

Block __51623100;

void code__51623100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79051140(),wok0_55993620_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79051080(),lvok0_55993780_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79051020(),rvok_55993680_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__51623100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51623100 = block;
   block->owner = (Object)__57134540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51623100;

   return block;
};

void code__57134540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78964060(),run_55993540_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_55993680_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57132320();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_55993780_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64055520();
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
               src0 = lvok0_55993780_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               src1 = rvok_55993680_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_55993620_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65062220();
   }
      }
   }
   {
      Value cond = wok0_55993620_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51623100();
   }
      }
   }
}

Block make__57134540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57134540 = block;
   block->owner = (Object)__55993120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57134540;

   return block;
};

Block __55846760;

void code__55846760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79050960(),av0_54363280_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55846760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55846760 = block;
   block->owner = (Object)__55993120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55846760;

   return block;
};

void code__55993120() {
 code__55992580();
 code__55895900();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78964520(),ack_66023700_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78964460(),run_55993540_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_55993540_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55849080();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_66023720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         src1 = run_55993540_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57134540();
   }
   else {
  code__55846760();
   }
      }
   }
}

Block make__55993120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55993120 = block;
   block->owner = (Object)__51636240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55993120;

   return block;
};

Block __56488220;

void code__56488220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55335980_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(abus__r_52282960_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_52283380_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56488220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56488220 = block;
   block->owner = (Object)__62626420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56488220;

   return block;
};

Block __78820060;

void code__78820060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_52283380_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58687_66893760_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78820060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78820060 = block;
   block->owner = (Object)__78819840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78820060;

   return block;
};

Block __78819800;

void code__78819800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58687_66893760_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,dbus__r_52283380_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78819800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78819800 = block;
   block->owner = (Object)__78819640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78819800;

   return block;
};

Block __78819340;

void code__78819340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_51695200_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78819340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78819340 = block;
   block->owner = (Object)__78819180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78819340;

   return block;
};

Block __78819140;

void code__78819140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,trig__r_51695200_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78819140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78819140 = block;
   block->owner = (Object)__78818980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78819140;

   return block;
};

Block __78818660;

void code__78818660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52282960_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58686_66893480_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78818660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78818660 = block;
   block->owner = (Object)__78818500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78818660;

   return block;
};

Block __78818460;

void code__78818460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58686_66893480_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,abus__r_52282960_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78818460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78818460 = block;
   block->owner = (Object)__78818300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78818460;

   return block;
};

Block __78816980;

void code__78816980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_62836420_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,_58700_67120280_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78816980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78816980 = block;
   block->owner = (Object)__78816800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78816980;

   return block;
};

Block __78816760;

void code__78816760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58700_67120280_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,reg__0_62836420_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78816760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78816760 = block;
   block->owner = (Object)__78816600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78816760;

   return block;
};

Block __63778280;

Block __63777740;

void code__63777740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79049660(),_58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63777740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63777740 = block;
   block->owner = (Object)__63778280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63777740;

   return block;
};

Block __63790240;

Block __63789740;

void code__63789740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58655_66568420_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,lv0_63567640_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79049220(),lvok0_63778720_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63789740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63789740 = block;
   block->owner = (Object)__63790240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63789740;

   return block;
};

Block __64319280;

Block __64318720;

Block __64316980;

void code__64316980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58687_66893760_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value,rv0_63778800_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79048880(),_58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79048820(),rvok0_63778620_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64316980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64316980 = block;
   block->owner = (Object)__64318720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64316980;

   return block;
};

Block __64318380;

void code__64318380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79048760(),_58686_66893480_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79048680(),_58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64318380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64318380 = block;
   block->owner = (Object)__64318720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64318380;

   return block;
};

void code__64318720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79049040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64316980();
   }
   else {
  code__64318380();
   }
      }
   }
}

Block make__64318720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64318720 = block;
   block->owner = (Object)__64319280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64318720;

   return block;
};

void code__64319280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58688_66893740_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79049140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64318720();
   }
      }
   }
}

Block make__64319280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64319280 = block;
   block->owner = (Object)__63790240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64319280;

   return block;
};

Block __64966240;

Block __64965460;

void code__64965460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_63567640_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      src1 = rv0_63778800_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58700_67120280_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__64965460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64965460 = block;
   block->owner = (Object)__64966240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64965460;

   return block;
};

void code__64966240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79048500(),run_63778600_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79048420(),ack__add_66023640_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__64965460();
}

Block make__64966240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64966240 = block;
   block->owner = (Object)__63790240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64966240;

   return block;
};

void code__63790240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79049360(),run_63778600_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__63789740();
 code__64319280();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_63778720_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         src1 = rvok0_63778620_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64966240();
   }
      }
   }
}

Block make__63790240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63790240 = block;
   block->owner = (Object)__63778280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63790240;

   return block;
};

Block __63775000;

void code__63775000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79048140(),lvok0_63778720_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79048080(),rvok0_63778620_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__63775000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63775000 = block;
   block->owner = (Object)__63778280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63775000;

   return block;
};

void code__63778280() {
 code__63777740();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79049600(),ack__add_66023640_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79049540(),run_63778600_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_66023660_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         src1 = run_63778600_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63790240();
   }
   else {
  code__63775000();
   }
      }
   }
}

Block make__63778280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63778280 = block;
   block->owner = (Object)__66023920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63778280;

   return block;
};

Value make__78966260() {
   static unsigned long long data[] = { 4294967273ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78966240() {
   static unsigned long long data[] = { 23ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79050940() {
   static unsigned long long data[] = { 4294967287ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__78964980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78964900() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78964820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78964720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78964640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78964520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78964460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78964340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78964280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78964220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78964060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78963920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78963800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78963700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78963540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78963440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78963400() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78963160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78963100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78962900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78962780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79052680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79052520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79052480() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79052240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79052180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79052060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79051820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79051760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79051420() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79051240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79051140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79051080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79051020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79050960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79049660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79049600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79049540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79049360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79049220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79049140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79049040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79048880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79048820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79048760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79048680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79048500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79048420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79048140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79048080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79047040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79046980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79046920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79046740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79046680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79046560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79046260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_840_51780920;

SignalI req__mac_66023720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makereq__mac_66023720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_66023720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
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

SignalI ack_66023700_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeack_66023700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_66023700_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
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

SignalI ack__mac_66023660_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeack__mac_66023660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_66023660_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
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

SignalI ack__add_66023640_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeack__add_66023640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_66023640_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
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

SignalI _58647_66391380_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58647_66391380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58647_66391380_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
   signalI->name = ":647";
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

SignalI _58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58645_66391360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
   signalI->name = ":645";
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

SignalI _58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58646_66391220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
   signalI->name = ":646";
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

SignalI _58655_66568420_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58655_66568420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58655_66568420_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
   signalI->name = ":655";
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

SignalI _58687_66893760_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58687_66893760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58687_66893760_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
   signalI->name = ":687";
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

SignalI _58688_66893740_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58688_66893740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58688_66893740_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
   signalI->name = ":688";
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

SignalI _58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58685_66893720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
   signalI->name = ":685";
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

SignalI _58686_66893480_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58686_66893480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58686_66893480_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
   signalI->name = ":686";
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

SignalI _58700_67120280_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI make_58700_67120280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58700_67120280_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
   signalI->name = ":700";
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

SignalI value__z0_65231500_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makevalue__z0_65231500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_65231500_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
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

SignalI value__a0_66858920_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makevalue__a0_66858920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_66858920_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
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

SignalI flag__z0_66858900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeflag__z0_66858900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_66858900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
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

SignalI ack__a0_66858880_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeack__a0_66858880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_66858880_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_840_51780920;
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

SystemI counter_55580760;

SystemI makecounter_55580760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_55580760 = systemI;
   systemI->owner = (Object)layer1_58_840_51780920;
   systemI->name = "counter";
   systemI->system = counter_58_8420_66855040;

   return systemI;
};

SystemI func0_67091280;

SystemI makefunc0_67091280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_67091280 = systemI;
   systemI->owner = (Object)layer1_58_840_51780920;
   systemI->name = "func0";
   systemI->system = func0_58_8420_66440540;

   return systemI;
};

Scope channel__w0_58638_51779460;

SignalI trig__r_51806760_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI maketrig__r_51806760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51806760_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58638_51779460;
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

SignalI dbus__r_54799920_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makedbus__r_54799920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54799920_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58638_51779460;
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

SignalI abus__r_54799460_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_54799460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54799460_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58638_51779460;
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

SignalI mem_63470180_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makemem_63470180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_63470180_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58638_51779460;
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
         src0 = make__78966260();
         src1 = make__78966240();
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

Scope raddr_58639_51777740;

Scope makeraddr_58639_51777740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58639_51777740 = scope;
   scope->owner = (Object)channel__w0_58638_51779460;
   scope->name = "raddr:639";
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

Scope rinc_58644_51812280;

Scope makerinc_58644_51812280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58644_51812280 = scope;
   scope->owner = (Object)channel__w0_58638_51779460;
   scope->name = "rinc:644";
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

Scope rdec_58648_51809720;

Scope makerdec_58648_51809720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58648_51809720 = scope;
   scope->owner = (Object)channel__w0_58638_51779460;
   scope->name = "rdec:648";
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

Behavior __65926180;

Behavior make__65926180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65926180 = behavior;
   behavior->owner = (Object)channel__w0_58638_51779460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg = realloc(clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg[clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__64288700();

   return behavior;
}

Behavior __78800620;

Behavior make__78800620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78800620 = behavior;
   behavior->owner = (Object)channel__w0_58638_51779460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54799920_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   dbus__r_54799920_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__r_54799920_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(dbus__r_54799920_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,dbus__r_54799920_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__r_54799920_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[dbus__r_54799920_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78800800();

   return behavior;
}

Behavior __78800420;

Behavior make__78800420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78800420 = behavior;
   behavior->owner = (Object)channel__w0_58638_51779460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58647_66391380_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58647_66391380_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58647_66391380_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58647_66391380_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58647_66391380_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58647_66391380_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58647_66391380_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78800580();

   return behavior;
}

Behavior __78799960;

Behavior make__78799960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78799960 = behavior;
   behavior->owner = (Object)channel__w0_58638_51779460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_51806760_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   trig__r_51806760_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   trig__r_51806760_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(trig__r_51806760_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,trig__r_51806760_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
trig__r_51806760_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[trig__r_51806760_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78800120();

   return behavior;
}

Behavior __78799720;

Behavior make__78799720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78799720 = behavior;
   behavior->owner = (Object)channel__w0_58638_51779460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58645_66391360_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78799920();

   return behavior;
}

Behavior __78799200;

Behavior make__78799200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78799200 = behavior;
   behavior->owner = (Object)channel__w0_58638_51779460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_54799460_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   abus__r_54799460_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_54799460_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(abus__r_54799460_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,abus__r_54799460_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_54799460_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[abus__r_54799460_channel__w0_58638_51779460_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78799360();

   return behavior;
}

Behavior __78799000;

Behavior make__78799000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78799000 = behavior;
   behavior->owner = (Object)channel__w0_58638_51779460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58646_66391220_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78799160();

   return behavior;
}

Scope makechannel__w0_58638_51779460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58638_51779460 = scope;
   scope->owner = (Object)layer1_58_840_51780920;
   scope->name = "channel_w0:638";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51806760();
   scope->inners[1] = makedbus__r_54799920();
   scope->inners[2] = makeabus__r_54799460();
   scope->inners[3] = makemem_63470180();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58639_51777740();
   scope->scopes[1] = makerinc_58644_51812280();
   scope->scopes[2] = makerdec_58648_51809720();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65926180();
   scope->behaviors[1] = make__78800620();
   scope->behaviors[2] = make__78800420();
   scope->behaviors[3] = make__78799960();
   scope->behaviors[4] = make__78799720();
   scope->behaviors[5] = make__78799200();
   scope->behaviors[6] = make__78799000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58653_65925900;

SignalI reg__0_66421480_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makereg__0_66421480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_66421480_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__accum_58653_65925900;
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

Scope anum_58654_65925520;

Scope makeanum_58654_65925520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58654_65925520 = scope;
   scope->owner = (Object)channel__accum_58653_65925900;
   scope->name = "anum:654";
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

Scope raddr_58656_65924760;

Scope makeraddr_58656_65924760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58656_65924760 = scope;
   scope->owner = (Object)channel__accum_58653_65925900;
   scope->name = "raddr:656";
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

Scope waddr_58659_65923960;

Scope makewaddr_58659_65923960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58659_65923960 = scope;
   scope->owner = (Object)channel__accum_58653_65925900;
   scope->name = "waddr:659";
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

Scope rinc_58662_65923200;

SignalI abus__r_65922580_rinc_58662_65923200_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_65922580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_65922580_rinc_58662_65923200_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rinc_58662_65923200;
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

Scope makerinc_58662_65923200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58662_65923200 = scope;
   scope->owner = (Object)channel__accum_58653_65925900;
   scope->name = "rinc:662";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_65922580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58666_65922340;

SignalI abus__w_65921620_winc_58666_65922340_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__w_65921620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_65921620_winc_58666_65922340_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)winc_58666_65922340;
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

Scope makewinc_58666_65922340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58666_65922340 = scope;
   scope->owner = (Object)channel__accum_58653_65925900;
   scope->name = "winc:666";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_65921620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58670_65921420;

SignalI abus__r_65961740_rdec_58670_65921420_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_65961740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_65961740_rdec_58670_65921420_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rdec_58670_65921420;
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

Scope makerdec_58670_65921420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58670_65921420 = scope;
   scope->owner = (Object)channel__accum_58653_65925900;
   scope->name = "rdec:670";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_65961740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58674_65961600;

SignalI abus__w_65960620_wdec_58674_65961600_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__w_65960620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_65960620_wdec_58674_65961600_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)wdec_58674_65961600;
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

Scope makewdec_58674_65961600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58674_65961600 = scope;
   scope->owner = (Object)channel__accum_58653_65925900;
   scope->name = "wdec:674";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_65960620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78822100;

Behavior make__78822100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78822100 = behavior;
   behavior->owner = (Object)channel__accum_58653_65925900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_66421480_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   reg__0_66421480_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   reg__0_66421480_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(reg__0_66421480_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,reg__0_66421480_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__0_66421480_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[reg__0_66421480_channel__accum_58653_65925900_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78822280();

   return behavior;
}

Behavior __78821840;

Behavior make__78821840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78821840 = behavior;
   behavior->owner = (Object)channel__accum_58653_65925900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58655_66568420_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58655_66568420_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58655_66568420_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58655_66568420_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58655_66568420_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58655_66568420_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58655_66568420_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78822040();

   return behavior;
}

Scope makechannel__accum_58653_65925900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58653_65925900 = scope;
   scope->owner = (Object)layer1_58_840_51780920;
   scope->name = "channel_accum:653";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_66421480();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58654_65925520();
   scope->scopes[1] = makeraddr_58656_65924760();
   scope->scopes[2] = makewaddr_58659_65923960();
   scope->scopes[3] = makerinc_58662_65923200();
   scope->scopes[4] = makewinc_58666_65922340();
   scope->scopes[5] = makerdec_58670_65921420();
   scope->scopes[6] = makewdec_58674_65961600();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78822100();
   scope->behaviors[1] = make__78821840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58678_46027080;

SignalI lv0_51506020_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelv0_51506020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51506020_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58678_46027080;
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

SignalI av0_54363280_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeav0_54363280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_54363280_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58678_46027080;
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

SignalI rv_55994160_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makerv_55994160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_55994160_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58678_46027080;
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

SignalI lvok0_55993780_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelvok0_55993780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_55993780_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58678_46027080;
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

SignalI rvok_55993680_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makervok_55993680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_55993680_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58678_46027080;
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

SignalI wok0_55993620_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makewok0_55993620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_55993620_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58678_46027080;
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

SignalI run_55993540_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makerun_55993540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_55993540_mac__n1_58678_46027080_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58678_46027080;
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

Behavior __51636240;

Behavior make__51636240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51636240 = behavior;
   behavior->owner = (Object)mac__n1_58678_46027080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos = realloc(clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos[clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__55993120();

   return behavior;
}

Scope makemac__n1_58678_46027080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58678_46027080 = scope;
   scope->owner = (Object)layer1_58_840_51780920;
   scope->name = "mac_n1:678";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51506020();
   scope->inners[1] = makeav0_54363280();
   scope->inners[2] = makerv_55994160();
   scope->inners[3] = makelvok0_55993780();
   scope->inners[4] = makervok_55993680();
   scope->inners[5] = makewok0_55993620();
   scope->inners[6] = makerun_55993540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51636240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58683_51682260;

SignalI trig__r_51695200_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI maketrig__r_51695200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51695200_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58683_51682260;
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

SignalI dbus__r_52283380_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makedbus__r_52283380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_52283380_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58683_51682260;
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

SignalI abus__r_52282960_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_52282960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52282960_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58683_51682260;
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

SignalI mem_55335980_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makemem_55335980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55335980_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58683_51682260;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__79050940(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58684_51680700;

Scope makeraddr_58684_51680700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58684_51680700 = scope;
   scope->owner = (Object)channel__b0_58683_51682260;
   scope->name = "raddr:684";
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

Scope rinc_58689_51677600;

Scope makerinc_58689_51677600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58689_51677600 = scope;
   scope->owner = (Object)channel__b0_58683_51682260;
   scope->name = "rinc:689";
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

Scope rdec_58693_51697900;

Scope makerdec_58693_51697900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58693_51697900 = scope;
   scope->owner = (Object)channel__b0_58683_51682260;
   scope->name = "rdec:693";
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

Behavior __62626420;

Behavior make__62626420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62626420 = behavior;
   behavior->owner = (Object)channel__b0_58683_51682260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg = realloc(clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg[clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__56488220();

   return behavior;
}

Behavior __78819840;

Behavior make__78819840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78819840 = behavior;
   behavior->owner = (Object)channel__b0_58683_51682260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_52283380_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   dbus__r_52283380_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__r_52283380_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(dbus__r_52283380_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,dbus__r_52283380_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__r_52283380_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[dbus__r_52283380_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78820060();

   return behavior;
}

Behavior __78819640;

Behavior make__78819640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78819640 = behavior;
   behavior->owner = (Object)channel__b0_58683_51682260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58687_66893760_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58687_66893760_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58687_66893760_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58687_66893760_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58687_66893760_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58687_66893760_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58687_66893760_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78819800();

   return behavior;
}

Behavior __78819180;

Behavior make__78819180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78819180 = behavior;
   behavior->owner = (Object)channel__b0_58683_51682260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_51695200_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   trig__r_51695200_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   trig__r_51695200_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(trig__r_51695200_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,trig__r_51695200_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
trig__r_51695200_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[trig__r_51695200_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78819340();

   return behavior;
}

Behavior __78818980;

Behavior make__78818980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78818980 = behavior;
   behavior->owner = (Object)channel__b0_58683_51682260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58685_66893720_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78819140();

   return behavior;
}

Behavior __78818500;

Behavior make__78818500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78818500 = behavior;
   behavior->owner = (Object)channel__b0_58683_51682260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52282960_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   abus__r_52282960_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_52282960_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(abus__r_52282960_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,abus__r_52282960_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_52282960_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[abus__r_52282960_channel__b0_58683_51682260_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78818660();

   return behavior;
}

Behavior __78818300;

Behavior make__78818300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78818300 = behavior;
   behavior->owner = (Object)channel__b0_58683_51682260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58686_66893480_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58686_66893480_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58686_66893480_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58686_66893480_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58686_66893480_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58686_66893480_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58686_66893480_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78818460();

   return behavior;
}

Scope makechannel__b0_58683_51682260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58683_51682260 = scope;
   scope->owner = (Object)layer1_58_840_51780920;
   scope->name = "channel_b0:683";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51695200();
   scope->inners[1] = makedbus__r_52283380();
   scope->inners[2] = makeabus__r_52282960();
   scope->inners[3] = makemem_55335980();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58684_51680700();
   scope->scopes[1] = makerinc_58689_51677600();
   scope->scopes[2] = makerdec_58693_51697900();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62626420();
   scope->behaviors[1] = make__78819840();
   scope->behaviors[2] = make__78819640();
   scope->behaviors[3] = make__78819180();
   scope->behaviors[4] = make__78818980();
   scope->behaviors[5] = make__78818500();
   scope->behaviors[6] = make__78818300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58698_62626240;

SignalI reg__0_62836420_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makereg__0_62836420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_62836420_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__z_58698_62626240;
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

Scope anum_58699_62625620;

Scope makeanum_58699_62625620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58699_62625620 = scope;
   scope->owner = (Object)channel__z_58698_62626240;
   scope->name = "anum:699";
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

Scope raddr_58701_62624500;

Scope makeraddr_58701_62624500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58701_62624500 = scope;
   scope->owner = (Object)channel__z_58698_62626240;
   scope->name = "raddr:701";
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

Scope waddr_58704_62623860;

Scope makewaddr_58704_62623860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58704_62623860 = scope;
   scope->owner = (Object)channel__z_58698_62626240;
   scope->name = "waddr:704";
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

Scope rinc_58707_62622980;

SignalI abus__r_62622340_rinc_58707_62622980_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_62622340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62622340_rinc_58707_62622980_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rinc_58707_62622980;
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

Scope makerinc_58707_62622980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58707_62622980 = scope;
   scope->owner = (Object)channel__z_58698_62626240;
   scope->name = "rinc:707";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_62622340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58710_62622020;

SignalI abus__w_62621180_winc_58710_62622020_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__w_62621180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_62621180_winc_58710_62622020_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)winc_58710_62622020;
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

Scope makewinc_58710_62622020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58710_62622020 = scope;
   scope->owner = (Object)channel__z_58698_62626240;
   scope->name = "winc:710";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_62621180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58713_62620840;

SignalI abus__r_62620240_rdec_58713_62620840_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__r_62620240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62620240_rdec_58713_62620840_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rdec_58713_62620840;
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

Scope makerdec_58713_62620840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58713_62620840 = scope;
   scope->owner = (Object)channel__z_58698_62626240;
   scope->name = "rdec:713";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_62620240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58717_62620100;

SignalI abus__w_62643680_wdec_58717_62620100_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeabus__w_62643680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_62643680_wdec_58717_62620100_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)wdec_58717_62620100;
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

Scope makewdec_58717_62620100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58717_62620100 = scope;
   scope->owner = (Object)channel__z_58698_62626240;
   scope->name = "wdec:717";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_62643680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78816800;

Behavior make__78816800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78816800 = behavior;
   behavior->owner = (Object)channel__z_58698_62626240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_62836420_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   reg__0_62836420_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   reg__0_62836420_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(reg__0_62836420_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,reg__0_62836420_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__0_62836420_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[reg__0_62836420_channel__z_58698_62626240_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78816980();

   return behavior;
}

Behavior __78816600;

Behavior make__78816600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78816600 = behavior;
   behavior->owner = (Object)channel__z_58698_62626240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58700_67120280_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   _58700_67120280_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   _58700_67120280_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(_58700_67120280_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,_58700_67120280_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58700_67120280_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[_58700_67120280_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78816760();

   return behavior;
}

Scope makechannel__z_58698_62626240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58698_62626240 = scope;
   scope->owner = (Object)layer1_58_840_51780920;
   scope->name = "channel_z:698";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_62836420();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58699_62625620();
   scope->scopes[1] = makeraddr_58701_62624500();
   scope->scopes[2] = makewaddr_58704_62623860();
   scope->scopes[3] = makerinc_58707_62622980();
   scope->scopes[4] = makewinc_58710_62622020();
   scope->scopes[5] = makerdec_58713_62620840();
   scope->scopes[6] = makewdec_58717_62620100();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78816800();
   scope->behaviors[1] = make__78816600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58721_63398040;

SignalI lv0_63567640_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelv0_63567640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_63567640_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58721_63398040;
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

SignalI rv0_63778800_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makerv0_63778800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_63778800_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58721_63398040;
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

SignalI lvok0_63778720_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelvok0_63778720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_63778720_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58721_63398040;
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

SignalI rvok0_63778620_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makervok0_63778620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_63778620_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58721_63398040;
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

SignalI run_63778600_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makerun_63778600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_63778600_add__n_58721_63398040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58721_63398040;
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

Behavior __66023920;

Behavior make__66023920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66023920 = behavior;
   behavior->owner = (Object)add__n_58721_63398040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos = realloc(clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos[clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__63778280();

   return behavior;
}

Scope makeadd__n_58721_63398040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58721_63398040 = scope;
   scope->owner = (Object)layer1_58_840_51780920;
   scope->name = "add_n:721";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_63567640();
   scope->inners[1] = makerv0_63778800();
   scope->inners[2] = makelvok0_63778720();
   scope->inners[3] = makervok0_63778620();
   scope->inners[4] = makerun_63778600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__66023920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __63532160;

Behavior make__63532160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63532160 = behavior;
   behavior->owner = (Object)layer1_58_840_51780920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos = realloc(clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos[clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__63533380();

   return behavior;
}

Behavior __64504180;

Behavior make__64504180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64504180 = behavior;
   behavior->owner = (Object)layer1_58_840_51780920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos = realloc(clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos[clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__63532040();

   return behavior;
}

Behavior __73979200;

Behavior make__73979200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73979200 = behavior;
   behavior->owner = (Object)layer1_58_840_51780920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos = realloc(clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->pos[clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__64504060();

   return behavior;
}

Behavior __78766660;

Behavior make__78766660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78766660 = behavior;
   behavior->owner = (Object)layer1_58_840_51780920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_73976740_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   req_73976740_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   req_73976740_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(req_73976740_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,req_73976740_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
req_73976740_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[req_73976740_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_66023660_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   ack__mac_66023660_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   ack__mac_66023660_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(ack__mac_66023660_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,ack__mac_66023660_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__mac_66023660_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[ack__mac_66023660_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78766900();

   return behavior;
}

Behavior __78801740;

Behavior make__78801740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78801740 = behavior;
   behavior->owner = (Object)layer1_58_840_51780920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[clk_73976780_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_66023700_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   ack_66023700_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   ack_66023700_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(ack_66023700_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,ack_66023700_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack_66023700_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[ack_66023700_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_65231500_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   value__z0_65231500_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   value__z0_65231500_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(value__z0_65231500_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,value__z0_65231500_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
value__z0_65231500_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[value__z0_65231500_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_66858880_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   ack__a0_66858880_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   ack__a0_66858880_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(ack__a0_66858880_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,ack__a0_66858880_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__a0_66858880_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[ack__a0_66858880_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78767200();

   return behavior;
}

Behavior __78801520;

Behavior make__78801520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78801520 = behavior;
   behavior->owner = (Object)layer1_58_840_51780920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_55580900_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   ack__mac_55580900_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   ack__mac_55580900_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(ack__mac_55580900_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,ack__mac_55580900_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__mac_55580900_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[ack__mac_55580900_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[rst_73976760_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_67091540_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   a_67091540_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   a_67091540_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(a_67091540_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,a_67091540_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
a_67091540_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[a_67091540_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78767120();

   return behavior;
}

Scope makelayer1_58_840_51780920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_840_51780920 = scope;
   scope->owner = (Object)layer1_58_8400_73978880;
   scope->name = "layer1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_55580760();
   scope->systemIs[1] = makefunc0_67091280();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_66023720();
   scope->inners[1] = makeack_66023700();
   scope->inners[2] = makeack__mac_66023660();
   scope->inners[3] = makeack__add_66023640();
   scope->inners[4] = make_58647_66391380();
   scope->inners[5] = make_58645_66391360();
   scope->inners[6] = make_58646_66391220();
   scope->inners[7] = make_58655_66568420();
   scope->inners[8] = make_58687_66893760();
   scope->inners[9] = make_58688_66893740();
   scope->inners[10] = make_58685_66893720();
   scope->inners[11] = make_58686_66893480();
   scope->inners[12] = make_58700_67120280();
   scope->inners[13] = makevalue__z0_65231500();
   scope->inners[14] = makevalue__a0_66858920();
   scope->inners[15] = makeflag__z0_66858900();
   scope->inners[16] = makeack__a0_66858880();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58638_51779460();
   scope->scopes[1] = makechannel__accum_58653_65925900();
   scope->scopes[2] = makemac__n1_58678_46027080();
   scope->scopes[3] = makechannel__b0_58683_51682260();
   scope->scopes[4] = makechannel__z_58698_62626240();
   scope->scopes[5] = makeadd__n_58721_63398040();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63532160();
   scope->behaviors[1] = make__64504180();
   scope->behaviors[2] = make__73979200();
   scope->behaviors[3] = make__78766660();
   scope->behaviors[4] = make__78801740();
   scope->behaviors[5] = make__78801520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_8400_73978880() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_8400_73978880 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T00";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_73976780();
   systemT->inputs[1] = makerst_73976760();
   systemT->inputs[2] = makereq_73976740();
   systemT->inputs[3] = make_58481_74054000();
   systemT->inputs[4] = make_58482_74131340();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_74131300();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58483_74131200();
   systemT->inouts[1] = make_58447_74216680();

   systemT->scope = makelayer1_58_840_51780920();

   return systemT;
}