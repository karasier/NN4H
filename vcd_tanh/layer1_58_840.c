#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_43483460;

SignalI clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeclk_44329880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_840_43483460;
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

SignalI rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerst_44329780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_840_43483460;
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

SignalI req_44329640_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereq_44329640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_44329640_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_840_43483460;
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

SignalI _58110_46967800_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58110_46967800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58110_46967800_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_840_43483460;
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

SignalI _58111_47468720_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58111_47468720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58111_47468720_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_840_43483460;
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

SignalI ack__layer_47468120_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__layer_47468120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_47468120_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_840_43483460;
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

SignalI _58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58112_47467940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_840_43483460;
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

SignalI _5876_48691480_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5876_48691480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5876_48691480_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_840_43483460;
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

Block __54250420;

Block __54249920;

void code__54249920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61377340(),ack_54347660_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61377280(),ack__mac_54347640_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61377220(),ack__add_54347620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54249920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54249920 = block;
   block->owner = (Object)__54250420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54249920;

   return block;
};

void code__54250420() {
   {
      Value cond = rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54249920();
   }
      }
   }
}

Block make__54250420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54250420 = block;
   block->owner = (Object)__54205980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54250420;

   return block;
};

Block __54205180;

Block __54203860;

Block __54203580;

void code__54203580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_55194940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,value__z0_55393960_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61377040(),flag__z0_55488720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54203580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54203580 = block;
   block->owner = (Object)__54203860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54203580;

   return block;
};

void code__54203860() {
 code__54203580();
}

Block make__54203860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54203860 = block;
   block->owner = (Object)__54205180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54203860;

   return block;
};

Block __54204740;

void code__54204740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61376980(),flag__z0_55488720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54204740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54204740 = block;
   block->owner = (Object)__54205180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54204740;

   return block;
};

void code__54205180() {
   {
      Value cond = ack__add_54347620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54203860();
   }
   else {
  code__54204740();
   }
      }
   }
}

Block make__54205180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54205180 = block;
   block->owner = (Object)__55362960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54205180;

   return block;
};

Block __55362700;

Block __55362440;

void code__55362440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61376880(),ack__a0_55488700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55362440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55362440 = block;
   block->owner = (Object)__55362700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55362440;

   return block;
};

Block __55361740;

Block __55238320;

void code__55238320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_55488740_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_5876_48691480_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61376660(),ack__a0_55488700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55238320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55238320 = block;
   block->owner = (Object)__55361740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55238320;

   return block;
};

void code__55361740() {
 code__55238320();
}

Block make__55361740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55361740 = block;
   block->owner = (Object)__55362700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55361740;

   return block;
};

void code__55362700() {
   {
      Value cond = rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55362440();
   }
   else if (value2integer(flag__z0_55488720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value)) {
  code__55361740();
   }
      }
   }
}

Block make__55362700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55362700 = block;
   block->owner = (Object)__43470220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55362700;

   return block;
};

Block __61266380;

void code__61266380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_44329640_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_54347640_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_54347700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61266380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61266380 = block;
   block->owner = (Object)__61266140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61266380;

   return block;
};

Block __61266600;

void code__61266600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,clk_55504520_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_54347660_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,ack_55504480_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,rst_55504460_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_55393960_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,z__value_48520600_func0_58_8400_44328140_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_55488700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,ack__layer_47468120_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61266600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61266600 = block;
   block->owner = (Object)__61260600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61266600;

   return block;
};

Block __61266540;

void code__61266540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_55504420_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,ack__mac_54347640_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58317_54886780_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_48755000_func0_58_8400_44328140_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,value__a0_55488740_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61266540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61266540 = block;
   block->owner = (Object)__61260440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61266540;

   return block;
};

Block __56045080;

void code__56045080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55601500_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            idx = value2integer(abus__r_54806320_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54806420_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__56045080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56045080 = block;
   block->owner = (Object)__47204820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56045080;

   return block;
};

Block __61284260;

void code__61284260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54806420_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58276_54540820_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61284260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61284260 = block;
   block->owner = (Object)__61284100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61284260;

   return block;
};

Block __61284060;

void code__61284060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58276_54540820_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,dbus__r_54806420_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61284060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61284060 = block;
   block->owner = (Object)__61283900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61284060;

   return block;
};

Block __61283600;

void code__61283600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_54600060_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61283600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61283600 = block;
   block->owner = (Object)__61283440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61283600;

   return block;
};

Block __61283400;

void code__61283400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,trig__r_54600060_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61283400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61283400 = block;
   block->owner = (Object)__61283240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61283400;

   return block;
};

Block __61282940;

void code__61282940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_54806320_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61282940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61282940 = block;
   block->owner = (Object)__61282780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61282940;

   return block;
};

Block __61282740;

void code__61282740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,abus__r_54806320_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61282740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61282740 = block;
   block->owner = (Object)__61282580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61282740;

   return block;
};

Block __61281360;

