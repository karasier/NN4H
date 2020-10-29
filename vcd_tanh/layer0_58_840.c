#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_55753960;

SignalI clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeclk_55751600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_840_55753960;
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

SignalI rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerst_55751580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_840_55753960;
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

SignalI req_55751560_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makereq_55751560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_55751560_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_840_55753960;
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

SignalI _5859_55917960_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_5859_55917960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5859_55917960_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_840_55753960;
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

SignalI ack__layer_55917920_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack__layer_55917920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_55917920_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_840_55753960;
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

SignalI _5857_55917900_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_5857_55917900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5857_55917900_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_840_55753960;
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

SignalI _5858_55917760_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_5858_55917760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5858_55917760_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_840_55753960;
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

SignalI _5899_56058480_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_5899_56058480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_56058480_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_840_55753960;
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

SignalI _58100_56207520_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58100_56207520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_56207520_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_840_55753960;
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

Block __50997520;

Block __51017960;

void code__51017960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57300860(),ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57300760(),ack__mac_54607820_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57300460(),ack__add_54607800_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__51017960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51017960 = block;
   block->owner = (Object)__50997520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51017960;

   return block;
};

void code__50997520() {
   {
      Value cond = rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51017960();
   }
      }
   }
}

Block make__50997520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50997520 = block;
   block->owner = (Object)__51014620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50997520;

   return block;
};

Block __51014380;

Block __51012580;

Block __51012180;

void code__51012180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58228_55229760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,value__z0_55720940_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57300180(),flag__z0_56064760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__51012180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51012180 = block;
   block->owner = (Object)__51012580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51012180;

   return block;
};

Block __54700520;

void code__54700520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_55480920_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,value__z1_55816440_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57300020(),flag__z1_56064740_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__54700520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54700520 = block;
   block->owner = (Object)__51012580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54700520;

   return block;
};

void code__51012580() {
 code__51012180();
 code__54700520();
}

Block make__51012580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51012580 = block;
   block->owner = (Object)__51014380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51012580;

   return block;
};

Block __51014060;

void code__51014060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57299900(),flag__z0_56064760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57299740(),flag__z1_56064740_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__51014060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51014060 = block;
   block->owner = (Object)__51014380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51014060;

   return block;
};

void code__51014380() {
   {
      Value cond = ack__add_54607800_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51012580();
   }
   else {
  code__51014060();
   }
      }
   }
}

Block make__51014380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51014380 = block;
   block->owner = (Object)__54979300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51014380;

   return block;
};

Block __54979180;

Block __54978880;

void code__54978880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57299620(),ack__a0_56064720_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57299460(),ack__a1_56064700_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__54978880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54978880 = block;
   block->owner = (Object)__54979180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54978880;

   return block;
};

Block __54977900;

Block __54977600;

void code__54977600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_55911960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_5899_56058480_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57299180(),ack__a0_56064720_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__54977600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54977600 = block;
   block->owner = (Object)__54977900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54977600;

   return block;
};

Block __55428500;

void code__55428500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_56064780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58100_56207520_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57299040(),ack__a1_56064700_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__55428500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55428500 = block;
   block->owner = (Object)__54977900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55428500;

   return block;
};

void code__54977900() {
 code__54977600();
 code__55428500();
}

Block make__54977900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54977900 = block;
   block->owner = (Object)__54979180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54977900;

   return block;
};

void code__54979180() {
   {
      Value cond = rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54978880();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_56064760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         src1 = flag__z1_56064740_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__54977900();
   }
      }
   }
}

Block make__54979180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54979180 = block;
   block->owner = (Object)__55754280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54979180;

   return block;
};

Block __55961780;

void code__55961780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_55751560_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_54607820_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_54583320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__55961780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55961780 = block;
   block->owner = (Object)__55961440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55961780;

   return block;
};

Block __55962040;

void code__55962040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,clk_56058920_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,ack_56058900_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,rst_56058880_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_55720940_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,z__value_56227640_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_55816440_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,z__value_47554320_func1_58_840_43107320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_56064720_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      src1 = ack__a1_56064700_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_55917920_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__55962040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55962040 = block;
   block->owner = (Object)__56123680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55962040;

   return block;
};

Block __55961980;

void code__55961980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_56058840_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,ack__mac_54607820_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58201_55142560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58216_55543660_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_56352660_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,value__a0_55911960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_48121800_func1_58_840_43107320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,value__a1_56064780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__55961980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55961980 = block;
   block->owner = (Object)__56213440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55961980;

   return block;
};

Block __50449560;

void code__50449560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50278060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
            idx = value2integer(abus__r_48777980_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48778060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50449560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50449560 = block;
   block->owner = (Object)__50779760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50449560;

   return block;
};

Block __56211360;

void code__56211360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48778060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58136_54703320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56211360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56211360 = block;
   block->owner = (Object)__56211080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56211360;

   return block;
};

Block __56211040;

void code__56211040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58136_54703320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,dbus__r_48778060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56211040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56211040 = block;
   block->owner = (Object)__56210880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56211040;

   return block;
};

Block __56210120;

void code__56210120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48601660_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56210120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56210120 = block;
   block->owner = (Object)__56209620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56210120;

   return block;
};

Block __56209580;

void code__56209580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,trig__r_48601660_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56209580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56209580 = block;
   block->owner = (Object)__56209400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56209580;

   return block;
};

Block __56209020;

void code__56209020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48777980_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56209020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56209020 = block;
   block->owner = (Object)__56208860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56209020;

   return block;
};

Block __56208820;

void code__56208820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,abus__r_48777980_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56208820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56208820 = block;
   block->owner = (Object)__56208540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56208820;

   return block;
};

Block __48356500;

void code__48356500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48087540_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
            idx = value2integer(abus__r_51000320_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51001140_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48356500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48356500 = block;
   block->owner = (Object)__49806940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48356500;

   return block;
};

Block __56243900;

void code__56243900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51001140_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58151_54997980_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56243900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56243900 = block;
   block->owner = (Object)__56243720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56243900;

   return block;
};

Block __56243680;

void code__56243680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58151_54997980_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,dbus__r_51001140_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56243680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56243680 = block;
   block->owner = (Object)__56243460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56243680;

   return block;
};

Block __56243000;

void code__56243000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50775360_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56243000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56243000 = block;
   block->owner = (Object)__56242640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56243000;

   return block;
};

Block __56242540;

void code__56242540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,trig__r_50775360_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56242540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56242540 = block;
   block->owner = (Object)__56242320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56242540;

   return block;
};

Block __56241520;

void code__56241520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_51000320_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56241520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56241520 = block;
   block->owner = (Object)__56241200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56241520;

   return block;
};

Block __56241160;

void code__56241160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,abus__r_51000320_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56241160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56241160 = block;
   block->owner = (Object)__56240900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56241160;

   return block;
};

Block __56238680;

void code__56238680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49981460_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58159_54831520_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56238680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56238680 = block;
   block->owner = (Object)__56238380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56238680;

   return block;
};

Block __56238300;

void code__56238300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58159_54831520_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,reg__0_49981460_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56238300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56238300 = block;
   block->owner = (Object)__56303440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56238300;

   return block;
};

Block __56303120;

void code__56303120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50064060_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58160_54959780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56303120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56303120 = block;
   block->owner = (Object)__56302920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56303120;

   return block;
};

Block __56302840;

void code__56302840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58160_54959780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,reg__1_50064060_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56302840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56302840 = block;
   block->owner = (Object)__56302680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56302840;

   return block;
};

Block __44747140;

Block __44746800;

Block __44745560;

void code__44745560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57107660(),_58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__44745560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44745560 = block;
   block->owner = (Object)__44746800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44745560;

   return block;
};

