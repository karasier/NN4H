#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_58179940;

SignalI clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeclk_58202640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_840_58179940;
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

SignalI rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makerst_58202620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_840_58179940;
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

SignalI fill_58202600_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makefill_58202600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_58202600_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_840_58179940;
   signalI->name = "fill";
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

SignalI req_58202580_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makereq_58202580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_58202580_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_840_58179940;
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

SignalI _5815_58265320_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_5815_58265320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_58265320_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_840_58179940;
   signalI->name = ":15";
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

SignalI ack__layer_58265280_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack__layer_58265280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_58265280_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_840_58179940;
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

SignalI _5813_58265260_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_5813_58265260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_58265260_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_840_58179940;
   signalI->name = ":13";
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

SignalI _5814_58265180_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_5814_58265180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_58265180_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_840_58179940;
   signalI->name = ":14";
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

SignalI _5855_58442620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_5855_58442620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5855_58442620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_840_58179940;
   signalI->name = ":55";
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

SignalI _5856_58603660_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_5856_58603660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5856_58603660_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_840_58179940;
   signalI->name = ":56";
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

Block __52594460;

Block __52593820;

void code__52593820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59993080(),ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59993000(),ack__mac_49461660_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59992940(),ack__add_49461640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__52593820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52593820 = block;
   block->owner = (Object)__52594460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52593820;

   return block;
};

void code__52594460() {
   {
      Value cond = rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52593820();
   }
      }
   }
}

Block make__52594460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52594460 = block;
   block->owner = (Object)__52615160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52594460;

   return block;
};

Block __52614640;

Block __52611680;

Block __52611140;

void code__52611140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58184_51263260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,value__z0_51462740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59992700(),flag__z0_52131800_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__52611140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52611140 = block;
   block->owner = (Object)__52611680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52611140;

   return block;
};

Block __49162520;

void code__49162520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58185_51366740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,value__z1_51638180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59992520(),flag__z1_52131780_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49162520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49162520 = block;
   block->owner = (Object)__52611680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49162520;

   return block;
};

void code__52611680() {
 code__52611140();
 code__49162520();
}

Block make__52611680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52611680 = block;
   block->owner = (Object)__52614640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52611680;

   return block;
};

Block __52614020;

void code__52614020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59992440(),flag__z0_52131800_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59992380(),flag__z1_52131780_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__52614020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52614020 = block;
   block->owner = (Object)__52614640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52614020;

   return block;
};

void code__52614640() {
   {
      Value cond = ack__add_49461640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52611680();
   }
   else {
  code__52614020();
   }
      }
   }
}

Block make__52614640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52614640 = block;
   block->owner = (Object)__57118820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52614640;

   return block;
};

Block __57118700;

Block __57118480;

void code__57118480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59992180(),ack__a0_52131760_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59992080(),ack__a1_52131720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57118480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57118480 = block;
   block->owner = (Object)__57118700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57118480;

   return block;
};

Block __57117780;

Block __57117620;

void code__57117620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_51907140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_5855_58442620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59991800(),ack__a0_52131760_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57117620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57117620 = block;
   block->owner = (Object)__57117780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57117620;

   return block;
};

Block __57300040;

void code__57300040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_52131820_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_5856_58603660_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59991660(),ack__a1_52131720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57300040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57300040 = block;
   block->owner = (Object)__57117780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57300040;

   return block;
};

void code__57117780() {
 code__57117620();
 code__57300040();
}

Block make__57117780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57117780 = block;
   block->owner = (Object)__57118700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57117780;

   return block;
};

void code__57118700() {
   {
      Value cond = rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57118480();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_52131800_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         src1 = flag__z1_52131780_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__57117780();
   }
      }
   }
}

Block make__57118700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57118700 = block;
   block->owner = (Object)__57449420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57118700;

   return block;
};

Block __57449300;

Block __57449140;

Block __57448820;

void code__57448820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59991460(),_58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57448820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57448820 = block;
   block->owner = (Object)__57449140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57448820;

   return block;
};

void code__57449140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59991540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57448820();
   }
      }
   }
}

Block make__57449140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57449140 = block;
   block->owner = (Object)__57449300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57449140;

   return block;
};

Block __58181100;

void code__58181100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59991360(),address__bias_52131580_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59991300(),ack__bias_52131520_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__58181100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58181100 = block;
   block->owner = (Object)__57449300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58181100;

   return block;
};

Block __57448360;

Block __57448140;

Block __57447900;

Block __57447740;

Block __57447420;

Block __57446960;

void code__57446960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_47168280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            idx = value2integer(address__bias_52131580_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58169_52285920_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57446960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57446960 = block;
   block->owner = (Object)__57447420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57446960;

   return block;
};

Block __57839460;

void code__57839460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_47168280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            idx = value2integer(address__bias_52131580_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58170_52365180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57839460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57839460 = block;
   block->owner = (Object)__57447420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57839460;

   return block;
};

void code__57447420() {
{
      Value value = _58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__59990880())) {
    code__57446960();
         }
         else if (value2integer(value) == value2integer(make__59990660())) {
    code__57839460();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59990300();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57447420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57447420 = block;
   block->owner = (Object)__57447740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57447420;

   return block;
};

void code__57447740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59991080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57447420();
   }
      }
   }
}

Block make__57447740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57447740 = block;
   block->owner = (Object)__57447900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57447740;

   return block;
};

void code__57447900() {
 code__57447740();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = address__bias_52131580_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59990080();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_52131580_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__57447900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57447900 = block;
   block->owner = (Object)__57448140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57447900;

   return block;
};

void code__57448140() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_52131520_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57447900();
   }
      }
   }
}

Block make__57448140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57448140 = block;
   block->owner = (Object)__57448360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57448140;

   return block;
};

Block __58181560;

void code__58181560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60030700(),ack__bias_52131520_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__58181560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58181560 = block;
   block->owner = (Object)__57448360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58181560;

   return block;
};

void code__57448360() {
   {
      Value cond = fill__channel_49461620_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57448140();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__bias_52131580_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60030780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58181560();
   }
      }
   }
}

Block make__57448360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57448360 = block;
   block->owner = (Object)__57449300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57448360;

   return block;
};

void code__57449300() {
 code__57449140();
   {
      Value cond = rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58181100();
   }
   else {
  code__57448360();
   }
      }
   }
}

Block make__57449300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57449300 = block;
   block->owner = (Object)__58180260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57449300;

   return block;
};

Block __59580160;

void code__59580160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_58202580_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_49461660_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_49461700_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59580160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59580160 = block;
   block->owner = (Object)__59579900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59580160;

   return block;
};

Block __59596520;

void code__59596520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_58202600_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__bias_52131520_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_49461620_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59596520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59596520 = block;
   block->owner = (Object)__59596280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59596520;

   return block;
};

Block __59539520;

void code__59539520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,clk_47197760_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,ack_47197620_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,rst_47197600_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_51462740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,z__value_51463020_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_51638180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,z__value_49427940_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_52131760_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      src1 = ack__a1_52131720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_58265280_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59539520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59539520 = block;
   block->owner = (Object)__59596120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59539520;

   return block;
};

Block __59539460;

void code__59539460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_47197420_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,ack__mac_49461660_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_51671320_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,value__a0_51907140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_50473840_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,value__a1_52131820_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59539460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59539460 = block;
   block->owner = (Object)__59595960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59539460;

   return block;
};

Block __49334880;

void code__49334880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49060360_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            idx = value2integer(abus__r_46766280_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_46766480_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49334880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49334880 = block;
   block->owner = (Object)__50526800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49334880;

   return block;
};

Block __59595060;

