#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_54182940;

SignalI clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeclk_54205040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_840_54182940;
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

SignalI rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerst_54205020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_840_54182940;
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

SignalI req_54205000_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereq_54205000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_54205000_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_840_54182940;
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

SignalI _5859_54336360_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5859_54336360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5859_54336360_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_840_54182940;
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

SignalI ack__layer_54336320_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__layer_54336320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_54336320_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_840_54182940;
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

SignalI _5857_54336300_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5857_54336300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5857_54336300_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_840_54182940;
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

SignalI _5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5858_54336220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_840_54182940;
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

SignalI _5899_54437440_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5899_54437440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_54437440_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_840_54182940;
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

SignalI _58100_54603180_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58100_54603180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_54603180_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_840_54182940;
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

Block __49812980;

Block __49812580;

void code__49812580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54364540(),ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54364480(),ack__mac_44151240_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54364420(),ack__add_44150260_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49812580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49812580 = block;
   block->owner = (Object)__49812980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49812580;

   return block;
};

void code__49812980() {
   {
      Value cond = rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49812580();
   }
      }
   }
}

Block make__49812980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49812980 = block;
   block->owner = (Object)__49810240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49812980;

   return block;
};

Block __49810080;

Block __49808540;

Block __49808180;

void code__49808180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58228_48900320_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,value__z0_49331460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54364240(),flag__z0_49765660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49808180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49808180 = block;
   block->owner = (Object)__49808540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49808180;

   return block;
};

Block __53036900;

void code__53036900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_48774900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,value__z1_49510540_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54364100(),flag__z1_49765620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53036900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53036900 = block;
   block->owner = (Object)__49808540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53036900;

   return block;
};

void code__49808540() {
 code__49808180();
 code__53036900();
}

Block make__49808540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49808540 = block;
   block->owner = (Object)__49810080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49808540;

   return block;
};

Block __49809780;

void code__49809780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54364040(),flag__z0_49765660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54363980(),flag__z1_49765620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49809780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49809780 = block;
   block->owner = (Object)__49810080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49809780;

   return block;
};

void code__49810080() {
   {
      Value cond = ack__add_44150260_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49808540();
   }
   else {
  code__49809780();
   }
      }
   }
}

Block make__49810080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49810080 = block;
   block->owner = (Object)__53502860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49810080;

   return block;
};

Block __53502720;

Block __53502400;

void code__53502400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54363880(),ack__a0_49765600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54363820(),ack__a1_49765580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53502400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53502400 = block;
   block->owner = (Object)__53502720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53502400;

   return block;
};

Block __53558680;

Block __53558320;

void code__53558320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_49605160_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_5899_54437440_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54363540(),ack__a0_49765600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53558320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53558320 = block;
   block->owner = (Object)__53558680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53558320;

   return block;
};

Block __53823180;

void code__53823180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_49765680_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58100_54603180_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54363400(),ack__a1_49765580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53823180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53823180 = block;
   block->owner = (Object)__53558680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53823180;

   return block;
};

void code__53558680() {
 code__53558320();
 code__53823180();
}

Block make__53558680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53558680 = block;
   block->owner = (Object)__53502720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53558680;

   return block;
};

void code__53502720() {
   {
      Value cond = rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53502400();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_49765660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         src1 = flag__z1_49765620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__53558680();
   }
      }
   }
}

Block make__53502720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53502720 = block;
   block->owner = (Object)__54183260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53502720;

   return block;
};

Block __56001320;

void code__56001320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_54205000_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_44151240_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_44153260_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__56001320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56001320 = block;
   block->owner = (Object)__56001080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56001320;

   return block;
};

Block __56001540;

void code__56001540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,clk_49781840_counter_58_841_49759800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,ack_49781820_counter_58_841_49759800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,rst_49781780_counter_58_841_49759800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_49331460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,z__value_53637120_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_49510540_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,z__value_44617720_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_49765600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      src1 = ack__a1_49765580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_54336320_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__56001540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56001540 = block;
   block->owner = (Object)__50218380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56001540;

   return block;
};

Block __56001480;

void code__56001480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_49781740_counter_58_841_49759800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,ack__mac_44151240_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58201_47679760_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58216_49131440_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_53776240_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,value__a0_49605160_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_46519980_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,value__a1_49765680_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__56001480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56001480 = block;
   block->owner = (Object)__50218220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56001480;

   return block;
};

Block __46538340;

void code__46538340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_44317480_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            idx = value2integer(abus__r_49573260_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49573340_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__46538340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46538340 = block;
   block->owner = (Object)__47399140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46538340;

   return block;
};

Block __50217500;

void code__50217500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49573340_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58136_46318840_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__50217500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50217500 = block;
   block->owner = (Object)__50217340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50217500;

   return block;
};

Block __50217300;

void code__50217300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58136_46318840_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,dbus__r_49573340_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__50217300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50217300 = block;
   block->owner = (Object)__50217140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50217300;

   return block;
};

Block __55861080;

void code__55861080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49492360_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55861080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55861080 = block;
   block->owner = (Object)__55860920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55861080;

   return block;
};

Block __55860880;

void code__55860880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,trig__r_49492360_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55860880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55860880 = block;
   block->owner = (Object)__55860720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55860880;

   return block;
};

Block __55860420;

void code__55860420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49573260_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55860420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55860420 = block;
   block->owner = (Object)__55860260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55860420;

   return block;
};

Block __55860220;

void code__55860220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,abus__r_49573260_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55860220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55860220 = block;
   block->owner = (Object)__55860060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55860220;

   return block;
};

Block __49570220;

void code__49570220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49329920_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            idx = value2integer(abus__r_47698460_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47698540_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49570220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49570220 = block;
   block->owner = (Object)__49825320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49570220;

   return block;
};

Block __55858840;

void code__55858840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47698540_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58151_47355820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55858840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55858840 = block;
   block->owner = (Object)__55858680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55858840;

   return block;
};

Block __55858640;

void code__55858640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58151_47355820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,dbus__r_47698540_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55858640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55858640 = block;
   block->owner = (Object)__55858480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55858640;

   return block;
};

Block __55858180;

void code__55858180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_47451380_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55858180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55858180 = block;
   block->owner = (Object)__55858020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55858180;

   return block;
};

Block __55857980;

void code__55857980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,trig__r_47451380_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55857980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55857980 = block;
   block->owner = (Object)__55857820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55857980;

   return block;
};

Block __55857520;

void code__55857520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47698460_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55857520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55857520 = block;
   block->owner = (Object)__55857360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55857520;

   return block;
};

Block __55857320;

void code__55857320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,abus__r_47698460_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55857320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55857320 = block;
   block->owner = (Object)__55857160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55857320;

   return block;
};

Block __55855940;

void code__55855940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_41697240_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58159_46857820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55855940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55855940 = block;
   block->owner = (Object)__55855780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55855940;

   return block;
};

Block __55855740;

void code__55855740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58159_46857820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,reg__0_41697240_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55855740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55855740 = block;
   block->owner = (Object)__55855580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55855740;

   return block;
};

Block __55855280;

void code__55855280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_45533080_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58160_47186860_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55855280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55855280 = block;
   block->owner = (Object)__55855120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55855280;

   return block;
};

Block __55855080;

void code__55855080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58160_47186860_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,reg__1_45533080_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55855080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55855080 = block;
   block->owner = (Object)__55854920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55855080;

   return block;
};

Block __49177740;

Block __49177580;

Block __49177260;

void code__49177260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51149860(),_58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49177260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49177260 = block;
   block->owner = (Object)__49177580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49177260;

   return block;
};