void code__61281360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47579840_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58284_54717800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61281360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61281360 = block;
   block->owner = (Object)__61281200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61281360;

   return block;
};

Block __61281160;

void code__61281160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_54717800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,reg__0_47579840_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61281160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61281160 = block;
   block->owner = (Object)__61281000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61281160;

   return block;
};

Block __49748200;

Block __49747720;

Block __49746860;

void code__49746860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61368460(),_58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49746860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49746860 = block;
   block->owner = (Object)__49747720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49746860;

   return block;
};

void code__49747720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61368540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49746860();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61368400(),_58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49747720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49747720 = block;
   block->owner = (Object)__49748200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49747720;

   return block;
};

Block __49745720;

Block __49744940;

void code__49744940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61368240(),_58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49744940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49744940 = block;
   block->owner = (Object)__49745720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49744940;

   return block;
};

void code__49745720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61368320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49744940();
   }
      }
   }
}

Block make__49745720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49745720 = block;
   block->owner = (Object)__49748200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49745720;

   return block;
};

Block __49743220;

void code__49743220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61368000(),rvok_49748900_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61367940(),lvok0_49748940_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61367880(),wok0_49748800_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49743220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49743220 = block;
   block->owner = (Object)__49748200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49743220;

   return block;
};

Block __49939980;

Block __49938560;

Block __49962740;

Block __49962180;

Block __49960400;

void code__49960400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58110_46967800_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,rv_49748960_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49960400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49960400 = block;
   block->owner = (Object)__49962180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49960400;

   return block;
};

Block __53280220;

void code__53280220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58111_47468720_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,rv_49748960_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53280220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53280220 = block;
   block->owner = (Object)__49962180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53280220;

   return block;
};

void code__49962180() {
{
      Value value = _58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__61367460())) {
    code__49960400();
         }
         else if (value2integer(value) == value2integer(make__61367360())) {
    code__53280220();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61367220(),rvok_49748900_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
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
                  src0 = _58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                  src1 = make__61367120();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61367080();
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
                        src0 = _58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__61366840();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__61366780();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49962180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49962180 = block;
   block->owner = (Object)__49962740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49962180;

   return block;
};

void code__49962740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61367580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49962180();
   }
      }
   }
}

Block make__49962740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49962740 = block;
   block->owner = (Object)__49938560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49962740;

   return block;
};

void code__49938560() {
 code__49962740();
}

Block make__49938560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49938560 = block;
   block->owner = (Object)__49939980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49938560;

   return block;
};

Block __53666800;

Block __53666640;

Block __53666280;

Block __53720640;

Block __53720460;

void code__53720460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58276_54540820_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,lv0_49309320_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61366320(),lvok0_49748940_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53720460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53720460 = block;
   block->owner = (Object)__53720640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53720460;

   return block;
};

void code__53720640() {
 code__53720460();
}

Block make__53720640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53720640 = block;
   block->owner = (Object)__53666280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53720640;

   return block;
};

Block __53665980;

void code__53665980() {
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
                  src0 = _58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                  src1 = make__61382560();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61382520();
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
                        src0 = _58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__61382280();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__61382220();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61382100(),_58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53665980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53665980 = block;
   block->owner = (Object)__53666280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53665980;

   return block;
};

void code__53666280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61366480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53720640();
   }
   else {
  code__53665980();
   }
      }
   }
}

Block make__53666280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53666280 = block;
   block->owner = (Object)__53666640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53666280;

   return block;
};

void code__53666640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61366580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53666280();
   }
      }
   }
}

Block make__53666640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53666640 = block;
   block->owner = (Object)__53666800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53666640;

   return block;
};

void code__53666800() {
 code__53666640();
}

Block make__53666800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53666800 = block;
   block->owner = (Object)__49939980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53666800;

   return block;
};

Block __53985060;

Block __53984560;

Block __53984260;

void code__53984260() {
}

Block make__53984260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53984260 = block;
   block->owner = (Object)__53984560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53984260;

   return block;
};

Block __54854480;

void code__54854480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49556020_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58284_54717800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61381300(),wok0_49748800_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__54854480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54854480 = block;
   block->owner = (Object)__53984560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54854480;

   return block;
};

void code__53984560() {
 code__53984260();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_49556020_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
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
                              src0 = lv0_49309320_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49748960_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61381480();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49556020_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
 code__54854480();
}

Block make__53984560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53984560 = block;
   block->owner = (Object)__53985060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53984560;

   return block;
};

void code__53985060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61381860(),ack_54347660_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61381800(),run_49748740_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
 code__53984560();
}

Block make__53985060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53985060 = block;
   block->owner = (Object)__49939980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53985060;

   return block;
};

Block __55367560;

void code__55367560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61381200(),wok0_49748800_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61381140(),lvok0_49748940_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61381080(),rvok_49748900_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55367560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55367560 = block;
   block->owner = (Object)__49939980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55367560;

   return block;
};