void code__59595060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_46766480_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_5892_50407740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59595060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59595060 = block;
   block->owner = (Object)__59594760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59595060;

   return block;
};

Block __59594720;

void code__59594720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5892_50407740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,dbus__r_46766480_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59594720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59594720 = block;
   block->owner = (Object)__59594520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59594720;

   return block;
};

Block __59594180;

void code__59594180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_41981240_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59594180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59594180 = block;
   block->owner = (Object)__59594020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59594180;

   return block;
};

Block __59593980;

void code__59593980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,trig__r_41981240_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59593980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59593980 = block;
   block->owner = (Object)__59593820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59593980;

   return block;
};

Block __59593480;

void code__59593480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_46766280_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59593480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59593480 = block;
   block->owner = (Object)__59593300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59593480;

   return block;
};

Block __59593220;

void code__59593220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,abus__r_46766280_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59593220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59593220 = block;
   block->owner = (Object)__59593020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59593220;

   return block;
};

Block __51452480;

void code__51452480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51241520_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            idx = value2integer(abus__r_50618820_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50618900_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__51452480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51452480 = block;
   block->owner = (Object)__51905580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51452480;

   return block;
};

Block __59591540;

void code__59591540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50618900_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58107_50770300_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59591540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59591540 = block;
   block->owner = (Object)__59591360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59591540;

   return block;
};

Block __59591300;

void code__59591300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58107_50770300_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,dbus__r_50618900_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59591300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59591300 = block;
   block->owner = (Object)__59591120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59591300;

   return block;
};

Block __59590500;

void code__59590500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50525000_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59590500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59590500 = block;
   block->owner = (Object)__59590340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59590500;

   return block;
};

Block __59590300;

void code__59590300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,trig__r_50525000_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59590300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59590300 = block;
   block->owner = (Object)__59590100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59590300;

   return block;
};

Block __59589640;

void code__59589640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50618820_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59589640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59589640 = block;
   block->owner = (Object)__59589480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59589640;

   return block;
};

Block __59589440;

void code__59589440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,abus__r_50618820_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59589440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59589440 = block;
   block->owner = (Object)__59589280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59589440;

   return block;
};

Block __59751660;

void code__59751660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52084900_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58115_50577340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59751660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59751660 = block;
   block->owner = (Object)__59751420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59751660;

   return block;
};

Block __59751380;

void code__59751380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58115_50577340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,reg__0_52084900_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59751380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59751380 = block;
   block->owner = (Object)__59751100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59751380;

   return block;
};

Block __59750800;

void code__59750800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_52244420_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58116_50689940_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59750800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59750800 = block;
   block->owner = (Object)__59750620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59750800;

   return block;
};

Block __59750560;

void code__59750560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58116_50689940_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,reg__1_52244420_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59750560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59750560 = block;
   block->owner = (Object)__59750340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59750560;

   return block;
};

Block __48785100;

Block __48784720;

Block __48784000;

void code__48784000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59965260(),_58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48784000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48784000 = block;
   block->owner = (Object)__48784720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48784000;

   return block;
};

void code__48784720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59908100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48784000();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59965140(),_58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48784720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48784720 = block;
   block->owner = (Object)__48785100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48784720;

   return block;
};

Block __48807860;

Block __48807260;

void code__48807260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59964980(),_5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48807260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48807260 = block;
   block->owner = (Object)__48807860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48807260;

   return block;
};

void code__48807860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59965060();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48807260();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59964920(),_5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48807860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48807860 = block;
   block->owner = (Object)__48785100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48807860;

   return block;
};

Block __48805340;

Block __48805020;

void code__48805020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59964720(),_5814_58265180_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48805020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48805020 = block;
   block->owner = (Object)__48805340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48805020;

   return block;
};

void code__48805340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59964820();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48805020();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59964660(),_5813_58265260_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48805340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48805340 = block;
   block->owner = (Object)__48785100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48805340;

   return block;
};

Block __48803940;

void code__48803940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59964360(),rvok_48785600_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59964300(),lvok0_48785660_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59964240(),wok0_48785400_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59964180(),lvok1_48785620_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59964120(),wok1_48785300_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48803940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48803940 = block;
   block->owner = (Object)__48785100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48803940;

   return block;
};

Block __49007000;

Block __49006480;

Block __49006280;

Block __49005960;

Block __49004880;

Block __49004660;

void code__49004660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5815_58265320_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,rv_48785680_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59963460(),rvok_48785600_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49004660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49004660 = block;
   block->owner = (Object)__49004880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49004660;

   return block;
};

void code__49004880() {
 code__49004660();
}

Block make__49004880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49004880 = block;
   block->owner = (Object)__49005960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49004880;

   return block;
};

Block __49005800;

void code__49005800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _5814_58265180_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59963300();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_58265180_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59963160(),_5813_58265260_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49005800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49005800 = block;
   block->owner = (Object)__49005960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49005800;

   return block;
};

void code__49005960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_58265260_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59963620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49004880();
   }
   else {
  code__49005800();
   }
      }
   }
}

Block make__49005960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49005960 = block;
   block->owner = (Object)__49006280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49005960;

   return block;
};

void code__49006280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59963780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49005960();
   }
      }
   }
}

Block make__49006280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49006280 = block;
   block->owner = (Object)__49006480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49006280;

   return block;
};

void code__49006480() {
 code__49006280();
}

Block make__49006480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49006480 = block;
   block->owner = (Object)__49007000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49006480;

   return block;
};

Block __49299920;

Block __49323940;

Block __49323460;

Block __49323100;

void code__49323100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5892_50407740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,lv0_52909940_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59962640(),lvok0_48785660_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49323100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49323100 = block;
   block->owner = (Object)__49323460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49323100;

   return block;
};

void code__49323460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59962800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49323100();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59962520();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59962380(),_5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49323460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49323460 = block;
   block->owner = (Object)__49323940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49323460;

   return block;
};

void code__49323940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59962900();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49323460();
   }
      }
   }
}

Block make__49323940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49323940 = block;
   block->owner = (Object)__49299920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49323940;

   return block;
};

void code__49299920() {
 code__49323940();
}

Block make__49299920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49299920 = block;
   block->owner = (Object)__49007000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49299920;

   return block;
};

Block __50410440;

Block __50409960;

Block __50409800;

void code__50409800() {
}

Block make__50409800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50409800 = block;
   block->owner = (Object)__50409960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50409800;

   return block;
};

Block __50998180;

void code__50998180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_46798340_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58115_50577340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59961420(),wok0_48785400_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__50998180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50998180 = block;
   block->owner = (Object)__50409960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50998180;

   return block;
};

void code__50409960() {
 code__50409800();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_46798340_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
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
                              src0 = lv0_52909940_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48785680_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59961640();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_46798340_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
 code__50998180();
}

Block make__50409960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50409960 = block;
   block->owner = (Object)__50410440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50409960;

   return block;
};

void code__50410440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59962080(),ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59962020(),run_48785280_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
 code__50409960();
}

Block make__50410440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50410440 = block;
   block->owner = (Object)__49007000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50410440;

   return block;
};

Block __51280100;

void code__51280100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59961260(),wok0_48785400_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59961200(),wok1_48785300_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59961120(),lvok0_48785660_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59961020(),lvok1_48785620_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59960940(),rvok_48785600_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__51280100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51280100 = block;
   block->owner = (Object)__49007000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51280100;

   return block;
};

Block __51278880;

Block __51278680;

Block __51278300;

Block __51277980;

void code__51277980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58107_50770300_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,lv1_42018480_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59960260(),lvok1_48785620_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__51277980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51277980 = block;
   block->owner = (Object)__51278300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51277980;

   return block;
};

