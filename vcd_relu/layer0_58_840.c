#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_50498160;

SignalI clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeclk_50515460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_840_50498160;
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

SignalI rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makerst_50515440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_840_50498160;
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

SignalI req_50515380_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makereq_50515380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_50515380_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_840_50498160;
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

SignalI _5859_52119080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_5859_52119080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5859_52119080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_840_50498160;
   signalI->name = ":59";
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

SignalI ack__layer_52119020_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeack__layer_52119020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_52119020_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_840_50498160;
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

SignalI _5857_52118920_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_5857_52118920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5857_52118920_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_840_50498160;
   signalI->name = ":57";
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

SignalI _5858_52118760_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_5858_52118760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5858_52118760_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_840_50498160;
   signalI->name = ":58";
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

SignalI _5899_52463460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_5899_52463460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_52463460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_840_50498160;
   signalI->name = ":99";
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

SignalI _58100_52735620_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58100_52735620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_52735620_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_840_50498160;
   signalI->name = ":100";
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

Block __53132600;

Block __53132240;

void code__53132240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59217260(),ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59217180(),ack__add_46613060_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53132240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53132240 = block;
   block->owner = (Object)__53132600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53132240;

   return block;
};

void code__53132600() {
   {
      Value cond = rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53132240();
   }
      }
   }
}

Block make__53132600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53132600 = block;
   block->owner = (Object)__53130120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53132600;

   return block;
};

Block __53129980;

Block __53128840;

Block __53128580;

void code__53128580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58228_50234480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,value__z0_52223840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59216940(),flag__z0_52714840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53128580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53128580 = block;
   block->owner = (Object)__53128840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53128580;

   return block;
};

Block __54209320;

void code__54209320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_50517840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,value__z1_52408440_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59216780(),flag__z1_52714820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54209320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54209320 = block;
   block->owner = (Object)__53128840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54209320;

   return block;
};

void code__53128840() {
 code__53128580();
 code__54209320();
}

Block make__53128840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53128840 = block;
   block->owner = (Object)__53129980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53128840;

   return block;
};

Block __53129760;

void code__53129760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59216720(),flag__z0_52714840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59216640(),flag__z1_52714820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53129760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53129760 = block;
   block->owner = (Object)__53129980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53129760;

   return block;
};

void code__53129980() {
   {
      Value cond = ack__add_46613060_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53128840();
   }
   else {
  code__53129760();
   }
      }
   }
}

Block make__53129980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53129980 = block;
   block->owner = (Object)__46665280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53129980;

   return block;
};

Block __46661880;

Block __46677320;

void code__46677320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59216500(),ack__a0_52714780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59216380(),ack__a1_52714700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__46677320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46677320 = block;
   block->owner = (Object)__46661880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46677320;

   return block;
};

Block __46691640;

Block __46708320;

void code__46708320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_52539340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_5899_52463460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59215820(),ack__a0_52714780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__46708320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46708320 = block;
   block->owner = (Object)__46691640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46708320;

   return block;
};

Block __49952420;

void code__49952420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_52714860_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58100_52735620_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59215680(),ack__a1_52714700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__49952420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49952420 = block;
   block->owner = (Object)__46691640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49952420;

   return block;
};

void code__46691640() {
 code__46708320();
 code__49952420();
}

Block make__46691640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46691640 = block;
   block->owner = (Object)__46661880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46691640;

   return block;
};

void code__46661880() {
   {
      Value cond = rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46677320();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_52714840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         src1 = flag__z1_52714820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__46691640();
   }
      }
   }
}

Block make__46661880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46661880 = block;
   block->owner = (Object)__50499360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46661880;

   return block;
};

Block __54214060;

void code__54214060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_50515380_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_46613080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_46613120_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54214060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54214060 = block;
   block->owner = (Object)__54213480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54214060;

   return block;
};

Block __54190200;

void code__54190200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,clk_52707740_counter_58_841_52709980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,ack_52707700_counter_58_841_52709980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,rst_52707680_counter_58_841_52709980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_52223840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_52408440_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_52714780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      src1 = ack__a1_52714700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_52119020_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54190200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54190200 = block;
   block->owner = (Object)__54274620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54190200;

   return block;
};

Block __54214300;

void code__54214300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_52707640_counter_58_841_52709980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,ack__mac_46613080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58201_50157860_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58216_52042500_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_54560420_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,value__a0_52539340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52917020_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,value__a1_52714860_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54214300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54214300 = block;
   block->owner = (Object)__54273860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54214300;

   return block;
};

Block __54374160;

void code__54374160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54171600_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            idx = value2integer(abus__r_53623020_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53623100_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54374160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54374160 = block;
   block->owner = (Object)__54989600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54374160;

   return block;
};

Block __54296020;

void code__54296020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53623100_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58136_48275100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54296020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54296020 = block;
   block->owner = (Object)__54295620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54296020;

   return block;
};

Block __54295580;

void code__54295580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58136_48275100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,dbus__r_53623100_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54295580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54295580 = block;
   block->owner = (Object)__54295160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54295580;

   return block;
};

Block __54294500;

void code__54294500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53423200_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54294500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54294500 = block;
   block->owner = (Object)__54293860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54294500;

   return block;
};

Block __54293820;

void code__54293820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,trig__r_53423200_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54293820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54293820 = block;
   block->owner = (Object)__54293600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54293820;

   return block;
};

Block __54293080;

void code__54293080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53623020_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54293080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54293080 = block;
   block->owner = (Object)__54292840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54293080;

   return block;
};

Block __54292760;

void code__54292760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,abus__r_53623020_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54292760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54292760 = block;
   block->owner = (Object)__54292320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54292760;

   return block;
};

Block __50206100;

void code__50206100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50003260_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            idx = value2integer(abus__r_46457220_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_46458480_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__50206100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50206100 = block;
   block->owner = (Object)__52038920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50206100;

   return block;
};

Block __54289360;

void code__54289360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_46458480_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58151_49996980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54289360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54289360 = block;
   block->owner = (Object)__54288720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54289360;

   return block;
};

Block __54288620;

void code__54288620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58151_49996980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,dbus__r_46458480_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54288620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54288620 = block;
   block->owner = (Object)__54288440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54288620;

   return block;
};

Block __54328780;

void code__54328780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_54987900_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54328780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54328780 = block;
   block->owner = (Object)__54328420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54328780;

   return block;
};

Block __54328340;

void code__54328340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,trig__r_54987900_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54328340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54328340 = block;
   block->owner = (Object)__54327480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54328340;

   return block;
};

Block __54326440;

void code__54326440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_46457220_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54326440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54326440 = block;
   block->owner = (Object)__54326060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54326440;

   return block;
};

Block __54325900;

void code__54325900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,abus__r_46457220_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54325900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54325900 = block;
   block->owner = (Object)__54325540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54325900;

   return block;
};

Block __54321920;

void code__54321920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52199940_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58159_49920100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54321920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54321920 = block;
   block->owner = (Object)__54321400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54321920;

   return block;
};

Block __54321340;

void code__54321340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58159_49920100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,reg__0_52199940_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54321340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54321340 = block;
   block->owner = (Object)__54378400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54321340;

   return block;
};

Block __54377640;

void code__54377640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_52357200_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58160_49713240_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54377640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54377640 = block;
   block->owner = (Object)__54377060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54377640;

   return block;
};

Block __54376940;

void code__54376940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58160_49713240_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,reg__1_52357200_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54376940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54376940 = block;
   block->owner = (Object)__54376560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54376940;

   return block;
};

Block __53621840;

Block __53621680;

Block __53621360;

void code__53621360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54228860(),_58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54228800(),_58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53621360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53621360 = block;
   block->owner = (Object)__53621680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53621360;

   return block;
};

void code__53621680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54228960();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53621360();
   }
      }
   }
}

Block make__53621680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53621680 = block;
   block->owner = (Object)__53621840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53621680;

   return block;
};