void code__49177580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51149940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49177260();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51149800(),_58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49177580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49177580 = block;
   block->owner = (Object)__49177740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49177580;

   return block;
};

Block __49200820;

Block __49200040;

void code__49200040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51149640(),_58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49200040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49200040 = block;
   block->owner = (Object)__49200820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49200040;

   return block;
};

void code__49200820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51149720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49200040();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51149580(),_58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49200820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49200820 = block;
   block->owner = (Object)__49177740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49200820;

   return block;
};

Block __49199300;

Block __49198640;

void code__49198640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51149420(),_5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49198640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49198640 = block;
   block->owner = (Object)__49199300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49198640;

   return block;
};

void code__49199300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51149500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49198640();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51149360(),_5857_54336300_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49199300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49199300 = block;
   block->owner = (Object)__49177740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49199300;

   return block;
};

Block __49197180;

void code__49197180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51149120(),rvok_49177920_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51149060(),lvok0_49177980_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51149000(),wok0_49177900_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51148940(),lvok1_49177940_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51148880(),wok1_49177880_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49197180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49197180 = block;
   block->owner = (Object)__49177740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49197180;

   return block;
};

Block __49528100;

Block __49527680;

Block __49527320;

Block __49525780;

Block __49542420;

Block __49541920;

void code__49541920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5859_54336360_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,rv_49178000_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51148320(),rvok_49177920_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49541920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49541920 = block;
   block->owner = (Object)__49542420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49541920;

   return block;
};

void code__49542420() {
 code__49541920();
}

Block make__49542420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49542420 = block;
   block->owner = (Object)__49525780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49542420;

   return block;
};

Block __49525600;

void code__49525600() {
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
                  src0 = _5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                  src1 = make__51148220();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51148180();
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
                        src0 = _5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51147940();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__51147880();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51147760(),_5857_54336300_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49525600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49525600 = block;
   block->owner = (Object)__49525780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49525600;

   return block;
};

void code__49525780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5857_54336300_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51148480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49542420();
   }
   else {
  code__49525600();
   }
      }
   }
}

Block make__49525780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49525780 = block;
   block->owner = (Object)__49527320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49525780;

   return block;
};

void code__49527320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51148580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49525780();
   }
      }
   }
}

Block make__49527320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49527320 = block;
   block->owner = (Object)__49527680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49527320;

   return block;
};

void code__49527680() {
 code__49527320();
}

Block make__49527680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49527680 = block;
   block->owner = (Object)__49528100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49527680;

   return block;
};

Block __49709860;

Block __49709700;

Block __49709340;

Block __49748080;

Block __49747900;

void code__49747900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58136_46318840_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,lv0_47682100_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51147360(),lvok0_49177980_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49747900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49747900 = block;
   block->owner = (Object)__49748080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49747900;

   return block;
};

void code__49748080() {
 code__49747900();
}

Block make__49748080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49748080 = block;
   block->owner = (Object)__49709340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49748080;

   return block;
};

Block __49709120;

void code__49709120() {
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
                  src0 = _58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                  src1 = make__51147260();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51147220();
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
                        src0 = _58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51146980();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__51146920();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51146800(),_58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49709120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49709120 = block;
   block->owner = (Object)__49709340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49709120;

   return block;
};

void code__49709340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51147520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49748080();
   }
   else {
  code__49709120();
   }
      }
   }
}

Block make__49709340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49709340 = block;
   block->owner = (Object)__49709700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49709340;

   return block;
};

void code__49709700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51147620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49709340();
   }
      }
   }
}

Block make__49709700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49709700 = block;
   block->owner = (Object)__49709860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49709700;

   return block;
};

void code__49709860() {
 code__49709700();
}

Block make__49709860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49709860 = block;
   block->owner = (Object)__49528100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49709860;

   return block;
};

Block __49940340;

Block __49939060;

Block __49938760;

void code__49938760() {
}

Block make__49938760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49938760 = block;
   block->owner = (Object)__49939060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49938760;

   return block;
};

Block __49117780;

void code__49117780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_48722660_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58159_46857820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51146000(),wok0_49177900_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49117780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49117780 = block;
   block->owner = (Object)__49939060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49117780;

   return block;
};

void code__49939060() {
 code__49938760();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_48722660_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
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
                              src0 = lv0_47682100_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49178000_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51146180();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_48722660_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
 code__49117780();
}

Block make__49939060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49939060 = block;
   block->owner = (Object)__49940340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49939060;

   return block;
};

void code__49940340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51146560(),ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51146500(),run_49177860_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
 code__49939060();
}

Block make__49940340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49940340 = block;
   block->owner = (Object)__49528100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49940340;

   return block;
};

Block __49699920;

void code__49699920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51145840(),wok0_49177900_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51145780(),wok1_49177880_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51145720(),lvok0_49177980_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51145660(),lvok1_49177940_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51145600(),rvok_49177920_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49699920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49699920 = block;
   block->owner = (Object)__49528100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49699920;

   return block;
};

Block __49698480;

Block __49698260;

Block __49697820;

Block __49695480;

Block __49695300;

void code__49695300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58151_47355820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,lv1_48450360_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51145200(),lvok1_49177940_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49695300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49695300 = block;
   block->owner = (Object)__49695480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49695300;

   return block;
};

void code__49695480() {
 code__49695300();
}

Block make__49695480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49695480 = block;
   block->owner = (Object)__49697820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49695480;

   return block;
};

Block __49697660;

void code__49697660() {
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
                  src0 = _58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                  src1 = make__51145100();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51145060();
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
                        src0 = _58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51144820();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__51144760();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51144640(),_58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49697660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49697660 = block;
   block->owner = (Object)__49697820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49697660;

   return block;
};

void code__49697820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51145360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49695480();
   }
   else {
  code__49697660();
   }
      }
   }
}

Block make__49697820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49697820 = block;
   block->owner = (Object)__49698260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49697820;

   return block;
};

void code__49698260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51145460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49697820();
   }
      }
   }
}

Block make__49698260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49698260 = block;
   block->owner = (Object)__49698480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49698260;

   return block;
};

void code__49698480() {
 code__49698260();
}

Block make__49698480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49698480 = block;
   block->owner = (Object)__49528100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49698480;

   return block;
};

Block __46534240;

Block __46533200;

Block __46532740;

void code__46532740() {
}

Block make__46532740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46532740 = block;
   block->owner = (Object)__46533200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46532740;

   return block;
};

Block __49682800;

void code__49682800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_49081660_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58160_47186860_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51143840(),wok1_49177880_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49682800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49682800 = block;
   block->owner = (Object)__46533200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49682800;

   return block;
};

void code__46533200() {
 code__46532740();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_49081660_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
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
                              src0 = lv1_48450360_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49178000_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51144020();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_49081660_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
 code__49682800();
}

Block make__46533200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46533200 = block;
   block->owner = (Object)__46534240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46533200;

   return block;
};

void code__46534240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51144400(),ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51144340(),run_49177860_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
 code__46533200();
}

Block make__46534240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46534240 = block;
   block->owner = (Object)__49528100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46534240;

   return block;
};

Block __44154320;

void code__44154320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51143680(),wok0_49177900_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51143620(),wok1_49177880_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51143560(),lvok0_49177980_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51143500(),lvok1_49177940_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51143440(),rvok_49177920_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__44154320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44154320 = block;
   block->owner = (Object)__49528100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44154320;

   return block;
};

void code__49528100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51148720(),run_49177860_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_49177920_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49527680();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49177980_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49709860();
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
               src0 = lvok0_49177980_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               src1 = rvok_49177920_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_49177900_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49940340();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_49177900_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         src1 = wok1_49177880_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49699920();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49177940_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49698480();
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
               src0 = lvok1_49177940_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               src1 = rvok_49177920_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_49177880_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46534240();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_49177900_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         src1 = wok1_49177880_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__44154320();
   }
      }
   }
}

