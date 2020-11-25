#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_841_56849280;

SignalI clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeclk_56845260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_841_56849280;
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

SignalI rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makerst_56845240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_841_56849280;
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

SignalI req_56845220_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereq_56845220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_56845220_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_841_56849280;
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

SignalI _58114_57134380_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58114_57134380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58114_57134380_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_841_56849280;
   signalI->name = ":114";
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

SignalI ack__layer_57134280_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__layer_57134280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_57134280_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_841_56849280;
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

SignalI _58112_57134260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58112_57134260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58112_57134260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_841_56849280;
   signalI->name = ":112";
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

SignalI _58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58113_57134160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_841_56849280;
   signalI->name = ":113";
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

SignalI _58154_57419580_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58154_57419580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58154_57419580_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_841_56849280;
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

SignalI _58155_57554060_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58155_57554060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58155_57554060_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_841_56849280;
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

Block __54828000;

Block __54827420;

void code__54827420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77077000(),ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77076940(),ack__mac_54270920_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77076880(),ack__add_54270900_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54827420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54827420 = block;
   block->owner = (Object)__54828000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54827420;

   return block;
};

void code__54828000() {
   {
      Value cond = rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54827420();
   }
      }
   }
}

Block make__54828000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54828000 = block;
   block->owner = (Object)__54824540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54828000;

   return block;
};

Block __54824360;

Block __54823260;

Block __54822940;

void code__54822940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_55196580_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,value__z0_55562480_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77076700(),flag__z0_55900680_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54822940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54822940 = block;
   block->owner = (Object)__54823260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54822940;

   return block;
};

Block __55363220;

void code__55363220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_55319020_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,value__z1_55707340_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77076560(),flag__z1_55900660_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55363220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55363220 = block;
   block->owner = (Object)__54823260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55363220;

   return block;
};

void code__54823260() {
 code__54822940();
 code__55363220();
}

Block make__54823260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54823260 = block;
   block->owner = (Object)__54824360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54823260;

   return block;
};

Block __54824020;

void code__54824020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77076500(),flag__z0_55900680_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77076440(),flag__z1_55900660_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54824020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54824020 = block;
   block->owner = (Object)__54824360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54824020;

   return block;
};

void code__54824360() {
   {
      Value cond = ack__add_54270900_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54823260();
   }
   else {
  code__54824020();
   }
      }
   }
}

Block make__54824360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54824360 = block;
   block->owner = (Object)__55787160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54824360;

   return block;
};

Block __55787000;

Block __55786640;

void code__55786640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77076320(),ack__a0_55900620_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77076240(),ack__a1_55900520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55786640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55786640 = block;
   block->owner = (Object)__55787000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55786640;

   return block;
};

Block __55785300;

Block __55785140;

void code__55785140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_55780520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58154_57419580_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77075900(),ack__a0_55900620_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55785140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55785140 = block;
   block->owner = (Object)__55785300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55785140;

   return block;
};

Block __56308520;

void code__56308520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_55900700_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58155_57554060_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77075760(),ack__a1_55900520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56308520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56308520 = block;
   block->owner = (Object)__55785300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56308520;

   return block;
};

void code__55785300() {
 code__55785140();
 code__56308520();
}

Block make__55785300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55785300 = block;
   block->owner = (Object)__55787000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55785300;

   return block;
};

void code__55787000() {
   {
      Value cond = rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55786640();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_55900680_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         src1 = flag__z1_55900660_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__55785300();
   }
      }
   }
}

Block make__55787000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55787000 = block;
   block->owner = (Object)__56849620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55787000;

   return block;
};

Block __76785460;

void code__76785460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_56845220_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_54270920_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_54270960_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76785460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76785460 = block;
   block->owner = (Object)__76785220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76785460;

   return block;
};

Block __76785740;

void code__76785740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,clk_55917620_counter_58_843_55895240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,ack_55917560_counter_58_843_55895240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,rst_55917540_counter_58_843_55895240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_55562480_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,z__value_50886320_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_55707340_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,z__value_50129980_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_55900620_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      src1 = ack__a1_55900520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_57134280_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76785740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76785740 = block;
   block->owner = (Object)__76801860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76785740;

   return block;
};

Block __76785680;

void code__76785680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_55917480_counter_58_843_55895240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,ack__mac_54270920_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58256_54894420_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58271_55473260_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_51308720_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,value__a0_55780520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_51192240_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,value__a1_55900700_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76785680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76785680 = block;
   block->owner = (Object)__76801660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76785680;

   return block;
};

Block __51310220;

void code__51310220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50130540_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(abus__r_41864660_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_41814140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__51310220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51310220 = block;
   block->owner = (Object)__51725980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51310220;

   return block;
};

Block __76800880;

void code__76800880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_41814140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58191_54368460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76800880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76800880 = block;
   block->owner = (Object)__76800720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76800880;

   return block;
};

Block __76800680;

void code__76800680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58191_54368460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,dbus__r_41814140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76800680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76800680 = block;
   block->owner = (Object)__76800500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76800680;

   return block;
};

Block __76800200;

void code__76800200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_57675140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76800200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76800200 = block;
   block->owner = (Object)__76800040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76800200;

   return block;
};

Block __76881880;

void code__76881880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,trig__r_57675140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76881880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76881880 = block;
   block->owner = (Object)__76881720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76881880;

   return block;
};

Block __76881380;

void code__76881380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_41864660_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76881380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76881380 = block;
   block->owner = (Object)__76881160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76881380;

   return block;
};

Block __76881120;

void code__76881120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,abus__r_41864660_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76881120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76881120 = block;
   block->owner = (Object)__76880960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76881120;

   return block;
};

Block __54442700;

void code__54442700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54264660_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(abus__r_51823440_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51823520_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54442700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54442700 = block;
   block->owner = (Object)__54821220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54442700;

   return block;
};

Block __76879720;

void code__76879720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51823520_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58206_54766880_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76879720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76879720 = block;
   block->owner = (Object)__76879560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76879720;

   return block;
};

Block __76879500;

void code__76879500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_54766880_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,dbus__r_51823520_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76879500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76879500 = block;
   block->owner = (Object)__76879320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76879500;

   return block;
};

Block __76878960;

void code__76878960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_51748460_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76878960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76878960 = block;
   block->owner = (Object)__76878800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76878960;

   return block;
};

Block __76878760;

void code__76878760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,trig__r_51748460_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76878760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76878760 = block;
   block->owner = (Object)__76878600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76878760;

   return block;
};

Block __76878300;

void code__76878300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_51823440_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76878300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76878300 = block;
   block->owner = (Object)__76878120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76878300;

   return block;
};

Block __76878080;

void code__76878080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,abus__r_51823440_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76878080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76878080 = block;
   block->owner = (Object)__76877920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76878080;

   return block;
};

Block __76876600;

void code__76876600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54943300_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58214_54440460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76876600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76876600 = block;
   block->owner = (Object)__76876440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76876600;

   return block;
};

Block __76876400;

void code__76876400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_54440460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,reg__0_54943300_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76876400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76876400 = block;
   block->owner = (Object)__76876240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76876400;

   return block;
};

Block __76875920;

void code__76875920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_55241840_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58215_54685440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76875920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76875920 = block;
   block->owner = (Object)__76875760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76875920;

   return block;
};

Block __76875720;

void code__76875720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58215_54685440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,reg__1_55241840_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76875720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76875720 = block;
   block->owner = (Object)__76875560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76875720;

   return block;
};

Block __56327080;

Block __56326920;

Block __56326580;

void code__56326580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76967940(),_58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56326580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56326580 = block;
   block->owner = (Object)__56326920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56326580;

   return block;
};