Block __53620640;

Block __53620320;

void code__53620320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54228580(),_58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54228520(),_58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53620320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53620320 = block;
   block->owner = (Object)__53620640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53620320;

   return block;
};

void code__53620640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54228660();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53620320();
   }
      }
   }
}

Block make__53620640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53620640 = block;
   block->owner = (Object)__53621840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53620640;

   return block;
};

Block __53619700;

Block __53619380;

void code__53619380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54228360(),_5858_52118760_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53619380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53619380 = block;
   block->owner = (Object)__53619700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53619380;

   return block;
};

void code__53619700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54228440();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53619380();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54228300(),_5857_52118920_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53619700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53619700 = block;
   block->owner = (Object)__53621840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53619700;

   return block;
};

Block __53618260;

void code__53618260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54228060(),rvok_53622020_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54227980(),lvok0_53622060_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54227920(),wok0_53622000_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54227820(),lvok1_53622040_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54227740(),wok1_53621980_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53618260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53618260 = block;
   block->owner = (Object)__53621840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53618260;

   return block;
};

Block __53857480;

Block __53857080;

Block __53856920;

Block __53856500;

Block __53854660;

Block __53854440;

void code__53854440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5859_52119080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,rv_53622080_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54226940(),rvok_53622020_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53854440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53854440 = block;
   block->owner = (Object)__53854660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53854440;

   return block;
};

void code__53854660() {
 code__53854440();
}

Block make__53854660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53854660 = block;
   block->owner = (Object)__53856500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53854660;

   return block;
};

Block __53856340;

void code__53856340() {
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
                  src0 = _5858_52118760_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                  src1 = make__54226820();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__54226780();
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
                        src0 = _5858_52118760_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__54226480();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__54226420();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5858_52118760_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54226300(),_5857_52118920_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53856340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53856340 = block;
   block->owner = (Object)__53856500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53856340;

   return block;
};

void code__53856500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5857_52118920_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54227120();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53854660();
   }
   else {
  code__53856340();
   }
      }
   }
}

Block make__53856500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53856500 = block;
   block->owner = (Object)__53856920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53856500;

   return block;
};

void code__53856920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54227220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53856500();
   }
      }
   }
}

Block make__53856920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53856920 = block;
   block->owner = (Object)__53857080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53856920;

   return block;
};

void code__53857080() {
 code__53856920();
}

Block make__53857080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53857080 = block;
   block->owner = (Object)__53857480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53857080;

   return block;
};

Block __54143680;

Block __54143500;

Block __54143120;

Block __54141220;

Block __54141060;

void code__54141060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54225980(),_58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58136_48275100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,lv0_52896320_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54225840(),lvok0_53622060_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54141060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54141060 = block;
   block->owner = (Object)__54141220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54141060;

   return block;
};

void code__54141220() {
 code__54141060();
}

Block make__54141220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54141220 = block;
   block->owner = (Object)__54143120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54141220;

   return block;
};

Block __54142960;

void code__54142960() {
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
                  src0 = _58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                  src1 = make__54225740();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__54225660();
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
                        src0 = _58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__54225260();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__54225180();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54225040(),_58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54142960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54142960 = block;
   block->owner = (Object)__54143120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54142960;

   return block;
};

void code__54143120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54226060();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54141220();
   }
   else {
  code__54142960();
   }
      }
   }
}

Block make__54143120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54143120 = block;
   block->owner = (Object)__54143500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54143120;

   return block;
};

void code__54143500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54226160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54143120();
   }
      }
   }
}

Block make__54143500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54143500 = block;
   block->owner = (Object)__54143680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54143500;

   return block;
};

void code__54143680() {
 code__54143500();
}

Block make__54143680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54143680 = block;
   block->owner = (Object)__53857480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54143680;

   return block;
};

Block __54323300;

Block __54322820;

Block __54322660;

void code__54322660() {
}

Block make__54322660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54322660 = block;
   block->owner = (Object)__54322820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54322660;

   return block;
};

Block __48234540;

void code__48234540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_53325360_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58159_49920100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54224080(),wok0_53622000_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__48234540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48234540 = block;
   block->owner = (Object)__54322820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48234540;

   return block;
};

void code__54322820() {
 code__54322660();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_53325360_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
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
                              src0 = lv0_52896320_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_53622080_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__54224260();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_53325360_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
 code__48234540();
}

Block make__54322820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54322820 = block;
   block->owner = (Object)__54323300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54322820;

   return block;
};

void code__54323300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54224700(),ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54224640(),run_53621960_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
 code__54322820();
}

Block make__54323300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54323300 = block;
   block->owner = (Object)__53857480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54323300;

   return block;
};

Block __49425040;

void code__49425040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54223920(),wok0_53622000_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54223860(),wok1_53621980_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54223800(),lvok0_53622060_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54223740(),lvok1_53622040_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54223680(),rvok_53622020_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__49425040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49425040 = block;
   block->owner = (Object)__53857480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49425040;

   return block;
};

Block __49423500;

Block __49423300;

Block __49422940;

Block __49629100;

Block __49628880;

void code__49628880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54223280(),_58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58151_49996980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,lv1_53127140_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54223060(),lvok1_53622040_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__49628880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49628880 = block;
   block->owner = (Object)__49629100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49628880;

   return block;
};

void code__49629100() {
 code__49628880();
}

Block make__49629100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49629100 = block;
   block->owner = (Object)__49422940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49629100;

   return block;
};

Block __49422780;

void code__49422780() {
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
                  src0 = _58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                  src1 = make__54222920();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__54222880();
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
                        src0 = _58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__52936380();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__52936240();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52936080(),_58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__49422780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49422780 = block;
   block->owner = (Object)__49422940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49422780;

   return block;
};

void code__49422940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54223380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49629100();
   }
   else {
  code__49422780();
   }
      }
   }
}

Block make__49422940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49422940 = block;
   block->owner = (Object)__49423300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49422940;

   return block;
};

void code__49423300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54223540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49422940();
   }
      }
   }
}

Block make__49423300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49423300 = block;
   block->owner = (Object)__49423500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49423300;

   return block;
};

void code__49423500() {
 code__49423300();
}

Block make__49423500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49423500 = block;
   block->owner = (Object)__53857480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49423500;

   return block;
};

Block __50068100;

Block __50067520;

Block __50067260;

void code__50067260() {
}

Block make__50067260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50067260 = block;
   block->owner = (Object)__50067520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50067260;

   return block;
};

Block __52202000;

void code__52202000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_53424500_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58160_49713240_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52935280(),wok1_53621980_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__52202000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52202000 = block;
   block->owner = (Object)__50067520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52202000;

   return block;
};

void code__50067520() {
 code__50067260();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_53424500_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
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
                              src0 = lv1_53127140_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_53622080_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52935460();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_53424500_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
 code__52202000();
}

Block make__50067520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50067520 = block;
   block->owner = (Object)__50068100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50067520;

   return block;
};

void code__50068100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52935840(),ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52935780(),run_53621960_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
 code__50067520();
}

Block make__50068100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50068100 = block;
   block->owner = (Object)__53857480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50068100;

   return block;
};

Block __52479520;

void code__52479520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52935100(),wok0_53622000_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52935020(),wok1_53621980_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52934960(),lvok0_53622060_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52934860(),lvok1_53622040_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52934740(),rvok_53622020_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__52479520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52479520 = block;
   block->owner = (Object)__53857480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52479520;

   return block;
};

void code__53857480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54227420(),run_53621960_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_53622020_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53857080();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53622060_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54143680();
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
               src0 = lvok0_53622060_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               src1 = rvok_53622020_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_53622000_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54323300();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_53622000_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         src1 = wok1_53621980_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49425040();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_53622040_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49423500();
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
               src0 = lvok1_53622040_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               src1 = rvok_53622020_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_53621980_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50068100();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_53622000_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         src1 = wok1_53621980_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52479520();
   }
      }
   }
}