void code__51278300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59960420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51277980();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59960140();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59960040(),_58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__51278300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51278300 = block;
   block->owner = (Object)__51278680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51278300;

   return block;
};

void code__51278680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59960560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51278300();
   }
      }
   }
}

Block make__51278680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51278680 = block;
   block->owner = (Object)__51278880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51278680;

   return block;
};

void code__51278880() {
 code__51278680();
}

Block make__51278880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51278880 = block;
   block->owner = (Object)__49007000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51278880;

   return block;
};

Block __51566480;

Block __51565880;

Block __51565700;

void code__51565700() {
}

Block make__51565700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51565700 = block;
   block->owner = (Object)__51565880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51565700;

   return block;
};

Block __52326560;

void code__52326560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_47472440_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58116_50689940_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59959040(),wok1_48785300_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__52326560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52326560 = block;
   block->owner = (Object)__51565880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52326560;

   return block;
};

void code__51565880() {
 code__51565700();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_47472440_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
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
                              src0 = lv1_42018480_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48785680_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59959220();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_47472440_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
 code__52326560();
}

Block make__51565880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51565880 = block;
   block->owner = (Object)__51566480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51565880;

   return block;
};

void code__51566480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59959720(),ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59959640(),run_48785280_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
 code__51565880();
}

Block make__51566480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51566480 = block;
   block->owner = (Object)__49007000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51566480;

   return block;
};

Block __52616980;

void code__52616980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59958880(),wok0_48785400_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59958820(),wok1_48785300_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59958740(),lvok0_48785660_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59958680(),lvok1_48785620_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59958580(),rvok_48785600_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__52616980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52616980 = block;
   block->owner = (Object)__49007000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52616980;

   return block;
};

void code__49007000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59963940(),run_48785280_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_48785600_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49006480();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_48785660_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49299920();
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
               src0 = lvok0_48785660_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               src1 = rvok_48785600_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_48785400_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50410440();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_48785400_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         src1 = wok1_48785300_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51280100();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_48785620_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51278880();
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
               src0 = lvok1_48785620_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               src1 = rvok_48785600_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_48785300_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51566480();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_48785400_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         src1 = wok1_48785300_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52616980();
   }
      }
   }
}

Block make__49007000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49007000 = block;
   block->owner = (Object)__48785100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49007000;

   return block;
};

Block __48802760;

void code__48802760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59958480(),av0_46798340_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59958380(),av1_47472440_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48802760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48802760 = block;
   block->owner = (Object)__48785100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48802760;

   return block;
};

void code__48785100() {
 code__48784720();
 code__48807860();
 code__48805340();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59964580(),ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59964480(),run_48785280_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_48785280_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48803940();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_49461700_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         src1 = run_48785280_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49007000();
   }
   else {
  code__48802760();
   }
      }
   }
}

Block make__48785100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48785100 = block;
   block->owner = (Object)__52615240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48785100;

   return block;
};

Block __59747940;

void code__59747940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58154_50898640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59747940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59747940 = block;
   block->owner = (Object)__59747720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59747940;

   return block;
};

Block __59747680;

void code__59747680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58154_50898640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59747680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59747680 = block;
   block->owner = (Object)__59747520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59747680;

   return block;
};

Block __59747220;

void code__59747220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58155_51134080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59747220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59747220 = block;
   block->owner = (Object)__59747060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59747220;

   return block;
};

Block __59747020;

void code__59747020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58155_51134080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59747020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59747020 = block;
   block->owner = (Object)__59746860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59747020;

   return block;
};

Block __59746420;

void code__59746420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58169_52285920_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59746420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59746420 = block;
   block->owner = (Object)__59746200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59746420;

   return block;
};

Block __59746120;

void code__59746120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58169_52285920_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59746120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59746120 = block;
   block->owner = (Object)__59745880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59746120;

   return block;
};

Block __59745500;

void code__59745500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58170_52365180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59745500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59745500 = block;
   block->owner = (Object)__59745340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59745500;

   return block;
};

Block __59745300;

void code__59745300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58170_52365180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59745300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59745300 = block;
   block->owner = (Object)__59745140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59745300;

   return block;
};

Block __59775900;

void code__59775900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_52612460_winc_58168_52612860_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59775900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59775900 = block;
   block->owner = (Object)__59775740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59775900;

   return block;
};

Block __59775700;

void code__59775700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,abus__w_52612460_winc_58168_52612860_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59775700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59775700 = block;
   block->owner = (Object)__59775540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59775700;

   return block;
};

Block __59774140;

void code__59774140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50392640_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58184_51263260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59774140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59774140 = block;
   block->owner = (Object)__59773860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59774140;

   return block;
};

Block __59773820;

void code__59773820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58184_51263260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,reg__0_50392640_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59773820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59773820 = block;
   block->owner = (Object)__59773660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59773820;

   return block;
};

Block __59773360;

void code__59773360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50490100_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,_58185_51366740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59773360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59773360 = block;
   block->owner = (Object)__59773200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59773360;

   return block;
};

Block __59773160;

void code__59773160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58185_51366740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,reg__1_50490100_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__59773160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59773160 = block;
   block->owner = (Object)__59773000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59773160;

   return block;
};

Block __51582320;

Block __51580460;

Block __51580100;

void code__51580100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58115_50577340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,lv0_51143040_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59996740(),lvok0_51582560_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__51580100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51580100 = block;
   block->owner = (Object)__51580460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51580100;

   return block;
};

Block __51922660;

void code__51922660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58154_50898640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,rv0_51420600_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59996580(),rvok0_51582500_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__51922660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51922660 = block;
   block->owner = (Object)__51580460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51922660;

   return block;
};

Block __52282360;

Block __52281840;

void code__52281840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_51143040_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      src1 = rv0_51420600_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58184_51263260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__52281840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52281840 = block;
   block->owner = (Object)__52282360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52281840;

   return block;
};

void code__52282360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59996400(),run_51582460_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59996320(),ack__add_49461640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
 code__52281840();
}

Block make__52282360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52282360 = block;
   block->owner = (Object)__51580460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52282360;

   return block;
};

Block __52910060;

void code__52910060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58116_50689940_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,lv1_51330080_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59995940(),lvok1_51582540_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__52910060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52910060 = block;
   block->owner = (Object)__51580460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52910060;

   return block;
};

Block __47117560;

void code__47117560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58155_51134080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value,rv1_51582580_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59995780(),rvok1_51582480_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47117560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47117560 = block;
   block->owner = (Object)__51580460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47117560;

   return block;
};

Block __48872920;

Block __48872020;

void code__48872020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_51330080_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      src1 = rv1_51582580_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58185_51366740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__48872020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48872020 = block;
   block->owner = (Object)__48872920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48872020;

   return block;
};

void code__48872920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59995560(),run_51582460_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59995500(),ack__add_49461640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
 code__48872020();
}

Block make__48872920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48872920 = block;
   block->owner = (Object)__51580460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48872920;

   return block;
};

void code__51580460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59996920(),run_51582460_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
 code__51580100();
 code__51922660();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_51582560_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         src1 = rvok0_51582500_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52282360();
   }
      }
   }
 code__52910060();
 code__47117560();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_51582540_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         src1 = rvok1_51582480_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48872920();
   }
      }
   }
}

Block make__51580460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51580460 = block;
   block->owner = (Object)__51582320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51580460;

   return block;
};

Block __51581600;

void code__51581600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59995240(),lvok0_51582560_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59995160(),rvok0_51582500_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59995100(),lvok1_51582540_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59995020(),rvok1_51582480_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__51581600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51581600 = block;
   block->owner = (Object)__51582320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51581600;

   return block;
};