Block make__49528100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49528100 = block;
   block->owner = (Object)__49177740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49528100;

   return block;
};

Block __49195680;

void code__49195680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51143380(),av0_48722660_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51143320(),av1_49081660_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49195680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49195680 = block;
   block->owner = (Object)__49177740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49195680;

   return block;
};

void code__49177740() {
 code__49177580();
 code__49200820();
 code__49199300();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51149300(),ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51149240(),run_49177860_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_49177860_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49197180();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_44153260_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         src1 = run_49177860_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49528100();
   }
   else {
  code__49195680();
   }
      }
   }
}

Block make__49177740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49177740 = block;
   block->owner = (Object)__44233300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49177740;

   return block;
};

Block __47618840;

void code__47618840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47172320_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            idx = value2integer(abus__r_46320020_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_46320420_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__47618840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47618840 = block;
   block->owner = (Object)__49101240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47618840;

   return block;
};

Block __55853200;

void code__55853200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_46320420_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58200_47679800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55853200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55853200 = block;
   block->owner = (Object)__54460360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55853200;

   return block;
};

Block __54460320;

void code__54460320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58200_47679800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,dbus__r_46320420_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54460320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54460320 = block;
   block->owner = (Object)__54460160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54460320;

   return block;
};

Block __54459860;

void code__54459860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_44279740_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54459860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54459860 = block;
   block->owner = (Object)__54459700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54459860;

   return block;
};

Block __54459660;

void code__54459660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,trig__r_44279740_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54459660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54459660 = block;
   block->owner = (Object)__54459500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54459660;

   return block;
};

Block __54459200;

void code__54459200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_46320020_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58199_47679620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54459200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54459200 = block;
   block->owner = (Object)__54459040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54459200;

   return block;
};

Block __54459000;

void code__54459000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_47679620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,abus__r_46320020_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54459000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54459000 = block;
   block->owner = (Object)__54458840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54459000;

   return block;
};

Block __49796420;

void code__49796420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49576880_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            idx = value2integer(abus__r_49250120_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49226060_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49796420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49796420 = block;
   block->owner = (Object)__53055700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49796420;

   return block;
};

Block __54457620;

void code__54457620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49226060_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58215_49131460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54457620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54457620 = block;
   block->owner = (Object)__54457460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54457620;

   return block;
};

Block __54457420;

void code__54457420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58215_49131460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,dbus__r_49226060_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54457420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54457420 = block;
   block->owner = (Object)__54457260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54457420;

   return block;
};

Block __54456960;

void code__54456960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49098600_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54456960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54456960 = block;
   block->owner = (Object)__54456800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54456960;

   return block;
};

Block __54456760;

void code__54456760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,trig__r_49098600_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54456760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54456760 = block;
   block->owner = (Object)__54456600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54456760;

   return block;
};

Block __54456300;

void code__54456300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49250120_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58214_49131300_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54456300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54456300 = block;
   block->owner = (Object)__54456140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54456300;

   return block;
};

Block __54456100;

void code__54456100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_49131300_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,abus__r_49250120_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54456100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54456100 = block;
   block->owner = (Object)__54455940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54456100;

   return block;
};

Block __54454720;

void code__54454720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53278560_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58228_48900320_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54454720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54454720 = block;
   block->owner = (Object)__54454560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54454720;

   return block;
};

Block __54454520;

void code__54454520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58228_48900320_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,reg__0_53278560_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54454520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54454520 = block;
   block->owner = (Object)__54454360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54454520;

   return block;
};

Block __54454060;

void code__54454060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_53324920_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58229_48774900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54454060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54454060 = block;
   block->owner = (Object)__54453900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54454060;

   return block;
};

Block __54453860;

void code__54453860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_48774900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,reg__1_53324920_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54453860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54453860 = block;
   block->owner = (Object)__54453700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54453860;

   return block;
};

Block __54317500;

Block __54317340;

void code__54317340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54368600(),_58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54317340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54317340 = block;
   block->owner = (Object)__54317500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54317340;

   return block;
};

Block __54317020;

void code__54317020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54368540(),_58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54317020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54317020 = block;
   block->owner = (Object)__54317500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54317020;

   return block;
};

Block __54315440;

Block __54315120;

void code__54315120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58159_46857820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,lv0_53908300_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54368120(),lvok0_54317700_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54315120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54315120 = block;
   block->owner = (Object)__54315440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54315120;

   return block;
};

Block __54489320;

Block __54489000;

Block __54488140;

void code__54488140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58200_47679800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,rv0_54238600_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54367780(),_58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54367720(),rvok0_54317660_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54488140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54488140 = block;
   block->owner = (Object)__54489000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54488140;

   return block;
};

Block __54488840;

void code__54488840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54367660(),_58199_47679620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54367600(),_58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54488840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54488840 = block;
   block->owner = (Object)__54489000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54488840;

   return block;
};

void code__54489000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54367940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54488140();
   }
   else {
  code__54488840();
   }
      }
   }
}

Block make__54489000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54489000 = block;
   block->owner = (Object)__54489320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54489000;

   return block;
};

void code__54489320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58201_47679760_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54368040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54489000();
   }
      }
   }
}

Block make__54489320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54489320 = block;
   block->owner = (Object)__54315440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54489320;

   return block;
};

Block __54760180;

Block __54759700;

void code__54759700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_53908300_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      src1 = rv0_54238600_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58228_48900320_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54759700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54759700 = block;
   block->owner = (Object)__54760180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54759700;

   return block;
};

void code__54760180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54367440(),run_54317620_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54367380(),ack__add_44150260_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
 code__54759700();
}

Block make__54760180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54760180 = block;
   block->owner = (Object)__54315440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54760180;

   return block;
};

Block __55329700;

void code__55329700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58160_47186860_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,lv1_54118520_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54367060(),lvok1_54317680_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55329700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55329700 = block;
   block->owner = (Object)__54315440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55329700;

   return block;
};

Block __55471140;

Block __55470820;

Block __55469960;

void code__55469960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58215_49131460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,rv1_54317720_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54366720(),_58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54366660(),rvok1_54317640_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55469960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55469960 = block;
   block->owner = (Object)__55470820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55469960;

   return block;
};

Block __55470660;

void code__55470660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54366600(),_58214_49131300_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54366540(),_58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55470660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55470660 = block;
   block->owner = (Object)__55470820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55470660;

   return block;
};

void code__55470820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54366880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55469960();
   }
   else {
  code__55470660();
   }
      }
   }
}

Block make__55470820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55470820 = block;
   block->owner = (Object)__55471140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55470820;

   return block;
};

void code__55471140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58216_49131440_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54366980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55470820();
   }
      }
   }
}

Block make__55471140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55471140 = block;
   block->owner = (Object)__54315440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55471140;

   return block;
};

Block __55692860;

Block __55692380;

void code__55692380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_54118520_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      src1 = rv1_54317720_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58229_48774900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55692380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55692380 = block;
   block->owner = (Object)__55692860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55692380;

   return block;
};

void code__55692860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54366380(),run_54317620_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54366320(),ack__add_44150260_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
 code__55692380();
}

Block make__55692860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55692860 = block;
   block->owner = (Object)__54315440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55692860;

   return block;
};

void code__54315440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54368260(),run_54317620_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
 code__54315120();
 code__54489320();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_54317700_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         src1 = rvok0_54317660_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54760180();
   }
      }
   }
 code__55329700();
 code__55471140();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_54317680_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         src1 = rvok1_54317640_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55692860();
   }
      }
   }
}