void code__49939980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61367720(),run_49748740_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_49748900_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49938560();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49748940_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53666800();
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
               src0 = lvok0_49748940_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               src1 = rvok_49748900_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_49748800_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53985060();
   }
      }
   }
   {
      Value cond = wok0_49748800_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55367560();
   }
      }
   }
}

Block make__49939980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49939980 = block;
   block->owner = (Object)__49748200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49939980;

   return block;
};

Block __49766060;

void code__49766060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61381020(),av0_49556020_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49766060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49766060 = block;
   block->owner = (Object)__49748200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49766060;

   return block;
};

void code__49748200() {
 code__49747720();
 code__49745720();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61368180(),ack_54347660_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61368120(),run_49748740_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_49748740_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49743220();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_54347700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         src1 = run_49748740_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49939980();
   }
   else {
  code__49766060();
   }
      }
   }
}

Block make__49748200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49748200 = block;
   block->owner = (Object)__55366040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49748200;

   return block;
};

Block __44489940;

void code__44489940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55870800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            idx = value2integer(abus__r_55453800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55453880_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__44489940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44489940 = block;
   block->owner = (Object)__47662840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44489940;

   return block;
};

Block __61279280;

void code__61279280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55453880_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58316_54886840_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61279280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61279280 = block;
   block->owner = (Object)__61279120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61279280;

   return block;
};

Block __61279080;

void code__61279080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_54886840_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,dbus__r_55453880_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61279080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61279080 = block;
   block->owner = (Object)__61278920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61279080;

   return block;
};

Block __61278620;

void code__61278620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_55363580_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61278620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61278620 = block;
   block->owner = (Object)__61278460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61278620;

   return block;
};

Block __61278420;

void code__61278420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,trig__r_55363580_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61278420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61278420 = block;
   block->owner = (Object)__61278260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61278420;

   return block;
};

Block __61277960;

void code__61277960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55453800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58315_54886620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61277960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61277960 = block;
   block->owner = (Object)__61277800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61277960;

   return block;
};

Block __61277760;

void code__61277760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_54886620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,abus__r_55453800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61277760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61277760 = block;
   block->owner = (Object)__61277600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61277760;

   return block;
};

Block __61276380;

void code__61276380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48704860_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58329_55194940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61276380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61276380 = block;
   block->owner = (Object)__61276220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61276380;

   return block;
};

Block __61276180;

void code__61276180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_55194940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,reg__0_48704860_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__61276180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61276180 = block;
   block->owner = (Object)__61300540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61276180;

   return block;
};

Block __49826800;

Block __49826060;

void code__49826060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61379820(),_58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49826060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49826060 = block;
   block->owner = (Object)__49826800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49826060;

   return block;
};

Block __49844380;

Block __49843860;

void code__49843860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_54717800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,lv0_49625020_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61379400(),lvok0_49827200_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49843860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49843860 = block;
   block->owner = (Object)__49844380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49843860;

   return block;
};

Block __53090680;

Block __53090140;

Block __53088940;

void code__53088940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_54886840_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,rv0_49827220_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61379060(),_58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61379000(),rvok0_49827180_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53088940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53088940 = block;
   block->owner = (Object)__53090140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53088940;

   return block;
};

Block __53089940;

void code__53089940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61378940(),_58315_54886620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61378880(),_58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53089940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53089940 = block;
   block->owner = (Object)__53090140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53089940;

   return block;
};

void code__53090140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61379220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53088940();
   }
   else {
  code__53089940();
   }
      }
   }
}

Block make__53090140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53090140 = block;
   block->owner = (Object)__53090680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53090140;

   return block;
};

void code__53090680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58317_54886780_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61379320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53090140();
   }
      }
   }
}

Block make__53090680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53090680 = block;
   block->owner = (Object)__49844380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53090680;

   return block;
};

Block __53634740;

Block __53634040;

void code__53634040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_49625020_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      src1 = rv0_49827220_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58329_55194940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53634040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53634040 = block;
   block->owner = (Object)__53634740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53634040;

   return block;
};

void code__53634740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61378720(),run_49827140_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61378660(),ack__add_54347620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
 code__53634040();
}

Block make__53634740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53634740 = block;
   block->owner = (Object)__49844380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53634740;

   return block;
};

void code__49844380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61379540(),run_49827140_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
 code__49843860();
 code__53090680();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49827200_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         src1 = rvok0_49827180_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53634740();
   }
      }
   }
}

Block make__49844380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49844380 = block;
   block->owner = (Object)__49826800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49844380;

   return block;
};

Block __49823980;

void code__49823980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61378420(),lvok0_49827200_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61378360(),rvok0_49827180_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49823980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49823980 = block;
   block->owner = (Object)__49826800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49823980;

   return block;
};

void code__49826800() {
 code__49826060();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61379760(),ack__add_54347620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61379700(),run_49827140_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_54347640_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         src1 = run_49827140_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49844380();
   }
   else {
  code__49823980();
   }
      }
   }
}