void code__51582320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59997220(),ack__add_49461640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59997120(),run_51582460_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_49461660_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         src1 = run_51582460_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51580460();
   }
   else {
  code__51581600();
   }
      }
   }
}

Block make__51582320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51582320 = block;
   block->owner = (Object)__49462000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51582320;

   return block;
};

Value make__59994780() {
   static unsigned long long data[] = { 4294967289ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59994760() {
   static unsigned long long data[] = { 19ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59913320() {
   static unsigned long long data[] = { 21ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59913300() {
   static unsigned long long data[] = { 4294967273ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59910820() {
   static unsigned long long data[] = { 30ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59910800() {
   static unsigned long long data[] = { 4294967261ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59908100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59965260() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59965140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59965060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59964980() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59964920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59964820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59964720() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59964660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59964580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59964480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59964360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59964300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59964240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59964180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59964120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59963940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59963780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59963620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59963460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59963300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59963160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59962900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59962800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59962640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59962520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59962380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59962080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59962020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59961640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59961420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59961260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59961200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59961120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59961020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59960940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59960560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59960420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59960260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59960140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59960040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59959720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59959640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59959220() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59959040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59958880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59958820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59958740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59958680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59958580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59958480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59958380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59997220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59997120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59996920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59996740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59996580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59996400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59996320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59995940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59995780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59995560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59995500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59995240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59995160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59995100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59995020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59993080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59993000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59992940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59992700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59992520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59992440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59992380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59992180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59992080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59991800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59991660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59991540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59991460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59991360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59991300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59991080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59990880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59990660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59990300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59990080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60030780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60030700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_41936620;

SignalI req__mac_49461700_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makereq__mac_49461700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_49461700_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack_49461680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI ack__mac_49461660_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack__mac_49461660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_49461660_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI ack__add_49461640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack__add_49461640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_49461640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI fill__channel_49461620_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makefill__channel_49461620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_49461620_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = "fill_channel";
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

SignalI _5892_50407740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_5892_50407740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5892_50407740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = ":92";
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

SignalI _5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_5890_50407720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = ":90";
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

SignalI _5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_5891_50407640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = ":91";
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

SignalI _58115_50577340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58115_50577340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58115_50577340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = ":115";
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

SignalI _58116_50689940_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58116_50689940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58116_50689940_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = ":116";
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

SignalI _58107_50770300_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58107_50770300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58107_50770300_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = ":107";
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

SignalI _58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58105_50770280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = ":105";
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

SignalI _58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58106_50770180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = ":106";
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

SignalI _58154_50898640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58154_50898640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58154_50898640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI _58155_51134080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58155_51134080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58155_51134080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI _58184_51263260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58184_51263260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58184_51263260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = ":184";
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

SignalI _58185_51366740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58185_51366740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58185_51366740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = ":185";
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

SignalI value__z0_51462740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makevalue__z0_51462740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_51462740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI value__z1_51638180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makevalue__z1_51638180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_51638180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI value__a0_51907140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makevalue__a0_51907140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_51907140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI value__a1_52131820_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makevalue__a1_52131820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_52131820_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI flag__z0_52131800_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeflag__z0_52131800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_52131800_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI flag__z1_52131780_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeflag__z1_52131780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_52131780_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI ack__a0_52131760_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack__a0_52131760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_52131760_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI ack__a1_52131720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack__a1_52131720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_52131720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
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

SignalI address__bias_52131580_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeaddress__bias_52131580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_52131580_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = "address_bias";
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

SignalI ack__bias_52131520_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack__bias_52131520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_52131520_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = "ack_bias";
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

SignalI _58169_52285920_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58169_52285920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58169_52285920_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = ":169";
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

SignalI _58170_52365180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58170_52365180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58170_52365180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = ":170";
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

SignalI _58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI make_58171_52365100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = ":171";
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

SignalI b_47168280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeb_47168280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_47168280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)layer0_58_84_41936620;
   signalI->name = "b";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__59994780();
         src1 = make__59994760();
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

SystemI counter_47197000;

SystemI makecounter_47197000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_47197000 = systemI;
   systemI->owner = (Object)layer0_58_84_41936620;
   systemI->name = "counter";
   systemI->system = counter_58_841_47179460;

   return systemI;
};

SystemI func0_51671020;

SystemI makefunc0_51671020() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_51671020 = systemI;
   systemI->owner = (Object)layer0_58_84_41936620;
   systemI->name = "func0";
   systemI->system = func0_58_841_51323140;

   return systemI;
};

SystemI func1_50473640;

SystemI makefunc1_50473640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_50473640 = systemI;
   systemI->owner = (Object)layer0_58_84_41936620;
   systemI->name = "func1";
   systemI->system = func1_58_840_49070260;

   return systemI;
};

Scope channel__w0_5883_41935080;

SignalI trig__r_41981240_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI maketrig__r_41981240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_41981240_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__w0_5883_41935080;
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

SignalI dbus__r_46766480_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makedbus__r_46766480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_46766480_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__w0_5883_41935080;
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

SignalI abus__r_46766280_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_46766280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46766280_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__w0_5883_41935080;
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

SignalI mem_49060360_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makemem_49060360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49060360_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__w0_5883_41935080;
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
         src0 = make__59913320();
         src1 = make__59913300();
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

Scope raddr_5884_41957920;

Scope makeraddr_5884_41957920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_41957920 = scope;
   scope->owner = (Object)channel__w0_5883_41935080;
   scope->name = "raddr:84";
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

Scope rinc_5889_41955200;

Scope makerinc_5889_41955200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5889_41955200 = scope;
   scope->owner = (Object)channel__w0_5883_41935080;
   scope->name = "rinc:89";
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

Scope rdec_5893_41982940;

Scope makerdec_5893_41982940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5893_41982940 = scope;
   scope->owner = (Object)channel__w0_5883_41935080;
   scope->name = "rdec:93";
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

Behavior __50526800;

Behavior make__50526800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50526800 = behavior;
   behavior->owner = (Object)channel__w0_5883_41935080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg += 1;
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg = realloc(clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg*sizeof(Object));
clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg[clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg-1] = (Object)behavior;
   behavior->block = make__49334880();

   return behavior;
}

Behavior __59594760;

Behavior make__59594760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59594760 = behavior;
   behavior->owner = (Object)channel__w0_5883_41935080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_46766480_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   dbus__r_46766480_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   dbus__r_46766480_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(dbus__r_46766480_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,dbus__r_46766480_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
dbus__r_46766480_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[dbus__r_46766480_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59595060();

   return behavior;
}

Behavior __59594520;

Behavior make__59594520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59594520 = behavior;
   behavior->owner = (Object)channel__w0_5883_41935080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5892_50407740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _5892_50407740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _5892_50407740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_5892_50407740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_5892_50407740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_5892_50407740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_5892_50407740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59594720();

   return behavior;
}

Behavior __59594020;

Behavior make__59594020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59594020 = behavior;
   behavior->owner = (Object)channel__w0_5883_41935080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_41981240_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   trig__r_41981240_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   trig__r_41981240_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(trig__r_41981240_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,trig__r_41981240_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
trig__r_41981240_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[trig__r_41981240_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59594180();

   return behavior;
}

Behavior __59593820;

Behavior make__59593820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59593820 = behavior;
   behavior->owner = (Object)channel__w0_5883_41935080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_5890_50407720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59593980();

   return behavior;
}

Behavior __59593300;

Behavior make__59593300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59593300 = behavior;
   behavior->owner = (Object)channel__w0_5883_41935080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_46766280_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   abus__r_46766280_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   abus__r_46766280_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(abus__r_46766280_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,abus__r_46766280_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
abus__r_46766280_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[abus__r_46766280_channel__w0_5883_41935080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59593480();

   return behavior;
}

Behavior __59593020;

Behavior make__59593020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59593020 = behavior;
   behavior->owner = (Object)channel__w0_5883_41935080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_5891_50407640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59593220();

   return behavior;
}

Scope makechannel__w0_5883_41935080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_41935080 = scope;
   scope->owner = (Object)layer0_58_84_41936620;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_41981240();
   scope->inners[1] = makedbus__r_46766480();
   scope->inners[2] = makeabus__r_46766280();
   scope->inners[3] = makemem_49060360();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_41957920();
   scope->scopes[1] = makerinc_5889_41955200();
   scope->scopes[2] = makerdec_5893_41982940();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50526800();
   scope->behaviors[1] = make__59594760();
   scope->behaviors[2] = make__59594520();
   scope->behaviors[3] = make__59594020();
   scope->behaviors[4] = make__59593820();
   scope->behaviors[5] = make__59593300();
   scope->behaviors[6] = make__59593020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_5898_50526680;

SignalI trig__r_50525000_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI maketrig__r_50525000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50525000_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__w1_5898_50526680;
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

SignalI dbus__r_50618900_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makedbus__r_50618900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50618900_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__w1_5898_50526680;
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

SignalI abus__r_50618820_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_50618820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50618820_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__w1_5898_50526680;
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

SignalI mem_51241520_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makemem_51241520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51241520_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__w1_5898_50526680;
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
         src0 = make__59910820();
         src1 = make__59910800();
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

Scope raddr_5899_50526380;

Scope makeraddr_5899_50526380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5899_50526380 = scope;
   scope->owner = (Object)channel__w1_5898_50526680;
   scope->name = "raddr:99";
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

Scope rinc_58104_50525960;

Scope makerinc_58104_50525960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58104_50525960 = scope;
   scope->owner = (Object)channel__w1_5898_50526680;
   scope->name = "rinc:104";
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

Scope rdec_58108_50525520;

Scope makerdec_58108_50525520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58108_50525520 = scope;
   scope->owner = (Object)channel__w1_5898_50526680;
   scope->name = "rdec:108";
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

Behavior __51905580;

Behavior make__51905580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51905580 = behavior;
   behavior->owner = (Object)channel__w1_5898_50526680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg += 1;
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg = realloc(clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg*sizeof(Object));
clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg[clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg-1] = (Object)behavior;
   behavior->block = make__51452480();

   return behavior;
}

Behavior __59591360;

Behavior make__59591360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59591360 = behavior;
   behavior->owner = (Object)channel__w1_5898_50526680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50618900_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   dbus__r_50618900_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   dbus__r_50618900_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(dbus__r_50618900_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,dbus__r_50618900_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
dbus__r_50618900_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[dbus__r_50618900_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59591540();

   return behavior;
}

Behavior __59591120;

Behavior make__59591120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59591120 = behavior;
   behavior->owner = (Object)channel__w1_5898_50526680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58107_50770300_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58107_50770300_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58107_50770300_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58107_50770300_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58107_50770300_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58107_50770300_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58107_50770300_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59591300();

   return behavior;
}

Behavior __59590340;

Behavior make__59590340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59590340 = behavior;
   behavior->owner = (Object)channel__w1_5898_50526680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50525000_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   trig__r_50525000_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   trig__r_50525000_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(trig__r_50525000_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,trig__r_50525000_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
trig__r_50525000_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[trig__r_50525000_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59590500();

   return behavior;
}

Behavior __59590100;

Behavior make__59590100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59590100 = behavior;
   behavior->owner = (Object)channel__w1_5898_50526680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58105_50770280_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59590300();

   return behavior;
}

Behavior __59589480;

Behavior make__59589480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59589480 = behavior;
   behavior->owner = (Object)channel__w1_5898_50526680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50618820_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   abus__r_50618820_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   abus__r_50618820_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(abus__r_50618820_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,abus__r_50618820_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
abus__r_50618820_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[abus__r_50618820_channel__w1_5898_50526680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59589640();

   return behavior;
}

Behavior __59589280;

Behavior make__59589280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59589280 = behavior;
   behavior->owner = (Object)channel__w1_5898_50526680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58106_50770180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59589440();

   return behavior;
}

Scope makechannel__w1_5898_50526680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_5898_50526680 = scope;
   scope->owner = (Object)layer0_58_84_41936620;
   scope->name = "channel_w1:98";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50525000();
   scope->inners[1] = makedbus__r_50618900();
   scope->inners[2] = makeabus__r_50618820();
   scope->inners[3] = makemem_51241520();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5899_50526380();
   scope->scopes[1] = makerinc_58104_50525960();
   scope->scopes[2] = makerdec_58108_50525520();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51905580();
   scope->behaviors[1] = make__59591360();
   scope->behaviors[2] = make__59591120();
   scope->behaviors[3] = make__59590340();
   scope->behaviors[4] = make__59590100();
   scope->behaviors[5] = make__59589480();
   scope->behaviors[6] = make__59589280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58113_51905460;

SignalI reg__0_52084900_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makereg__0_52084900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52084900_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__accum_58113_51905460;
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

SignalI reg__1_52244420_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makereg__1_52244420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_52244420_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__accum_58113_51905460;
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

Scope anum_58114_51905160;

Scope makeanum_58114_51905160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58114_51905160 = scope;
   scope->owner = (Object)channel__accum_58113_51905460;
   scope->name = "anum:114";
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

Scope raddr_58117_51904740;

Scope makeraddr_58117_51904740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58117_51904740 = scope;
   scope->owner = (Object)channel__accum_58113_51905460;
   scope->name = "raddr:117";
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

Scope waddr_58121_51928860;

Scope makewaddr_58121_51928860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58121_51928860 = scope;
   scope->owner = (Object)channel__accum_58113_51905460;
   scope->name = "waddr:121";
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

Scope rinc_58125_51928400;

SignalI abus__r_51927960_rinc_58125_51928400_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_51927960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51927960_rinc_58125_51928400_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)rinc_58125_51928400;
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

Scope makerinc_58125_51928400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58125_51928400 = scope;
   scope->owner = (Object)channel__accum_58113_51905460;
   scope->name = "rinc:125";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51927960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58130_51927840;

SignalI abus__w_51927460_winc_58130_51927840_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__w_51927460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51927460_winc_58130_51927840_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)winc_58130_51927840;
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

Scope makewinc_58130_51927840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58130_51927840 = scope;
   scope->owner = (Object)channel__accum_58113_51905460;
   scope->name = "winc:130";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51927460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58135_51927340;

SignalI abus__r_51926960_rdec_58135_51927340_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_51926960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51926960_rdec_58135_51927340_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)rdec_58135_51927340;
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

Scope makerdec_58135_51927340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58135_51927340 = scope;
   scope->owner = (Object)channel__accum_58113_51905460;
   scope->name = "rdec:135";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51926960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58140_51926840;

SignalI abus__w_51926420_wdec_58140_51926840_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__w_51926420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51926420_wdec_58140_51926840_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)wdec_58140_51926840;
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

Scope makewdec_58140_51926840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58140_51926840 = scope;
   scope->owner = (Object)channel__accum_58113_51905460;
   scope->name = "wdec:140";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51926420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59751420;

Behavior make__59751420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59751420 = behavior;
   behavior->owner = (Object)channel__accum_58113_51905460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52084900_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   reg__0_52084900_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   reg__0_52084900_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(reg__0_52084900_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,reg__0_52084900_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
reg__0_52084900_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[reg__0_52084900_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59751660();

   return behavior;
}

Behavior __59751100;

Behavior make__59751100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59751100 = behavior;
   behavior->owner = (Object)channel__accum_58113_51905460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58115_50577340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58115_50577340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58115_50577340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58115_50577340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58115_50577340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58115_50577340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58115_50577340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59751380();

   return behavior;
}

Behavior __59750620;

Behavior make__59750620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59750620 = behavior;
   behavior->owner = (Object)channel__accum_58113_51905460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_52244420_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   reg__1_52244420_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   reg__1_52244420_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(reg__1_52244420_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,reg__1_52244420_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
reg__1_52244420_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[reg__1_52244420_channel__accum_58113_51905460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59750800();

   return behavior;
}

Behavior __59750340;

Behavior make__59750340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59750340 = behavior;
   behavior->owner = (Object)channel__accum_58113_51905460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58116_50689940_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58116_50689940_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58116_50689940_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58116_50689940_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58116_50689940_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58116_50689940_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58116_50689940_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59750560();

   return behavior;
}

Scope makechannel__accum_58113_51905460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58113_51905460 = scope;
   scope->owner = (Object)layer0_58_84_41936620;
   scope->name = "channel_accum:113";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52084900();
   scope->inners[1] = makereg__1_52244420();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58114_51905160();
   scope->scopes[1] = makeraddr_58117_51904740();
   scope->scopes[2] = makewaddr_58121_51928860();
   scope->scopes[3] = makerinc_58125_51928400();
   scope->scopes[4] = makewinc_58130_51927840();
   scope->scopes[5] = makerdec_58135_51927340();
   scope->scopes[6] = makewdec_58140_51926840();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59751420();
   scope->behaviors[1] = make__59751100();
   scope->behaviors[2] = make__59750620();
   scope->behaviors[3] = make__59750340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58145_52701640;

SignalI lv0_52909940_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makelv0_52909940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52909940_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58145_52701640;
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

SignalI lv1_42018480_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makelv1_42018480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_42018480_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58145_52701640;
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

SignalI av0_46798340_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeav0_46798340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_46798340_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58145_52701640;
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

SignalI av1_47472440_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeav1_47472440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_47472440_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58145_52701640;
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

SignalI rv_48785680_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makerv_48785680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_48785680_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58145_52701640;
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

SignalI lvok0_48785660_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makelvok0_48785660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_48785660_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58145_52701640;
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

SignalI lvok1_48785620_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makelvok1_48785620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_48785620_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58145_52701640;
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

SignalI rvok_48785600_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makervok_48785600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_48785600_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58145_52701640;
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

SignalI wok0_48785400_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makewok0_48785400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_48785400_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58145_52701640;
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

SignalI wok1_48785300_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makewok1_48785300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_48785300_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58145_52701640;
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

SignalI run_48785280_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makerun_48785280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_48785280_mac__n1_58145_52701640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)mac__n1_58145_52701640;
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

Behavior __52615240;

Behavior make__52615240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52615240 = behavior;
   behavior->owner = (Object)mac__n1_58145_52701640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos += 1;
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos = realloc(clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos*sizeof(Object));
clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos[clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos-1] = (Object)behavior;
   behavior->block = make__48785100();

   return behavior;
}