Block make__54315440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54315440 = block;
   block->owner = (Object)__54317500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54315440;

   return block;
};

Block __54316380;

void code__54316380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54366080(),lvok0_54317700_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54366020(),rvok0_54317660_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54365960(),lvok1_54317680_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54365900(),rvok1_54317640_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54316380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54316380 = block;
   block->owner = (Object)__54317500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54316380;

   return block;
};

void code__54317500() {
 code__54317340();
 code__54317020();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54368480(),ack__add_44150260_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54368420(),run_54317620_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_44151240_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         src1 = run_54317620_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54315440();
   }
   else {
  code__54316380();
   }
      }
   }
}

Block make__54317500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54317500 = block;
   block->owner = (Object)__44130900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54317500;

   return block;
};

Value make__54904520() {
   static unsigned long long data[] = { 4294967267ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54904500() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54903420() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54903400() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51143300() {
   static unsigned long long data[] = { 5ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__54370020() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__51149940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51149860() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51149800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51149720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51149640() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51149580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51149500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51149420() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51149360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51149300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51149240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51149120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51149060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51149000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51148940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51148880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51148720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51148580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51148480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51148320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51148220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51148180() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51147940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51147880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51147760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51147620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51147520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51147360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51147260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51147220() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51146980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51146920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51146800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51146560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51146500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51146180() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51146000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51145840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51145780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51145720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51145660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51145600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51145460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51145360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51145200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51145100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51145060() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51144820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51144760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51144640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51144400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51144340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51144020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51143840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51143680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51143620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51143560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51143500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51143440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51143380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51143320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54368600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54367940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54367780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54367720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54367660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54367600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54367440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54367380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54367060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54366980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54366880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54366720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54366660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54366600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54366540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54366380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54366320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54366080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54366020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54365960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54365900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54364540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54364480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54364420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54364240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54364100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54364040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_49495120;

SignalI req__mac_44153260_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereq__mac_44153260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_44153260_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack_44151280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI ack__mac_44151240_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__mac_44151240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_44151240_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI ack__add_44150260_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__add_44150260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_44150260_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58136_46318840_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58136_46318840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58136_46318840_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58134_46318700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58135_46318620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58159_46857820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58159_46857820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58159_46857820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58160_47186860_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58160_47186860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58160_47186860_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58151_47355820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58151_47355820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58151_47355820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58149_47355800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58150_47355600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58200_47679800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58200_47679800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58200_47679800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58201_47679760_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58201_47679760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58201_47679760_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58198_47679740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58199_47679620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58199_47679620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_47679620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58228_48900320_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58228_48900320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58228_48900320_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58229_48774900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58229_48774900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58229_48774900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58215_49131460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58215_49131460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58215_49131460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58216_49131440_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58216_49131440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58216_49131440_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58213_49131420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI _58214_49131300_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58214_49131300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58214_49131300_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI value__z0_49331460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makevalue__z0_49331460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_49331460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI value__z1_49510540_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makevalue__z1_49510540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_49510540_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI value__a0_49605160_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makevalue__a0_49605160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_49605160_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI value__a1_49765680_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makevalue__a1_49765680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_49765680_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI flag__z0_49765660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeflag__z0_49765660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_49765660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI flag__z1_49765620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeflag__z1_49765620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_49765620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI ack__a0_49765600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__a0_49765600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_49765600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SignalI ack__a1_49765580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__a1_49765580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_49765580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer0_58_84_49495120;
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

SystemI counter_49781580;

SystemI makecounter_49781580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_49781580 = systemI;
   systemI->owner = (Object)layer0_58_84_49495120;
   systemI->name = "counter";
   systemI->system = counter_58_841_49759800;

   return systemI;
};

SystemI func0_53776080;

SystemI makefunc0_53776080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_53776080 = systemI;
   systemI->owner = (Object)layer0_58_84_49495120;
   systemI->name = "func0";
   systemI->system = func0_58_841_53507580;

   return systemI;
};

SystemI func1_46519220;

SystemI makefunc1_46519220() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_46519220 = systemI;
   systemI->owner = (Object)layer0_58_84_49495120;
   systemI->name = "func1";
   systemI->system = func1_58_840_56064100;

   return systemI;
};

Scope channel__w0_58127_49494640;

SignalI trig__r_49492360_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI maketrig__r_49492360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49492360_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__w0_58127_49494640;
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

SignalI dbus__r_49573340_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makedbus__r_49573340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49573340_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__w0_58127_49494640;
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

SignalI abus__r_49573260_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_49573260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49573260_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__w0_58127_49494640;
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

SignalI mem_44317480_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makemem_44317480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_44317480_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__w0_58127_49494640;
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
         src0 = make__54904520();
         src1 = make__54904500();
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

Scope raddr_58128_49494060;

Scope makeraddr_58128_49494060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58128_49494060 = scope;
   scope->owner = (Object)channel__w0_58127_49494640;
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

Scope rinc_58133_49493220;

Scope makerinc_58133_49493220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58133_49493220 = scope;
   scope->owner = (Object)channel__w0_58127_49494640;
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

Scope rdec_58137_49492800;

Scope makerdec_58137_49492800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58137_49492800 = scope;
   scope->owner = (Object)channel__w0_58127_49494640;
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

Behavior __47399140;

Behavior make__47399140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47399140 = behavior;
   behavior->owner = (Object)channel__w0_58127_49494640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg += 1;
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg = realloc(clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg*sizeof(Object));
clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg[clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg-1] = (Object)behavior;
   behavior->block = make__46538340();

   return behavior;
}

Behavior __50217340;

Behavior make__50217340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50217340 = behavior;
   behavior->owner = (Object)channel__w0_58127_49494640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49573340_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   dbus__r_49573340_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   dbus__r_49573340_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(dbus__r_49573340_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,dbus__r_49573340_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
dbus__r_49573340_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[dbus__r_49573340_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__50217500();

   return behavior;
}

Behavior __50217140;

Behavior make__50217140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50217140 = behavior;
   behavior->owner = (Object)channel__w0_58127_49494640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58136_46318840_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58136_46318840_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58136_46318840_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58136_46318840_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58136_46318840_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58136_46318840_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58136_46318840_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__50217300();

   return behavior;
}

Behavior __55860920;

Behavior make__55860920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55860920 = behavior;
   behavior->owner = (Object)channel__w0_58127_49494640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49492360_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   trig__r_49492360_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   trig__r_49492360_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(trig__r_49492360_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,trig__r_49492360_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
trig__r_49492360_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[trig__r_49492360_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55861080();

   return behavior;
}

Behavior __55860720;

Behavior make__55860720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55860720 = behavior;
   behavior->owner = (Object)channel__w0_58127_49494640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58134_46318700_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55860880();

   return behavior;
}

Behavior __55860260;

Behavior make__55860260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55860260 = behavior;
   behavior->owner = (Object)channel__w0_58127_49494640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49573260_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   abus__r_49573260_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   abus__r_49573260_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(abus__r_49573260_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,abus__r_49573260_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
abus__r_49573260_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[abus__r_49573260_channel__w0_58127_49494640_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55860420();

   return behavior;
}

Behavior __55860060;

Behavior make__55860060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55860060 = behavior;
   behavior->owner = (Object)channel__w0_58127_49494640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58135_46318620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55860220();

   return behavior;
}