Block make__53857480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53857480 = block;
   block->owner = (Object)__53621840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53857480;

   return block;
};

Block __53617220;

void code__53617220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52934680(),av0_53325360_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52934600(),av1_53424500_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53617220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53617220 = block;
   block->owner = (Object)__53621840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53617220;

   return block;
};

void code__53621840() {
 code__53621680();
 code__53620640();
 code__53619700();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54228240(),ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54228180(),run_53621960_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_53621960_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53618260();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_46613120_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         src1 = run_53621960_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53857480();
   }
   else {
  code__53617220();
   }
      }
   }
}

Block make__53621840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53621840 = block;
   block->owner = (Object)__52478040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53621840;

   return block;
};

Block __53390140;

void code__53390140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_52948800_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            idx = value2integer(abus__r_52672440_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_52672520_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53390140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53390140 = block;
   block->owner = (Object)__53777920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53390140;

   return block;
};

Block __54370860;

void code__54370860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_52672520_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58200_50157880_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54370860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54370860 = block;
   block->owner = (Object)__54370420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54370860;

   return block;
};

Block __54370340;

void code__54370340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58200_50157880_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,dbus__r_52672520_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54370340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54370340 = block;
   block->owner = (Object)__54394580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54370340;

   return block;
};

Block __54393820;

void code__54393820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_52500680_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54393820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54393820 = block;
   block->owner = (Object)__54393600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54393820;

   return block;
};

Block __54393540;

void code__54393540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,trig__r_52500680_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54393540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54393540 = block;
   block->owner = (Object)__54393300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54393540;

   return block;
};

Block __54392780;

void code__54392780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52672440_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58199_50157700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54392780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54392780 = block;
   block->owner = (Object)__54391720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54392780;

   return block;
};

Block __54391660;

void code__54391660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_50157700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,abus__r_52672440_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54391660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54391660 = block;
   block->owner = (Object)__54391280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54391660;

   return block;
};

Block __54759640;

void code__54759640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54327840_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            idx = value2integer(abus__r_53937520_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53937640_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54759640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54759640 = block;
   block->owner = (Object)__48272180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54759640;

   return block;
};

Block __54388540;

void code__54388540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53937640_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58215_52042520_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54388540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54388540 = block;
   block->owner = (Object)__54388140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54388540;

   return block;
};

Block __54388040;

void code__54388040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58215_52042520_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,dbus__r_53937640_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54388040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54388040 = block;
   block->owner = (Object)__54387700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54388040;

   return block;
};

Block __54443960;

void code__54443960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53775880_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54443960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54443960 = block;
   block->owner = (Object)__54443320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54443960;

   return block;
};

Block __54443000;

void code__54443000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,trig__r_53775880_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54443000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54443000 = block;
   block->owner = (Object)__54442400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54443000;

   return block;
};

Block __54441760;

void code__54441760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53937520_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58214_52042400_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54441760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54441760 = block;
   block->owner = (Object)__54441060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54441760;

   return block;
};

Block __54441020;

void code__54441020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_52042400_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,abus__r_53937520_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54441020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54441020 = block;
   block->owner = (Object)__54440860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54441020;

   return block;
};

Block __54437920;

void code__54437920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49915660_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58228_50234480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54437920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54437920 = block;
   block->owner = (Object)__54437580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54437920;

   return block;
};

Block __54437520;

void code__54437520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58228_50234480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,reg__0_49915660_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54437520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54437520 = block;
   block->owner = (Object)__54436840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54437520;

   return block;
};

Block __54436080;

void code__54436080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49714640_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,_58229_50517840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54436080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54436080 = block;
   block->owner = (Object)__54534040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54436080;

   return block;
};

Block __54534000;

void code__54534000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_50517840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,reg__1_49714640_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54534000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54534000 = block;
   block->owner = (Object)__54533840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54534000;

   return block;
};

Block __52485980;

Block __52485800;

void code__52485800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52931260(),_58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__52485800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52485800 = block;
   block->owner = (Object)__52485980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52485800;

   return block;
};

Block __52485420;

void code__52485420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52931200(),_58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__52485420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52485420 = block;
   block->owner = (Object)__52485980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52485420;

   return block;
};

Block __52483540;

Block __52483220;

void code__52483220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58159_49920100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,lv0_50597840_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52930760(),lvok0_52461720_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__52483220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52483220 = block;
   block->owner = (Object)__52483540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52483220;

   return block;
};

Block __52754300;

Block __52753760;

Block __52752520;

void code__52752520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58200_50157880_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,rv0_52340760_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52930320(),_58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52930220(),rvok0_52461680_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__52752520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52752520 = block;
   block->owner = (Object)__52753760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52752520;

   return block;
};

Block __52753560;

void code__52753560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52930140(),_58199_50157700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52930020(),_58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__52753560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52753560 = block;
   block->owner = (Object)__52753760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52753560;

   return block;
};

void code__52753760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52930560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52752520();
   }
   else {
  code__52753560();
   }
      }
   }
}

Block make__52753760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52753760 = block;
   block->owner = (Object)__52754300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52753760;

   return block;
};

void code__52754300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58201_50157860_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52930660();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52753760();
   }
      }
   }
}

Block make__52754300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52754300 = block;
   block->owner = (Object)__52483540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52754300;

   return block;
};

Block __53107400;

Block __53106920;

void code__53106920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_50597840_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      src1 = rv0_52340760_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58228_50234480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53106920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53106920 = block;
   block->owner = (Object)__53107400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53106920;

   return block;
};

void code__53107400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52929800(),run_52461640_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52929740(),ack__add_46613060_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
 code__53106920();
}

Block make__53107400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53107400 = block;
   block->owner = (Object)__52483540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53107400;

   return block;
};

Block __53683500;

void code__53683500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58160_49713240_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,lv1_52121800_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52929420(),lvok1_52461700_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__53683500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53683500 = block;
   block->owner = (Object)__52483540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53683500;

   return block;
};

Block __54044780;

Block __54044460;

Block __54043300;

void code__54043300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58215_52042520_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,rv1_52461740_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52928980(),_58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52928920(),rvok1_52461660_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54043300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54043300 = block;
   block->owner = (Object)__54044460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54043300;

   return block;
};

Block __54044280;

void code__54044280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52928860(),_58214_52042400_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52928800(),_58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54044280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54044280 = block;
   block->owner = (Object)__54044460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54044280;

   return block;
};

void code__54044460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52929200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54043300();
   }
   else {
  code__54044280();
   }
      }
   }
}

Block make__54044460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54044460 = block;
   block->owner = (Object)__54044780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54044460;

   return block;
};

void code__54044780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58216_52042500_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52929320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54044460();
   }
      }
   }
}

Block make__54044780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54044780 = block;
   block->owner = (Object)__52483540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54044780;

   return block;
};

Block __54273720;

Block __54273240;

void code__54273240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_52121800_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      src1 = rv1_52461740_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58229_50517840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__54273240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54273240 = block;
   block->owner = (Object)__54273720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54273240;

   return block;
};

void code__54273720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52928640(),run_52461640_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52928560(),ack__add_46613060_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
 code__54273240();
}

Block make__54273720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54273720 = block;
   block->owner = (Object)__52483540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54273720;

   return block;
};

void code__52483540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52930920(),run_52461640_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
 code__52483220();
 code__52754300();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52461720_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         src1 = rvok0_52461680_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53107400();
   }
      }
   }
 code__53683500();
 code__54044780();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_52461700_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         src1 = rvok1_52461660_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54273720();
   }
      }
   }
}

Block make__52483540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52483540 = block;
   block->owner = (Object)__52485980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52483540;

   return block;
};

Block __52484680;

void code__52484680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59219640(),lvok0_52461720_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59219560(),rvok0_52461680_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59219500(),lvok1_52461700_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59219420(),rvok1_52461660_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__52484680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52484680 = block;
   block->owner = (Object)__52485980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52484680;

   return block;
};