void code__44746800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57108420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__44745560();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57107460(),_58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__44746800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44746800 = block;
   block->owner = (Object)__44747140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44746800;

   return block;
};

Block __44764660;

Block __44784320;

void code__44784320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57107040(),_58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__44784320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44784320 = block;
   block->owner = (Object)__44764660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44784320;

   return block;
};

void code__44764660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57107340();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__44784320();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57106940(),_58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__44764660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44764660 = block;
   block->owner = (Object)__44747140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44764660;

   return block;
};

Block __45127040;

Block __45124000;

void code__45124000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57147100(),_5858_55917760_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__45124000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45124000 = block;
   block->owner = (Object)__45127040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45124000;

   return block;
};

void code__45127040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57147320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45124000();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57147040(),_5857_55917900_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__45127040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45127040 = block;
   block->owner = (Object)__44747140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45127040;

   return block;
};

Block __45286520;

void code__45286520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57146320(),rvok_44748100_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57146060(),lvok0_44748180_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57146000(),wok0_44748080_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57145920(),lvok1_44748160_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57145840(),wok1_44747960_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__45286520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45286520 = block;
   block->owner = (Object)__44747140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45286520;

   return block;
};

Block __47776080;

Block __47799320;

Block __47798540;

Block __47797560;

Block __47812840;

Block __47812460;

void code__47812460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5859_55917960_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,rv_44748260_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57144880(),rvok_44748100_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__47812460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47812460 = block;
   block->owner = (Object)__47812840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47812460;

   return block;
};

void code__47812840() {
 code__47812460();
}

Block make__47812840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47812840 = block;
   block->owner = (Object)__47797560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47812840;

   return block;
};

Block __47797260;

void code__47797260() {
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
                  src0 = _5858_55917760_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                  src1 = make__57144700();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57144640();
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
                        src0 = _5858_55917760_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__57144120();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__57144060();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5858_55917760_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57143860(),_5857_55917900_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__47797260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47797260 = block;
   block->owner = (Object)__47797560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47797260;

   return block;
};

void code__47797560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5857_55917900_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57145140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47812840();
   }
   else {
  code__47797260();
   }
      }
   }
}

Block make__47797560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47797560 = block;
   block->owner = (Object)__47798540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47797560;

   return block;
};

void code__47798540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57145260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47797560();
   }
      }
   }
}

Block make__47798540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47798540 = block;
   block->owner = (Object)__47799320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47798540;

   return block;
};

void code__47799320() {
 code__47798540();
}

Block make__47799320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47799320 = block;
   block->owner = (Object)__47776080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47799320;

   return block;
};

Block __48270420;

Block __48270260;

Block __48269660;

Block __48305000;

Block __48304740;

void code__48304740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58136_54703320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,lv0_50582420_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57143100(),lvok0_44748180_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48304740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48304740 = block;
   block->owner = (Object)__48305000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48304740;

   return block;
};

void code__48305000() {
 code__48304740();
}

Block make__48305000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48305000 = block;
   block->owner = (Object)__48269660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48305000;

   return block;
};

Block __48269340;

void code__48269340() {
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
                  src0 = _58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                  src1 = make__57142800();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57142760();
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
                        src0 = _58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__57142260();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__57142200();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57142020(),_58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48269340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48269340 = block;
   block->owner = (Object)__48269660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48269340;

   return block;
};

void code__48269660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57143320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48305000();
   }
   else {
  code__48269340();
   }
      }
   }
}

Block make__48269660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48269660 = block;
   block->owner = (Object)__48270260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48269660;

   return block;
};

void code__48270260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57143640();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48269660();
   }
      }
   }
}

Block make__48270260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48270260 = block;
   block->owner = (Object)__48270420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48270260;

   return block;
};

void code__48270420() {
 code__48270260();
}

Block make__48270420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48270420 = block;
   block->owner = (Object)__47776080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48270420;

   return block;
};

Block __48777160;

Block __48775540;

Block __48775360;

void code__48775360() {
}

Block make__48775360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48775360 = block;
   block->owner = (Object)__48775540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48775360;

   return block;
};

Block __50328960;

void code__50328960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_50982740_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58159_54831520_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57140620(),wok0_44748080_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50328960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50328960 = block;
   block->owner = (Object)__48775540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50328960;

   return block;
};

void code__48775540() {
 code__48775360();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_50982740_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
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
                              src0 = lv0_50582420_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_44748260_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57140980();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_50982740_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
 code__50328960();
}

Block make__48775540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48775540 = block;
   block->owner = (Object)__48777160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48775540;

   return block;
};

void code__48777160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57141760(),ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57141700(),run_44747940_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
 code__48775540();
}

Block make__48777160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48777160 = block;
   block->owner = (Object)__47776080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48777160;

   return block;
};

Block __50514300;

void code__50514300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57140440(),wok0_44748080_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57140340(),wok1_44747960_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57140220(),lvok0_44748180_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57139940(),lvok1_44748160_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57139800(),rvok_44748100_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50514300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50514300 = block;
   block->owner = (Object)__47776080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50514300;

   return block;
};

Block __50512660;

Block __50512440;

Block __50512120;

Block __50534460;

Block __50534300;

void code__50534300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58151_54997980_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,lv1_50741740_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57220800(),lvok1_44748160_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50534300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50534300 = block;
   block->owner = (Object)__50534460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50534300;

   return block;
};

void code__50534460() {
 code__50534300();
}

Block make__50534460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50534460 = block;
   block->owner = (Object)__50512120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50534460;

   return block;
};

Block __50511960;

void code__50511960() {
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
                  src0 = _58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                  src1 = make__57220560();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57220520();
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
                        src0 = _58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__57220280();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__57220220();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57220080(),_58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50511960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50511960 = block;
   block->owner = (Object)__50512120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50511960;

   return block;
};

void code__50512120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57139260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50534460();
   }
   else {
  code__50511960();
   }
      }
   }
}

Block make__50512120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50512120 = block;
   block->owner = (Object)__50512440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50512120;

   return block;
};

void code__50512440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57139440();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50512120();
   }
      }
   }
}

Block make__50512440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50512440 = block;
   block->owner = (Object)__50512660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50512440;

   return block;
};

void code__50512660() {
 code__50512440();
}

Block make__50512660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50512660 = block;
   block->owner = (Object)__47776080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50512660;

   return block;
};

Block __50880800;

Block __50904720;

Block __50904460;

void code__50904460() {
}

Block make__50904460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50904460 = block;
   block->owner = (Object)__50904720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50904460;

   return block;
};

Block __48105640;

void code__48105640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_51109380_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58160_54959780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57218280(),wok1_44747960_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48105640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48105640 = block;
   block->owner = (Object)__50904720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48105640;

   return block;
};

void code__50904720() {
 code__50904460();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_51109380_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
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
                              src0 = lv1_50741740_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_44748260_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57218520();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_51109380_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
 code__48105640();
}

Block make__50904720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50904720 = block;
   block->owner = (Object)__50880800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50904720;

   return block;
};

void code__50880800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57219440(),ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57219340(),run_44747940_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
 code__50904720();
}

Block make__50880800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50880800 = block;
   block->owner = (Object)__47776080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50880800;

   return block;
};

Block __48470340;

void code__48470340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57218080(),wok0_44748080_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57217940(),wok1_44747960_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57217720(),lvok0_44748180_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57217400(),lvok1_44748160_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57216820(),rvok_44748100_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48470340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48470340 = block;
   block->owner = (Object)__47776080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48470340;

   return block;
};

void code__47776080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57145560(),run_44747940_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_44748100_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47799320();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_44748180_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48270420();
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
               src0 = lvok0_44748180_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               src1 = rvok_44748100_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_44748080_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48777160();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_44748080_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         src1 = wok1_44747960_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50514300();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_44748160_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50512660();
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
               src0 = lvok1_44748160_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               src1 = rvok_44748100_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_44747960_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50880800();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_44748080_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         src1 = wok1_44747960_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48470340();
   }
      }
   }
}