Scope makechannel__w0_58127_49494640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58127_49494640 = scope;
   scope->owner = (Object)layer0_58_84_49495120;
   scope->name = "channel_w0:127";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49492360();
   scope->inners[1] = makedbus__r_49573340();
   scope->inners[2] = makeabus__r_49573260();
   scope->inners[3] = makemem_44317480();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58128_49494060();
   scope->scopes[1] = makerinc_58133_49493220();
   scope->scopes[2] = makerdec_58137_49492800();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47399140();
   scope->behaviors[1] = make__50217340();
   scope->behaviors[2] = make__50217140();
   scope->behaviors[3] = make__55860920();
   scope->behaviors[4] = make__55860720();
   scope->behaviors[5] = make__55860260();
   scope->behaviors[6] = make__55860060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58142_47398960;

SignalI trig__r_47451380_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI maketrig__r_47451380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47451380_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__w1_58142_47398960;
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

SignalI dbus__r_47698540_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makedbus__r_47698540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47698540_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__w1_58142_47398960;
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

SignalI abus__r_47698460_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_47698460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47698460_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__w1_58142_47398960;
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

SignalI mem_49329920_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makemem_49329920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49329920_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__w1_58142_47398960;
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
         src0 = make__54903420();
         src1 = make__54903400();
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

Scope raddr_58143_47422800;

Scope makeraddr_58143_47422800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58143_47422800 = scope;
   scope->owner = (Object)channel__w1_58142_47398960;
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

Scope rinc_58148_47422060;

Scope makerinc_58148_47422060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58148_47422060 = scope;
   scope->owner = (Object)channel__w1_58142_47398960;
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

Scope rdec_58152_47432720;

Scope makerdec_58152_47432720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58152_47432720 = scope;
   scope->owner = (Object)channel__w1_58142_47398960;
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

Behavior __49825320;

Behavior make__49825320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49825320 = behavior;
   behavior->owner = (Object)channel__w1_58142_47398960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg += 1;
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg = realloc(clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg*sizeof(Object));
clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg[clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg-1] = (Object)behavior;
   behavior->block = make__49570220();

   return behavior;
}

Behavior __55858680;

Behavior make__55858680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55858680 = behavior;
   behavior->owner = (Object)channel__w1_58142_47398960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47698540_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   dbus__r_47698540_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   dbus__r_47698540_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(dbus__r_47698540_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,dbus__r_47698540_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
dbus__r_47698540_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[dbus__r_47698540_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55858840();

   return behavior;
}

Behavior __55858480;

Behavior make__55858480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55858480 = behavior;
   behavior->owner = (Object)channel__w1_58142_47398960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58151_47355820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58151_47355820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58151_47355820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58151_47355820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58151_47355820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58151_47355820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58151_47355820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55858640();

   return behavior;
}

Behavior __55858020;

Behavior make__55858020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55858020 = behavior;
   behavior->owner = (Object)channel__w1_58142_47398960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_47451380_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   trig__r_47451380_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   trig__r_47451380_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(trig__r_47451380_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,trig__r_47451380_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
trig__r_47451380_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[trig__r_47451380_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55858180();

   return behavior;
}

Behavior __55857820;

Behavior make__55857820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55857820 = behavior;
   behavior->owner = (Object)channel__w1_58142_47398960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58149_47355800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55857980();

   return behavior;
}

Behavior __55857360;

Behavior make__55857360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55857360 = behavior;
   behavior->owner = (Object)channel__w1_58142_47398960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47698460_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   abus__r_47698460_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   abus__r_47698460_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(abus__r_47698460_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,abus__r_47698460_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
abus__r_47698460_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[abus__r_47698460_channel__w1_58142_47398960_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55857520();

   return behavior;
}

Behavior __55857160;

Behavior make__55857160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55857160 = behavior;
   behavior->owner = (Object)channel__w1_58142_47398960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58150_47355600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55857320();

   return behavior;
}

Scope makechannel__w1_58142_47398960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58142_47398960 = scope;
   scope->owner = (Object)layer0_58_84_49495120;
   scope->name = "channel_w1:142";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47451380();
   scope->inners[1] = makedbus__r_47698540();
   scope->inners[2] = makeabus__r_47698460();
   scope->inners[3] = makemem_49329920();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58143_47422800();
   scope->scopes[1] = makerinc_58148_47422060();
   scope->scopes[2] = makerdec_58152_47432720();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49825320();
   scope->behaviors[1] = make__55858680();
   scope->behaviors[2] = make__55858480();
   scope->behaviors[3] = make__55858020();
   scope->behaviors[4] = make__55857820();
   scope->behaviors[5] = make__55857360();
   scope->behaviors[6] = make__55857160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58157_49825200;

SignalI reg__0_41697240_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereg__0_41697240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_41697240_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__accum_58157_49825200;
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

SignalI reg__1_45533080_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereg__1_45533080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_45533080_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__accum_58157_49825200;
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

Scope anum_58158_49824860;

Scope makeanum_58158_49824860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58158_49824860 = scope;
   scope->owner = (Object)channel__accum_58157_49825200;
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

Scope raddr_58161_49824180;

Scope makeraddr_58161_49824180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58161_49824180 = scope;
   scope->owner = (Object)channel__accum_58157_49825200;
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

Scope waddr_58165_49823760;

Scope makewaddr_58165_49823760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58165_49823760 = scope;
   scope->owner = (Object)channel__accum_58157_49825200;
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

Scope rinc_58169_49847880;

SignalI abus__r_49847360_rinc_58169_49847880_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_49847360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49847360_rinc_58169_49847880_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rinc_58169_49847880;
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

Scope makerinc_58169_49847880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58169_49847880 = scope;
   scope->owner = (Object)channel__accum_58157_49825200;
   scope->name = "rinc:169";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49847360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58174_49847240;

SignalI abus__w_49844240_winc_58174_49847240_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_49844240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49844240_winc_58174_49847240_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)winc_58174_49847240;
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

Scope makewinc_58174_49847240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58174_49847240 = scope;
   scope->owner = (Object)channel__accum_58157_49825200;
   scope->name = "winc:174";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49844240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58179_49843060;

SignalI abus__r_49864520_rdec_58179_49843060_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_49864520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49864520_rdec_58179_49843060_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rdec_58179_49843060;
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

Scope makerdec_58179_49843060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58179_49843060 = scope;
   scope->owner = (Object)channel__accum_58157_49825200;
   scope->name = "rdec:179";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49864520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58184_49864400;

SignalI abus__w_49863940_wdec_58184_49864400_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_49863940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49863940_wdec_58184_49864400_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)wdec_58184_49864400;
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

Scope makewdec_58184_49864400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58184_49864400 = scope;
   scope->owner = (Object)channel__accum_58157_49825200;
   scope->name = "wdec:184";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49863940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __55855780;

Behavior make__55855780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55855780 = behavior;
   behavior->owner = (Object)channel__accum_58157_49825200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_41697240_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   reg__0_41697240_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   reg__0_41697240_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(reg__0_41697240_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,reg__0_41697240_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
reg__0_41697240_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[reg__0_41697240_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55855940();

   return behavior;
}

Behavior __55855580;

Behavior make__55855580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55855580 = behavior;
   behavior->owner = (Object)channel__accum_58157_49825200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58159_46857820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58159_46857820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58159_46857820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58159_46857820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58159_46857820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58159_46857820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58159_46857820_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55855740();

   return behavior;
}

Behavior __55855120;

Behavior make__55855120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55855120 = behavior;
   behavior->owner = (Object)channel__accum_58157_49825200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_45533080_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   reg__1_45533080_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   reg__1_45533080_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(reg__1_45533080_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,reg__1_45533080_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
reg__1_45533080_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[reg__1_45533080_channel__accum_58157_49825200_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55855280();

   return behavior;
}

Behavior __55854920;

Behavior make__55854920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55854920 = behavior;
   behavior->owner = (Object)channel__accum_58157_49825200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58160_47186860_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58160_47186860_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58160_47186860_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58160_47186860_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58160_47186860_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58160_47186860_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58160_47186860_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55855080();

   return behavior;
}