Scope makemac__n1_58145_52701640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58145_52701640 = scope;
   scope->owner = (Object)layer0_58_84_41936620;
   scope->name = "mac_n1:145";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52909940();
   scope->inners[1] = makelv1_42018480();
   scope->inners[2] = makeav0_46798340();
   scope->inners[3] = makeav1_47472440();
   scope->inners[4] = makerv_48785680();
   scope->inners[5] = makelvok0_48785660();
   scope->inners[6] = makelvok1_48785620();
   scope->inners[7] = makervok_48785600();
   scope->inners[8] = makewok0_48785400();
   scope->inners[9] = makewok1_48785300();
   scope->inners[10] = makerun_48785280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52615240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58152_52615120;

SignalI reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makereg__0_52809400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__bias_58152_52615120;
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

SignalI reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makereg__1_52925920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__bias_58152_52615120;
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

Scope anum_58153_52614820;

Scope makeanum_58153_52614820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58153_52614820 = scope;
   scope->owner = (Object)channel__bias_58152_52615120;
   scope->name = "anum:153";
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

Scope raddr_58156_52614340;

Scope makeraddr_58156_52614340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58156_52614340 = scope;
   scope->owner = (Object)channel__bias_58152_52615120;
   scope->name = "raddr:156";
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

Scope waddr_58160_52613860;