void code__56326920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76968040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56326580();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76967880(),_58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56326920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56326920 = block;
   block->owner = (Object)__56327080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56326920;

   return block;
};

Block __56325880;

Block __56325560;

void code__56325560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76967660(),_58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56325560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56325560 = block;
   block->owner = (Object)__56325880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56325560;

   return block;
};

void code__56325880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76967740();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56325560();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76967600(),_58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56325880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56325880 = block;
   block->owner = (Object)__56327080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56325880;

   return block;
};

Block __56324920;

Block __56324600;

void code__56324600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76967440(),_58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56324600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56324600 = block;
   block->owner = (Object)__56324920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56324600;

   return block;
};

void code__56324920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76967520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56324600();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76967380(),_58112_57134260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56324920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56324920 = block;
   block->owner = (Object)__56327080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56324920;

   return block;
};

Block __56323480;

void code__56323480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76967140(),rvok_56327260_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76967080(),lvok0_56327300_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76967020(),wok0_56327240_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76966960(),lvok1_56327280_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76966900(),wok1_56327220_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56323480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56323480 = block;
   block->owner = (Object)__56327080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56323480;

   return block;
};

Block __56541000;

Block __56540580;

Block __56540420;

Block __56540080;

Block __56538180;

Block __56538000;

void code__56538000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58114_57134380_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,rv_56327320_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76966320(),rvok_56327260_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56538000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56538000 = block;
   block->owner = (Object)__56538180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56538000;

   return block;
};

void code__56538180() {
 code__56538000();
}

Block make__56538180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56538180 = block;
   block->owner = (Object)__56540080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56538180;

   return block;
};

Block __56539900;

void code__56539900() {
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
                  src0 = _58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__76966220();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76966180();
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
                        src0 = _58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76965900();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__76965840();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76965660(),_58112_57134260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56539900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56539900 = block;
   block->owner = (Object)__56540080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56539900;

   return block;
};

void code__56540080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58112_57134260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76966480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56538180();
   }
   else {
  code__56539900();
   }
      }
   }
}

Block make__56540080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56540080 = block;
   block->owner = (Object)__56540420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56540080;

   return block;
};

void code__56540420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76966580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56540080();
   }
      }
   }
}

Block make__56540420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56540420 = block;
   block->owner = (Object)__56540580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56540420;

   return block;
};

void code__56540580() {
 code__56540420();
}

Block make__56540580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56540580 = block;
   block->owner = (Object)__56541000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56540580;

   return block;
};

Block __56912900;

Block __56912680;

Block __56912360;

Block __56910440;

Block __56910280;

void code__56910280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58191_54368460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,lv0_55764680_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76965260(),lvok0_56327300_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56910280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56910280 = block;
   block->owner = (Object)__56910440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56910280;

   return block;
};

void code__56910440() {
 code__56910280();
}

Block make__56910440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56910440 = block;
   block->owner = (Object)__56912360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56910440;

   return block;
};

Block __56912200;

void code__56912200() {
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
                  src0 = _58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__76965160();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76965120();
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
                        src0 = _58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76964880();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__76964820();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76964680(),_58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56912200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56912200 = block;
   block->owner = (Object)__56912360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56912200;

   return block;
};

void code__56912360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76965420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56910440();
   }
   else {
  code__56912200();
   }
      }
   }
}

Block make__56912360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56912360 = block;
   block->owner = (Object)__56912680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56912360;

   return block;
};

void code__56912680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76965520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56912360();
   }
      }
   }
}

Block make__56912680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56912680 = block;
   block->owner = (Object)__56912900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56912680;

   return block;
};

void code__56912900() {
 code__56912680();
}

Block make__56912900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56912900 = block;
   block->owner = (Object)__56541000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56912900;

   return block;
};

Block __57325120;

Block __57324580;

Block __57324420;

void code__57324420() {
}

Block make__57324420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57324420 = block;
   block->owner = (Object)__57324580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57324420;

   return block;
};

Block __44805900;

void code__44805900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_55910720_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58214_54440460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77062100(),wok0_56327240_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__44805900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44805900 = block;
   block->owner = (Object)__57324580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44805900;

   return block;
};

void code__57324580() {
 code__57324420();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_55910720_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
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
                              src0 = lv0_55764680_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_56327320_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76964060();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_55910720_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__44805900();
}

Block make__57324580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57324580 = block;
   block->owner = (Object)__57325120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57324580;

   return block;
};

void code__57325120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76964440(),ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76964380(),run_56327200_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__57324580();
}

Block make__57325120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57325120 = block;
   block->owner = (Object)__56541000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57325120;

   return block;
};

Block __48593820;

void code__48593820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77061920(),wok0_56327240_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77061820(),wok1_56327220_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77061760(),lvok0_56327300_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77061700(),lvok1_56327280_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77061640(),rvok_56327260_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__48593820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48593820 = block;
   block->owner = (Object)__56541000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48593820;

   return block;
};

Block __48610240;

Block __48607860;

Block __48606960;

Block __48642540;

Block __48640620;

void code__48640620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58206_54766880_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,lv1_55850100_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__77061240(),lvok1_56327280_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__48640620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48640620 = block;
   block->owner = (Object)__48642540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48640620;

   return block;
};

void code__48642540() {
 code__48640620();
}

Block make__48642540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48642540 = block;
   block->owner = (Object)__48606960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48642540;

   return block;
};

Block __48606460;

void code__48606460() {
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
                  src0 = _58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__77061140();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77061100();
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
                        src0 = _58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77060840();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__77060780();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77060660(),_58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__48606460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48606460 = block;
   block->owner = (Object)__48606960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48606460;

   return block;
};

void code__48606960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77061400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48642540();
   }
   else {
  code__48606460();
   }
      }
   }
}

Block make__48606960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48606960 = block;
   block->owner = (Object)__48607860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48606960;

   return block;
};

void code__48607860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77061500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48606960();
   }
      }
   }
}

Block make__48607860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48607860 = block;
   block->owner = (Object)__48610240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48607860;

   return block;
};

void code__48610240() {
 code__48607860();
}

Block make__48610240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48610240 = block;
   block->owner = (Object)__56541000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48610240;

   return block;
};

Block __50514840;

Block __50674720;

Block __50672040;

void code__50672040() {
}

Block make__50672040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50672040 = block;
   block->owner = (Object)__50674720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50672040;

   return block;
};

Block __51726080;

void code__51726080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_56143580_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58215_54685440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77059760(),wok1_56327220_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__51726080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51726080 = block;
   block->owner = (Object)__50674720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51726080;

   return block;
};

void code__50674720() {
 code__50672040();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_56143580_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
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
                              src0 = lv1_55850100_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_56327320_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77060000();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_56143580_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__51726080();
}

Block make__50674720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50674720 = block;
   block->owner = (Object)__50514840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50674720;

   return block;
};

void code__50514840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77060420(),ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77060360(),run_56327200_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__50674720();
}

Block make__50514840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50514840 = block;
   block->owner = (Object)__56541000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50514840;

   return block;
};

Block __52009500;

void code__52009500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77059600(),wok0_56327240_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77059540(),wok1_56327220_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77059480(),lvok0_56327300_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77059420(),lvok1_56327280_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77059360(),rvok_56327260_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__52009500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52009500 = block;
   block->owner = (Object)__56541000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52009500;

   return block;
};

void code__56541000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76966720(),run_56327200_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_56327260_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56540580();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_56327300_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56912900();
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
               src0 = lvok0_56327300_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               src1 = rvok_56327260_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_56327240_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57325120();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_56327240_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         src1 = wok1_56327220_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48593820();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_56327280_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48610240();
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
               src0 = lvok1_56327280_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               src1 = rvok_56327260_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_56327220_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50514840();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_56327240_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         src1 = wok1_56327220_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52009500();
   }
      }
   }
}