Scope makechannel__accum_58157_49825200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58157_49825200 = scope;
   scope->owner = (Object)layer0_58_84_49495120;
   scope->name = "channel_accum:157";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_41697240();
   scope->inners[1] = makereg__1_45533080();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58158_49824860();
   scope->scopes[1] = makeraddr_58161_49824180();
   scope->scopes[2] = makewaddr_58165_49823760();
   scope->scopes[3] = makerinc_58169_49847880();
   scope->scopes[4] = makewinc_58174_49847240();
   scope->scopes[5] = makerdec_58179_49843060();
   scope->scopes[6] = makewdec_58184_49864400();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55855780();
   scope->behaviors[1] = make__55855580();
   scope->behaviors[2] = make__55855120();
   scope->behaviors[3] = make__55854920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58189_47353660;

SignalI lv0_47682100_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makelv0_47682100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47682100_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58189_47353660;
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

SignalI lv1_48450360_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makelv1_48450360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_48450360_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58189_47353660;
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

SignalI av0_48722660_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeav0_48722660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_48722660_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58189_47353660;
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

SignalI av1_49081660_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeav1_49081660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_49081660_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58189_47353660;
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

SignalI rv_49178000_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerv_49178000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49178000_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58189_47353660;
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

SignalI lvok0_49177980_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makelvok0_49177980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49177980_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58189_47353660;
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

SignalI lvok1_49177940_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makelvok1_49177940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49177940_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58189_47353660;
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

SignalI rvok_49177920_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makervok_49177920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49177920_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58189_47353660;
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

SignalI wok0_49177900_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makewok0_49177900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_49177900_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58189_47353660;
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

SignalI wok1_49177880_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makewok1_49177880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_49177880_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58189_47353660;
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

SignalI run_49177860_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerun_49177860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49177860_mac__n1_58189_47353660_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58189_47353660;
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

Behavior __44233300;

Behavior make__44233300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44233300 = behavior;
   behavior->owner = (Object)mac__n1_58189_47353660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos += 1;
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos = realloc(clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos*sizeof(Object));
clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos[clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos-1] = (Object)behavior;
   behavior->block = make__49177740();

   return behavior;
}

Scope makemac__n1_58189_47353660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58189_47353660 = scope;
   scope->owner = (Object)layer0_58_84_49495120;
   scope->name = "mac_n1:189";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47682100();
   scope->inners[1] = makelv1_48450360();
   scope->inners[2] = makeav0_48722660();
   scope->inners[3] = makeav1_49081660();
   scope->inners[4] = makerv_49178000();
   scope->inners[5] = makelvok0_49177980();
   scope->inners[6] = makelvok1_49177940();
   scope->inners[7] = makervok_49177920();
   scope->inners[8] = makewok0_49177900();
   scope->inners[9] = makewok1_49177880();
   scope->inners[10] = makerun_49177860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__44233300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58196_44232900;

SignalI trig__r_44279740_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI maketrig__r_44279740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_44279740_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__b0_58196_44232900;
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

SignalI dbus__r_46320420_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makedbus__r_46320420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_46320420_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__b0_58196_44232900;
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

SignalI abus__r_46320020_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_46320020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46320020_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__b0_58196_44232900;
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

SignalI mem_47172320_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makemem_47172320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47172320_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__b0_58196_44232900;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__51143300(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58197_44229140;

Scope makeraddr_58197_44229140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58197_44229140 = scope;
   scope->owner = (Object)channel__b0_58196_44232900;
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

Scope rinc_58202_44267560;

Scope makerinc_58202_44267560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58202_44267560 = scope;
   scope->owner = (Object)channel__b0_58196_44232900;
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

Scope rdec_58206_44263760;

Scope makerdec_58206_44263760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58206_44263760 = scope;
   scope->owner = (Object)channel__b0_58196_44232900;
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

Behavior __49101240;

Behavior make__49101240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49101240 = behavior;
   behavior->owner = (Object)channel__b0_58196_44232900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg += 1;
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg = realloc(clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg*sizeof(Object));
clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg[clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg-1] = (Object)behavior;
   behavior->block = make__47618840();

   return behavior;
}

Behavior __54460360;

Behavior make__54460360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54460360 = behavior;
   behavior->owner = (Object)channel__b0_58196_44232900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_46320420_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   dbus__r_46320420_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   dbus__r_46320420_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(dbus__r_46320420_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,dbus__r_46320420_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
dbus__r_46320420_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[dbus__r_46320420_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55853200();

   return behavior;
}

Behavior __54460160;

Behavior make__54460160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54460160 = behavior;
   behavior->owner = (Object)channel__b0_58196_44232900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58200_47679800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58200_47679800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58200_47679800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58200_47679800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58200_47679800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58200_47679800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58200_47679800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54460320();

   return behavior;
}

Behavior __54459700;

Behavior make__54459700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54459700 = behavior;
   behavior->owner = (Object)channel__b0_58196_44232900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_44279740_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   trig__r_44279740_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   trig__r_44279740_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(trig__r_44279740_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,trig__r_44279740_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
trig__r_44279740_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[trig__r_44279740_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54459860();

   return behavior;
}

Behavior __54459500;

Behavior make__54459500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54459500 = behavior;
   behavior->owner = (Object)channel__b0_58196_44232900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58198_47679740_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54459660();

   return behavior;
}

Behavior __54459040;

Behavior make__54459040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54459040 = behavior;
   behavior->owner = (Object)channel__b0_58196_44232900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_46320020_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   abus__r_46320020_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   abus__r_46320020_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(abus__r_46320020_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,abus__r_46320020_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
abus__r_46320020_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[abus__r_46320020_channel__b0_58196_44232900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54459200();

   return behavior;
}

Behavior __54458840;

Behavior make__54458840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54458840 = behavior;
   behavior->owner = (Object)channel__b0_58196_44232900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_47679620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58199_47679620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58199_47679620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58199_47679620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58199_47679620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58199_47679620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58199_47679620_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54459000();

   return behavior;
}

Scope makechannel__b0_58196_44232900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58196_44232900 = scope;
   scope->owner = (Object)layer0_58_84_49495120;
   scope->name = "channel_b0:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_44279740();
   scope->inners[1] = makedbus__r_46320420();
   scope->inners[2] = makeabus__r_46320020();
   scope->inners[3] = makemem_47172320();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58197_44229140();
   scope->scopes[1] = makerinc_58202_44267560();
   scope->scopes[2] = makerdec_58206_44263760();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49101240();
   scope->behaviors[1] = make__54460360();
   scope->behaviors[2] = make__54460160();
   scope->behaviors[3] = make__54459700();
   scope->behaviors[4] = make__54459500();
   scope->behaviors[5] = make__54459040();
   scope->behaviors[6] = make__54458840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58211_49101120;

SignalI trig__r_49098600_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI maketrig__r_49098600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49098600_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__b1_58211_49101120;
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

SignalI dbus__r_49226060_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makedbus__r_49226060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49226060_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__b1_58211_49101120;
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

SignalI abus__r_49250120_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_49250120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49250120_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__b1_58211_49101120;
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