Scope makewaddr_58160_52613860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58160_52613860 = scope;
   scope->owner = (Object)channel__bias_58152_52615120;
   scope->name = "waddr:160";
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

Scope rinc_58164_52613360;

SignalI abus__r_52612980_rinc_58164_52613360_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_52612980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52612980_rinc_58164_52613360_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)rinc_58164_52613360;
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

Scope makerinc_58164_52613360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58164_52613360 = scope;
   scope->owner = (Object)channel__bias_58152_52615120;
   scope->name = "rinc:164";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52612980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58168_52612860;

SignalI abus__w_52612460_winc_58168_52612860_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__w_52612460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52612460_winc_58168_52612860_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)winc_58168_52612860;
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

Behavior __59775740;

Behavior make__59775740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59775740 = behavior;
   behavior->owner = (Object)winc_58168_52612860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_52612460_winc_58168_52612860_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   abus__w_52612460_winc_58168_52612860_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   abus__w_52612460_winc_58168_52612860_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(abus__w_52612460_winc_58168_52612860_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,abus__w_52612460_winc_58168_52612860_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
abus__w_52612460_winc_58168_52612860_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[abus__w_52612460_winc_58168_52612860_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59775900();

   return behavior;
}

Behavior __59775540;

Behavior make__59775540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59775540 = behavior;
   behavior->owner = (Object)winc_58168_52612860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58171_52365100_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59775700();

   return behavior;
}

Scope makewinc_58168_52612860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58168_52612860 = scope;
   scope->owner = (Object)channel__bias_58152_52615120;
   scope->name = "winc:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52612460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59775740();
   scope->behaviors[1] = make__59775540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58172_52612000;

SignalI abus__r_52611580_rdec_58172_52612000_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_52611580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52611580_rdec_58172_52612000_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)rdec_58172_52612000;
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

Scope makerdec_58172_52612000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58172_52612000 = scope;
   scope->owner = (Object)channel__bias_58152_52615120;
   scope->name = "rdec:172";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52611580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58177_52611440;

SignalI abus__w_52611020_wdec_58177_52611440_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__w_52611020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52611020_wdec_58177_52611440_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)wdec_58177_52611440;
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

Scope makewdec_58177_52611440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58177_52611440 = scope;
   scope->owner = (Object)channel__bias_58152_52615120;
   scope->name = "wdec:177";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52611020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59747720;

Behavior make__59747720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59747720 = behavior;
   behavior->owner = (Object)channel__bias_58152_52615120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59747940();

   return behavior;
}

Behavior __59747520;

Behavior make__59747520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59747520 = behavior;
   behavior->owner = (Object)channel__bias_58152_52615120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58154_50898640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58154_50898640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58154_50898640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58154_50898640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58154_50898640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58154_50898640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58154_50898640_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59747680();

   return behavior;
}

Behavior __59747060;

Behavior make__59747060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59747060 = behavior;
   behavior->owner = (Object)channel__bias_58152_52615120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59747220();

   return behavior;
}

Behavior __59746860;

Behavior make__59746860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59746860 = behavior;
   behavior->owner = (Object)channel__bias_58152_52615120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58155_51134080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58155_51134080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58155_51134080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58155_51134080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58155_51134080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58155_51134080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58155_51134080_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59747020();

   return behavior;
}