Block make__56541000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56541000 = block;
   block->owner = (Object)__56327080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56541000;

   return block;
};

Block __56322400;

void code__56322400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77059300(),av0_55910720_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77059240(),av1_56143580_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56322400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56322400 = block;
   block->owner = (Object)__56327080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56322400;

   return block;
};

void code__56327080() {
 code__56326920();
 code__56325880();
 code__56324920();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76967320(),ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76967260(),run_56327200_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_56327200_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56323480();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_54270960_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         src1 = run_56327200_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56541000();
   }
   else {
  code__56322400();
   }
      }
   }
}

Block make__56327080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56327080 = block;
   block->owner = (Object)__52006620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56327080;

   return block;
};

Block __54397660;

void code__54397660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_52650960_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(abus__r_52101420_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_52101640_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54397660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54397660 = block;
   block->owner = (Object)__54827180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54397660;

   return block;
};

Block __76898260;

void code__76898260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_52101640_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58255_54894460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76898260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76898260 = block;
   block->owner = (Object)__76898100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76898260;

   return block;
};

Block __76898060;

void code__76898060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58255_54894460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,dbus__r_52101640_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76898060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76898060 = block;
   block->owner = (Object)__76897900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76898060;

   return block;
};

Block __76897540;

void code__76897540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_52004460_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76897540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76897540 = block;
   block->owner = (Object)__76897340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76897540;

   return block;
};

Block __76897300;

void code__76897300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,trig__r_52004460_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76897300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76897300 = block;
   block->owner = (Object)__76897140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76897300;

   return block;
};

Block __76896840;

void code__76896840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52101420_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58254_54894300_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76896840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76896840 = block;
   block->owner = (Object)__76896680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76896840;

   return block;
};

Block __76896640;

void code__76896640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58254_54894300_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,abus__r_52101420_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76896640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76896640 = block;
   block->owner = (Object)__76896460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76896640;

   return block;
};

Block __55599060;

void code__55599060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55335060_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(abus__r_54906260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54906340_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55599060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55599060 = block;
   block->owner = (Object)__55863600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55599060;

   return block;
};

Block __76895140;

void code__76895140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54906340_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58270_55473280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76895140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76895140 = block;
   block->owner = (Object)__76894980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76895140;

   return block;
};

Block __76894940;

void code__76894940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_55473280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,dbus__r_54906340_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76894940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76894940 = block;
   block->owner = (Object)__76894780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76894940;

   return block;
};

Block __76894480;

void code__76894480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_54825260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76894480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76894480 = block;
   block->owner = (Object)__76894300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76894480;

   return block;
};

Block __76894260;

void code__76894260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,trig__r_54825260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76894260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76894260 = block;
   block->owner = (Object)__76894100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76894260;

   return block;
};

Block __76893800;

void code__76893800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_54906260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58269_55473160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76893800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76893800 = block;
   block->owner = (Object)__76893620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76893800;

   return block;
};

Block __76893560;

void code__76893560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_55473160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,abus__r_54906260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76893560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76893560 = block;
   block->owner = (Object)__76893380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76893560;

   return block;
};

Block __76892100;

void code__76892100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56065240_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58283_55196580_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76892100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76892100 = block;
   block->owner = (Object)__76891940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76892100;

   return block;
};

Block __76891900;

void code__76891900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_55196580_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,reg__0_56065240_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76891900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76891900 = block;
   block->owner = (Object)__76891740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76891900;

   return block;
};

Block __76891400;

void code__76891400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_56288060_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58284_55319020_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76891400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76891400 = block;
   block->owner = (Object)__76891180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76891400;

   return block;
};

Block __76891140;

void code__76891140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_55319020_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,reg__1_56288060_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76891140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76891140 = block;
   block->owner = (Object)__76890980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76891140;

   return block;
};

Block __57510140;

Block __57509980;

void code__57509980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77056780(),_58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57509980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57509980 = block;
   block->owner = (Object)__57510140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57509980;

   return block;
};

Block __57509640;

void code__57509640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77056700(),_58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57509640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57509640 = block;
   block->owner = (Object)__57510140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57509640;

   return block;
};

Block __57532360;

Block __57532020;

void code__57532020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_54440460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,lv0_57138380_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77056280(),lvok0_57510360_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57532020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57532020 = block;
   block->owner = (Object)__57532360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57532020;

   return block;
};

Block __57672140;

Block __57671800;

Block __57695260;

void code__57695260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58255_54894460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,rv0_57427200_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77055920(),_58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77055840(),rvok0_57510320_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57695260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57695260 = block;
   block->owner = (Object)__57671800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57695260;

   return block;
};

Block __57696160;

void code__57696160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77055780(),_58254_54894300_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77055700(),_58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57696160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57696160 = block;
   block->owner = (Object)__57671800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57696160;

   return block;
};

void code__57671800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77056100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57695260();
   }
   else {
  code__57696160();
   }
      }
   }
}

Block make__57671800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57671800 = block;
   block->owner = (Object)__57672140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57671800;

   return block;
};

void code__57672140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58256_54894420_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77056200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57671800();
   }
      }
   }
}

Block make__57672140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57672140 = block;
   block->owner = (Object)__57532360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57672140;

   return block;
};

Block __48327660;

Block __48345160;

void code__48345160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_57138380_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      src1 = rv0_57427200_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58283_55196580_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__48345160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48345160 = block;
   block->owner = (Object)__48327660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48345160;

   return block;
};

void code__48327660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77055500(),run_57510280_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77055440(),ack__add_54270900_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__48345160();
}

Block make__48327660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48327660 = block;
   block->owner = (Object)__57532360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48327660;

   return block;
};

Block __51183500;

void code__51183500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58215_54685440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,lv1_57303920_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77055120(),lvok1_57510340_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__51183500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51183500 = block;
   block->owner = (Object)__57532360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51183500;

   return block;
};

Block __51552420;

Block __51576520;

Block __51575320;

void code__51575320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_55473280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,rv1_57510380_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77054780(),_58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77054720(),rvok1_57510300_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__51575320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51575320 = block;
   block->owner = (Object)__51576520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51575320;

   return block;
};

Block __51576360;

void code__51576360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77054640(),_58269_55473160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77054580(),_58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__51576360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51576360 = block;
   block->owner = (Object)__51576520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51576360;

   return block;
};

void code__51576520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77054940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51575320();
   }
   else {
  code__51576360();
   }
      }
   }
}

Block make__51576520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51576520 = block;
   block->owner = (Object)__51552420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51576520;

   return block;
};

void code__51552420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58271_55473260_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77055040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51576520();
   }
      }
   }
}

Block make__51552420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51552420 = block;
   block->owner = (Object)__57532360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51552420;

   return block;
};

Block __51840340;

Block __51839300;

void code__51839300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_57303920_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      src1 = rv1_57510380_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58284_55319020_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__51839300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51839300 = block;
   block->owner = (Object)__51840340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51839300;

   return block;
};

void code__51840340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77054420(),run_57510280_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77054360(),ack__add_54270900_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__51839300();
}

Block make__51840340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51840340 = block;
   block->owner = (Object)__57532360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51840340;

   return block;
};

void code__57532360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77056420(),run_57510280_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__57532020();
 code__57672140();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_57510360_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         src1 = rvok0_57510320_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48327660();
   }
      }
   }
 code__51183500();
 code__51552420();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_57510340_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         src1 = rvok1_57510300_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51840340();
   }
      }
   }
}