Block make__49826800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49826800 = block;
   block->owner = (Object)__54347840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49826800;

   return block;
};

Value make__61369800() {
   static unsigned long long data[] = { 4294967273ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61369780() {
   static unsigned long long data[] = { 23ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61381000() {
   static unsigned long long data[] = { 4294967287ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__61368540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61368460() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61368400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61368320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61368240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61368180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61368120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61368000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61367940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61367880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61367720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61367580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61367460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61367360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61367220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61367120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61367080() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61366840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61366780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61366580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61366480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61366320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61382560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61382520() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61382280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61382220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61382100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61381860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61381800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61381480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61381300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61381200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61381140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61381080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61381020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61379820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61379760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61379700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61379540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61379400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61379320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61379220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61379060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61379000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61378940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61378880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61378720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61378660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61378420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61378360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61377340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61377280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61377220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61377040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61376980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61376880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61376660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_54602660;

SignalI req__mac_54347700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereq__mac_54347700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_54347700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI ack_54347660_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack_54347660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_54347660_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI ack__mac_54347640_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__mac_54347640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_54347640_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI ack__add_54347620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__add_54347620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_54347620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI _58276_54540820_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58276_54540820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58276_54540820_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI _58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58274_54540800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI _58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58275_54540700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI _58284_54717800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58284_54717800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58284_54717800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI _58316_54886840_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58316_54886840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58316_54886840_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI _58317_54886780_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58317_54886780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58317_54886780_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI _58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58314_54886760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI _58315_54886620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58315_54886620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_54886620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI _58329_55194940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_58329_55194940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58329_55194940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI value__z0_55393960_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makevalue__z0_55393960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_55393960_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI value__a0_55488740_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makevalue__a0_55488740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_55488740_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI flag__z0_55488720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeflag__z0_55488720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_55488720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SignalI ack__a0_55488700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__a0_55488700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_55488700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)layer1_58_84_54602660;
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

SystemI counter_55504200;

SystemI makecounter_55504200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_55504200 = systemI;
   systemI->owner = (Object)layer1_58_84_54602660;
   systemI->name = "counter";
   systemI->system = counter_58_8400_55507400;

   return systemI;
};

SystemI func0_48754360;

SystemI makefunc0_48754360() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_48754360 = systemI;
   systemI->owner = (Object)layer1_58_84_54602660;
   systemI->name = "func0";
   systemI->system = func0_58_8400_44328140;

   return systemI;
};

Scope channel__w0_58267_54602040;

SignalI trig__r_54600060_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI maketrig__r_54600060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_54600060_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__w0_58267_54602040;
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

SignalI dbus__r_54806420_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makedbus__r_54806420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54806420_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__w0_58267_54602040;
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

SignalI abus__r_54806320_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_54806320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54806320_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__w0_58267_54602040;
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

SignalI mem_55601500_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makemem_55601500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55601500_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__w0_58267_54602040;
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
         src0 = make__61369800();
         src1 = make__61369780();
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

Scope raddr_58268_54601620;

Scope makeraddr_58268_54601620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58268_54601620 = scope;
   scope->owner = (Object)channel__w0_58267_54602040;
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

Scope rinc_58273_54601160;

Scope makerinc_58273_54601160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_54601160 = scope;
   scope->owner = (Object)channel__w0_58267_54602040;
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

Scope rdec_58277_54600680;

Scope makerdec_58277_54600680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58277_54600680 = scope;
   scope->owner = (Object)channel__w0_58267_54602040;
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

Behavior __47204820;

Behavior make__47204820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47204820 = behavior;
   behavior->owner = (Object)channel__w0_58267_54602040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg += 1;
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg = realloc(clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg*sizeof(Object));
clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg[clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg-1] = (Object)behavior;
   behavior->block = make__56045080();

   return behavior;
}

Behavior __61284100;

Behavior make__61284100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61284100 = behavior;
   behavior->owner = (Object)channel__w0_58267_54602040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54806420_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   dbus__r_54806420_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   dbus__r_54806420_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(dbus__r_54806420_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,dbus__r_54806420_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
dbus__r_54806420_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[dbus__r_54806420_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61284260();

   return behavior;
}

Behavior __61283900;

Behavior make__61283900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61283900 = behavior;
   behavior->owner = (Object)channel__w0_58267_54602040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58276_54540820_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58276_54540820_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58276_54540820_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58276_54540820_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58276_54540820_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58276_54540820_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58276_54540820_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61284060();

   return behavior;
}

Behavior __61283440;

Behavior make__61283440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61283440 = behavior;
   behavior->owner = (Object)channel__w0_58267_54602040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_54600060_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   trig__r_54600060_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   trig__r_54600060_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(trig__r_54600060_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,trig__r_54600060_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
trig__r_54600060_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[trig__r_54600060_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61283600();

   return behavior;
}

Behavior __61283240;

Behavior make__61283240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61283240 = behavior;
   behavior->owner = (Object)channel__w0_58267_54602040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58274_54540800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61283400();

   return behavior;
}

Behavior __61282780;

Behavior make__61282780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61282780 = behavior;
   behavior->owner = (Object)channel__w0_58267_54602040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_54806320_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   abus__r_54806320_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   abus__r_54806320_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(abus__r_54806320_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,abus__r_54806320_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
abus__r_54806320_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[abus__r_54806320_channel__w0_58267_54602040_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61282940();

   return behavior;
}

Behavior __61282580;

Behavior make__61282580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61282580 = behavior;
   behavior->owner = (Object)channel__w0_58267_54602040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58275_54540700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61282740();

   return behavior;
}

Scope makechannel__w0_58267_54602040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58267_54602040 = scope;
   scope->owner = (Object)layer1_58_84_54602660;
   scope->name = "channel_w0:267";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_54600060();
   scope->inners[1] = makedbus__r_54806420();
   scope->inners[2] = makeabus__r_54806320();
   scope->inners[3] = makemem_55601500();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58268_54601620();
   scope->scopes[1] = makerinc_58273_54601160();
   scope->scopes[2] = makerdec_58277_54600680();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47204820();
   scope->behaviors[1] = make__61284100();
   scope->behaviors[2] = make__61283900();
   scope->behaviors[3] = make__61283440();
   scope->behaviors[4] = make__61283240();
   scope->behaviors[5] = make__61282780();
   scope->behaviors[6] = make__61282580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58282_47204560;

SignalI reg__0_47579840_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereg__0_47579840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47579840_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__accum_58282_47204560;
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

Scope anum_58283_47204080;

Scope makeanum_58283_47204080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58283_47204080 = scope;
   scope->owner = (Object)channel__accum_58282_47204560;
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

Scope raddr_58285_47203300;

Scope makeraddr_58285_47203300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58285_47203300 = scope;
   scope->owner = (Object)channel__accum_58282_47204560;
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

Scope waddr_58288_47225660;

Scope makewaddr_58288_47225660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58288_47225660 = scope;
   scope->owner = (Object)channel__accum_58282_47204560;
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

Scope rinc_58291_47224920;

SignalI abus__r_47223660_rinc_58291_47224920_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_47223660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47223660_rinc_58291_47224920_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rinc_58291_47224920;
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

Scope makerinc_58291_47224920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58291_47224920 = scope;
   scope->owner = (Object)channel__accum_58282_47204560;
   scope->name = "rinc:291";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47223660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58295_47223420;

SignalI abus__w_47222700_winc_58295_47223420_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_47222700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47222700_winc_58295_47223420_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)winc_58295_47223420;
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

Scope makewinc_58295_47223420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58295_47223420 = scope;
   scope->owner = (Object)channel__accum_58282_47204560;
   scope->name = "winc:295";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47222700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58299_47222540;

SignalI abus__r_47221560_rdec_58299_47222540_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_47221560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47221560_rdec_58299_47222540_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rdec_58299_47222540;
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

Scope makerdec_58299_47222540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58299_47222540 = scope;
   scope->owner = (Object)channel__accum_58282_47204560;
   scope->name = "rdec:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47221560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58303_47220820;

SignalI abus__w_47242980_wdec_58303_47220820_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_47242980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47242980_wdec_58303_47220820_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)wdec_58303_47220820;
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