Block make__47776080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47776080 = block;
   block->owner = (Object)__44747140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47776080;

   return block;
};

Block __45359980;

void code__45359980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57215900(),av0_50982740_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57215740(),av1_51109380_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__45359980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45359980 = block;
   block->owner = (Object)__44747140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45359980;

   return block;
};

void code__44747140() {
 code__44746800();
 code__44764660();
 code__45127040();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57146900(),ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57146840(),run_44747940_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_44747940_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45286520();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_54583320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         src1 = run_44747940_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47776080();
   }
   else {
  code__45359980();
   }
      }
   }
}

Block make__44747140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44747140 = block;
   block->owner = (Object)__48487660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44747140;

   return block;
};

Block __50260140;

void code__50260140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49985320_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
            idx = value2integer(abus__r_48760820_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48761400_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50260140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50260140 = block;
   block->owner = (Object)__50546280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50260140;

   return block;
};

Block __56299140;

void code__56299140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48761400_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58200_55142580_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56299140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56299140 = block;
   block->owner = (Object)__56298920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56299140;

   return block;
};

Block __56298880;

void code__56298880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58200_55142580_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,dbus__r_48761400_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56298880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56298880 = block;
   block->owner = (Object)__56298640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56298880;

   return block;
};

Block __56298040;

void code__56298040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48502520_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56298040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56298040 = block;
   block->owner = (Object)__56297680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56298040;

   return block;
};

Block __56297600;

void code__56297600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,trig__r_48502520_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56297600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56297600 = block;
   block->owner = (Object)__56297300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56297600;

   return block;
};

Block __56296740;

void code__56296740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48760820_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58199_55142460_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56296740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56296740 = block;
   block->owner = (Object)__56296520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56296740;

   return block;
};

Block __56296460;

void code__56296460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_55142460_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,abus__r_48760820_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56296460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56296460 = block;
   block->owner = (Object)__56296160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56296460;

   return block;
};

Block __48175140;

void code__48175140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51105560_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
            idx = value2integer(abus__r_50712280_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50712440_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48175140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48175140 = block;
   block->owner = (Object)__50225820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48175140;

   return block;
};

Block __56431580;

void code__56431580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50712440_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58215_55543680_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56431580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56431580 = block;
   block->owner = (Object)__56430920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56431580;

   return block;
};

Block __56430880;

void code__56430880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58215_55543680_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,dbus__r_50712440_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56430880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56430880 = block;
   block->owner = (Object)__56430500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56430880;

   return block;
};

Block __56429540;

void code__56429540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50568600_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56429540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56429540 = block;
   block->owner = (Object)__56428900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56429540;

   return block;
};

Block __56428860;

void code__56428860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,trig__r_50568600_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56428860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56428860 = block;
   block->owner = (Object)__56428640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56428860;

   return block;
};

Block __56428200;

void code__56428200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50712280_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58214_55543560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56428200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56428200 = block;
   block->owner = (Object)__56427940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56428200;

   return block;
};

Block __56427900;

void code__56427900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_55543560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,abus__r_50712280_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56427900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56427900 = block;
   block->owner = (Object)__56427660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56427900;

   return block;
};

Block __56465960;

void code__56465960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50486600_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58228_55229760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56465960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56465960 = block;
   block->owner = (Object)__56465700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56465960;

   return block;
};

Block __56465620;

void code__56465620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58228_55229760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,reg__0_50486600_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56465620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56465620 = block;
   block->owner = (Object)__56465040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56465620;

   return block;
};

Block __56464480;

void code__56464480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50780100_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58229_55480920_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56464480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56464480 = block;
   block->owner = (Object)__56464200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56464480;

   return block;
};

Block __56464060;

void code__56464060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_55480920_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,reg__1_50780100_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56464060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56464060 = block;
   block->owner = (Object)__56463800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56464060;

   return block;
};

Block __51072900;

Block __51072460;

void code__51072460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57252140(),_58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__51072460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51072460 = block;
   block->owner = (Object)__51072900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51072460;

   return block;
};

Block __51071340;

void code__51071340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57252080(),_58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__51071340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51071340 = block;
   block->owner = (Object)__51072900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51071340;

   return block;
};

Block __51069140;

Block __51019060;

void code__51019060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58159_54831520_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,lv0_49999640_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57250480(),lvok0_51073180_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__51019060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51019060 = block;
   block->owner = (Object)__51069140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51019060;

   return block;
};

Block __47335120;

Block __47333980;

Block __47393620;

void code__47393620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58200_55142580_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,rv0_50563740_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57250080(),_58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57249980(),rvok0_51073120_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__47393620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47393620 = block;
   block->owner = (Object)__47333980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47393620;

   return block;
};

Block __47365640;

void code__47365640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57249920(),_58199_55142460_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57249860(),_58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__47365640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47365640 = block;
   block->owner = (Object)__47333980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47365640;

   return block;
};

void code__47333980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57250280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47393620();
   }
   else {
  code__47365640();
   }
      }
   }
}

Block make__47333980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47333980 = block;
   block->owner = (Object)__47335120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47333980;

   return block;
};

void code__47335120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58201_55142560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57250400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47333980();
   }
      }
   }
}

Block make__47335120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47335120 = block;
   block->owner = (Object)__51069140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47335120;

   return block;
};

Block __48157680;

Block __48156960;

void code__48156960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_49999640_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      src1 = rv0_50563740_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58228_55229760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48156960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48156960 = block;
   block->owner = (Object)__48157680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48156960;

   return block;
};

void code__48157680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57249640(),run_51073080_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57249580(),ack__add_54607800_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
 code__48156960();
}

Block make__48157680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48157680 = block;
   block->owner = (Object)__51069140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48157680;

   return block;
};

Block __49867300;

void code__49867300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58160_54959780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,lv1_50313560_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57248940(),lvok1_51073140_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__49867300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49867300 = block;
   block->owner = (Object)__51069140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49867300;

   return block;
};

Block __50260160;

Block __50259640;

Block __50258560;

void code__50258560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58215_55543680_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,rv1_51073240_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57248080(),_58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57248000(),rvok1_51073100_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50258560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50258560 = block;
   block->owner = (Object)__50259640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50258560;

   return block;
};

Block __50259480;

void code__50259480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57247920(),_58214_55543560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57247780(),_58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50259480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50259480 = block;
   block->owner = (Object)__50259640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50259480;

   return block;
};

void code__50259640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57248380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50258560();
   }
   else {
  code__50259480();
   }
      }
   }
}

Block make__50259640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50259640 = block;
   block->owner = (Object)__50260160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50259640;

   return block;
};

void code__50260160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58216_55543660_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57248760();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50259640();
   }
      }
   }
}

Block make__50260160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50260160 = block;
   block->owner = (Object)__51069140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50260160;

   return block;
};

Block __50482560;

Block __50481580;

void code__50481580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_50313560_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      src1 = rv1_51073240_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58229_55480920_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50481580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50481580 = block;
   block->owner = (Object)__50482560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50481580;

   return block;
};

void code__50482560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57247020(),run_51073080_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57246820(),ack__add_54607800_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
 code__50481580();
}

Block make__50482560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50482560 = block;
   block->owner = (Object)__51069140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50482560;

   return block;
};

void code__51069140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57251400(),run_51073080_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
 code__51019060();
 code__47335120();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_51073180_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         src1 = rvok0_51073120_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48157680();
   }
      }
   }
 code__49867300();
 code__50260160();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_51073140_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         src1 = rvok1_51073100_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50482560();
   }
      }
   }
}