void code__52485980() {
 code__52485800();
 code__52485420();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52931140(),ack__add_46613060_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52931080(),run_52461640_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_46613080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         src1 = run_52461640_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52483540();
   }
   else {
  code__52484680();
   }
      }
   }
}

Block make__52485980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52485980 = block;
   block->owner = (Object)__46613440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52485980;

   return block;
};

Value make__54256660() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54256640() {
   static unsigned long long data[] = { 4294967282ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54230820() {
   static unsigned long long data[] = { 4294967279ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54230760() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52934360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52933120() {
   static unsigned long long data[] = { 4294967293ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54228960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54228860() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54228800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54228660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54228580() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54228520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54228440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54228360() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54228300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54228240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54228180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54228060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54227980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54227920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54227820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54227740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54227420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54227220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54227120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54226940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54226820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54226780() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54226480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54226420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54226300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54226160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54226060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54225980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54225840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54225740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54225660() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54225260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54225180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54225040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54224700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54224640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54224260() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54224080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54223920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54223860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54223800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54223740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54223680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54223540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54223380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54223280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54223060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54222920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54222880() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52936380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52936240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52936080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52935840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52935780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52935460() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52935280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52935100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52935020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52934960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52934860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52934740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52934680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52934600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52931260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52931200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52931140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52931080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52930920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52930760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52930660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52930560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52930320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52930220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52930140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52930020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52929800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52929740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52929420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52929320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52929200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52928980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52928920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52928860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52928800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52928640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52928560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59219640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59219560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59219500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59219420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59217260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59217180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59216940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59216780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59216720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59216640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59216500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59216380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59215820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59215680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_53425080;

SignalI req__mac_46613120_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makereq__mac_46613120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_46613120_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
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

SignalI ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeack_46613100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
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

SignalI ack__mac_46613080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeack__mac_46613080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_46613080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
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

SignalI ack__add_46613060_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeack__add_46613060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_46613060_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
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

SignalI _58136_48275100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58136_48275100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58136_48275100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":136";
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

SignalI _58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58134_48275080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":134";
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

SignalI _58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58135_48274940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":135";
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

SignalI _58159_49920100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58159_49920100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58159_49920100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":159";
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

SignalI _58160_49713240_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58160_49713240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58160_49713240_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":160";
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

SignalI _58151_49996980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58151_49996980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58151_49996980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":151";
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

SignalI _58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58149_49996920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":149";
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

SignalI _58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58150_49996760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":150";
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

SignalI _58200_50157880_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58200_50157880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58200_50157880_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":200";
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

SignalI _58201_50157860_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58201_50157860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58201_50157860_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":201";
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

SignalI _58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58198_50157820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":198";
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

SignalI _58199_50157700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58199_50157700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_50157700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":199";
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

SignalI _58228_50234480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58228_50234480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58228_50234480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":228";
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

SignalI _58229_50517840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58229_50517840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58229_50517840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":229";
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

SignalI _58215_52042520_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58215_52042520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58215_52042520_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":215";
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

SignalI _58216_52042500_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58216_52042500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58216_52042500_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":216";
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

SignalI _58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58213_52042480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":213";
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

SignalI _58214_52042400_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI make_58214_52042400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58214_52042400_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
   signalI->name = ":214";
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

SignalI value__z0_52223840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makevalue__z0_52223840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_52223840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
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

SignalI value__z1_52408440_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makevalue__z1_52408440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_52408440_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
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

SignalI value__a0_52539340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makevalue__a0_52539340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_52539340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
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

SignalI value__a1_52714860_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makevalue__a1_52714860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_52714860_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
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

SignalI flag__z0_52714840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeflag__z0_52714840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_52714840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
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

SignalI flag__z1_52714820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeflag__z1_52714820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_52714820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
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

SignalI ack__a0_52714780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeack__a0_52714780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_52714780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
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

SignalI ack__a1_52714700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeack__a1_52714700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_52714700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)layer0_58_84_53425080;
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

SystemI counter_52707400;

SystemI makecounter_52707400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_52707400 = systemI;
   systemI->owner = (Object)layer0_58_84_53425080;
   systemI->name = "counter";
   systemI->system = counter_58_841_52709980;

   return systemI;
};

SystemI func0_54560240;

SystemI makefunc0_54560240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_54560240 = systemI;
   systemI->owner = (Object)layer0_58_84_53425080;
   systemI->name = "func0";
   systemI->system = func0_58_841_54169100;

   return systemI;
};

SystemI func1_52916780;

SystemI makefunc1_52916780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_52916780 = systemI;
   systemI->owner = (Object)layer0_58_84_53425080;
   systemI->name = "func1";
   systemI->system = func1_58_840_50534800;

   return systemI;
};

Scope channel__w0_58127_53424780;

SignalI trig__r_53423200_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI maketrig__r_53423200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53423200_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__w0_58127_53424780;
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

SignalI dbus__r_53623100_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makedbus__r_53623100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53623100_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__w0_58127_53424780;
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

SignalI abus__r_53623020_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_53623020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53623020_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__w0_58127_53424780;
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

SignalI mem_54171600_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makemem_54171600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54171600_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__w0_58127_53424780;
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
         src0 = make__54256660();
         src1 = make__54256640();
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

Scope raddr_58128_53424480;

Scope makeraddr_58128_53424480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58128_53424480 = scope;
   scope->owner = (Object)channel__w0_58127_53424780;
   scope->name = "raddr:128";
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

Scope rinc_58133_53424060;

Scope makerinc_58133_53424060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58133_53424060 = scope;
   scope->owner = (Object)channel__w0_58127_53424780;
   scope->name = "rinc:133";
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

Scope rdec_58137_53423640;

Scope makerdec_58137_53423640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58137_53423640 = scope;
   scope->owner = (Object)channel__w0_58127_53424780;
   scope->name = "rdec:137";
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

Behavior __54989600;

Behavior make__54989600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54989600 = behavior;
   behavior->owner = (Object)channel__w0_58127_53424780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg += 1;
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg = realloc(clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg*sizeof(Object));
clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg[clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg-1] = (Object)behavior;
   behavior->block = make__54374160();

   return behavior;
}

Behavior __54295620;

Behavior make__54295620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54295620 = behavior;
   behavior->owner = (Object)channel__w0_58127_53424780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53623100_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   dbus__r_53623100_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   dbus__r_53623100_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(dbus__r_53623100_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,dbus__r_53623100_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
dbus__r_53623100_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[dbus__r_53623100_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54296020();

   return behavior;
}

Behavior __54295160;

Behavior make__54295160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54295160 = behavior;
   behavior->owner = (Object)channel__w0_58127_53424780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58136_48275100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58136_48275100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58136_48275100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58136_48275100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58136_48275100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58136_48275100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58136_48275100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54295580();

   return behavior;
}

Behavior __54293860;

Behavior make__54293860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54293860 = behavior;
   behavior->owner = (Object)channel__w0_58127_53424780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53423200_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   trig__r_53423200_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   trig__r_53423200_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(trig__r_53423200_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,trig__r_53423200_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
trig__r_53423200_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[trig__r_53423200_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54294500();

   return behavior;
}

Behavior __54293600;

Behavior make__54293600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54293600 = behavior;
   behavior->owner = (Object)channel__w0_58127_53424780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58134_48275080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54293820();

   return behavior;
}

Behavior __54292840;

Behavior make__54292840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54292840 = behavior;
   behavior->owner = (Object)channel__w0_58127_53424780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53623020_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   abus__r_53623020_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   abus__r_53623020_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(abus__r_53623020_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,abus__r_53623020_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
abus__r_53623020_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[abus__r_53623020_channel__w0_58127_53424780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54293080();

   return behavior;
}

Behavior __54292320;

Behavior make__54292320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54292320 = behavior;
   behavior->owner = (Object)channel__w0_58127_53424780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58135_48274940_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54292760();

   return behavior;
}

Scope makechannel__w0_58127_53424780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58127_53424780 = scope;
   scope->owner = (Object)layer0_58_84_53425080;
   scope->name = "channel_w0:127";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53423200();
   scope->inners[1] = makedbus__r_53623100();
   scope->inners[2] = makeabus__r_53623020();
   scope->inners[3] = makemem_54171600();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58128_53424480();
   scope->scopes[1] = makerinc_58133_53424060();
   scope->scopes[2] = makerdec_58137_53423640();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54989600();
   scope->behaviors[1] = make__54295620();
   scope->behaviors[2] = make__54295160();
   scope->behaviors[3] = make__54293860();
   scope->behaviors[4] = make__54293600();
   scope->behaviors[5] = make__54292840();
   scope->behaviors[6] = make__54292320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58142_54989480;

SignalI trig__r_54987900_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI maketrig__r_54987900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_54987900_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__w1_58142_54989480;
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

SignalI dbus__r_46458480_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makedbus__r_46458480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_46458480_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__w1_58142_54989480;
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

SignalI abus__r_46457220_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_46457220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46457220_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__w1_58142_54989480;
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

SignalI mem_50003260_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makemem_50003260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50003260_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__w1_58142_54989480;
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
         src0 = make__54230820();
         src1 = make__54230760();
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

Scope raddr_58143_54989180;

Scope makeraddr_58143_54989180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58143_54989180 = scope;
   scope->owner = (Object)channel__w1_58142_54989480;
   scope->name = "raddr:143";
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

Scope rinc_58148_54988760;

Scope makerinc_58148_54988760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58148_54988760 = scope;
   scope->owner = (Object)channel__w1_58142_54989480;
   scope->name = "rinc:148";
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

Scope rdec_58152_54988340;

Scope makerdec_58152_54988340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58152_54988340 = scope;
   scope->owner = (Object)channel__w1_58142_54989480;
   scope->name = "rdec:152";
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

Behavior __52038920;

Behavior make__52038920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52038920 = behavior;
   behavior->owner = (Object)channel__w1_58142_54989480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg += 1;
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg = realloc(clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg*sizeof(Object));
clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg[clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg-1] = (Object)behavior;
   behavior->block = make__50206100();

   return behavior;
}