Behavior __59746200;

Behavior make__59746200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59746200 = behavior;
   behavior->owner = (Object)channel__bias_58152_52615120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[reg__0_52809400_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59746420();

   return behavior;
}

Behavior __59745880;

Behavior make__59745880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59745880 = behavior;
   behavior->owner = (Object)channel__bias_58152_52615120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58169_52285920_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58169_52285920_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58169_52285920_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58169_52285920_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58169_52285920_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58169_52285920_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58169_52285920_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59746120();

   return behavior;
}

Behavior __59745340;

Behavior make__59745340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59745340 = behavior;
   behavior->owner = (Object)channel__bias_58152_52615120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[reg__1_52925920_channel__bias_58152_52615120_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59745500();

   return behavior;
}

Behavior __59745140;

Behavior make__59745140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59745140 = behavior;
   behavior->owner = (Object)channel__bias_58152_52615120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58170_52365180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58170_52365180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58170_52365180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58170_52365180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58170_52365180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58170_52365180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58170_52365180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59745300();

   return behavior;
}

Scope makechannel__bias_58152_52615120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58152_52615120 = scope;
   scope->owner = (Object)layer0_58_84_41936620;
   scope->name = "channel_bias:152";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52809400();
   scope->inners[1] = makereg__1_52925920();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58153_52614820();
   scope->scopes[1] = makeraddr_58156_52614340();
   scope->scopes[2] = makewaddr_58160_52613860();
   scope->scopes[3] = makerinc_58164_52613360();
   scope->scopes[4] = makewinc_58168_52612860();
   scope->scopes[5] = makerdec_58172_52612000();
   scope->scopes[6] = makewdec_58177_52611440();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59747720();
   scope->behaviors[1] = make__59747520();
   scope->behaviors[2] = make__59747060();
   scope->behaviors[3] = make__59746860();
   scope->behaviors[4] = make__59746200();
   scope->behaviors[5] = make__59745880();
   scope->behaviors[6] = make__59745340();
   scope->behaviors[7] = make__59745140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58182_49407340;

SignalI reg__0_50392640_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makereg__0_50392640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50392640_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__z_58182_49407340;
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

SignalI reg__1_50490100_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makereg__1_50490100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50490100_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)channel__z_58182_49407340;
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

Scope anum_58183_49430300;

Scope makeanum_58183_49430300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58183_49430300 = scope;
   scope->owner = (Object)channel__z_58182_49407340;
   scope->name = "anum:183";
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

Scope raddr_58186_49429540;

Scope makeraddr_58186_49429540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58186_49429540 = scope;
   scope->owner = (Object)channel__z_58182_49407340;
   scope->name = "raddr:186";
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

Scope waddr_58190_49428920;

Scope makewaddr_58190_49428920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58190_49428920 = scope;
   scope->owner = (Object)channel__z_58182_49407340;
   scope->name = "waddr:190";
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

Scope rinc_58194_49428320;

SignalI abus__r_49427620_rinc_58194_49428320_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_49427620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49427620_rinc_58194_49428320_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)rinc_58194_49428320;
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

Scope makerinc_58194_49428320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58194_49428320 = scope;
   scope->owner = (Object)channel__z_58182_49407340;
   scope->name = "rinc:194";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49427620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58198_49427400;

SignalI abus__w_49426320_winc_58198_49427400_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__w_49426320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49426320_winc_58198_49427400_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)winc_58198_49427400;
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

Scope makewinc_58198_49427400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58198_49427400 = scope;
   scope->owner = (Object)channel__z_58182_49407340;
   scope->name = "winc:198";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49426320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58202_49426200;

SignalI abus__r_49425740_rdec_58202_49426200_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__r_49425740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49425740_rdec_58202_49426200_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)rdec_58202_49426200;
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

Scope makerdec_58202_49426200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58202_49426200 = scope;
   scope->owner = (Object)channel__z_58182_49407340;
   scope->name = "rdec:202";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49425740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58207_49425480;

SignalI abus__w_49424940_wdec_58207_49425480_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeabus__w_49424940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49424940_wdec_58207_49425480_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)wdec_58207_49425480;
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

Scope makewdec_58207_49425480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58207_49425480 = scope;
   scope->owner = (Object)channel__z_58182_49407340;
   scope->name = "wdec:207";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49424940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59773860;

Behavior make__59773860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59773860 = behavior;
   behavior->owner = (Object)channel__z_58182_49407340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50392640_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   reg__0_50392640_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   reg__0_50392640_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(reg__0_50392640_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,reg__0_50392640_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
reg__0_50392640_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[reg__0_50392640_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59774140();

   return behavior;
}

Behavior __59773660;

Behavior make__59773660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59773660 = behavior;
   behavior->owner = (Object)channel__z_58182_49407340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58184_51263260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58184_51263260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58184_51263260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58184_51263260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58184_51263260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58184_51263260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58184_51263260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59773820();

   return behavior;
}

Behavior __59773200;

Behavior make__59773200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59773200 = behavior;
   behavior->owner = (Object)channel__z_58182_49407340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50490100_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   reg__1_50490100_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   reg__1_50490100_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(reg__1_50490100_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,reg__1_50490100_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
reg__1_50490100_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[reg__1_50490100_channel__z_58182_49407340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59773360();

   return behavior;
}

Behavior __59773000;

Behavior make__59773000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59773000 = behavior;
   behavior->owner = (Object)channel__z_58182_49407340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58185_51366740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   _58185_51366740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   _58185_51366740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(_58185_51366740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,_58185_51366740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
_58185_51366740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[_58185_51366740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59773160();

   return behavior;
}

Scope makechannel__z_58182_49407340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58182_49407340 = scope;
   scope->owner = (Object)layer0_58_84_41936620;
   scope->name = "channel_z:182";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50392640();
   scope->inners[1] = makereg__1_50490100();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58183_49430300();
   scope->scopes[1] = makeraddr_58186_49429540();
   scope->scopes[2] = makewaddr_58190_49428920();
   scope->scopes[3] = makerinc_58194_49428320();
   scope->scopes[4] = makewinc_58198_49427400();
   scope->scopes[5] = makerdec_58202_49426200();
   scope->scopes[6] = makewdec_58207_49425480();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59773860();
   scope->behaviors[1] = make__59773660();
   scope->behaviors[2] = make__59773200();
   scope->behaviors[3] = make__59773000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58212_50995340;

SignalI lv0_51143040_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makelv0_51143040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51143040_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58212_50995340;
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

SignalI lv1_51330080_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makelv1_51330080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_51330080_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58212_50995340;
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

SignalI rv0_51420600_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makerv0_51420600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_51420600_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58212_50995340;
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

SignalI rv1_51582580_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makerv1_51582580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_51582580_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58212_50995340;
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

SignalI lvok0_51582560_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makelvok0_51582560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_51582560_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58212_50995340;
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

SignalI lvok1_51582540_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makelvok1_51582540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_51582540_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58212_50995340;
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

SignalI rvok0_51582500_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makervok0_51582500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_51582500_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58212_50995340;
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

SignalI rvok1_51582480_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makervok1_51582480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_51582480_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58212_50995340;
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

SignalI run_51582460_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makerun_51582460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_51582460_add__n_58212_50995340_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)add__n_58212_50995340;
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

Behavior __49462000;

Behavior make__49462000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49462000 = behavior;
   behavior->owner = (Object)add__n_58212_50995340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos += 1;
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos = realloc(clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos*sizeof(Object));
clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos[clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos-1] = (Object)behavior;
   behavior->block = make__51582320();

   return behavior;
}