Block make__51069140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51069140 = block;
   block->owner = (Object)__51072900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51069140;

   return block;
};

Block __51070440;

void code__51070440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57246200(),lvok0_51073180_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57246040(),rvok0_51073120_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57245960(),lvok1_51073140_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57245900(),rvok1_51073100_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__51070440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51070440 = block;
   block->owner = (Object)__51072900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51070440;

   return block;
};

void code__51072900() {
 code__51072460();
 code__51071340();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57251980(),ack__add_54607800_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57251820(),run_51073080_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_54607820_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         src1 = run_51073080_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51069140();
   }
   else {
  code__51070440();
   }
      }
   }
}

Block make__51072900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51072900 = block;
   block->owner = (Object)__54583460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51072900;

   return block;
};

Value make__57058780() {
   static unsigned long long data[] = { 25ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57058760() {
   static unsigned long long data[] = { 25ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57114060() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57114040() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57215680() {
   static unsigned long long data[] = { 4294967292ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__57213580() {
   static unsigned long long data[] = { 4294967283ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__57108420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57107660() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57107460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57107340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57107040() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57106940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57147320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57147100() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57147040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57146900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57146840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57146320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57146060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57146000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57145920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57145840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57145560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57145260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57145140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57144880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57144700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57144640() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57144120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57144060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57143860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57143640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57143320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57143100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57142800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57142760() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57142260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57142200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57142020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57141760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57141700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57140980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57140620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57140440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57140340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57140220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57139940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57139800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57139440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57139260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57220800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57220560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57220520() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57220280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57220220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57220080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57219440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57219340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57218520() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57218280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57218080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57217940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57217720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57217400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57216820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57215900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57215740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57252140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57252080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57251980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57251820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57251400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57250480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57250400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57250280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57250080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57249980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57249920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57249860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57249640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57249580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57248940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57248760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57248380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57248080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57248000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57247920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57247780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57247020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57246820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57246200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57246040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57245960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57245900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57300860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57300760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57300460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57300180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57300020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57299900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57299740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57299620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57299460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57299180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57299040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_48584780;

SignalI req__mac_54583320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makereq__mac_54583320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_54583320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack_54583300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI ack__mac_54607820_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack__mac_54607820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_54607820_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI ack__add_54607800_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack__add_54607800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_54607800_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58136_54703320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58136_54703320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58136_54703320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58134_54703300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58135_54703220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58159_54831520_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58159_54831520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58159_54831520_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58160_54959780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58160_54959780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58160_54959780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58151_54997980_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58151_54997980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58151_54997980_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58149_54997960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58150_54997880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58200_55142580_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58200_55142580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58200_55142580_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58201_55142560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58201_55142560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58201_55142560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58198_55142540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58199_55142460_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58199_55142460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_55142460_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58228_55229760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58228_55229760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58228_55229760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58229_55480920_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58229_55480920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58229_55480920_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58215_55543680_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58215_55543680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58215_55543680_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58216_55543660_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58216_55543660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58216_55543660_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58213_55543640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI _58214_55543560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58214_55543560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58214_55543560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI value__z0_55720940_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makevalue__z0_55720940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_55720940_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI value__z1_55816440_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makevalue__z1_55816440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_55816440_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI value__a0_55911960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makevalue__a0_55911960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_55911960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI value__a1_56064780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makevalue__a1_56064780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_56064780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI flag__z0_56064760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeflag__z0_56064760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_56064760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI flag__z1_56064740_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeflag__z1_56064740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_56064740_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI ack__a0_56064720_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack__a0_56064720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_56064720_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SignalI ack__a1_56064700_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack__a1_56064700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_56064700_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer0_58_84_48584780;
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

SystemI counter_56058700;

SystemI makecounter_56058700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_56058700 = systemI;
   systemI->owner = (Object)layer0_58_84_48584780;
   systemI->name = "counter";
   systemI->system = counter_58_841_56060760;

   return systemI;
};

SystemI func0_56352520;

SystemI makefunc0_56352520() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_56352520 = systemI;
   systemI->owner = (Object)layer0_58_84_48584780;
   systemI->name = "func0";
   systemI->system = func0_58_841_56114000;

   return systemI;
};

SystemI func1_48121480;

SystemI makefunc1_48121480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_48121480 = systemI;
   systemI->owner = (Object)layer0_58_84_48584780;
   systemI->name = "func1";
   systemI->system = func1_58_840_43107320;

   return systemI;
};

Scope channel__w0_58127_48583260;

SignalI trig__r_48601660_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI maketrig__r_48601660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48601660_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__w0_58127_48583260;
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

SignalI dbus__r_48778060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makedbus__r_48778060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48778060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__w0_58127_48583260;
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

SignalI abus__r_48777980_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_48777980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48777980_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__w0_58127_48583260;
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

SignalI mem_50278060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makemem_50278060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50278060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__w0_58127_48583260;
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
         src0 = make__57058780();
         src1 = make__57058760();
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

Scope raddr_58128_48582380;

Scope makeraddr_58128_48582380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58128_48582380 = scope;
   scope->owner = (Object)channel__w0_58127_48583260;
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

Scope rinc_58133_48603060;

Scope makerinc_58133_48603060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58133_48603060 = scope;
   scope->owner = (Object)channel__w0_58127_48583260;
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

Scope rdec_58137_48602420;

Scope makerdec_58137_48602420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58137_48602420 = scope;
   scope->owner = (Object)channel__w0_58127_48583260;
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

Behavior __50779760;

Behavior make__50779760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50779760 = behavior;
   behavior->owner = (Object)channel__w0_58127_48583260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg += 1;
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg = realloc(clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg*sizeof(Object));
clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg[clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg-1] = (Object)behavior;
   behavior->block = make__50449560();

   return behavior;
}

Behavior __56211080;

Behavior make__56211080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56211080 = behavior;
   behavior->owner = (Object)channel__w0_58127_48583260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48778060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   dbus__r_48778060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   dbus__r_48778060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(dbus__r_48778060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,dbus__r_48778060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
dbus__r_48778060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[dbus__r_48778060_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56211360();

   return behavior;
}

Behavior __56210880;

Behavior make__56210880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56210880 = behavior;
   behavior->owner = (Object)channel__w0_58127_48583260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58136_54703320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58136_54703320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58136_54703320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58136_54703320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58136_54703320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58136_54703320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58136_54703320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56211040();

   return behavior;
}

Behavior __56209620;

Behavior make__56209620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56209620 = behavior;
   behavior->owner = (Object)channel__w0_58127_48583260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48601660_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   trig__r_48601660_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   trig__r_48601660_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(trig__r_48601660_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,trig__r_48601660_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
trig__r_48601660_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[trig__r_48601660_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56210120();

   return behavior;
}

Behavior __56209400;

Behavior make__56209400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56209400 = behavior;
   behavior->owner = (Object)channel__w0_58127_48583260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58134_54703300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56209580();

   return behavior;
}

Behavior __56208860;

Behavior make__56208860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56208860 = behavior;
   behavior->owner = (Object)channel__w0_58127_48583260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48777980_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   abus__r_48777980_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   abus__r_48777980_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(abus__r_48777980_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,abus__r_48777980_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
abus__r_48777980_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[abus__r_48777980_channel__w0_58127_48583260_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56209020();

   return behavior;
}

Behavior __56208540;

Behavior make__56208540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56208540 = behavior;
   behavior->owner = (Object)channel__w0_58127_48583260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58135_54703220_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56208820();

   return behavior;
}

Scope makechannel__w0_58127_48583260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58127_48583260 = scope;
   scope->owner = (Object)layer0_58_84_48584780;
   scope->name = "channel_w0:127";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48601660();
   scope->inners[1] = makedbus__r_48778060();
   scope->inners[2] = makeabus__r_48777980();
   scope->inners[3] = makemem_50278060();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58128_48582380();
   scope->scopes[1] = makerinc_58133_48603060();
   scope->scopes[2] = makerdec_58137_48602420();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50779760();
   scope->behaviors[1] = make__56211080();
   scope->behaviors[2] = make__56210880();
   scope->behaviors[3] = make__56209620();
   scope->behaviors[4] = make__56209400();
   scope->behaviors[5] = make__56208860();
   scope->behaviors[6] = make__56208540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58142_50779540;

SignalI trig__r_50775360_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI maketrig__r_50775360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50775360_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__w1_58142_50779540;
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

SignalI dbus__r_51001140_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makedbus__r_51001140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51001140_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__w1_58142_50779540;
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

SignalI abus__r_51000320_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_51000320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51000320_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__w1_58142_50779540;
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

SignalI mem_48087540_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makemem_48087540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48087540_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__w1_58142_50779540;
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
         src0 = make__57114060();
         src1 = make__57114040();
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

Scope raddr_58143_50779220;

Scope makeraddr_58143_50779220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58143_50779220 = scope;
   scope->owner = (Object)channel__w1_58142_50779540;
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

Scope rinc_58148_50778720;

Scope makerinc_58148_50778720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58148_50778720 = scope;
   scope->owner = (Object)channel__w1_58142_50779540;
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

Scope rdec_58152_50778020;

Scope makerdec_58152_50778020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58152_50778020 = scope;
   scope->owner = (Object)channel__w1_58142_50779540;
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

Behavior __49806940;

Behavior make__49806940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49806940 = behavior;
   behavior->owner = (Object)channel__w1_58142_50779540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg += 1;
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg = realloc(clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg*sizeof(Object));
clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg[clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg-1] = (Object)behavior;
   behavior->block = make__48356500();

   return behavior;
}

Behavior __56243720;

Behavior make__56243720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56243720 = behavior;
   behavior->owner = (Object)channel__w1_58142_50779540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51001140_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   dbus__r_51001140_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   dbus__r_51001140_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(dbus__r_51001140_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,dbus__r_51001140_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
dbus__r_51001140_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[dbus__r_51001140_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56243900();

   return behavior;
}

Behavior __56243460;

Behavior make__56243460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56243460 = behavior;
   behavior->owner = (Object)channel__w1_58142_50779540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58151_54997980_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58151_54997980_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58151_54997980_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58151_54997980_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58151_54997980_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58151_54997980_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58151_54997980_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56243680();

   return behavior;
}

Behavior __56242640;

Behavior make__56242640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56242640 = behavior;
   behavior->owner = (Object)channel__w1_58142_50779540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50775360_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   trig__r_50775360_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   trig__r_50775360_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(trig__r_50775360_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,trig__r_50775360_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
trig__r_50775360_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[trig__r_50775360_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56243000();

   return behavior;
}

Behavior __56242320;

Behavior make__56242320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56242320 = behavior;
   behavior->owner = (Object)channel__w1_58142_50779540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58149_54997960_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56242540();

   return behavior;
}

Behavior __56241200;

Behavior make__56241200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56241200 = behavior;
   behavior->owner = (Object)channel__w1_58142_50779540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_51000320_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   abus__r_51000320_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   abus__r_51000320_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(abus__r_51000320_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,abus__r_51000320_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
abus__r_51000320_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[abus__r_51000320_channel__w1_58142_50779540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56241520();

   return behavior;
}

Behavior __56240900;

Behavior make__56240900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56240900 = behavior;
   behavior->owner = (Object)channel__w1_58142_50779540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58150_54997880_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56241160();

   return behavior;
}

Scope makechannel__w1_58142_50779540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58142_50779540 = scope;
   scope->owner = (Object)layer0_58_84_48584780;
   scope->name = "channel_w1:142";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50775360();
   scope->inners[1] = makedbus__r_51001140();
   scope->inners[2] = makeabus__r_51000320();
   scope->inners[3] = makemem_48087540();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58143_50779220();
   scope->scopes[1] = makerinc_58148_50778720();
   scope->scopes[2] = makerdec_58152_50778020();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49806940();
   scope->behaviors[1] = make__56243720();
   scope->behaviors[2] = make__56243460();
   scope->behaviors[3] = make__56242640();
   scope->behaviors[4] = make__56242320();
   scope->behaviors[5] = make__56241200();
   scope->behaviors[6] = make__56240900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58157_49806780;

SignalI reg__0_49981460_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makereg__0_49981460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49981460_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__accum_58157_49806780;
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

SignalI reg__1_50064060_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makereg__1_50064060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50064060_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__accum_58157_49806780;
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

Scope anum_58158_49806380;

Scope makeanum_58158_49806380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58158_49806380 = scope;
   scope->owner = (Object)channel__accum_58157_49806780;
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

Scope raddr_58161_49805960;

Scope makeraddr_58161_49805960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58161_49805960 = scope;
   scope->owner = (Object)channel__accum_58157_49806780;
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

Scope waddr_58165_49805500;

Scope makewaddr_58165_49805500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58165_49805500 = scope;
   scope->owner = (Object)channel__accum_58157_49806780;
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

Scope rinc_58169_49804980;

SignalI abus__r_49804540_rinc_58169_49804980_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_49804540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49804540_rinc_58169_49804980_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)rinc_58169_49804980;
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

Scope makerinc_58169_49804980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58169_49804980 = scope;
   scope->owner = (Object)channel__accum_58157_49806780;
   scope->name = "rinc:169";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49804540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58174_49804400;

SignalI abus__w_49803940_winc_58174_49804400_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__w_49803940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49803940_winc_58174_49804400_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)winc_58174_49804400;
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

Scope makewinc_58174_49804400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58174_49804400 = scope;
   scope->owner = (Object)channel__accum_58157_49806780;
   scope->name = "winc:174";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49803940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58179_49803820;

SignalI abus__r_49803400_rdec_58179_49803820_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_49803400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49803400_rdec_58179_49803820_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)rdec_58179_49803820;
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