Behavior __54288720;

Behavior make__54288720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54288720 = behavior;
   behavior->owner = (Object)channel__w1_58142_54989480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_46458480_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   dbus__r_46458480_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   dbus__r_46458480_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(dbus__r_46458480_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,dbus__r_46458480_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
dbus__r_46458480_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[dbus__r_46458480_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54289360();

   return behavior;
}

Behavior __54288440;

Behavior make__54288440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54288440 = behavior;
   behavior->owner = (Object)channel__w1_58142_54989480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58151_49996980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58151_49996980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58151_49996980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58151_49996980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58151_49996980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58151_49996980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58151_49996980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54288620();

   return behavior;
}

Behavior __54328420;

Behavior make__54328420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54328420 = behavior;
   behavior->owner = (Object)channel__w1_58142_54989480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_54987900_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   trig__r_54987900_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   trig__r_54987900_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(trig__r_54987900_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,trig__r_54987900_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
trig__r_54987900_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[trig__r_54987900_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54328780();

   return behavior;
}

Behavior __54327480;

Behavior make__54327480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54327480 = behavior;
   behavior->owner = (Object)channel__w1_58142_54989480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58149_49996920_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54328340();

   return behavior;
}

Behavior __54326060;

Behavior make__54326060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54326060 = behavior;
   behavior->owner = (Object)channel__w1_58142_54989480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_46457220_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   abus__r_46457220_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   abus__r_46457220_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(abus__r_46457220_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,abus__r_46457220_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
abus__r_46457220_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[abus__r_46457220_channel__w1_58142_54989480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54326440();

   return behavior;
}

Behavior __54325540;

Behavior make__54325540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54325540 = behavior;
   behavior->owner = (Object)channel__w1_58142_54989480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58150_49996760_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54325900();

   return behavior;
}

Scope makechannel__w1_58142_54989480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58142_54989480 = scope;
   scope->owner = (Object)layer0_58_84_53425080;
   scope->name = "channel_w1:142";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_54987900();
   scope->inners[1] = makedbus__r_46458480();
   scope->inners[2] = makeabus__r_46457220();
   scope->inners[3] = makemem_50003260();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58143_54989180();
   scope->scopes[1] = makerinc_58148_54988760();
   scope->scopes[2] = makerdec_58152_54988340();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52038920();
   scope->behaviors[1] = make__54288720();
   scope->behaviors[2] = make__54288440();
   scope->behaviors[3] = make__54328420();
   scope->behaviors[4] = make__54327480();
   scope->behaviors[5] = make__54326060();
   scope->behaviors[6] = make__54325540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58157_52038800;

SignalI reg__0_52199940_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makereg__0_52199940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52199940_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__accum_58157_52038800;
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

SignalI reg__1_52357200_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makereg__1_52357200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_52357200_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__accum_58157_52038800;
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

Scope anum_58158_52038500;

Scope makeanum_58158_52038500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58158_52038500 = scope;
   scope->owner = (Object)channel__accum_58157_52038800;
   scope->name = "anum:158";
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

Scope raddr_58161_52038080;

Scope makeraddr_58161_52038080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58161_52038080 = scope;
   scope->owner = (Object)channel__accum_58157_52038800;
   scope->name = "raddr:161";
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

Scope waddr_58165_52037660;

Scope makewaddr_58165_52037660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58165_52037660 = scope;
   scope->owner = (Object)channel__accum_58157_52038800;
   scope->name = "waddr:165";
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

Scope rinc_58169_52037200;

SignalI abus__r_52036760_rinc_58169_52037200_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_52036760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52036760_rinc_58169_52037200_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)rinc_58169_52037200;
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

Scope makerinc_58169_52037200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58169_52037200 = scope;
   scope->owner = (Object)channel__accum_58157_52038800;
   scope->name = "rinc:169";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52036760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58174_52036640;

SignalI abus__w_52036260_winc_58174_52036640_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__w_52036260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52036260_winc_58174_52036640_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)winc_58174_52036640;
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

Scope makewinc_58174_52036640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58174_52036640 = scope;
   scope->owner = (Object)channel__accum_58157_52038800;
   scope->name = "winc:174";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52036260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58179_52036140;

SignalI abus__r_52035760_rdec_58179_52036140_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_52035760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52035760_rdec_58179_52036140_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)rdec_58179_52036140;
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

Scope makerdec_58179_52036140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58179_52036140 = scope;
   scope->owner = (Object)channel__accum_58157_52038800;
   scope->name = "rdec:179";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52035760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58184_52035640;

SignalI abus__w_52067940_wdec_58184_52035640_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__w_52067940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52067940_wdec_58184_52035640_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)wdec_58184_52035640;
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

Scope makewdec_58184_52035640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58184_52035640 = scope;
   scope->owner = (Object)channel__accum_58157_52038800;
   scope->name = "wdec:184";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52067940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54321400;

Behavior make__54321400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54321400 = behavior;
   behavior->owner = (Object)channel__accum_58157_52038800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52199940_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   reg__0_52199940_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   reg__0_52199940_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(reg__0_52199940_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,reg__0_52199940_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
reg__0_52199940_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[reg__0_52199940_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54321920();

   return behavior;
}

Behavior __54378400;

Behavior make__54378400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54378400 = behavior;
   behavior->owner = (Object)channel__accum_58157_52038800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58159_49920100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58159_49920100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58159_49920100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58159_49920100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58159_49920100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58159_49920100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58159_49920100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54321340();

   return behavior;
}

Behavior __54377060;