SignalI mem_49576880_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makemem_49576880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49576880_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__b1_58211_49101120;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__54370020(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58212_49100640;

Scope makeraddr_58212_49100640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58212_49100640 = scope;
   scope->owner = (Object)channel__b1_58211_49101120;
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

Scope rinc_58217_49099840;

Scope makerinc_58217_49099840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58217_49099840 = scope;
   scope->owner = (Object)channel__b1_58211_49101120;
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

Scope rdec_58221_49099080;

Scope makerdec_58221_49099080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58221_49099080 = scope;
   scope->owner = (Object)channel__b1_58211_49101120;
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

Behavior __53055700;

Behavior make__53055700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53055700 = behavior;
   behavior->owner = (Object)channel__b1_58211_49101120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg += 1;
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg = realloc(clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg*sizeof(Object));
clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg[clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg-1] = (Object)behavior;
   behavior->block = make__49796420();

   return behavior;
}

Behavior __54457460;

Behavior make__54457460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54457460 = behavior;
   behavior->owner = (Object)channel__b1_58211_49101120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49226060_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   dbus__r_49226060_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   dbus__r_49226060_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(dbus__r_49226060_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,dbus__r_49226060_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
dbus__r_49226060_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[dbus__r_49226060_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54457620();

   return behavior;
}

Behavior __54457260;

Behavior make__54457260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54457260 = behavior;
   behavior->owner = (Object)channel__b1_58211_49101120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58215_49131460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58215_49131460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58215_49131460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58215_49131460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58215_49131460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58215_49131460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58215_49131460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54457420();

   return behavior;
}

Behavior __54456800;

Behavior make__54456800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54456800 = behavior;
   behavior->owner = (Object)channel__b1_58211_49101120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49098600_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   trig__r_49098600_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   trig__r_49098600_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(trig__r_49098600_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,trig__r_49098600_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
trig__r_49098600_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[trig__r_49098600_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54456960();

   return behavior;
}

Behavior __54456600;

Behavior make__54456600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54456600 = behavior;
   behavior->owner = (Object)channel__b1_58211_49101120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58213_49131420_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54456760();

   return behavior;
}

Behavior __54456140;

Behavior make__54456140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54456140 = behavior;
   behavior->owner = (Object)channel__b1_58211_49101120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49250120_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   abus__r_49250120_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   abus__r_49250120_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(abus__r_49250120_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,abus__r_49250120_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
abus__r_49250120_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[abus__r_49250120_channel__b1_58211_49101120_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54456300();

   return behavior;
}

Behavior __54455940;

Behavior make__54455940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54455940 = behavior;
   behavior->owner = (Object)channel__b1_58211_49101120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58214_49131300_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58214_49131300_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58214_49131300_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58214_49131300_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58214_49131300_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58214_49131300_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58214_49131300_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54456100();

   return behavior;
}

Scope makechannel__b1_58211_49101120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58211_49101120 = scope;
   scope->owner = (Object)layer0_58_84_49495120;
   scope->name = "channel_b1:211";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49098600();
   scope->inners[1] = makedbus__r_49226060();
   scope->inners[2] = makeabus__r_49250120();
   scope->inners[3] = makemem_49576880();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58212_49100640();
   scope->scopes[1] = makerinc_58217_49099840();
   scope->scopes[2] = makerdec_58221_49099080();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53055700();
   scope->behaviors[1] = make__54457460();
   scope->behaviors[2] = make__54457260();
   scope->behaviors[3] = make__54456800();
   scope->behaviors[4] = make__54456600();
   scope->behaviors[5] = make__54456140();
   scope->behaviors[6] = make__54455940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58226_53055580;

SignalI reg__0_53278560_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereg__0_53278560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53278560_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__z_58226_53055580;
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

SignalI reg__1_53324920_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereg__1_53324920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_53324920_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__z_58226_53055580;
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

Scope anum_58227_53055280;

Scope makeanum_58227_53055280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58227_53055280 = scope;
   scope->owner = (Object)channel__z_58226_53055580;
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

Scope raddr_58230_53054860;

Scope makeraddr_58230_53054860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58230_53054860 = scope;
   scope->owner = (Object)channel__z_58226_53055580;
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

Scope waddr_58234_53054440;

Scope makewaddr_58234_53054440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58234_53054440 = scope;
   scope->owner = (Object)channel__z_58226_53055580;
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

Scope rinc_58238_53054020;

SignalI abus__r_53053640_rinc_58238_53054020_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_53053640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53053640_rinc_58238_53054020_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rinc_58238_53054020;
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

Scope makerinc_58238_53054020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58238_53054020 = scope;
   scope->owner = (Object)channel__z_58226_53055580;
   scope->name = "rinc:238";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53053640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58242_53053520;

SignalI abus__w_53053140_winc_58242_53053520_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_53053140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53053140_winc_58242_53053520_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)winc_58242_53053520;
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

Scope makewinc_58242_53053520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58242_53053520 = scope;
   scope->owner = (Object)channel__z_58226_53055580;
   scope->name = "winc:242";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53053140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58246_53053020;

SignalI abus__r_53052640_rdec_58246_53053020_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_53052640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53052640_rdec_58246_53053020_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rdec_58246_53053020;
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

Scope makerdec_58246_53053020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58246_53053020 = scope;
   scope->owner = (Object)channel__z_58226_53055580;
   scope->name = "rdec:246";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53052640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58251_53052520;

SignalI abus__w_53052140_wdec_58251_53052520_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_53052140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53052140_wdec_58251_53052520_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)wdec_58251_53052520;
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

Scope makewdec_58251_53052520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58251_53052520 = scope;
   scope->owner = (Object)channel__z_58226_53055580;
   scope->name = "wdec:251";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53052140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54454560;

Behavior make__54454560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54454560 = behavior;
   behavior->owner = (Object)channel__z_58226_53055580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53278560_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   reg__0_53278560_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   reg__0_53278560_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(reg__0_53278560_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,reg__0_53278560_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
reg__0_53278560_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[reg__0_53278560_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54454720();

   return behavior;
}

Behavior __54454360;

Behavior make__54454360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54454360 = behavior;
   behavior->owner = (Object)channel__z_58226_53055580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58228_48900320_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58228_48900320_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58228_48900320_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58228_48900320_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58228_48900320_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58228_48900320_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58228_48900320_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54454520();

   return behavior;
}

Behavior __54453900;

Behavior make__54453900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54453900 = behavior;
   behavior->owner = (Object)channel__z_58226_53055580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_53324920_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   reg__1_53324920_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   reg__1_53324920_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(reg__1_53324920_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,reg__1_53324920_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
reg__1_53324920_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[reg__1_53324920_channel__z_58226_53055580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54454060();

   return behavior;
}

Behavior __54453700;

Behavior make__54453700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54453700 = behavior;
   behavior->owner = (Object)channel__z_58226_53055580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58229_48774900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58229_48774900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58229_48774900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58229_48774900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58229_48774900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58229_48774900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58229_48774900_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__54453860();

   return behavior;
}

Scope makechannel__z_58226_53055580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58226_53055580 = scope;
   scope->owner = (Object)layer0_58_84_49495120;
   scope->name = "channel_z:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53278560();
   scope->inners[1] = makereg__1_53324920();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58227_53055280();
   scope->scopes[1] = makeraddr_58230_53054860();
   scope->scopes[2] = makewaddr_58234_53054440();
   scope->scopes[3] = makerinc_58238_53054020();
   scope->scopes[4] = makewinc_58242_53053520();
   scope->scopes[5] = makerdec_58246_53053020();
   scope->scopes[6] = makewdec_58251_53052520();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54454560();
   scope->behaviors[1] = make__54454360();
   scope->behaviors[2] = make__54453900();
   scope->behaviors[3] = make__54453700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58256_53862220;

SignalI lv0_53908300_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makelv0_53908300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_53908300_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58256_53862220;
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

SignalI lv1_54118520_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makelv1_54118520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_54118520_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58256_53862220;
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