Scope makerdec_58179_49803820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58179_49803820 = scope;
   scope->owner = (Object)channel__accum_58157_49806780;
   scope->name = "rdec:179";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49803400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58184_49803280;

SignalI abus__w_49802780_wdec_58184_49803280_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__w_49802780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49802780_wdec_58184_49803280_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)wdec_58184_49803280;
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

Scope makewdec_58184_49803280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58184_49803280 = scope;
   scope->owner = (Object)channel__accum_58157_49806780;
   scope->name = "wdec:184";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49802780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56238380;

Behavior make__56238380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56238380 = behavior;
   behavior->owner = (Object)channel__accum_58157_49806780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49981460_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   reg__0_49981460_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   reg__0_49981460_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(reg__0_49981460_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,reg__0_49981460_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
reg__0_49981460_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[reg__0_49981460_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56238680();

   return behavior;
}

Behavior __56303440;

Behavior make__56303440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56303440 = behavior;
   behavior->owner = (Object)channel__accum_58157_49806780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58159_54831520_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58159_54831520_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58159_54831520_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58159_54831520_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58159_54831520_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58159_54831520_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58159_54831520_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56238300();

   return behavior;
}

Behavior __56302920;

Behavior make__56302920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56302920 = behavior;
   behavior->owner = (Object)channel__accum_58157_49806780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50064060_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   reg__1_50064060_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   reg__1_50064060_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(reg__1_50064060_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,reg__1_50064060_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
reg__1_50064060_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[reg__1_50064060_channel__accum_58157_49806780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56303120();

   return behavior;
}

Behavior __56302680;

Behavior make__56302680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56302680 = behavior;
   behavior->owner = (Object)channel__accum_58157_49806780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58160_54959780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58160_54959780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58160_54959780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58160_54959780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58160_54959780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58160_54959780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58160_54959780_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56302840();

   return behavior;
}