Scope makeadd__n_58212_50995340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58212_50995340 = scope;
   scope->owner = (Object)layer0_58_84_41936620;
   scope->name = "add_n:212";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51143040();
   scope->inners[1] = makelv1_51330080();
   scope->inners[2] = makerv0_51420600();
   scope->inners[3] = makerv1_51582580();
   scope->inners[4] = makelvok0_51582560();
   scope->inners[5] = makelvok1_51582540();
   scope->inners[6] = makervok0_51582500();
   scope->inners[7] = makervok1_51582480();
   scope->inners[8] = makerun_51582460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49462000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52615160;

Behavior make__52615160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52615160 = behavior;
   behavior->owner = (Object)layer0_58_84_41936620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos += 1;
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos = realloc(clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos*sizeof(Object));
clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos[clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos-1] = (Object)behavior;
   behavior->block = make__52594460();

   return behavior;
}

Behavior __57118820;

Behavior make__57118820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57118820 = behavior;
   behavior->owner = (Object)layer0_58_84_41936620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos += 1;
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos = realloc(clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos*sizeof(Object));
clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos[clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos-1] = (Object)behavior;
   behavior->block = make__52614640();

   return behavior;
}

Behavior __57449420;

Behavior make__57449420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57449420 = behavior;
   behavior->owner = (Object)layer0_58_84_41936620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos += 1;
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos = realloc(clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos*sizeof(Object));
clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos[clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos-1] = (Object)behavior;
   behavior->block = make__57118700();

   return behavior;
}

Behavior __58180260;

Behavior make__58180260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58180260 = behavior;
   behavior->owner = (Object)layer0_58_84_41936620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos += 1;
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos = realloc(clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos*sizeof(Object));
clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->pos[clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_pos-1] = (Object)behavior;
   behavior->block = make__57449300();

   return behavior;
}

Behavior __59579900;

Behavior make__59579900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59579900 = behavior;
   behavior->owner = (Object)layer0_58_84_41936620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_58202580_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   req_58202580_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   req_58202580_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(req_58202580_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,req_58202580_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
req_58202580_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[req_58202580_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_49461660_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   ack__mac_49461660_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   ack__mac_49461660_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(ack__mac_49461660_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,ack__mac_49461660_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
ack__mac_49461660_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[ack__mac_49461660_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59580160();

   return behavior;
}

Behavior __59596280;

Behavior make__59596280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59596280 = behavior;
   behavior->owner = (Object)layer0_58_84_41936620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_58202600_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   fill_58202600_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   fill_58202600_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(fill_58202600_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,fill_58202600_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
fill_58202600_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[fill_58202600_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__bias_52131520_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   ack__bias_52131520_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   ack__bias_52131520_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(ack__bias_52131520_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,ack__bias_52131520_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
ack__bias_52131520_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[ack__bias_52131520_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59596520();

   return behavior;
}

Behavior __59596120;

Behavior make__59596120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59596120 = behavior;
   behavior->owner = (Object)layer0_58_84_41936620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[clk_58202640_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[ack_49461680_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[rst_58202620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_51462740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   value__z0_51462740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   value__z0_51462740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(value__z0_51462740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,value__z0_51462740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
value__z0_51462740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[value__z0_51462740_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_51638180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   value__z1_51638180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   value__z1_51638180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(value__z1_51638180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,value__z1_51638180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
value__z1_51638180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[value__z1_51638180_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_52131760_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   ack__a0_52131760_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   ack__a0_52131760_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(ack__a0_52131760_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,ack__a0_52131760_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
ack__a0_52131760_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[ack__a0_52131760_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_52131720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   ack__a1_52131720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   ack__a1_52131720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(ack__a1_52131720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,ack__a1_52131720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
ack__a1_52131720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[ack__a1_52131720_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59539520();

   return behavior;
}

Behavior __59595960;

Behavior make__59595960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59595960 = behavior;
   behavior->owner = (Object)layer0_58_84_41936620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_47197420_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   ack__mac_47197420_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   ack__mac_47197420_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(ack__mac_47197420_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,ack__mac_47197420_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
ack__mac_47197420_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[ack__mac_47197420_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_51671320_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   a_51671320_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   a_51671320_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(a_51671320_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,a_51671320_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
a_51671320_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[a_51671320_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_50473840_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   a_50473840_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   a_50473840_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(a_50473840_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,a_50473840_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
a_50473840_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[a_50473840_func1_58_840_49070260_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__59539460();

   return behavior;
}

Scope makelayer0_58_84_41936620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_41936620 = scope;
   scope->owner = (Object)layer0_58_840_58179940;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_47197000();
   scope->systemIs[1] = makefunc0_51671020();
   scope->systemIs[2] = makefunc1_50473640();
   scope->num_inners = 31;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_49461700();
   scope->inners[1] = makeack_49461680();
   scope->inners[2] = makeack__mac_49461660();
   scope->inners[3] = makeack__add_49461640();
   scope->inners[4] = makefill__channel_49461620();
   scope->inners[5] = make_5892_50407740();
   scope->inners[6] = make_5890_50407720();
   scope->inners[7] = make_5891_50407640();
   scope->inners[8] = make_58115_50577340();
   scope->inners[9] = make_58116_50689940();
   scope->inners[10] = make_58107_50770300();
   scope->inners[11] = make_58105_50770280();
   scope->inners[12] = make_58106_50770180();
   scope->inners[13] = make_58154_50898640();
   scope->inners[14] = make_58155_51134080();
   scope->inners[15] = make_58184_51263260();
   scope->inners[16] = make_58185_51366740();
   scope->inners[17] = makevalue__z0_51462740();
   scope->inners[18] = makevalue__z1_51638180();
   scope->inners[19] = makevalue__a0_51907140();
   scope->inners[20] = makevalue__a1_52131820();
   scope->inners[21] = makeflag__z0_52131800();
   scope->inners[22] = makeflag__z1_52131780();
   scope->inners[23] = makeack__a0_52131760();
   scope->inners[24] = makeack__a1_52131720();
   scope->inners[25] = makeaddress__bias_52131580();
   scope->inners[26] = makeack__bias_52131520();
   scope->inners[27] = make_58169_52285920();
   scope->inners[28] = make_58170_52365180();
   scope->inners[29] = make_58171_52365100();
   scope->inners[30] = makeb_47168280();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_41935080();
   scope->scopes[1] = makechannel__w1_5898_50526680();
   scope->scopes[2] = makechannel__accum_58113_51905460();
   scope->scopes[3] = makemac__n1_58145_52701640();
   scope->scopes[4] = makechannel__bias_58152_52615120();
   scope->scopes[5] = makechannel__z_58182_49407340();
   scope->scopes[6] = makeadd__n_58212_50995340();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52615160();
   scope->behaviors[1] = make__57118820();
   scope->behaviors[2] = make__57449420();
   scope->behaviors[3] = make__58180260();
   scope->behaviors[4] = make__59579900();
   scope->behaviors[5] = make__59596280();
   scope->behaviors[6] = make__59596120();
   scope->behaviors[7] = make__59595960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_58179940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_58179940 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58202640();
   systemT->inputs[1] = makerst_58202620();
   systemT->inputs[2] = makefill_58202600();
   systemT->inputs[3] = makereq_58202580();
   systemT->inputs[4] = make_5815_58265320();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_58265280();
   systemT->outputs[1] = make_5813_58265260();
   systemT->outputs[2] = make_5814_58265180();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5855_58442620();
   systemT->inouts[1] = make_5856_58603660();

   systemT->scope = makelayer0_58_84_41936620();

   return systemT;
}