Scope makewdec_58303_47220820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58303_47220820 = scope;
   scope->owner = (Object)channel__accum_58282_47204560;
   scope->name = "wdec:303";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47242980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61281200;

Behavior make__61281200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61281200 = behavior;
   behavior->owner = (Object)channel__accum_58282_47204560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47579840_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   reg__0_47579840_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   reg__0_47579840_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(reg__0_47579840_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,reg__0_47579840_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
reg__0_47579840_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[reg__0_47579840_channel__accum_58282_47204560_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61281360();

   return behavior;
}

Behavior __61281000;

Behavior make__61281000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61281000 = behavior;
   behavior->owner = (Object)channel__accum_58282_47204560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58284_54717800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58284_54717800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58284_54717800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58284_54717800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58284_54717800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58284_54717800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58284_54717800_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61281160();

   return behavior;
}

Scope makechannel__accum_58282_47204560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58282_47204560 = scope;
   scope->owner = (Object)layer1_58_84_54602660;
   scope->name = "channel_accum:282";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47579840();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58283_47204080();
   scope->scopes[1] = makeraddr_58285_47203300();
   scope->scopes[2] = makewaddr_58288_47225660();
   scope->scopes[3] = makerinc_58291_47224920();
   scope->scopes[4] = makewinc_58295_47223420();
   scope->scopes[5] = makerdec_58299_47222540();
   scope->scopes[6] = makewdec_58303_47220820();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61281200();
   scope->behaviors[1] = make__61281000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58307_49081980;