Scope makechannel__accum_58157_49806780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58157_49806780 = scope;
   scope->owner = (Object)layer0_58_84_48584780;
   scope->name = "channel_accum:157";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49981460();
   scope->inners[1] = makereg__1_50064060();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58158_49806380();
   scope->scopes[1] = makeraddr_58161_49805960();
   scope->scopes[2] = makewaddr_58165_49805500();
   scope->scopes[3] = makerinc_58169_49804980();
   scope->scopes[4] = makewinc_58174_49804400();
   scope->scopes[5] = makerdec_58179_49803820();
   scope->scopes[6] = makewdec_58184_49803280();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56238380();
   scope->behaviors[1] = make__56303440();
   scope->behaviors[2] = make__56302920();
   scope->behaviors[3] = make__56302680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58189_50498360;

SignalI lv0_50582420_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makelv0_50582420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_50582420_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58189_50498360;
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

SignalI lv1_50741740_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makelv1_50741740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_50741740_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58189_50498360;
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

SignalI av0_50982740_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeav0_50982740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_50982740_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58189_50498360;
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

SignalI av1_51109380_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeav1_51109380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_51109380_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58189_50498360;
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

SignalI rv_44748260_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerv_44748260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_44748260_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58189_50498360;
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

SignalI lvok0_44748180_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makelvok0_44748180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_44748180_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58189_50498360;
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

SignalI lvok1_44748160_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makelvok1_44748160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_44748160_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58189_50498360;
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

SignalI rvok_44748100_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makervok_44748100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_44748100_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58189_50498360;
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

SignalI wok0_44748080_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makewok0_44748080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_44748080_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58189_50498360;
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

SignalI wok1_44747960_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makewok1_44747960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_44747960_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58189_50498360;
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

SignalI run_44747940_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerun_44747940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_44747940_mac__n1_58189_50498360_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58189_50498360;
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

Behavior __48487660;

Behavior make__48487660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48487660 = behavior;
   behavior->owner = (Object)mac__n1_58189_50498360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos += 1;
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos = realloc(clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos*sizeof(Object));
clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos[clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos-1] = (Object)behavior;
   behavior->block = make__44747140();

   return behavior;
}

Scope makemac__n1_58189_50498360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58189_50498360 = scope;
   scope->owner = (Object)layer0_58_84_48584780;
   scope->name = "mac_n1:189";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_50582420();
   scope->inners[1] = makelv1_50741740();
   scope->inners[2] = makeav0_50982740();
   scope->inners[3] = makeav1_51109380();
   scope->inners[4] = makerv_44748260();
   scope->inners[5] = makelvok0_44748180();
   scope->inners[6] = makelvok1_44748160();
   scope->inners[7] = makervok_44748100();
   scope->inners[8] = makewok0_44748080();
   scope->inners[9] = makewok1_44747960();
   scope->inners[10] = makerun_44747940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48487660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58196_48487400;

SignalI trig__r_48502520_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI maketrig__r_48502520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48502520_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__b0_58196_48487400;
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

SignalI dbus__r_48761400_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makedbus__r_48761400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48761400_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__b0_58196_48487400;
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

SignalI abus__r_48760820_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_48760820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48760820_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__b0_58196_48487400;
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

SignalI mem_49985320_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makemem_49985320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49985320_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__b0_58196_48487400;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__57215680(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58197_48486620;

Scope makeraddr_58197_48486620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58197_48486620 = scope;
   scope->owner = (Object)channel__b0_58196_48487400;
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

Scope rinc_58202_48485820;

Scope makerinc_58202_48485820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58202_48485820 = scope;
   scope->owner = (Object)channel__b0_58196_48487400;
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

Scope rdec_58206_48485180;

Scope makerdec_58206_48485180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58206_48485180 = scope;
   scope->owner = (Object)channel__b0_58196_48487400;
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

Behavior __50546280;

Behavior make__50546280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50546280 = behavior;
   behavior->owner = (Object)channel__b0_58196_48487400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg += 1;
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg = realloc(clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg*sizeof(Object));
clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg[clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg-1] = (Object)behavior;
   behavior->block = make__50260140();

   return behavior;
}

Behavior __56298920;

Behavior make__56298920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56298920 = behavior;
   behavior->owner = (Object)channel__b0_58196_48487400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48761400_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   dbus__r_48761400_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   dbus__r_48761400_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(dbus__r_48761400_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,dbus__r_48761400_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
dbus__r_48761400_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[dbus__r_48761400_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56299140();

   return behavior;
}

Behavior __56298640;

Behavior make__56298640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56298640 = behavior;
   behavior->owner = (Object)channel__b0_58196_48487400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58200_55142580_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58200_55142580_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58200_55142580_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58200_55142580_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58200_55142580_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58200_55142580_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58200_55142580_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56298880();

   return behavior;
}

Behavior __56297680;

Behavior make__56297680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56297680 = behavior;
   behavior->owner = (Object)channel__b0_58196_48487400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48502520_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   trig__r_48502520_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   trig__r_48502520_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(trig__r_48502520_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,trig__r_48502520_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
trig__r_48502520_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[trig__r_48502520_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56298040();

   return behavior;
}

Behavior __56297300;

Behavior make__56297300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56297300 = behavior;
   behavior->owner = (Object)channel__b0_58196_48487400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58198_55142540_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56297600();

   return behavior;
}

Behavior __56296520;

Behavior make__56296520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56296520 = behavior;
   behavior->owner = (Object)channel__b0_58196_48487400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48760820_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   abus__r_48760820_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   abus__r_48760820_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(abus__r_48760820_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,abus__r_48760820_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
abus__r_48760820_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[abus__r_48760820_channel__b0_58196_48487400_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56296740();

   return behavior;
}

Behavior __56296160;

Behavior make__56296160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56296160 = behavior;
   behavior->owner = (Object)channel__b0_58196_48487400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_55142460_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58199_55142460_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58199_55142460_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58199_55142460_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58199_55142460_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58199_55142460_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58199_55142460_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56296460();

   return behavior;
}

Scope makechannel__b0_58196_48487400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58196_48487400 = scope;
   scope->owner = (Object)layer0_58_84_48584780;
   scope->name = "channel_b0:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48502520();
   scope->inners[1] = makedbus__r_48761400();
   scope->inners[2] = makeabus__r_48760820();
   scope->inners[3] = makemem_49985320();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58197_48486620();
   scope->scopes[1] = makerinc_58202_48485820();
   scope->scopes[2] = makerdec_58206_48485180();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50546280();
   scope->behaviors[1] = make__56298920();
   scope->behaviors[2] = make__56298640();
   scope->behaviors[3] = make__56297680();
   scope->behaviors[4] = make__56297300();
   scope->behaviors[5] = make__56296520();
   scope->behaviors[6] = make__56296160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58211_50546120;

SignalI trig__r_50568600_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI maketrig__r_50568600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50568600_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__b1_58211_50546120;
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

SignalI dbus__r_50712440_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makedbus__r_50712440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50712440_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__b1_58211_50546120;
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

SignalI abus__r_50712280_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_50712280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50712280_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__b1_58211_50546120;
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