Block make__57532360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57532360 = block;
   block->owner = (Object)__57510140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57532360;

   return block;
};

Block __57508820;

void code__57508820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77054120(),lvok0_57510360_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77054060(),rvok0_57510320_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77054000(),lvok1_57510340_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77078480(),rvok1_57510300_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57508820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57508820 = block;
   block->owner = (Object)__57510140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57508820;

   return block;
};

void code__57510140() {
 code__57509980();
 code__57509640();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77056640(),ack__add_54270900_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77056580(),run_57510280_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_54270920_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         src1 = run_57510280_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57532360();
   }
   else {
  code__57508820();
   }
      }
   }
}

Block make__57510140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57510140 = block;
   block->owner = (Object)__54271120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57510140;

   return block;
};

Value make__76970780() {
   static unsigned long long data[] = { 4294967238ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76970760() {
   static unsigned long long data[] = { 4294967242ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76969580() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76969560() {
   static unsigned long long data[] = { 4294967271ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77059220() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__77058300() {
   static unsigned long long data[] = { 33ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__76968040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76967940() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76967880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76967740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76967660() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76967600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76967520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76967440() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76967380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76967320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76967260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76967140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76967080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76967020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76966960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76966900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76966720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76966580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76966480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76966320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76966220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76966180() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76965900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76965840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76965660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76965520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76965420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76965260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76965160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76965120() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76964880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76964820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76964680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76964440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76964380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76964060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77062100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77061920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77061820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77061760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77061700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77061640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77061500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77061400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77061240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77061140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77061100() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77060840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77060780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77060660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77060420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77060360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77060000() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77059760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77059600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77059540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77059480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77059420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77059360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77059300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77059240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77056780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77056700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77056640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77056580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77056420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77056280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77056200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77056100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77055920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77055840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77055780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77055700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77055500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77055440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77055120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77055040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77054940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77054780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77054720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77054640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77054580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77054420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77054360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77054120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77054060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77054000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77078480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77077000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77076940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77076880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77076700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77076560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77076500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77076440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77076320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77076240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77075900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77075760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_57677020;

SignalI req__mac_54270960_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereq__mac_54270960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_54270960_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SignalI ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack_54270940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SignalI ack__mac_54270920_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__mac_54270920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_54270920_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SignalI ack__add_54270900_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__add_54270900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_54270900_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SignalI _58191_54368460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58191_54368460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58191_54368460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":191";
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

SignalI _58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58189_54368440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":189";
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

SignalI _58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58190_54368360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":190";
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

SignalI _58214_54440460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58214_54440460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58214_54440460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":214";
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

SignalI _58215_54685440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58215_54685440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58215_54685440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SignalI _58206_54766880_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58206_54766880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58206_54766880_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":206";
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

SignalI _58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58204_54766860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":204";
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

SignalI _58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58205_54766780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":205";
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

SignalI _58255_54894460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58255_54894460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58255_54894460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":255";
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

SignalI _58256_54894420_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58256_54894420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58256_54894420_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":256";
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

SignalI _58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58253_54894400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":253";
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

SignalI _58254_54894300_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58254_54894300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58254_54894300_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":254";
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

SignalI _58283_55196580_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58283_55196580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_55196580_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":283";
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

SignalI _58284_55319020_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58284_55319020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58284_55319020_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SignalI _58270_55473280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58270_55473280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_55473280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":270";
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

SignalI _58271_55473260_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58271_55473260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58271_55473260_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":271";
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

SignalI _58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58268_55473240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":268";
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

SignalI _58269_55473160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58269_55473160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_55473160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
   signalI->name = ":269";
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

SignalI value__z0_55562480_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makevalue__z0_55562480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_55562480_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SignalI value__z1_55707340_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makevalue__z1_55707340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_55707340_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SignalI value__a0_55780520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makevalue__a0_55780520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_55780520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SignalI value__a1_55900700_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makevalue__a1_55900700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_55900700_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SignalI flag__z0_55900680_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeflag__z0_55900680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_55900680_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SignalI flag__z1_55900660_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeflag__z1_55900660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_55900660_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SignalI ack__a0_55900620_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__a0_55900620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_55900620_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SignalI ack__a1_55900520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__a1_55900520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_55900520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer0_58_84_57677020;
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

SystemI counter_55917260;

SystemI makecounter_55917260() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_55917260 = systemI;
   systemI->owner = (Object)layer0_58_84_57677020;
   systemI->name = "counter";
   systemI->system = counter_58_843_55895240;

   return systemI;
};

SystemI func0_51308560;

SystemI makefunc0_51308560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_51308560 = systemI;
   systemI->owner = (Object)layer0_58_84_57677020;
   systemI->name = "func0";
   systemI->system = func0_58_843_50293160;

   return systemI;
};

SystemI func1_51213900;

SystemI makefunc1_51213900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_51213900 = systemI;
   systemI->owner = (Object)layer0_58_84_57677020;
   systemI->name = "func1";
   systemI->system = func1_58_841_49915320;

   return systemI;
};

Scope channel__w0_58182_57676720;

SignalI trig__r_57675140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI maketrig__r_57675140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_57675140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58182_57676720;
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

SignalI dbus__r_41814140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makedbus__r_41814140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_41814140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58182_57676720;
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

SignalI abus__r_41864660_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_41864660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_41864660_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58182_57676720;
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

SignalI mem_50130540_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makemem_50130540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50130540_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58182_57676720;
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
         src0 = make__76970780();
         src1 = make__76970760();
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

Scope raddr_58183_57676420;

Scope makeraddr_58183_57676420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58183_57676420 = scope;
   scope->owner = (Object)channel__w0_58182_57676720;
   scope->name = "raddr:183";
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

Scope rinc_58188_57676000;

Scope makerinc_58188_57676000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58188_57676000 = scope;
   scope->owner = (Object)channel__w0_58182_57676720;
   scope->name = "rinc:188";
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

Scope rdec_58192_57675580;

Scope makerdec_58192_57675580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58192_57675580 = scope;
   scope->owner = (Object)channel__w0_58182_57676720;
   scope->name = "rdec:192";
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

Behavior __51725980;

Behavior make__51725980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51725980 = behavior;
   behavior->owner = (Object)channel__w0_58182_57676720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg = realloc(clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg[clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__51310220();

   return behavior;
}

Behavior __76800720;

Behavior make__76800720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76800720 = behavior;
   behavior->owner = (Object)channel__w0_58182_57676720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_41814140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   dbus__r_41814140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__r_41814140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(dbus__r_41814140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,dbus__r_41814140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__r_41814140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[dbus__r_41814140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76800880();

   return behavior;
}

Behavior __76800500;

Behavior make__76800500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76800500 = behavior;
   behavior->owner = (Object)channel__w0_58182_57676720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58191_54368460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58191_54368460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58191_54368460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58191_54368460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58191_54368460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58191_54368460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58191_54368460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76800680();

   return behavior;
}

Behavior __76800040;

Behavior make__76800040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76800040 = behavior;
   behavior->owner = (Object)channel__w0_58182_57676720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_57675140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   trig__r_57675140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   trig__r_57675140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(trig__r_57675140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,trig__r_57675140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
trig__r_57675140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[trig__r_57675140_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76800200();

   return behavior;
}

Behavior __76881720;

Behavior make__76881720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76881720 = behavior;
   behavior->owner = (Object)channel__w0_58182_57676720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58189_54368440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76881880();

   return behavior;
}

Behavior __76881160;

Behavior make__76881160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76881160 = behavior;
   behavior->owner = (Object)channel__w0_58182_57676720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_41864660_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   abus__r_41864660_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_41864660_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(abus__r_41864660_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,abus__r_41864660_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_41864660_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[abus__r_41864660_channel__w0_58182_57676720_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76881380();

   return behavior;
}

Behavior __76880960;

Behavior make__76880960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76880960 = behavior;
   behavior->owner = (Object)channel__w0_58182_57676720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58190_54368360_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76881120();

   return behavior;
}

Scope makechannel__w0_58182_57676720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58182_57676720 = scope;
   scope->owner = (Object)layer0_58_84_57677020;
   scope->name = "channel_w0:182";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_57675140();
   scope->inners[1] = makedbus__r_41814140();
   scope->inners[2] = makeabus__r_41864660();
   scope->inners[3] = makemem_50130540();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58183_57676420();
   scope->scopes[1] = makerinc_58188_57676000();
   scope->scopes[2] = makerdec_58192_57675580();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51725980();
   scope->behaviors[1] = make__76800720();
   scope->behaviors[2] = make__76800500();
   scope->behaviors[3] = make__76800040();
   scope->behaviors[4] = make__76881720();
   scope->behaviors[5] = make__76881160();
   scope->behaviors[6] = make__76880960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58197_51725840;

SignalI trig__r_51748460_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI maketrig__r_51748460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51748460_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w1_58197_51725840;
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

SignalI dbus__r_51823520_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makedbus__r_51823520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51823520_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w1_58197_51725840;
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

SignalI abus__r_51823440_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_51823440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51823440_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w1_58197_51725840;
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

SignalI mem_54264660_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makemem_54264660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54264660_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w1_58197_51725840;
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
         src0 = make__76969580();
         src1 = make__76969560();
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

Scope raddr_58198_51725440;

Scope makeraddr_58198_51725440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58198_51725440 = scope;
   scope->owner = (Object)channel__w1_58197_51725840;
   scope->name = "raddr:198";
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

Scope rinc_58203_51724900;

Scope makerinc_58203_51724900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58203_51724900 = scope;
   scope->owner = (Object)channel__w1_58197_51725840;
   scope->name = "rinc:203";
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

Scope rdec_58207_51724380;

Scope makerdec_58207_51724380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58207_51724380 = scope;
   scope->owner = (Object)channel__w1_58197_51725840;
   scope->name = "rdec:207";
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

Behavior __54821220;

Behavior make__54821220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54821220 = behavior;
   behavior->owner = (Object)channel__w1_58197_51725840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg = realloc(clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg[clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__54442700();

   return behavior;
}

Behavior __76879560;

Behavior make__76879560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76879560 = behavior;
   behavior->owner = (Object)channel__w1_58197_51725840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51823520_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   dbus__r_51823520_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__r_51823520_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(dbus__r_51823520_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,dbus__r_51823520_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__r_51823520_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[dbus__r_51823520_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76879720();

   return behavior;
}

Behavior __76879320;

Behavior make__76879320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76879320 = behavior;
   behavior->owner = (Object)channel__w1_58197_51725840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58206_54766880_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58206_54766880_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58206_54766880_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58206_54766880_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58206_54766880_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58206_54766880_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58206_54766880_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76879500();

   return behavior;
}

Behavior __76878800;

Behavior make__76878800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76878800 = behavior;
   behavior->owner = (Object)channel__w1_58197_51725840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_51748460_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   trig__r_51748460_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   trig__r_51748460_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(trig__r_51748460_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,trig__r_51748460_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
trig__r_51748460_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[trig__r_51748460_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76878960();

   return behavior;
}

Behavior __76878600;

Behavior make__76878600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76878600 = behavior;
   behavior->owner = (Object)channel__w1_58197_51725840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58204_54766860_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76878760();

   return behavior;
}

Behavior __76878120;

Behavior make__76878120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76878120 = behavior;
   behavior->owner = (Object)channel__w1_58197_51725840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_51823440_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   abus__r_51823440_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_51823440_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(abus__r_51823440_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,abus__r_51823440_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_51823440_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[abus__r_51823440_channel__w1_58197_51725840_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76878300();

   return behavior;
}

Behavior __76877920;

Behavior make__76877920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76877920 = behavior;
   behavior->owner = (Object)channel__w1_58197_51725840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58205_54766780_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76878080();

   return behavior;
}

Scope makechannel__w1_58197_51725840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58197_51725840 = scope;
   scope->owner = (Object)layer0_58_84_57677020;
   scope->name = "channel_w1:197";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51748460();
   scope->inners[1] = makedbus__r_51823520();
   scope->inners[2] = makeabus__r_51823440();
   scope->inners[3] = makemem_54264660();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58198_51725440();
   scope->scopes[1] = makerinc_58203_51724900();
   scope->scopes[2] = makerdec_58207_51724380();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54821220();
   scope->behaviors[1] = make__76879560();
   scope->behaviors[2] = make__76879320();
   scope->behaviors[3] = make__76878800();
   scope->behaviors[4] = make__76878600();
   scope->behaviors[5] = make__76878120();
   scope->behaviors[6] = make__76877920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58212_54821100;

SignalI reg__0_54943300_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereg__0_54943300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_54943300_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__accum_58212_54821100;
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

SignalI reg__1_55241840_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereg__1_55241840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_55241840_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__accum_58212_54821100;
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

Scope anum_58213_54845320;

Scope makeanum_58213_54845320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58213_54845320 = scope;
   scope->owner = (Object)channel__accum_58212_54821100;
   scope->name = "anum:213";
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

Scope raddr_58216_54844900;

Scope makeraddr_58216_54844900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58216_54844900 = scope;
   scope->owner = (Object)channel__accum_58212_54821100;
   scope->name = "raddr:216";
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

Scope waddr_58220_54844440;

Scope makewaddr_58220_54844440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58220_54844440 = scope;
   scope->owner = (Object)channel__accum_58212_54821100;
   scope->name = "waddr:220";
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

Scope rinc_58224_54843820;

SignalI abus__r_54843440_rinc_58224_54843820_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_54843440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54843440_rinc_58224_54843820_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rinc_58224_54843820;
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

Scope makerinc_58224_54843820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58224_54843820 = scope;
   scope->owner = (Object)channel__accum_58212_54821100;
   scope->name = "rinc:224";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54843440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58229_54843320;

SignalI abus__w_54842920_winc_58229_54843320_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__w_54842920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54842920_winc_58229_54843320_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)winc_58229_54843320;
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

Scope makewinc_58229_54843320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58229_54843320 = scope;
   scope->owner = (Object)channel__accum_58212_54821100;
   scope->name = "winc:229";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54842920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58234_54842800;

SignalI abus__r_54842400_rdec_58234_54842800_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_54842400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54842400_rdec_58234_54842800_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rdec_58234_54842800;
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

Scope makerdec_58234_54842800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58234_54842800 = scope;
   scope->owner = (Object)channel__accum_58212_54821100;
   scope->name = "rdec:234";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54842400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58239_54842260;

SignalI abus__w_54841820_wdec_58239_54842260_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__w_54841820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54841820_wdec_58239_54842260_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)wdec_58239_54842260;
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

Scope makewdec_58239_54842260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58239_54842260 = scope;
   scope->owner = (Object)channel__accum_58212_54821100;
   scope->name = "wdec:239";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54841820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __76876440;

Behavior make__76876440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76876440 = behavior;
   behavior->owner = (Object)channel__accum_58212_54821100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54943300_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   reg__0_54943300_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   reg__0_54943300_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(reg__0_54943300_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,reg__0_54943300_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__0_54943300_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[reg__0_54943300_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76876600();

   return behavior;
}

Behavior __76876240;

Behavior make__76876240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76876240 = behavior;
   behavior->owner = (Object)channel__accum_58212_54821100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58214_54440460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58214_54440460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58214_54440460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58214_54440460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58214_54440460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58214_54440460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58214_54440460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76876400();

   return behavior;
}

Behavior __76875760;

Behavior make__76875760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76875760 = behavior;
   behavior->owner = (Object)channel__accum_58212_54821100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_55241840_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   reg__1_55241840_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   reg__1_55241840_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(reg__1_55241840_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,reg__1_55241840_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__1_55241840_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[reg__1_55241840_channel__accum_58212_54821100_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76875920();

   return behavior;
}

Behavior __76875560;

Behavior make__76875560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76875560 = behavior;
   behavior->owner = (Object)channel__accum_58212_54821100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58215_54685440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58215_54685440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58215_54685440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58215_54685440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58215_54685440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58215_54685440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58215_54685440_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76875720();

   return behavior;
}

Scope makechannel__accum_58212_54821100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58212_54821100 = scope;
   scope->owner = (Object)layer0_58_84_57677020;
   scope->name = "channel_accum:212";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_54943300();
   scope->inners[1] = makereg__1_55241840();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58213_54845320();
   scope->scopes[1] = makeraddr_58216_54844900();
   scope->scopes[2] = makewaddr_58220_54844440();
   scope->scopes[3] = makerinc_58224_54843820();
   scope->scopes[4] = makewinc_58229_54843320();
   scope->scopes[5] = makerdec_58234_54842800();
   scope->scopes[6] = makewdec_58239_54842260();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76876440();
   scope->behaviors[1] = make__76876240();
   scope->behaviors[2] = make__76875760();
   scope->behaviors[3] = make__76875560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58244_55712280;

SignalI lv0_55764680_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelv0_55764680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_55764680_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58244_55712280;
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

SignalI lv1_55850100_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelv1_55850100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_55850100_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58244_55712280;
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

SignalI av0_55910720_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeav0_55910720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_55910720_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58244_55712280;
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

SignalI av1_56143580_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeav1_56143580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_56143580_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58244_55712280;
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

SignalI rv_56327320_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makerv_56327320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_56327320_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58244_55712280;
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

SignalI lvok0_56327300_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelvok0_56327300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_56327300_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58244_55712280;
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

SignalI lvok1_56327280_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelvok1_56327280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_56327280_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58244_55712280;
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

SignalI rvok_56327260_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makervok_56327260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_56327260_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58244_55712280;
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

SignalI wok0_56327240_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makewok0_56327240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_56327240_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58244_55712280;
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

SignalI wok1_56327220_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makewok1_56327220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_56327220_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58244_55712280;
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

SignalI run_56327200_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makerun_56327200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_56327200_mac__n1_58244_55712280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58244_55712280;
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

Behavior __52006620;

Behavior make__52006620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52006620 = behavior;
   behavior->owner = (Object)mac__n1_58244_55712280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos = realloc(clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos[clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__56327080();

   return behavior;
}

Scope makemac__n1_58244_55712280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58244_55712280 = scope;
   scope->owner = (Object)layer0_58_84_57677020;
   scope->name = "mac_n1:244";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_55764680();
   scope->inners[1] = makelv1_55850100();
   scope->inners[2] = makeav0_55910720();
   scope->inners[3] = makeav1_56143580();
   scope->inners[4] = makerv_56327320();
   scope->inners[5] = makelvok0_56327300();
   scope->inners[6] = makelvok1_56327280();
   scope->inners[7] = makervok_56327260();
   scope->inners[8] = makewok0_56327240();
   scope->inners[9] = makewok1_56327220();
   scope->inners[10] = makerun_56327200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52006620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58251_52006500;

SignalI trig__r_52004460_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI maketrig__r_52004460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_52004460_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58251_52006500;
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

SignalI dbus__r_52101640_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makedbus__r_52101640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_52101640_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58251_52006500;
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

SignalI abus__r_52101420_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_52101420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52101420_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58251_52006500;
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

SignalI mem_52650960_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makemem_52650960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_52650960_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58251_52006500;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__77059220(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58252_52006160;

Scope makeraddr_58252_52006160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58252_52006160 = scope;
   scope->owner = (Object)channel__b0_58251_52006500;
   scope->name = "raddr:252";
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

Scope rinc_58257_52005680;

Scope makerinc_58257_52005680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58257_52005680 = scope;
   scope->owner = (Object)channel__b0_58251_52006500;
   scope->name = "rinc:257";
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

Scope rdec_58261_52005000;

Scope makerdec_58261_52005000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58261_52005000 = scope;
   scope->owner = (Object)channel__b0_58251_52006500;
   scope->name = "rdec:261";
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

Behavior __54827180;

Behavior make__54827180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54827180 = behavior;
   behavior->owner = (Object)channel__b0_58251_52006500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg = realloc(clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg[clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__54397660();

   return behavior;
}

Behavior __76898100;

Behavior make__76898100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76898100 = behavior;
   behavior->owner = (Object)channel__b0_58251_52006500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_52101640_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   dbus__r_52101640_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__r_52101640_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(dbus__r_52101640_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,dbus__r_52101640_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__r_52101640_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[dbus__r_52101640_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76898260();

   return behavior;
}

Behavior __76897900;

Behavior make__76897900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76897900 = behavior;
   behavior->owner = (Object)channel__b0_58251_52006500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58255_54894460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58255_54894460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58255_54894460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58255_54894460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58255_54894460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58255_54894460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58255_54894460_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76898060();

   return behavior;
}

Behavior __76897340;

Behavior make__76897340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76897340 = behavior;
   behavior->owner = (Object)channel__b0_58251_52006500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_52004460_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   trig__r_52004460_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   trig__r_52004460_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(trig__r_52004460_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,trig__r_52004460_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
trig__r_52004460_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[trig__r_52004460_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76897540();

   return behavior;
}

Behavior __76897140;

Behavior make__76897140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76897140 = behavior;
   behavior->owner = (Object)channel__b0_58251_52006500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58253_54894400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76897300();

   return behavior;
}

Behavior __76896680;

Behavior make__76896680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76896680 = behavior;
   behavior->owner = (Object)channel__b0_58251_52006500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52101420_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   abus__r_52101420_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_52101420_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(abus__r_52101420_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,abus__r_52101420_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_52101420_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[abus__r_52101420_channel__b0_58251_52006500_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76896840();

   return behavior;
}

Behavior __76896460;

Behavior make__76896460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76896460 = behavior;
   behavior->owner = (Object)channel__b0_58251_52006500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58254_54894300_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58254_54894300_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58254_54894300_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58254_54894300_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58254_54894300_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58254_54894300_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58254_54894300_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76896640();

   return behavior;
}

Scope makechannel__b0_58251_52006500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58251_52006500 = scope;
   scope->owner = (Object)layer0_58_84_57677020;
   scope->name = "channel_b0:251";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_52004460();
   scope->inners[1] = makedbus__r_52101640();
   scope->inners[2] = makeabus__r_52101420();
   scope->inners[3] = makemem_52650960();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58252_52006160();
   scope->scopes[1] = makerinc_58257_52005680();
   scope->scopes[2] = makerdec_58261_52005000();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54827180();
   scope->behaviors[1] = make__76898100();
   scope->behaviors[2] = make__76897900();
   scope->behaviors[3] = make__76897340();
   scope->behaviors[4] = make__76897140();
   scope->behaviors[5] = make__76896680();
   scope->behaviors[6] = make__76896460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58266_54827040;

SignalI trig__r_54825260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI maketrig__r_54825260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_54825260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b1_58266_54827040;
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

SignalI dbus__r_54906340_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makedbus__r_54906340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54906340_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b1_58266_54827040;
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

SignalI abus__r_54906260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_54906260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54906260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b1_58266_54827040;
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

SignalI mem_55335060_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makemem_55335060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55335060_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b1_58266_54827040;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__77058300(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58267_54826740;

Scope makeraddr_58267_54826740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58267_54826740 = scope;
   scope->owner = (Object)channel__b1_58266_54827040;
   scope->name = "raddr:267";
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

Scope rinc_58272_54826180;

Scope makerinc_58272_54826180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58272_54826180 = scope;
   scope->owner = (Object)channel__b1_58266_54827040;
   scope->name = "rinc:272";
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

Scope rdec_58276_54825700;

Scope makerdec_58276_54825700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58276_54825700 = scope;
   scope->owner = (Object)channel__b1_58266_54827040;
   scope->name = "rdec:276";
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

Behavior __55863600;

Behavior make__55863600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55863600 = behavior;
   behavior->owner = (Object)channel__b1_58266_54827040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg = realloc(clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg[clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__55599060();

   return behavior;
}

Behavior __76894980;

Behavior make__76894980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76894980 = behavior;
   behavior->owner = (Object)channel__b1_58266_54827040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54906340_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   dbus__r_54906340_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__r_54906340_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(dbus__r_54906340_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,dbus__r_54906340_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__r_54906340_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[dbus__r_54906340_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76895140();

   return behavior;
}

Behavior __76894780;

Behavior make__76894780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76894780 = behavior;
   behavior->owner = (Object)channel__b1_58266_54827040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_55473280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58270_55473280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58270_55473280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58270_55473280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58270_55473280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58270_55473280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58270_55473280_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76894940();

   return behavior;
}

Behavior __76894300;

Behavior make__76894300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76894300 = behavior;
   behavior->owner = (Object)channel__b1_58266_54827040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_54825260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   trig__r_54825260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   trig__r_54825260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(trig__r_54825260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,trig__r_54825260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
trig__r_54825260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[trig__r_54825260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76894480();

   return behavior;
}

Behavior __76894100;

Behavior make__76894100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76894100 = behavior;
   behavior->owner = (Object)channel__b1_58266_54827040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58268_55473240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76894260();

   return behavior;
}

Behavior __76893620;

Behavior make__76893620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76893620 = behavior;
   behavior->owner = (Object)channel__b1_58266_54827040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_54906260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   abus__r_54906260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_54906260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(abus__r_54906260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,abus__r_54906260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_54906260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[abus__r_54906260_channel__b1_58266_54827040_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76893800();

   return behavior;
}

Behavior __76893380;

Behavior make__76893380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76893380 = behavior;
   behavior->owner = (Object)channel__b1_58266_54827040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_55473160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58269_55473160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58269_55473160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58269_55473160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58269_55473160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58269_55473160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58269_55473160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76893560();

   return behavior;
}

Scope makechannel__b1_58266_54827040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58266_54827040 = scope;
   scope->owner = (Object)layer0_58_84_57677020;
   scope->name = "channel_b1:266";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_54825260();
   scope->inners[1] = makedbus__r_54906340();
   scope->inners[2] = makeabus__r_54906260();
   scope->inners[3] = makemem_55335060();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58267_54826740();
   scope->scopes[1] = makerinc_58272_54826180();
   scope->scopes[2] = makerdec_58276_54825700();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55863600();
   scope->behaviors[1] = make__76894980();
   scope->behaviors[2] = make__76894780();
   scope->behaviors[3] = make__76894300();
   scope->behaviors[4] = make__76894100();
   scope->behaviors[5] = make__76893620();
   scope->behaviors[6] = make__76893380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58281_55863400;

SignalI reg__0_56065240_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereg__0_56065240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56065240_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__z_58281_55863400;
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

SignalI reg__1_56288060_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereg__1_56288060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_56288060_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__z_58281_55863400;
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

Scope anum_58282_55863100;

Scope makeanum_58282_55863100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_55863100 = scope;
   scope->owner = (Object)channel__z_58281_55863400;
   scope->name = "anum:282";
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

Scope raddr_58285_55862660;

Scope makeraddr_58285_55862660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58285_55862660 = scope;
   scope->owner = (Object)channel__z_58281_55863400;
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

Scope waddr_58289_55861720;

Scope makewaddr_58289_55861720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58289_55861720 = scope;
   scope->owner = (Object)channel__z_58281_55863400;
   scope->name = "waddr:289";
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

Scope rinc_58293_55902080;

SignalI abus__r_55901600_rinc_58293_55902080_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_55901600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55901600_rinc_58293_55902080_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rinc_58293_55902080;
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

Scope makerinc_58293_55902080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58293_55902080 = scope;
   scope->owner = (Object)channel__z_58281_55863400;
   scope->name = "rinc:293";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55901600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58297_55901480;

SignalI abus__w_55901080_winc_58297_55901480_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__w_55901080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55901080_winc_58297_55901480_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)winc_58297_55901480;
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

Scope makewinc_58297_55901480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58297_55901480 = scope;
   scope->owner = (Object)channel__z_58281_55863400;
   scope->name = "winc:297";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55901080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58301_55900960;

SignalI abus__r_55900540_rdec_58301_55900960_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_55900540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55900540_rdec_58301_55900960_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rdec_58301_55900960;
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

Scope makerdec_58301_55900960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58301_55900960 = scope;
   scope->owner = (Object)channel__z_58281_55863400;
   scope->name = "rdec:301";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55900540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58306_55900400;

SignalI abus__w_55899960_wdec_58306_55900400_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__w_55899960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55899960_wdec_58306_55900400_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)wdec_58306_55900400;
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

Scope makewdec_58306_55900400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58306_55900400 = scope;
   scope->owner = (Object)channel__z_58281_55863400;
   scope->name = "wdec:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55899960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __76891940;

Behavior make__76891940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76891940 = behavior;
   behavior->owner = (Object)channel__z_58281_55863400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56065240_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   reg__0_56065240_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   reg__0_56065240_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(reg__0_56065240_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,reg__0_56065240_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__0_56065240_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[reg__0_56065240_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76892100();

   return behavior;
}

Behavior __76891740;

Behavior make__76891740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76891740 = behavior;
   behavior->owner = (Object)channel__z_58281_55863400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_55196580_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58283_55196580_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58283_55196580_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58283_55196580_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58283_55196580_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58283_55196580_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58283_55196580_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76891900();

   return behavior;
}

Behavior __76891180;

Behavior make__76891180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76891180 = behavior;
   behavior->owner = (Object)channel__z_58281_55863400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_56288060_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   reg__1_56288060_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   reg__1_56288060_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(reg__1_56288060_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,reg__1_56288060_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__1_56288060_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[reg__1_56288060_channel__z_58281_55863400_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76891400();

   return behavior;
}

Behavior __76890980;

Behavior make__76890980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76890980 = behavior;
   behavior->owner = (Object)channel__z_58281_55863400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58284_55319020_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58284_55319020_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58284_55319020_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58284_55319020_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58284_55319020_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58284_55319020_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58284_55319020_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76891140();

   return behavior;
}

Scope makechannel__z_58281_55863400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58281_55863400 = scope;
   scope->owner = (Object)layer0_58_84_57677020;
   scope->name = "channel_z:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56065240();
   scope->inners[1] = makereg__1_56288060();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_55863100();
   scope->scopes[1] = makeraddr_58285_55862660();
   scope->scopes[2] = makewaddr_58289_55861720();
   scope->scopes[3] = makerinc_58293_55902080();
   scope->scopes[4] = makewinc_58297_55901480();
   scope->scopes[5] = makerdec_58301_55900960();
   scope->scopes[6] = makewdec_58306_55900400();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76891940();
   scope->behaviors[1] = make__76891740();
   scope->behaviors[2] = make__76891180();
   scope->behaviors[3] = make__76890980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58311_56894160;

SignalI lv0_57138380_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelv0_57138380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_57138380_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58311_56894160;
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

SignalI lv1_57303920_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelv1_57303920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_57303920_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58311_56894160;
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

SignalI rv0_57427200_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makerv0_57427200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_57427200_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58311_56894160;
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

SignalI rv1_57510380_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makerv1_57510380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_57510380_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58311_56894160;
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

SignalI lvok0_57510360_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelvok0_57510360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_57510360_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58311_56894160;
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

SignalI lvok1_57510340_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelvok1_57510340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_57510340_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58311_56894160;
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

SignalI rvok0_57510320_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makervok0_57510320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_57510320_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58311_56894160;
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

SignalI rvok1_57510300_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makervok1_57510300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_57510300_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58311_56894160;
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

SignalI run_57510280_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makerun_57510280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_57510280_add__n_58311_56894160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58311_56894160;
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

Behavior __54271120;

Behavior make__54271120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54271120 = behavior;
   behavior->owner = (Object)add__n_58311_56894160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos = realloc(clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos[clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__57510140();

   return behavior;
}

Scope makeadd__n_58311_56894160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58311_56894160 = scope;
   scope->owner = (Object)layer0_58_84_57677020;
   scope->name = "add_n:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_57138380();
   scope->inners[1] = makelv1_57303920();
   scope->inners[2] = makerv0_57427200();
   scope->inners[3] = makerv1_57510380();
   scope->inners[4] = makelvok0_57510360();
   scope->inners[5] = makelvok1_57510340();
   scope->inners[6] = makervok0_57510320();
   scope->inners[7] = makervok1_57510300();
   scope->inners[8] = makerun_57510280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54271120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54824540;

Behavior make__54824540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54824540 = behavior;
   behavior->owner = (Object)layer0_58_84_57677020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos = realloc(clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos[clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__54828000();

   return behavior;
}

Behavior __55787160;

Behavior make__55787160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55787160 = behavior;
   behavior->owner = (Object)layer0_58_84_57677020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos = realloc(clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos[clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__54824360();

   return behavior;
}

Behavior __56849620;

Behavior make__56849620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56849620 = behavior;
   behavior->owner = (Object)layer0_58_84_57677020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos = realloc(clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos[clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__55787000();

   return behavior;
}

Behavior __76785220;

Behavior make__76785220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76785220 = behavior;
   behavior->owner = (Object)layer0_58_84_57677020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_56845220_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   req_56845220_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   req_56845220_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(req_56845220_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,req_56845220_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
req_56845220_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[req_56845220_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_54270920_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__mac_54270920_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__mac_54270920_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__mac_54270920_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__mac_54270920_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__mac_54270920_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__mac_54270920_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76785460();

   return behavior;
}

Behavior __76801860;

Behavior make__76801860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76801860 = behavior;
   behavior->owner = (Object)layer0_58_84_57677020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack_54270940_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_55562480_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   value__z0_55562480_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   value__z0_55562480_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(value__z0_55562480_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,value__z0_55562480_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
value__z0_55562480_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[value__z0_55562480_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_55707340_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   value__z1_55707340_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   value__z1_55707340_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(value__z1_55707340_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,value__z1_55707340_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
value__z1_55707340_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[value__z1_55707340_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_55900620_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__a0_55900620_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__a0_55900620_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__a0_55900620_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__a0_55900620_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__a0_55900620_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__a0_55900620_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_55900520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__a1_55900520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__a1_55900520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__a1_55900520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__a1_55900520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__a1_55900520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__a1_55900520_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76785740();

   return behavior;
}

Behavior __76801660;

Behavior make__76801660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76801660 = behavior;
   behavior->owner = (Object)layer0_58_84_57677020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_55917480_counter_58_843_55895240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__mac_55917480_counter_58_843_55895240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__mac_55917480_counter_58_843_55895240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__mac_55917480_counter_58_843_55895240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__mac_55917480_counter_58_843_55895240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__mac_55917480_counter_58_843_55895240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__mac_55917480_counter_58_843_55895240_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_51308720_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   a_51308720_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   a_51308720_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(a_51308720_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,a_51308720_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
a_51308720_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[a_51308720_func0_58_843_50293160_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_51192240_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   a_51192240_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   a_51192240_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(a_51192240_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,a_51192240_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
a_51192240_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[a_51192240_func1_58_841_49915320_layer0_58_84_57677020_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76785680();

   return behavior;
}

Scope makelayer0_58_84_57677020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_57677020 = scope;
   scope->owner = (Object)layer0_58_841_56849280;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_55917260();
   scope->systemIs[1] = makefunc0_51308560();
   scope->systemIs[2] = makefunc1_51213900();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_54270960();
   scope->inners[1] = makeack_54270940();
   scope->inners[2] = makeack__mac_54270920();
   scope->inners[3] = makeack__add_54270900();
   scope->inners[4] = make_58191_54368460();
   scope->inners[5] = make_58189_54368440();
   scope->inners[6] = make_58190_54368360();
   scope->inners[7] = make_58214_54440460();
   scope->inners[8] = make_58215_54685440();
   scope->inners[9] = make_58206_54766880();
   scope->inners[10] = make_58204_54766860();
   scope->inners[11] = make_58205_54766780();
   scope->inners[12] = make_58255_54894460();
   scope->inners[13] = make_58256_54894420();
   scope->inners[14] = make_58253_54894400();
   scope->inners[15] = make_58254_54894300();
   scope->inners[16] = make_58283_55196580();
   scope->inners[17] = make_58284_55319020();
   scope->inners[18] = make_58270_55473280();
   scope->inners[19] = make_58271_55473260();
   scope->inners[20] = make_58268_55473240();
   scope->inners[21] = make_58269_55473160();
   scope->inners[22] = makevalue__z0_55562480();
   scope->inners[23] = makevalue__z1_55707340();
   scope->inners[24] = makevalue__a0_55780520();
   scope->inners[25] = makevalue__a1_55900700();
   scope->inners[26] = makeflag__z0_55900680();
   scope->inners[27] = makeflag__z1_55900660();
   scope->inners[28] = makeack__a0_55900620();
   scope->inners[29] = makeack__a1_55900520();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58182_57676720();
   scope->scopes[1] = makechannel__w1_58197_51725840();
   scope->scopes[2] = makechannel__accum_58212_54821100();
   scope->scopes[3] = makemac__n1_58244_55712280();
   scope->scopes[4] = makechannel__b0_58251_52006500();
   scope->scopes[5] = makechannel__b1_58266_54827040();
   scope->scopes[6] = makechannel__z_58281_55863400();
   scope->scopes[7] = makeadd__n_58311_56894160();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54824540();
   scope->behaviors[1] = make__55787160();
   scope->behaviors[2] = make__56849620();
   scope->behaviors[3] = make__76785220();
   scope->behaviors[4] = make__76801860();
   scope->behaviors[5] = make__76801660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_841_56849280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_841_56849280 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T1";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_56845260();
   systemT->inputs[1] = makerst_56845240();
   systemT->inputs[2] = makereq_56845220();
   systemT->inputs[3] = make_58114_57134380();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_57134280();
   systemT->outputs[1] = make_58112_57134260();
   systemT->outputs[2] = make_58113_57134160();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58154_57419580();
   systemT->inouts[1] = make_58155_57554060();

   systemT->scope = makelayer0_58_84_57677020();

   return systemT;
}