Behavior make__54377060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54377060 = behavior;
   behavior->owner = (Object)channel__accum_58157_52038800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_52357200_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   reg__1_52357200_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   reg__1_52357200_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(reg__1_52357200_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,reg__1_52357200_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
reg__1_52357200_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[reg__1_52357200_channel__accum_58157_52038800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54377640();

   return behavior;
}

Behavior __54376560;

Behavior make__54376560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54376560 = behavior;
   behavior->owner = (Object)channel__accum_58157_52038800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58160_49713240_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58160_49713240_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58160_49713240_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58160_49713240_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58160_49713240_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58160_49713240_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58160_49713240_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54376940();

   return behavior;
}

Scope makechannel__accum_58157_52038800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58157_52038800 = scope;
   scope->owner = (Object)layer0_58_84_53425080;
   scope->name = "channel_accum:157";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52199940();
   scope->inners[1] = makereg__1_52357200();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58158_52038500();
   scope->scopes[1] = makeraddr_58161_52038080();
   scope->scopes[2] = makewaddr_58165_52037660();
   scope->scopes[3] = makerinc_58169_52037200();
   scope->scopes[4] = makewinc_58174_52036640();
   scope->scopes[5] = makerdec_58179_52036140();
   scope->scopes[6] = makewdec_58184_52035640();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54321400();
   scope->behaviors[1] = make__54378400();
   scope->behaviors[2] = make__54377060();
   scope->behaviors[3] = make__54376560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58189_52829480;

SignalI lv0_52896320_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makelv0_52896320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52896320_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58189_52829480;
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

SignalI lv1_53127140_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makelv1_53127140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_53127140_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58189_52829480;
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

SignalI av0_53325360_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeav0_53325360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_53325360_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58189_52829480;
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

SignalI av1_53424500_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeav1_53424500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_53424500_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58189_52829480;
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

SignalI rv_53622080_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makerv_53622080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_53622080_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58189_52829480;
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

SignalI lvok0_53622060_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makelvok0_53622060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53622060_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58189_52829480;
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

SignalI lvok1_53622040_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makelvok1_53622040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_53622040_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58189_52829480;
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

SignalI rvok_53622020_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makervok_53622020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_53622020_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58189_52829480;
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

SignalI wok0_53622000_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makewok0_53622000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_53622000_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58189_52829480;
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

SignalI wok1_53621980_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makewok1_53621980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_53621980_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58189_52829480;
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

SignalI run_53621960_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makerun_53621960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53621960_mac__n1_58189_52829480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)mac__n1_58189_52829480;
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

Behavior __52478040;

Behavior make__52478040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52478040 = behavior;
   behavior->owner = (Object)mac__n1_58189_52829480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos += 1;
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos = realloc(clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos*sizeof(Object));
clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos[clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos-1] = (Object)behavior;
   behavior->block = make__53621840();

   return behavior;
}

Scope makemac__n1_58189_52829480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58189_52829480 = scope;
   scope->owner = (Object)layer0_58_84_53425080;
   scope->name = "mac_n1:189";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52896320();
   scope->inners[1] = makelv1_53127140();
   scope->inners[2] = makeav0_53325360();
   scope->inners[3] = makeav1_53424500();
   scope->inners[4] = makerv_53622080();
   scope->inners[5] = makelvok0_53622060();
   scope->inners[6] = makelvok1_53622040();
   scope->inners[7] = makervok_53622020();
   scope->inners[8] = makewok0_53622000();
   scope->inners[9] = makewok1_53621980();
   scope->inners[10] = makerun_53621960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52478040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58196_52502460;

SignalI trig__r_52500680_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI maketrig__r_52500680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_52500680_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__b0_58196_52502460;
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

SignalI dbus__r_52672520_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makedbus__r_52672520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_52672520_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__b0_58196_52502460;
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

SignalI abus__r_52672440_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_52672440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52672440_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__b0_58196_52502460;
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

SignalI mem_52948800_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makemem_52948800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_52948800_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__b0_58196_52502460;
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
         src0 = make__52934360();
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

Scope raddr_58197_52502140;

Scope makeraddr_58197_52502140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58197_52502140 = scope;
   scope->owner = (Object)channel__b0_58196_52502460;
   scope->name = "raddr:197";
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

Scope rinc_58202_52501580;

Scope makerinc_58202_52501580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58202_52501580 = scope;
   scope->owner = (Object)channel__b0_58196_52502460;
   scope->name = "rinc:202";
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

Scope rdec_58206_52501120;

Scope makerdec_58206_52501120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58206_52501120 = scope;
   scope->owner = (Object)channel__b0_58196_52502460;
   scope->name = "rdec:206";
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

Behavior __53777920;

Behavior make__53777920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53777920 = behavior;
   behavior->owner = (Object)channel__b0_58196_52502460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg += 1;
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg = realloc(clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg*sizeof(Object));
clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg[clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg-1] = (Object)behavior;
   behavior->block = make__53390140();

   return behavior;
}

Behavior __54370420;

Behavior make__54370420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54370420 = behavior;
   behavior->owner = (Object)channel__b0_58196_52502460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_52672520_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   dbus__r_52672520_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   dbus__r_52672520_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(dbus__r_52672520_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,dbus__r_52672520_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
dbus__r_52672520_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[dbus__r_52672520_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54370860();

   return behavior;
}

Behavior __54394580;

Behavior make__54394580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54394580 = behavior;
   behavior->owner = (Object)channel__b0_58196_52502460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58200_50157880_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58200_50157880_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58200_50157880_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58200_50157880_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58200_50157880_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58200_50157880_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58200_50157880_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54370340();

   return behavior;
}

Behavior __54393600;

Behavior make__54393600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54393600 = behavior;
   behavior->owner = (Object)channel__b0_58196_52502460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_52500680_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   trig__r_52500680_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   trig__r_52500680_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(trig__r_52500680_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,trig__r_52500680_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
trig__r_52500680_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[trig__r_52500680_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54393820();

   return behavior;
}

Behavior __54393300;

Behavior make__54393300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54393300 = behavior;
   behavior->owner = (Object)channel__b0_58196_52502460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58198_50157820_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54393540();

   return behavior;
}

Behavior __54391720;

Behavior make__54391720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54391720 = behavior;
   behavior->owner = (Object)channel__b0_58196_52502460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52672440_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   abus__r_52672440_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   abus__r_52672440_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(abus__r_52672440_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,abus__r_52672440_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
abus__r_52672440_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[abus__r_52672440_channel__b0_58196_52502460_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54392780();

   return behavior;
}

Behavior __54391280;

Behavior make__54391280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54391280 = behavior;
   behavior->owner = (Object)channel__b0_58196_52502460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_50157700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58199_50157700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58199_50157700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58199_50157700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58199_50157700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58199_50157700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58199_50157700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54391660();

   return behavior;
}

Scope makechannel__b0_58196_52502460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58196_52502460 = scope;
   scope->owner = (Object)layer0_58_84_53425080;
   scope->name = "channel_b0:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_52500680();
   scope->inners[1] = makedbus__r_52672520();
   scope->inners[2] = makeabus__r_52672440();
   scope->inners[3] = makemem_52948800();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58197_52502140();
   scope->scopes[1] = makerinc_58202_52501580();
   scope->scopes[2] = makerdec_58206_52501120();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53777920();
   scope->behaviors[1] = make__54370420();
   scope->behaviors[2] = make__54394580();
   scope->behaviors[3] = make__54393600();
   scope->behaviors[4] = make__54393300();
   scope->behaviors[5] = make__54391720();
   scope->behaviors[6] = make__54391280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58211_53777800;

SignalI trig__r_53775880_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI maketrig__r_53775880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53775880_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__b1_58211_53777800;
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

SignalI dbus__r_53937640_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makedbus__r_53937640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53937640_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__b1_58211_53777800;
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

SignalI abus__r_53937520_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_53937520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53937520_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__b1_58211_53777800;
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

SignalI mem_54327840_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makemem_54327840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54327840_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__b1_58211_53777800;
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
         src0 = make__52933120();
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

Scope raddr_58212_53777500;