SignalI mem_51105560_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makemem_51105560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51105560_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__b1_58211_50546120;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__57213580(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58212_50545700;

Scope makeraddr_58212_50545700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58212_50545700 = scope;
   scope->owner = (Object)channel__b1_58211_50546120;
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

Scope rinc_58217_50545240;

Scope makerinc_58217_50545240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58217_50545240 = scope;
   scope->owner = (Object)channel__b1_58211_50546120;
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

Scope rdec_58221_50544660;

Scope makerdec_58221_50544660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58221_50544660 = scope;
   scope->owner = (Object)channel__b1_58211_50546120;
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

Behavior __50225820;

Behavior make__50225820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50225820 = behavior;
   behavior->owner = (Object)channel__b1_58211_50546120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg += 1;
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg = realloc(clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg*sizeof(Object));
clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg[clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg-1] = (Object)behavior;
   behavior->block = make__48175140();

   return behavior;
}

Behavior __56430920;

Behavior make__56430920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56430920 = behavior;
   behavior->owner = (Object)channel__b1_58211_50546120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50712440_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   dbus__r_50712440_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   dbus__r_50712440_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(dbus__r_50712440_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,dbus__r_50712440_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
dbus__r_50712440_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[dbus__r_50712440_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56431580();

   return behavior;
}

Behavior __56430500;

Behavior make__56430500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56430500 = behavior;
   behavior->owner = (Object)channel__b1_58211_50546120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58215_55543680_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58215_55543680_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58215_55543680_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58215_55543680_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58215_55543680_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58215_55543680_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58215_55543680_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56430880();

   return behavior;
}

Behavior __56428900;

Behavior make__56428900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56428900 = behavior;
   behavior->owner = (Object)channel__b1_58211_50546120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50568600_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   trig__r_50568600_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   trig__r_50568600_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(trig__r_50568600_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,trig__r_50568600_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
trig__r_50568600_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[trig__r_50568600_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56429540();

   return behavior;
}

Behavior __56428640;

Behavior make__56428640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56428640 = behavior;
   behavior->owner = (Object)channel__b1_58211_50546120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58213_55543640_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56428860();

   return behavior;
}

Behavior __56427940;

Behavior make__56427940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56427940 = behavior;
   behavior->owner = (Object)channel__b1_58211_50546120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50712280_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   abus__r_50712280_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   abus__r_50712280_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(abus__r_50712280_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,abus__r_50712280_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
abus__r_50712280_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[abus__r_50712280_channel__b1_58211_50546120_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56428200();

   return behavior;
}

Behavior __56427660;

Behavior make__56427660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56427660 = behavior;
   behavior->owner = (Object)channel__b1_58211_50546120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58214_55543560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58214_55543560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58214_55543560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58214_55543560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58214_55543560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58214_55543560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58214_55543560_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56427900();

   return behavior;
}

Scope makechannel__b1_58211_50546120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58211_50546120 = scope;
   scope->owner = (Object)layer0_58_84_48584780;
   scope->name = "channel_b1:211";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50568600();
   scope->inners[1] = makedbus__r_50712440();
   scope->inners[2] = makeabus__r_50712280();
   scope->inners[3] = makemem_51105560();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58212_50545700();
   scope->scopes[1] = makerinc_58217_50545240();
   scope->scopes[2] = makerdec_58221_50544660();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50225820();
   scope->behaviors[1] = make__56430920();
   scope->behaviors[2] = make__56430500();
   scope->behaviors[3] = make__56428900();
   scope->behaviors[4] = make__56428640();
   scope->behaviors[5] = make__56427940();
   scope->behaviors[6] = make__56427660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58226_50225620;

SignalI reg__0_50486600_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makereg__0_50486600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50486600_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__z_58226_50225620;
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

SignalI reg__1_50780100_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makereg__1_50780100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50780100_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__z_58226_50225620;
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

Scope anum_58227_50225200;

Scope makeanum_58227_50225200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58227_50225200 = scope;
   scope->owner = (Object)channel__z_58226_50225620;
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

Scope raddr_58230_50265060;

Scope makeraddr_58230_50265060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58230_50265060 = scope;
   scope->owner = (Object)channel__z_58226_50225620;
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

Scope waddr_58234_50264640;

Scope makewaddr_58234_50264640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58234_50264640 = scope;
   scope->owner = (Object)channel__z_58226_50225620;
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

Scope rinc_58238_50264200;

SignalI abus__r_50263660_rinc_58238_50264200_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_50263660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50263660_rinc_58238_50264200_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)rinc_58238_50264200;
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

Scope makerinc_58238_50264200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58238_50264200 = scope;
   scope->owner = (Object)channel__z_58226_50225620;
   scope->name = "rinc:238";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50263660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58242_50263080;

SignalI abus__w_50262560_winc_58242_50263080_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__w_50262560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50262560_winc_58242_50263080_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)winc_58242_50263080;
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

Scope makewinc_58242_50263080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58242_50263080 = scope;
   scope->owner = (Object)channel__z_58226_50225620;
   scope->name = "winc:242";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50262560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58246_50262440;

SignalI abus__r_50262060_rdec_58246_50262440_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_50262060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50262060_rdec_58246_50262440_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)rdec_58246_50262440;
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

Scope makerdec_58246_50262440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58246_50262440 = scope;
   scope->owner = (Object)channel__z_58226_50225620;
   scope->name = "rdec:246";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50262060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58251_50261940;

SignalI abus__w_50261560_wdec_58251_50261940_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__w_50261560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50261560_wdec_58251_50261940_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)wdec_58251_50261940;
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

Scope makewdec_58251_50261940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58251_50261940 = scope;
   scope->owner = (Object)channel__z_58226_50225620;
   scope->name = "wdec:251";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50261560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56465700;

Behavior make__56465700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56465700 = behavior;
   behavior->owner = (Object)channel__z_58226_50225620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50486600_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   reg__0_50486600_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   reg__0_50486600_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(reg__0_50486600_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,reg__0_50486600_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
reg__0_50486600_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[reg__0_50486600_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56465960();

   return behavior;
}

Behavior __56465040;

Behavior make__56465040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56465040 = behavior;
   behavior->owner = (Object)channel__z_58226_50225620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58228_55229760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58228_55229760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58228_55229760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58228_55229760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58228_55229760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58228_55229760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58228_55229760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56465620();

   return behavior;
}

Behavior __56464200;

Behavior make__56464200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56464200 = behavior;
   behavior->owner = (Object)channel__z_58226_50225620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50780100_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   reg__1_50780100_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   reg__1_50780100_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(reg__1_50780100_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,reg__1_50780100_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
reg__1_50780100_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[reg__1_50780100_channel__z_58226_50225620_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56464480();

   return behavior;
}

Behavior __56463800;

Behavior make__56463800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56463800 = behavior;
   behavior->owner = (Object)channel__z_58226_50225620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58229_55480920_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58229_55480920_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58229_55480920_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58229_55480920_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58229_55480920_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58229_55480920_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58229_55480920_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__56464060();

   return behavior;
}

Scope makechannel__z_58226_50225620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58226_50225620 = scope;
   scope->owner = (Object)layer0_58_84_48584780;
   scope->name = "channel_z:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50486600();
   scope->inners[1] = makereg__1_50780100();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58227_50225200();
   scope->scopes[1] = makeraddr_58230_50265060();
   scope->scopes[2] = makewaddr_58234_50264640();
   scope->scopes[3] = makerinc_58238_50264200();
   scope->scopes[4] = makewinc_58242_50263080();
   scope->scopes[5] = makerdec_58246_50262440();
   scope->scopes[6] = makewdec_58251_50261940();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56465700();
   scope->behaviors[1] = make__56465040();
   scope->behaviors[2] = make__56464200();
   scope->behaviors[3] = make__56463800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58256_49785860;

SignalI lv0_49999640_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makelv0_49999640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49999640_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58256_49785860;
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

SignalI lv1_50313560_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makelv1_50313560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_50313560_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58256_49785860;
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

SignalI rv0_50563740_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerv0_50563740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_50563740_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58256_49785860;
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

SignalI rv1_51073240_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerv1_51073240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_51073240_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58256_49785860;
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