SignalI rv0_54238600_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerv0_54238600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_54238600_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58256_53862220;
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

SignalI rv1_54317720_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerv1_54317720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_54317720_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58256_53862220;
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

SignalI lvok0_54317700_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makelvok0_54317700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_54317700_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58256_53862220;
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

SignalI lvok1_54317680_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makelvok1_54317680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_54317680_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58256_53862220;
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

SignalI rvok0_54317660_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makervok0_54317660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_54317660_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58256_53862220;
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

SignalI rvok1_54317640_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makervok1_54317640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_54317640_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58256_53862220;
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

SignalI run_54317620_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerun_54317620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_54317620_add__n_58256_53862220_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58256_53862220;
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

Behavior __44130900;

Behavior make__44130900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44130900 = behavior;
   behavior->owner = (Object)add__n_58256_53862220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos += 1;
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos = realloc(clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos*sizeof(Object));
clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos[clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos-1] = (Object)behavior;
   behavior->block = make__54317500();

   return behavior;
}

Scope makeadd__n_58256_53862220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58256_53862220 = scope;
   scope->owner = (Object)layer0_58_84_49495120;
   scope->name = "add_n:256";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_53908300();
   scope->inners[1] = makelv1_54118520();
   scope->inners[2] = makerv0_54238600();
   scope->inners[3] = makerv1_54317720();
   scope->inners[4] = makelvok0_54317700();
   scope->inners[5] = makelvok1_54317680();
   scope->inners[6] = makervok0_54317660();
   scope->inners[7] = makervok1_54317640();
   scope->inners[8] = makerun_54317620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__44130900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __49810240;

Behavior make__49810240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49810240 = behavior;
   behavior->owner = (Object)layer0_58_84_49495120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos += 1;
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos = realloc(clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos*sizeof(Object));
clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos[clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos-1] = (Object)behavior;
   behavior->block = make__49812980();

   return behavior;
}

Behavior __53502860;

Behavior make__53502860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53502860 = behavior;
   behavior->owner = (Object)layer0_58_84_49495120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos += 1;
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos = realloc(clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos*sizeof(Object));
clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos[clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos-1] = (Object)behavior;
   behavior->block = make__49810080();

   return behavior;
}

Behavior __54183260;

Behavior make__54183260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54183260 = behavior;
   behavior->owner = (Object)layer0_58_84_49495120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos += 1;
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos = realloc(clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos*sizeof(Object));
clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos[clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos-1] = (Object)behavior;
   behavior->block = make__53502720();

   return behavior;
}

Behavior __56001080;

Behavior make__56001080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56001080 = behavior;
   behavior->owner = (Object)layer0_58_84_49495120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_54205000_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   req_54205000_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   req_54205000_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(req_54205000_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,req_54205000_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
req_54205000_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[req_54205000_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_44151240_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__mac_44151240_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__mac_44151240_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__mac_44151240_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__mac_44151240_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__mac_44151240_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__mac_44151240_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__56001320();

   return behavior;
}

Behavior __50218380;

Behavior make__50218380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50218380 = behavior;
   behavior->owner = (Object)layer0_58_84_49495120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack_44151280_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_49331460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   value__z0_49331460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   value__z0_49331460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(value__z0_49331460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,value__z0_49331460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
value__z0_49331460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[value__z0_49331460_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_49510540_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   value__z1_49510540_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   value__z1_49510540_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(value__z1_49510540_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,value__z1_49510540_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
value__z1_49510540_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[value__z1_49510540_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_49765600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__a0_49765600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__a0_49765600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__a0_49765600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__a0_49765600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__a0_49765600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__a0_49765600_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_49765580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__a1_49765580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__a1_49765580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__a1_49765580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__a1_49765580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__a1_49765580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__a1_49765580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__56001540();

   return behavior;
}

Behavior __50218220;

Behavior make__50218220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50218220 = behavior;
   behavior->owner = (Object)layer0_58_84_49495120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_49781740_counter_58_841_49759800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__mac_49781740_counter_58_841_49759800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__mac_49781740_counter_58_841_49759800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__mac_49781740_counter_58_841_49759800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__mac_49781740_counter_58_841_49759800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__mac_49781740_counter_58_841_49759800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__mac_49781740_counter_58_841_49759800_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_53776240_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   a_53776240_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   a_53776240_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(a_53776240_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,a_53776240_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
a_53776240_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[a_53776240_func0_58_841_53507580_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_46519980_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   a_46519980_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   a_46519980_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(a_46519980_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,a_46519980_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
a_46519980_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[a_46519980_func1_58_840_56064100_layer0_58_84_49495120_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__56001480();

   return behavior;
}

Scope makelayer0_58_84_49495120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_49495120 = scope;
   scope->owner = (Object)layer0_58_840_54182940;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_49781580();
   scope->systemIs[1] = makefunc0_53776080();
   scope->systemIs[2] = makefunc1_46519220();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_44153260();
   scope->inners[1] = makeack_44151280();
   scope->inners[2] = makeack__mac_44151240();
   scope->inners[3] = makeack__add_44150260();
   scope->inners[4] = make_58136_46318840();
   scope->inners[5] = make_58134_46318700();
   scope->inners[6] = make_58135_46318620();
   scope->inners[7] = make_58159_46857820();
   scope->inners[8] = make_58160_47186860();
   scope->inners[9] = make_58151_47355820();
   scope->inners[10] = make_58149_47355800();
   scope->inners[11] = make_58150_47355600();
   scope->inners[12] = make_58200_47679800();
   scope->inners[13] = make_58201_47679760();
   scope->inners[14] = make_58198_47679740();
   scope->inners[15] = make_58199_47679620();
   scope->inners[16] = make_58228_48900320();
   scope->inners[17] = make_58229_48774900();
   scope->inners[18] = make_58215_49131460();
   scope->inners[19] = make_58216_49131440();
   scope->inners[20] = make_58213_49131420();
   scope->inners[21] = make_58214_49131300();
   scope->inners[22] = makevalue__z0_49331460();
   scope->inners[23] = makevalue__z1_49510540();
   scope->inners[24] = makevalue__a0_49605160();
   scope->inners[25] = makevalue__a1_49765680();
   scope->inners[26] = makeflag__z0_49765660();
   scope->inners[27] = makeflag__z1_49765620();
   scope->inners[28] = makeack__a0_49765600();
   scope->inners[29] = makeack__a1_49765580();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58127_49494640();
   scope->scopes[1] = makechannel__w1_58142_47398960();
   scope->scopes[2] = makechannel__accum_58157_49825200();
   scope->scopes[3] = makemac__n1_58189_47353660();
   scope->scopes[4] = makechannel__b0_58196_44232900();
   scope->scopes[5] = makechannel__b1_58211_49101120();
   scope->scopes[6] = makechannel__z_58226_53055580();
   scope->scopes[7] = makeadd__n_58256_53862220();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49810240();
   scope->behaviors[1] = make__53502860();
   scope->behaviors[2] = make__54183260();
   scope->behaviors[3] = make__56001080();
   scope->behaviors[4] = make__50218380();
   scope->behaviors[5] = make__50218220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_54182940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_54182940 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_54205040();
   systemT->inputs[1] = makerst_54205020();
   systemT->inputs[2] = makereq_54205000();
   systemT->inputs[3] = make_5859_54336360();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_54336320();
   systemT->outputs[1] = make_5857_54336300();
   systemT->outputs[2] = make_5858_54336220();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5899_54437440();
   systemT->inouts[1] = make_58100_54603180();

   systemT->scope = makelayer0_58_84_49495120();

   return systemT;
}