SignalI lv0_49309320_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makelv0_49309320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49309320_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58307_49081980;
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

SignalI av0_49556020_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeav0_49556020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49556020_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58307_49081980;
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

SignalI rv_49748960_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerv_49748960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49748960_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58307_49081980;
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

SignalI lvok0_49748940_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makelvok0_49748940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49748940_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58307_49081980;
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

SignalI rvok_49748900_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makervok_49748900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49748900_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58307_49081980;
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

SignalI wok0_49748800_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makewok0_49748800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_49748800_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58307_49081980;
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

SignalI run_49748740_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerun_49748740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49748740_mac__n1_58307_49081980_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)mac__n1_58307_49081980;
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

Behavior __55366040;

Behavior make__55366040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55366040 = behavior;
   behavior->owner = (Object)mac__n1_58307_49081980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos += 1;
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos = realloc(clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos*sizeof(Object));
clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos[clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos-1] = (Object)behavior;
   behavior->block = make__49748200();

   return behavior;
}

Scope makemac__n1_58307_49081980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58307_49081980 = scope;
   scope->owner = (Object)layer1_58_84_54602660;
   scope->name = "mac_n1:307";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49309320();
   scope->inners[1] = makeav0_49556020();
   scope->inners[2] = makerv_49748960();
   scope->inners[3] = makelvok0_49748940();
   scope->inners[4] = makervok_49748900();
   scope->inners[5] = makewok0_49748800();
   scope->inners[6] = makerun_49748740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55366040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58312_55365860;

SignalI trig__r_55363580_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI maketrig__r_55363580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_55363580_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__b0_58312_55365860;
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

SignalI dbus__r_55453880_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makedbus__r_55453880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55453880_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__b0_58312_55365860;
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

SignalI abus__r_55453800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_55453800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55453800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__b0_58312_55365860;
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

SignalI mem_55870800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makemem_55870800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55870800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__b0_58312_55365860;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__61381000(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58313_55365520;

Scope makeraddr_58313_55365520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58313_55365520 = scope;
   scope->owner = (Object)channel__b0_58312_55365860;
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

Scope rinc_58318_55364940;

Scope makerinc_58318_55364940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58318_55364940 = scope;
   scope->owner = (Object)channel__b0_58312_55365860;
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

Scope rdec_58322_55364480;

Scope makerdec_58322_55364480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58322_55364480 = scope;
   scope->owner = (Object)channel__b0_58312_55365860;
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

Behavior __47662840;

Behavior make__47662840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47662840 = behavior;
   behavior->owner = (Object)channel__b0_58312_55365860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg += 1;
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg = realloc(clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg*sizeof(Object));
clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg[clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg-1] = (Object)behavior;
   behavior->block = make__44489940();

   return behavior;
}

Behavior __61279120;

Behavior make__61279120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61279120 = behavior;
   behavior->owner = (Object)channel__b0_58312_55365860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55453880_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   dbus__r_55453880_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   dbus__r_55453880_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(dbus__r_55453880_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,dbus__r_55453880_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
dbus__r_55453880_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[dbus__r_55453880_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61279280();

   return behavior;
}

Behavior __61278920;

Behavior make__61278920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61278920 = behavior;
   behavior->owner = (Object)channel__b0_58312_55365860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58316_54886840_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58316_54886840_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58316_54886840_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58316_54886840_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58316_54886840_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58316_54886840_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58316_54886840_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61279080();

   return behavior;
}

Behavior __61278460;

Behavior make__61278460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61278460 = behavior;
   behavior->owner = (Object)channel__b0_58312_55365860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_55363580_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   trig__r_55363580_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   trig__r_55363580_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(trig__r_55363580_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,trig__r_55363580_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
trig__r_55363580_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[trig__r_55363580_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61278620();

   return behavior;
}

Behavior __61278260;

Behavior make__61278260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61278260 = behavior;
   behavior->owner = (Object)channel__b0_58312_55365860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58314_54886760_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61278420();

   return behavior;
}

Behavior __61277800;

Behavior make__61277800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61277800 = behavior;
   behavior->owner = (Object)channel__b0_58312_55365860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55453800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   abus__r_55453800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   abus__r_55453800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(abus__r_55453800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,abus__r_55453800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
abus__r_55453800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[abus__r_55453800_channel__b0_58312_55365860_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61277960();

   return behavior;
}

Behavior __61277600;

Behavior make__61277600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61277600 = behavior;
   behavior->owner = (Object)channel__b0_58312_55365860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_54886620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58315_54886620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58315_54886620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58315_54886620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58315_54886620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58315_54886620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58315_54886620_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61277760();

   return behavior;
}