Scope makeraddr_58212_53777500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58212_53777500 = scope;
   scope->owner = (Object)channel__b1_58211_53777800;
   scope->name = "raddr:212";
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

Scope rinc_58217_53776840;

Scope makerinc_58217_53776840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58217_53776840 = scope;
   scope->owner = (Object)channel__b1_58211_53777800;
   scope->name = "rinc:217";
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

Scope rdec_58221_53776320;

Scope makerdec_58221_53776320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58221_53776320 = scope;
   scope->owner = (Object)channel__b1_58211_53777800;
   scope->name = "rdec:221";
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

Behavior __48272180;

Behavior make__48272180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48272180 = behavior;
   behavior->owner = (Object)channel__b1_58211_53777800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg += 1;
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg = realloc(clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg*sizeof(Object));
clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg[clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg-1] = (Object)behavior;
   behavior->block = make__54759640();

   return behavior;
}

Behavior __54388140;

Behavior make__54388140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54388140 = behavior;
   behavior->owner = (Object)channel__b1_58211_53777800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53937640_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   dbus__r_53937640_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   dbus__r_53937640_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(dbus__r_53937640_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,dbus__r_53937640_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
dbus__r_53937640_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[dbus__r_53937640_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54388540();

   return behavior;
}

Behavior __54387700;

Behavior make__54387700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54387700 = behavior;
   behavior->owner = (Object)channel__b1_58211_53777800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58215_52042520_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58215_52042520_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58215_52042520_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58215_52042520_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58215_52042520_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58215_52042520_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58215_52042520_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54388040();

   return behavior;
}

Behavior __54443320;

Behavior make__54443320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54443320 = behavior;
   behavior->owner = (Object)channel__b1_58211_53777800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53775880_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   trig__r_53775880_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   trig__r_53775880_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(trig__r_53775880_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,trig__r_53775880_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
trig__r_53775880_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[trig__r_53775880_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54443960();

   return behavior;
}

Behavior __54442400;

Behavior make__54442400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54442400 = behavior;
   behavior->owner = (Object)channel__b1_58211_53777800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58213_52042480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54443000();

   return behavior;
}

Behavior __54441060;

Behavior make__54441060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54441060 = behavior;
   behavior->owner = (Object)channel__b1_58211_53777800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53937520_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   abus__r_53937520_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   abus__r_53937520_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(abus__r_53937520_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,abus__r_53937520_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
abus__r_53937520_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[abus__r_53937520_channel__b1_58211_53777800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54441760();

   return behavior;
}

Behavior __54440860;

Behavior make__54440860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54440860 = behavior;
   behavior->owner = (Object)channel__b1_58211_53777800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58214_52042400_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58214_52042400_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58214_52042400_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58214_52042400_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58214_52042400_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58214_52042400_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58214_52042400_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54441020();

   return behavior;
}

Scope makechannel__b1_58211_53777800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58211_53777800 = scope;
   scope->owner = (Object)layer0_58_84_53425080;
   scope->name = "channel_b1:211";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53775880();
   scope->inners[1] = makedbus__r_53937640();
   scope->inners[2] = makeabus__r_53937520();
   scope->inners[3] = makemem_54327840();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58212_53777500();
   scope->scopes[1] = makerinc_58217_53776840();
   scope->scopes[2] = makerdec_58221_53776320();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48272180();
   scope->behaviors[1] = make__54388140();
   scope->behaviors[2] = make__54387700();
   scope->behaviors[3] = make__54443320();
   scope->behaviors[4] = make__54442400();
   scope->behaviors[5] = make__54441060();
   scope->behaviors[6] = make__54440860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58226_48271020;

SignalI reg__0_49915660_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makereg__0_49915660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49915660_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__z_58226_48271020;
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

SignalI reg__1_49714640_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makereg__1_49714640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49714640_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)channel__z_58226_48271020;
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

Scope anum_58227_48269780;

Scope makeanum_58227_48269780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58227_48269780 = scope;
   scope->owner = (Object)channel__z_58226_48271020;
   scope->name = "anum:227";
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

Scope raddr_58230_48268880;

Scope makeraddr_58230_48268880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58230_48268880 = scope;
   scope->owner = (Object)channel__z_58226_48271020;
   scope->name = "raddr:230";
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

Scope waddr_58234_48267880;

Scope makewaddr_58234_48267880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58234_48267880 = scope;
   scope->owner = (Object)channel__z_58226_48271020;
   scope->name = "waddr:234";
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

Scope rinc_58238_48290680;

SignalI abus__r_48286620_rinc_58238_48290680_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_48286620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48286620_rinc_58238_48290680_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)rinc_58238_48290680;
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

Scope makerinc_58238_48290680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58238_48290680 = scope;
   scope->owner = (Object)channel__z_58226_48271020;
   scope->name = "rinc:238";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48286620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58242_48285580;

SignalI abus__w_48304100_winc_58242_48285580_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__w_48304100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48304100_winc_58242_48285580_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)winc_58242_48285580;
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

Scope makewinc_58242_48285580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58242_48285580 = scope;
   scope->owner = (Object)channel__z_58226_48271020;
   scope->name = "winc:242";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48304100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58246_48302700;

SignalI abus__r_48301440_rdec_58246_48302700_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__r_48301440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48301440_rdec_58246_48302700_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)rdec_58246_48302700;
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

Scope makerdec_58246_48302700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58246_48302700 = scope;
   scope->owner = (Object)channel__z_58226_48271020;
   scope->name = "rdec:246";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48301440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58251_48301080;

SignalI abus__w_48339520_wdec_58251_48301080_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeabus__w_48339520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48339520_wdec_58251_48301080_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)wdec_58251_48301080;
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

Scope makewdec_58251_48301080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58251_48301080 = scope;
   scope->owner = (Object)channel__z_58226_48271020;
   scope->name = "wdec:251";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48339520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54437580;

Behavior make__54437580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54437580 = behavior;
   behavior->owner = (Object)channel__z_58226_48271020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49915660_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   reg__0_49915660_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   reg__0_49915660_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(reg__0_49915660_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,reg__0_49915660_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
reg__0_49915660_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[reg__0_49915660_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54437920();

   return behavior;
}

Behavior __54436840;

Behavior make__54436840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54436840 = behavior;
   behavior->owner = (Object)channel__z_58226_48271020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58228_50234480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58228_50234480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58228_50234480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58228_50234480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58228_50234480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58228_50234480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58228_50234480_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54437520();

   return behavior;
}

Behavior __54534040;

Behavior make__54534040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54534040 = behavior;
   behavior->owner = (Object)channel__z_58226_48271020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49714640_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   reg__1_49714640_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   reg__1_49714640_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(reg__1_49714640_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,reg__1_49714640_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
reg__1_49714640_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[reg__1_49714640_channel__z_58226_48271020_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54436080();

   return behavior;
}

Behavior __54533840;

Behavior make__54533840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54533840 = behavior;
   behavior->owner = (Object)channel__z_58226_48271020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58229_50517840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   _58229_50517840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   _58229_50517840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(_58229_50517840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,_58229_50517840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
_58229_50517840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[_58229_50517840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54534000();

   return behavior;
}

Scope makechannel__z_58226_48271020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58226_48271020 = scope;
   scope->owner = (Object)layer0_58_84_53425080;
   scope->name = "channel_z:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49915660();
   scope->inners[1] = makereg__1_49714640();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58227_48269780();
   scope->scopes[1] = makeraddr_58230_48268880();
   scope->scopes[2] = makewaddr_58234_48267880();
   scope->scopes[3] = makerinc_58238_48290680();
   scope->scopes[4] = makewinc_58242_48285580();
   scope->scopes[5] = makerdec_58246_48302700();
   scope->scopes[6] = makewdec_58251_48301080();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54437580();
   scope->behaviors[1] = make__54436840();
   scope->behaviors[2] = make__54534040();
   scope->behaviors[3] = make__54533840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58256_50449340;

SignalI lv0_50597840_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makelv0_50597840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_50597840_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58256_50449340;
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

SignalI lv1_52121800_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makelv1_52121800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_52121800_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58256_50449340;
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

SignalI rv0_52340760_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makerv0_52340760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_52340760_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58256_50449340;
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

SignalI rv1_52461740_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makerv1_52461740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_52461740_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58256_50449340;
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

SignalI lvok0_52461720_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makelvok0_52461720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52461720_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58256_50449340;
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

SignalI lvok1_52461700_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makelvok1_52461700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_52461700_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58256_50449340;
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

SignalI rvok0_52461680_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makervok0_52461680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52461680_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58256_50449340;
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

SignalI rvok1_52461660_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makervok1_52461660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_52461660_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58256_50449340;
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

SignalI run_52461640_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makerun_52461640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52461640_add__n_58256_50449340_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)add__n_58256_50449340;
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

Behavior __46613440;

Behavior make__46613440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46613440 = behavior;
   behavior->owner = (Object)add__n_58256_50449340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos += 1;
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos = realloc(clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos*sizeof(Object));
clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos[clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos-1] = (Object)behavior;
   behavior->block = make__52485980();

   return behavior;
}