SignalI lvok0_51073180_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makelvok0_51073180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_51073180_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58256_49785860;
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

SignalI lvok1_51073140_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makelvok1_51073140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_51073140_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58256_49785860;
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

SignalI rvok0_51073120_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makervok0_51073120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_51073120_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58256_49785860;
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

SignalI rvok1_51073100_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makervok1_51073100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_51073100_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58256_49785860;
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

SignalI run_51073080_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerun_51073080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_51073080_add__n_58256_49785860_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58256_49785860;
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

Behavior __54583460;

Behavior make__54583460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54583460 = behavior;
   behavior->owner = (Object)add__n_58256_49785860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos += 1;
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos = realloc(clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos*sizeof(Object));
clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos[clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos-1] = (Object)behavior;
   behavior->block = make__51072900();

   return behavior;
}

Scope makeadd__n_58256_49785860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58256_49785860 = scope;
   scope->owner = (Object)layer0_58_84_48584780;
   scope->name = "add_n:256";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49999640();
   scope->inners[1] = makelv1_50313560();
   scope->inners[2] = makerv0_50563740();
   scope->inners[3] = makerv1_51073240();
   scope->inners[4] = makelvok0_51073180();
   scope->inners[5] = makelvok1_51073140();
   scope->inners[6] = makervok0_51073120();
   scope->inners[7] = makervok1_51073100();
   scope->inners[8] = makerun_51073080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54583460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51014620;

Behavior make__51014620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51014620 = behavior;
   behavior->owner = (Object)layer0_58_84_48584780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos += 1;
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos = realloc(clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos*sizeof(Object));
clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos[clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos-1] = (Object)behavior;
   behavior->block = make__50997520();

   return behavior;
}

Behavior __54979300;

Behavior make__54979300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54979300 = behavior;
   behavior->owner = (Object)layer0_58_84_48584780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos += 1;
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos = realloc(clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos*sizeof(Object));
clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos[clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos-1] = (Object)behavior;
   behavior->block = make__51014380();

   return behavior;
}

Behavior __55754280;

Behavior make__55754280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55754280 = behavior;
   behavior->owner = (Object)layer0_58_84_48584780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos += 1;
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos = realloc(clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos*sizeof(Object));
clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos[clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos-1] = (Object)behavior;
   behavior->block = make__54979180();

   return behavior;
}

Behavior __55961440;

Behavior make__55961440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55961440 = behavior;
   behavior->owner = (Object)layer0_58_84_48584780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_55751560_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   req_55751560_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   req_55751560_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(req_55751560_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,req_55751560_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
req_55751560_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[req_55751560_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_54607820_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   ack__mac_54607820_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   ack__mac_54607820_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(ack__mac_54607820_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,ack__mac_54607820_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
ack__mac_54607820_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[ack__mac_54607820_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__55961780();

   return behavior;
}

Behavior __56123680;

Behavior make__56123680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56123680 = behavior;
   behavior->owner = (Object)layer0_58_84_48584780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[clk_55751600_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[ack_54583300_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_55720940_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   value__z0_55720940_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   value__z0_55720940_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(value__z0_55720940_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,value__z0_55720940_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
value__z0_55720940_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[value__z0_55720940_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_55816440_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   value__z1_55816440_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   value__z1_55816440_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(value__z1_55816440_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,value__z1_55816440_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
value__z1_55816440_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[value__z1_55816440_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_56064720_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   ack__a0_56064720_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   ack__a0_56064720_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(ack__a0_56064720_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,ack__a0_56064720_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
ack__a0_56064720_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[ack__a0_56064720_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_56064700_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   ack__a1_56064700_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   ack__a1_56064700_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(ack__a1_56064700_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,ack__a1_56064700_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
ack__a1_56064700_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[ack__a1_56064700_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__55962040();

   return behavior;
}

Behavior __56213440;

Behavior make__56213440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56213440 = behavior;
   behavior->owner = (Object)layer0_58_84_48584780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_56058840_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   ack__mac_56058840_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   ack__mac_56058840_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(ack__mac_56058840_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,ack__mac_56058840_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
ack__mac_56058840_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[ack__mac_56058840_counter_58_841_56060760_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[rst_55751580_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_56352660_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   a_56352660_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   a_56352660_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(a_56352660_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,a_56352660_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
a_56352660_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[a_56352660_func0_58_841_56114000_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_48121800_func1_58_840_43107320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   a_48121800_func1_58_840_43107320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   a_48121800_func1_58_840_43107320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(a_48121800_func1_58_840_43107320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,a_48121800_func1_58_840_43107320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
a_48121800_func1_58_840_43107320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[a_48121800_func1_58_840_43107320_layer0_58_84_48584780_layer0_58_840_55753960_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__55961980();

   return behavior;
}

Scope makelayer0_58_84_48584780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_48584780 = scope;
   scope->owner = (Object)layer0_58_840_55753960;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_56058700();
   scope->systemIs[1] = makefunc0_56352520();
   scope->systemIs[2] = makefunc1_48121480();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_54583320();
   scope->inners[1] = makeack_54583300();
   scope->inners[2] = makeack__mac_54607820();
   scope->inners[3] = makeack__add_54607800();
   scope->inners[4] = make_58136_54703320();
   scope->inners[5] = make_58134_54703300();
   scope->inners[6] = make_58135_54703220();
   scope->inners[7] = make_58159_54831520();
   scope->inners[8] = make_58160_54959780();
   scope->inners[9] = make_58151_54997980();
   scope->inners[10] = make_58149_54997960();
   scope->inners[11] = make_58150_54997880();
   scope->inners[12] = make_58200_55142580();
   scope->inners[13] = make_58201_55142560();
   scope->inners[14] = make_58198_55142540();
   scope->inners[15] = make_58199_55142460();
   scope->inners[16] = make_58228_55229760();
   scope->inners[17] = make_58229_55480920();
   scope->inners[18] = make_58215_55543680();
   scope->inners[19] = make_58216_55543660();
   scope->inners[20] = make_58213_55543640();
   scope->inners[21] = make_58214_55543560();
   scope->inners[22] = makevalue__z0_55720940();
   scope->inners[23] = makevalue__z1_55816440();
   scope->inners[24] = makevalue__a0_55911960();
   scope->inners[25] = makevalue__a1_56064780();
   scope->inners[26] = makeflag__z0_56064760();
   scope->inners[27] = makeflag__z1_56064740();
   scope->inners[28] = makeack__a0_56064720();
   scope->inners[29] = makeack__a1_56064700();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58127_48583260();
   scope->scopes[1] = makechannel__w1_58142_50779540();
   scope->scopes[2] = makechannel__accum_58157_49806780();
   scope->scopes[3] = makemac__n1_58189_50498360();
   scope->scopes[4] = makechannel__b0_58196_48487400();
   scope->scopes[5] = makechannel__b1_58211_50546120();
   scope->scopes[6] = makechannel__z_58226_50225620();
   scope->scopes[7] = makeadd__n_58256_49785860();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51014620();
   scope->behaviors[1] = make__54979300();
   scope->behaviors[2] = make__55754280();
   scope->behaviors[3] = make__55961440();
   scope->behaviors[4] = make__56123680();
   scope->behaviors[5] = make__56213440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_55753960() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_55753960 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_55751600();
   systemT->inputs[1] = makerst_55751580();
   systemT->inputs[2] = makereq_55751560();
   systemT->inputs[3] = make_5859_55917960();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_55917920();
   systemT->outputs[1] = make_5857_55917900();
   systemT->outputs[2] = make_5858_55917760();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5899_56058480();
   systemT->inouts[1] = make_58100_56207520();

   systemT->scope = makelayer0_58_84_48584780();

   return systemT;
}