Scope makechannel__b0_58312_55365860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58312_55365860 = scope;
   scope->owner = (Object)layer1_58_84_54602660;
   scope->name = "channel_b0:312";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_55363580();
   scope->inners[1] = makedbus__r_55453880();
   scope->inners[2] = makeabus__r_55453800();
   scope->inners[3] = makemem_55870800();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58313_55365520();
   scope->scopes[1] = makerinc_58318_55364940();
   scope->scopes[2] = makerdec_58322_55364480();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47662840();
   scope->behaviors[1] = make__61279120();
   scope->behaviors[2] = make__61278920();
   scope->behaviors[3] = make__61278460();
   scope->behaviors[4] = make__61278260();
   scope->behaviors[5] = make__61277800();
   scope->behaviors[6] = make__61277600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58327_47662720;

SignalI reg__0_48704860_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereg__0_48704860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48704860_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__z_58327_47662720;
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

Scope anum_58328_47661860;

Scope makeanum_58328_47661860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58328_47661860 = scope;
   scope->owner = (Object)channel__z_58327_47662720;
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

Scope raddr_58330_47683160;

Scope makeraddr_58330_47683160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58330_47683160 = scope;
   scope->owner = (Object)channel__z_58327_47662720;
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

Scope waddr_58333_47681840;

Scope makewaddr_58333_47681840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58333_47681840 = scope;
   scope->owner = (Object)channel__z_58327_47662720;
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

Scope rinc_58336_47680780;

SignalI abus__r_47680200_rinc_58336_47680780_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_47680200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47680200_rinc_58336_47680780_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rinc_58336_47680780;
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

Scope makerinc_58336_47680780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58336_47680780 = scope;
   scope->owner = (Object)channel__z_58327_47662720;
   scope->name = "rinc:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47680200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58339_47679860;

SignalI abus__w_47678340_winc_58339_47679860_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_47678340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47678340_winc_58339_47679860_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)winc_58339_47679860;
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

Scope makewinc_58339_47679860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58339_47679860 = scope;
   scope->owner = (Object)channel__z_58327_47662720;
   scope->name = "winc:339";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47678340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58342_47678060;

SignalI abus__r_47701580_rdec_58342_47678060_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_47701580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47701580_rdec_58342_47678060_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rdec_58342_47678060;
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

Scope makerdec_58342_47678060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58342_47678060 = scope;
   scope->owner = (Object)channel__z_58327_47662720;
   scope->name = "rdec:342";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47701580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58346_47700780;

SignalI abus__w_47700080_wdec_58346_47700780_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_47700080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47700080_wdec_58346_47700780_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)wdec_58346_47700780;
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

Scope makewdec_58346_47700780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58346_47700780 = scope;
   scope->owner = (Object)channel__z_58327_47662720;
   scope->name = "wdec:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47700080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61276220;

Behavior make__61276220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61276220 = behavior;
   behavior->owner = (Object)channel__z_58327_47662720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48704860_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   reg__0_48704860_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   reg__0_48704860_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(reg__0_48704860_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,reg__0_48704860_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
reg__0_48704860_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[reg__0_48704860_channel__z_58327_47662720_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61276380();

   return behavior;
}

Behavior __61300540;

Behavior make__61300540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61300540 = behavior;
   behavior->owner = (Object)channel__z_58327_47662720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58329_55194940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58329_55194940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58329_55194940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58329_55194940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58329_55194940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58329_55194940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58329_55194940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61276180();

   return behavior;
}

Scope makechannel__z_58327_47662720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58327_47662720 = scope;
   scope->owner = (Object)layer1_58_84_54602660;
   scope->name = "channel_z:327";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48704860();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58328_47661860();
   scope->scopes[1] = makeraddr_58330_47683160();
   scope->scopes[2] = makewaddr_58333_47681840();
   scope->scopes[3] = makerinc_58336_47680780();
   scope->scopes[4] = makewinc_58339_47679860();
   scope->scopes[5] = makerdec_58342_47678060();
   scope->scopes[6] = makewdec_58346_47700780();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61276220();
   scope->behaviors[1] = make__61300540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58350_49462940;

SignalI lv0_49625020_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makelv0_49625020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49625020_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58350_49462940;
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

SignalI rv0_49827220_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerv0_49827220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_49827220_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58350_49462940;
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

SignalI lvok0_49827200_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makelvok0_49827200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49827200_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58350_49462940;
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

SignalI rvok0_49827180_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makervok0_49827180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49827180_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58350_49462940;
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

SignalI run_49827140_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerun_49827140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49827140_add__n_58350_49462940_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)add__n_58350_49462940;
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

Behavior __54347840;

Behavior make__54347840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54347840 = behavior;
   behavior->owner = (Object)add__n_58350_49462940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos += 1;
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos = realloc(clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos*sizeof(Object));
clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos[clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos-1] = (Object)behavior;
   behavior->block = make__49826800();

   return behavior;
}

Scope makeadd__n_58350_49462940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58350_49462940 = scope;
   scope->owner = (Object)layer1_58_84_54602660;
   scope->name = "add_n:350";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49625020();
   scope->inners[1] = makerv0_49827220();
   scope->inners[2] = makelvok0_49827200();
   scope->inners[3] = makervok0_49827180();
   scope->inners[4] = makerun_49827140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54347840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54205980;