Scope makeadd__n_58256_50449340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58256_50449340 = scope;
   scope->owner = (Object)layer0_58_84_53425080;
   scope->name = "add_n:256";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_50597840();
   scope->inners[1] = makelv1_52121800();
   scope->inners[2] = makerv0_52340760();
   scope->inners[3] = makerv1_52461740();
   scope->inners[4] = makelvok0_52461720();
   scope->inners[5] = makelvok1_52461700();
   scope->inners[6] = makervok0_52461680();
   scope->inners[7] = makervok1_52461660();
   scope->inners[8] = makerun_52461640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46613440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53130120;

Behavior make__53130120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53130120 = behavior;
   behavior->owner = (Object)layer0_58_84_53425080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos += 1;
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos = realloc(clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos*sizeof(Object));
clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos[clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos-1] = (Object)behavior;
   behavior->block = make__53132600();

   return behavior;
}

Behavior __46665280;

Behavior make__46665280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46665280 = behavior;
   behavior->owner = (Object)layer0_58_84_53425080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos += 1;
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos = realloc(clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos*sizeof(Object));
clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos[clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos-1] = (Object)behavior;
   behavior->block = make__53129980();

   return behavior;
}

Behavior __50499360;

Behavior make__50499360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50499360 = behavior;
   behavior->owner = (Object)layer0_58_84_53425080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos += 1;
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos = realloc(clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos*sizeof(Object));
clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->pos[clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_pos-1] = (Object)behavior;
   behavior->block = make__46661880();

   return behavior;
}

Behavior __54213480;

Behavior make__54213480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54213480 = behavior;
   behavior->owner = (Object)layer0_58_84_53425080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_50515380_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   req_50515380_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   req_50515380_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(req_50515380_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,req_50515380_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
req_50515380_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[req_50515380_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_46613080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   ack__mac_46613080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   ack__mac_46613080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(ack__mac_46613080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,ack__mac_46613080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
ack__mac_46613080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[ack__mac_46613080_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54214060();

   return behavior;
}

Behavior __54274620;

Behavior make__54274620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54274620 = behavior;
   behavior->owner = (Object)layer0_58_84_53425080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[clk_50515460_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[ack_46613100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_52223840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   value__z0_52223840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   value__z0_52223840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(value__z0_52223840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,value__z0_52223840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
value__z0_52223840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[value__z0_52223840_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_52408440_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   value__z1_52408440_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   value__z1_52408440_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(value__z1_52408440_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,value__z1_52408440_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
value__z1_52408440_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[value__z1_52408440_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_52714780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   ack__a0_52714780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   ack__a0_52714780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(ack__a0_52714780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,ack__a0_52714780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
ack__a0_52714780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[ack__a0_52714780_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_52714700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   ack__a1_52714700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   ack__a1_52714700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(ack__a1_52714700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,ack__a1_52714700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
ack__a1_52714700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[ack__a1_52714700_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54190200();

   return behavior;
}

Behavior __54273860;

Behavior make__54273860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54273860 = behavior;
   behavior->owner = (Object)layer0_58_84_53425080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_52707640_counter_58_841_52709980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   ack__mac_52707640_counter_58_841_52709980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   ack__mac_52707640_counter_58_841_52709980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(ack__mac_52707640_counter_58_841_52709980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,ack__mac_52707640_counter_58_841_52709980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
ack__mac_52707640_counter_58_841_52709980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[ack__mac_52707640_counter_58_841_52709980_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[rst_50515440_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_54560420_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   a_54560420_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   a_54560420_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(a_54560420_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,a_54560420_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
a_54560420_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[a_54560420_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_52917020_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   a_52917020_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   a_52917020_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(a_52917020_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,a_52917020_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
a_52917020_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[a_52917020_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__54214300();

   return behavior;
}

Scope makelayer0_58_84_53425080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_53425080 = scope;
   scope->owner = (Object)layer0_58_840_50498160;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_52707400();
   scope->systemIs[1] = makefunc0_54560240();
   scope->systemIs[2] = makefunc1_52916780();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_46613120();
   scope->inners[1] = makeack_46613100();
   scope->inners[2] = makeack__mac_46613080();
   scope->inners[3] = makeack__add_46613060();
   scope->inners[4] = make_58136_48275100();
   scope->inners[5] = make_58134_48275080();
   scope->inners[6] = make_58135_48274940();
   scope->inners[7] = make_58159_49920100();
   scope->inners[8] = make_58160_49713240();
   scope->inners[9] = make_58151_49996980();
   scope->inners[10] = make_58149_49996920();
   scope->inners[11] = make_58150_49996760();
   scope->inners[12] = make_58200_50157880();
   scope->inners[13] = make_58201_50157860();
   scope->inners[14] = make_58198_50157820();
   scope->inners[15] = make_58199_50157700();
   scope->inners[16] = make_58228_50234480();
   scope->inners[17] = make_58229_50517840();
   scope->inners[18] = make_58215_52042520();
   scope->inners[19] = make_58216_52042500();
   scope->inners[20] = make_58213_52042480();
   scope->inners[21] = make_58214_52042400();
   scope->inners[22] = makevalue__z0_52223840();
   scope->inners[23] = makevalue__z1_52408440();
   scope->inners[24] = makevalue__a0_52539340();
   scope->inners[25] = makevalue__a1_52714860();
   scope->inners[26] = makeflag__z0_52714840();
   scope->inners[27] = makeflag__z1_52714820();
   scope->inners[28] = makeack__a0_52714780();
   scope->inners[29] = makeack__a1_52714700();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58127_53424780();
   scope->scopes[1] = makechannel__w1_58142_54989480();
   scope->scopes[2] = makechannel__accum_58157_52038800();
   scope->scopes[3] = makemac__n1_58189_52829480();
   scope->scopes[4] = makechannel__b0_58196_52502460();
   scope->scopes[5] = makechannel__b1_58211_53777800();
   scope->scopes[6] = makechannel__z_58226_48271020();
   scope->scopes[7] = makeadd__n_58256_50449340();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53130120();
   scope->behaviors[1] = make__46665280();
   scope->behaviors[2] = make__50499360();
   scope->behaviors[3] = make__54213480();
   scope->behaviors[4] = make__54274620();
   scope->behaviors[5] = make__54273860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_50498160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_50498160 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_50515460();
   systemT->inputs[1] = makerst_50515440();
   systemT->inputs[2] = makereq_50515380();
   systemT->inputs[3] = make_5859_52119080();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_52119020();
   systemT->outputs[1] = make_5857_52118920();
   systemT->outputs[2] = make_5858_52118760();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5899_52463460();
   systemT->inouts[1] = make_58100_52735620();

   systemT->scope = makelayer0_58_84_53425080();

   return systemT;
}