Behavior make__54205980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54205980 = behavior;
   behavior->owner = (Object)layer1_58_84_54602660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos += 1;
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos = realloc(clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos*sizeof(Object));
clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos[clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos-1] = (Object)behavior;
   behavior->block = make__54250420();

   return behavior;
}

Behavior __55362960;

Behavior make__55362960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55362960 = behavior;
   behavior->owner = (Object)layer1_58_84_54602660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos += 1;
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos = realloc(clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos*sizeof(Object));
clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos[clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos-1] = (Object)behavior;
   behavior->block = make__54205180();

   return behavior;
}

Behavior __43470220;

Behavior make__43470220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43470220 = behavior;
   behavior->owner = (Object)layer1_58_84_54602660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos += 1;
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos = realloc(clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos*sizeof(Object));
clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos[clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos-1] = (Object)behavior;
   behavior->block = make__55362700();

   return behavior;
}

Behavior __61266140;

Behavior make__61266140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61266140 = behavior;
   behavior->owner = (Object)layer1_58_84_54602660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_44329640_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   req_44329640_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   req_44329640_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(req_44329640_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,req_44329640_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
req_44329640_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[req_44329640_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_54347640_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__mac_54347640_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__mac_54347640_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__mac_54347640_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__mac_54347640_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__mac_54347640_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__mac_54347640_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61266380();

   return behavior;
}

Behavior __61260600;

Behavior make__61260600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61260600 = behavior;
   behavior->owner = (Object)layer1_58_84_54602660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_54347660_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack_54347660_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack_54347660_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack_54347660_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack_54347660_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack_54347660_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack_54347660_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_55393960_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   value__z0_55393960_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   value__z0_55393960_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(value__z0_55393960_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,value__z0_55393960_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
value__z0_55393960_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[value__z0_55393960_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_55488700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__a0_55488700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__a0_55488700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__a0_55488700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__a0_55488700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__a0_55488700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__a0_55488700_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61266600();

   return behavior;
}

Behavior __61260440;

Behavior make__61260440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61260440 = behavior;
   behavior->owner = (Object)layer1_58_84_54602660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_55504420_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__mac_55504420_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__mac_55504420_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__mac_55504420_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__mac_55504420_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__mac_55504420_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__mac_55504420_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_48755000_func0_58_8400_44328140_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   a_48755000_func0_58_8400_44328140_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   a_48755000_func0_58_8400_44328140_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(a_48755000_func0_58_8400_44328140_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,a_48755000_func0_58_8400_44328140_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
a_48755000_func0_58_8400_44328140_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[a_48755000_func0_58_8400_44328140_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__61266540();

   return behavior;
}

Scope makelayer1_58_84_54602660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_54602660 = scope;
   scope->owner = (Object)layer1_58_840_43483460;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_55504200();
   scope->systemIs[1] = makefunc0_48754360();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_54347700();
   scope->inners[1] = makeack_54347660();
   scope->inners[2] = makeack__mac_54347640();
   scope->inners[3] = makeack__add_54347620();
   scope->inners[4] = make_58276_54540820();
   scope->inners[5] = make_58274_54540800();
   scope->inners[6] = make_58275_54540700();
   scope->inners[7] = make_58284_54717800();
   scope->inners[8] = make_58316_54886840();
   scope->inners[9] = make_58317_54886780();
   scope->inners[10] = make_58314_54886760();
   scope->inners[11] = make_58315_54886620();
   scope->inners[12] = make_58329_55194940();
   scope->inners[13] = makevalue__z0_55393960();
   scope->inners[14] = makevalue__a0_55488740();
   scope->inners[15] = makeflag__z0_55488720();
   scope->inners[16] = makeack__a0_55488700();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58267_54602040();
   scope->scopes[1] = makechannel__accum_58282_47204560();
   scope->scopes[2] = makemac__n1_58307_49081980();
   scope->scopes[3] = makechannel__b0_58312_55365860();
   scope->scopes[4] = makechannel__z_58327_47662720();
   scope->scopes[5] = makeadd__n_58350_49462940();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54205980();
   scope->behaviors[1] = make__55362960();
   scope->behaviors[2] = make__43470220();
   scope->behaviors[3] = make__61266140();
   scope->behaviors[4] = make__61260600();
   scope->behaviors[5] = make__61260440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_43483460() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_43483460 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_44329880();
   systemT->inputs[1] = makerst_44329780();
   systemT->inputs[2] = makereq_44329640();
   systemT->inputs[3] = make_58110_46967800();
   systemT->inputs[4] = make_58111_47468720();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_47468120();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58112_47467940();
   systemT->inouts[1] = make_5876_48691480();

   systemT->scope = makelayer1_58_84_54602660();

   return systemT;
}