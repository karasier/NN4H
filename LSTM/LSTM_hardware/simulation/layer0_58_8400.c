#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_8400_71480580;

SignalI clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeclk_71478500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_8400_71480580;
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

SignalI rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makerst_71478480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_8400_71480580;
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

SignalI req_71478440_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makereq_71478440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_71478440_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_8400_71480580;
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

SignalI _58419_71593340_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58419_71593340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58419_71593340_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_8400_71480580;
   signalI->name = ":419";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_71593300_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack__layer_71593300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_71593300_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_8400_71480580;
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

SignalI _58417_71593280_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58417_71593280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58417_71593280_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_8400_71480580;
   signalI->name = ":417";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58418_71593180_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58418_71593180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58418_71593180_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_8400_71480580;
   signalI->name = ":418";
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

SignalI _58459_71692980_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58459_71692980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58459_71692980_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_8400_71480580;
   signalI->name = ":459";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58460_71841980_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58460_71841980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58460_71841980_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_8400_71480580;
   signalI->name = ":460";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __70337160;

Block __70336920;

void code__70336920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73422360(),ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73422300(),ack__mac_47376320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73422240(),ack__add_47375940_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70336920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70336920 = block;
   block->owner = (Object)__70337160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70336920;

   return block;
};

void code__70337160() {
   {
      Value cond = rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__70336920();
   }
      }
   }
}

Block make__70337160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70337160 = block;
   block->owner = (Object)__70360320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70337160;

   return block;
};

Block __70360200;

Block __70359460;

Block __70359300;

void code__70359300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58588_52725620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,value__z0_58505820_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73421980(),flag__z0_59266720_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70359300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70359300 = block;
   block->owner = (Object)__70359460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70359300;

   return block;
};

Block __70656520;

void code__70656520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58589_53026540_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,value__z1_58671440_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73421700(),flag__z1_59266680_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70656520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70656520 = block;
   block->owner = (Object)__70359460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70656520;

   return block;
};

void code__70359460() {
 code__70359300();
 code__70656520();
}

Block make__70359460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70359460 = block;
   block->owner = (Object)__70360200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70359460;

   return block;
};

Block __70360040;

void code__70360040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73421640(),flag__z0_59266720_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73421580(),flag__z1_59266680_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70360040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70360040 = block;
   block->owner = (Object)__70360200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70360040;

   return block;
};

void code__70360200() {
   {
      Value cond = ack__add_47375940_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__70359460();
   }
   else {
  code__70360040();
   }
      }
   }
}

Block make__70360200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70360200 = block;
   block->owner = (Object)__70896180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70360200;

   return block;
};

Block __70896020;

Block __70895760;

void code__70895760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73421480(),ack__a0_59266640_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73421380(),ack__a1_59266620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70895760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70895760 = block;
   block->owner = (Object)__70896020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70895760;

   return block;
};

Block __70894920;

Block __70894760;

void code__70894760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_59051320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58459_71692980_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73421100(),ack__a0_59266640_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70894760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70894760 = block;
   block->owner = (Object)__70894920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70894760;

   return block;
};

Block __71126780;

void code__71126780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_59266740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58460_71841980_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73420940(),ack__a1_59266620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71126780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71126780 = block;
   block->owner = (Object)__70894920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71126780;

   return block;
};

void code__70894920() {
 code__70894760();
 code__71126780();
}

Block make__70894920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70894920 = block;
   block->owner = (Object)__70896020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70894920;

   return block;
};

void code__70896020() {
   {
      Value cond = rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__70895760();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_59266720_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         src1 = flag__z1_59266680_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__70894920();
   }
      }
   }
}

Block make__70896020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70896020 = block;
   block->owner = (Object)__71480960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70896020;

   return block;
};

Block __72852980;

void code__72852980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_71478440_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_47376320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_47376520_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72852980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72852980 = block;
   block->owner = (Object)__72852740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72852980;

   return block;
};

Block __72853300;

void code__72853300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,clk_59294600_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,ack_59294540_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,rst_59294520_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_58505820_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,z__value_61467760_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_58671440_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,z__value_69138300_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_59266640_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      src1 = ack__a1_59266620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_71593300_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72853300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72853300 = block;
   block->owner = (Object)__72890300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72853300;

   return block;
};

Block __72853220;

void code__72853220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_59294400_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,ack__mac_47376320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58561_52421760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58576_53310320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_61783040_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,value__a0_59051320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_69270920_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,value__a1_59266740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72853220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72853220 = block;
   block->owner = (Object)__72890100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72853220;

   return block;
};

Block __61581700;

void code__61581700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_61318300_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(abus__r_60054880_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_60055000_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61581700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61581700 = block;
   block->owner = (Object)__62378360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61581700;

   return block;
};

Block __72889180;

void code__72889180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_60055000_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58496_49521120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72889180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72889180 = block;
   block->owner = (Object)__72888980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72889180;

   return block;
};

Block __72888940;

void code__72888940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58496_49521120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,dbus__r_60055000_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72888940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72888940 = block;
   block->owner = (Object)__72888680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72888940;

   return block;
};

Block __72888300;

void code__72888300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_59927960_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72888300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72888300 = block;
   block->owner = (Object)__72888040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72888300;

   return block;
};

Block __72887920;

void code__72887920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,trig__r_59927960_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72887920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72887920 = block;
   block->owner = (Object)__72887640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72887920;

   return block;
};

Block __72887300;

void code__72887300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_60054880_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72887300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72887300 = block;
   block->owner = (Object)__72887140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72887300;

   return block;
};

Block __72887100;

void code__72887100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,abus__r_60054880_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72887100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72887100 = block;
   block->owner = (Object)__72886920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72887100;

   return block;
};

Block __52260380;

void code__52260380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51145480_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(abus__r_62573300_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_62573380_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52260380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52260380 = block;
   block->owner = (Object)__52991540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52260380;

   return block;
};

Block __72885120;

void code__72885120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_62573380_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58511_51932980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72885120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72885120 = block;
   block->owner = (Object)__72884960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72885120;

   return block;
};

Block __72884920;

void code__72884920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58511_51932980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,dbus__r_62573380_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72884920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72884920 = block;
   block->owner = (Object)__72884760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72884920;

   return block;
};

Block __72884320;

void code__72884320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_62375140_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72884320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72884320 = block;
   block->owner = (Object)__72982400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72884320;

   return block;
};

Block __72982340;

void code__72982340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,trig__r_62375140_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72982340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72982340 = block;
   block->owner = (Object)__72982180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72982340;

   return block;
};

Block __72981780;

void code__72981780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_62573300_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72981780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72981780 = block;
   block->owner = (Object)__72981560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72981780;

   return block;
};

Block __72981500;

void code__72981500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,abus__r_62573300_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72981500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72981500 = block;
   block->owner = (Object)__72981160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72981500;

   return block;
};

Block __72979600;

void code__72979600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53228100_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58519_50518500_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72979600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72979600 = block;
   block->owner = (Object)__72979440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72979600;

   return block;
};

Block __72979400;

void code__72979400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58519_50518500_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,reg__0_53228100_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72979400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72979400 = block;
   block->owner = (Object)__72979180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72979400;

   return block;
};

Block __72978680;

void code__72978680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_58456320_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58520_50911980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72978680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72978680 = block;
   block->owner = (Object)__72978460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72978680;

   return block;
};

Block __72978420;

void code__72978420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58520_50911980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,reg__1_58456320_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72978420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72978420 = block;
   block->owner = (Object)__72977940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72978420;

   return block;
};

Block __60320040;

Block __60319760;

Block __60319260;

void code__60319260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73392080(),_58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__60319260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60319260 = block;
   block->owner = (Object)__60319760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60319260;

   return block;
};

void code__60319760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73367700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60319260();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73392000(),_58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__60319760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60319760 = block;
   block->owner = (Object)__60320040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60319760;

   return block;
};

Block __60318320;

Block __60341820;

void code__60341820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73391820(),_58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__60341820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60341820 = block;
   block->owner = (Object)__60318320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60341820;

   return block;
};

void code__60318320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73391900();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60341820();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73391700(),_58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__60318320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60318320 = block;
   block->owner = (Object)__60320040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60318320;

   return block;
};

Block __60341080;

Block __60340560;

void code__60340560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73391520(),_58418_71593180_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__60340560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60340560 = block;
   block->owner = (Object)__60341080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60340560;

   return block;
};

void code__60341080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73391620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60340560();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73391460(),_58417_71593280_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__60341080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60341080 = block;
   block->owner = (Object)__60320040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60341080;

   return block;
};

Block __60338840;

void code__60338840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73391180(),rvok_60320240_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73391100(),lvok0_60320280_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73391040(),wok0_60320220_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73390900(),lvok1_60320260_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73390840(),wok1_60320200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__60338840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60338840 = block;
   block->owner = (Object)__60320040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60338840;

   return block;
};

Block __61092460;

Block __61091840;

Block __61091500;

Block __61090940;

Block __61143740;

Block __61143340;

void code__61143340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58419_71593340_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,rv_60320300_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__73390100(),rvok_60320240_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61143340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61143340 = block;
   block->owner = (Object)__61143740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61143340;

   return block;
};

void code__61143740() {
 code__61143340();
}

Block make__61143740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61143740 = block;
   block->owner = (Object)__61090940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61143740;

   return block;
};

Block __61090780;

void code__61090780() {
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
                  src0 = _58418_71593180_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__73389900();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__73389840();
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
                        src0 = _58418_71593180_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__73389460();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__73389380();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58418_71593180_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73389260(),_58417_71593280_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61090780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61090780 = block;
   block->owner = (Object)__61090940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61090780;

   return block;
};

void code__61090940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58417_71593280_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73390280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61143740();
   }
   else {
  code__61090780();
   }
      }
   }
}

Block make__61090940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61090940 = block;
   block->owner = (Object)__61091500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61090940;

   return block;
};

void code__61091500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73390420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61090940();
   }
      }
   }
}

Block make__61091500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61091500 = block;
   block->owner = (Object)__61091840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61091500;

   return block;
};

void code__61091840() {
 code__61091500();
}

Block make__61091840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61091840 = block;
   block->owner = (Object)__61092460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61091840;

   return block;
};

Block __61384320;

Block __61384060;

Block __61383720;

Block __61405080;

Block __61404860;

void code__61404860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58496_49521120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,lv0_59429140_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__73388800(),lvok0_60320280_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61404860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61404860 = block;
   block->owner = (Object)__61405080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61404860;

   return block;
};

void code__61405080() {
 code__61404860();
}

Block make__61405080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61405080 = block;
   block->owner = (Object)__61383720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61405080;

   return block;
};

Block __61383500;

void code__61383500() {
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
                  src0 = _58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__73388700();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__73388620();
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
                        src0 = _58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__73388220();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__73388160();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73388040(),_58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61383500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61383500 = block;
   block->owner = (Object)__61383720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61383500;

   return block;
};

void code__61383720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73389020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61405080();
   }
   else {
  code__61383500();
   }
      }
   }
}

Block make__61383720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61383720 = block;
   block->owner = (Object)__61384060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61383720;

   return block;
};

void code__61384060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73389120();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61383720();
   }
      }
   }
}

Block make__61384060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61384060 = block;
   block->owner = (Object)__61384320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61384060;

   return block;
};

void code__61384320() {
 code__61384060();
}

Block make__61384320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61384320 = block;
   block->owner = (Object)__61092460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61384320;

   return block;
};

Block __61865720;

Block __61865040;

Block __61864800;

void code__61864800() {
}

Block make__61864800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61864800 = block;
   block->owner = (Object)__61865040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61864800;

   return block;
};

Block __49072720;

void code__49072720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_59819200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58519_50518500_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73386680(),wok0_60320220_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__49072720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49072720 = block;
   block->owner = (Object)__61865040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49072720;

   return block;
};

void code__61865040() {
 code__61864800();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_59819200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
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
                              src0 = lv0_59429140_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_60320300_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__73386860();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_59819200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__49072720();
}

Block make__61865040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61865040 = block;
   block->owner = (Object)__61865720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61865040;

   return block;
};

void code__61865720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73387740(),ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73387660(),run_60320180_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__61865040();
}

Block make__61865720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61865720 = block;
   block->owner = (Object)__61092460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61865720;

   return block;
};

Block __50715700;

void code__50715700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73386520(),wok0_60320220_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73386460(),wok1_60320200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73386380(),lvok0_60320280_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73386300(),lvok1_60320260_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73386220(),rvok_60320240_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50715700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50715700 = block;
   block->owner = (Object)__61092460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50715700;

   return block;
};

Block __50710860;

Block __50710380;

Block __50708860;

Block __50749360;

Block __50748880;

void code__50748880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58511_51932980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,lv1_59616420_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__73385620(),lvok1_60320260_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50748880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50748880 = block;
   block->owner = (Object)__50749360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50748880;

   return block;
};

void code__50749360() {
 code__50748880();
}

Block make__50749360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50749360 = block;
   block->owner = (Object)__50708860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50749360;

   return block;
};

Block __50730880;

void code__50730880() {
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
                  src0 = _58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__73385500();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__73385460();
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
                        src0 = _58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__73385140();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__73385080();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73384940(),_58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50730880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50730880 = block;
   block->owner = (Object)__50708860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50730880;

   return block;
};

void code__50708860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73385800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50749360();
   }
   else {
  code__50730880();
   }
      }
   }
}

Block make__50708860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50708860 = block;
   block->owner = (Object)__50710380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50708860;

   return block;
};

void code__50710380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73385980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50708860();
   }
      }
   }
}

Block make__50710380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50710380 = block;
   block->owner = (Object)__50710860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50710380;

   return block;
};

void code__50710860() {
 code__50710380();
}

Block make__50710860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50710860 = block;
   block->owner = (Object)__61092460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50710860;

   return block;
};

Block __51969040;

Block __51967180;

Block __51966100;

void code__51966100() {
}

Block make__51966100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51966100 = block;
   block->owner = (Object)__51967180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51966100;

   return block;
};

Block __58419800;

void code__58419800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_60035740_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58520_50911980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73408360(),wok1_60320200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__58419800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58419800 = block;
   block->owner = (Object)__51967180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58419800;

   return block;
};

void code__51967180() {
 code__51966100();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_60035740_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
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
                              src0 = lv1_59616420_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_60320300_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__73384080();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_60035740_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__58419800();
}

Block make__51967180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51967180 = block;
   block->owner = (Object)__51969040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51967180;

   return block;
};

void code__51969040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73384580(),ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73384420(),run_60320180_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__51967180();
}

Block make__51969040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51969040 = block;
   block->owner = (Object)__61092460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51969040;

   return block;
};

Block __58744500;

void code__58744500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73408080(),wok0_60320220_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73408020(),wok1_60320200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73407940(),lvok0_60320280_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73407860(),lvok1_60320260_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73407760(),rvok_60320240_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__58744500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58744500 = block;
   block->owner = (Object)__61092460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58744500;

   return block;
};

void code__61092460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73390620(),run_60320180_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_60320240_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61091840();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_60320280_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61384320();
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
               src0 = lvok0_60320280_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               src1 = rvok_60320240_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_60320220_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61865720();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_60320220_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         src1 = wok1_60320200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50715700();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_60320260_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50710860();
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
               src0 = lvok1_60320260_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               src1 = rvok_60320240_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_60320200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51969040();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_60320220_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         src1 = wok1_60320200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58744500();
   }
      }
   }
}

Block make__61092460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61092460 = block;
   block->owner = (Object)__60320040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61092460;

   return block;
};

Block __60337160;

void code__60337160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73407640(),av0_59819200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73407580(),av1_60035740_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__60337160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60337160 = block;
   block->owner = (Object)__60320040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60337160;

   return block;
};

void code__60320040() {
 code__60319760();
 code__60318320();
 code__60341080();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73391380(),ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73391320(),run_60320180_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_60320180_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60338840();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_47376520_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         src1 = run_60320180_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61092460();
   }
   else {
  code__60337160();
   }
      }
   }
}

Block make__60320040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60320040 = block;
   block->owner = (Object)__58741620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60320040;

   return block;
};

Block __59951500;

void code__59951500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_59476280_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(abus__r_59134220_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_59134340_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59951500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59951500 = block;
   block->owner = (Object)__61058520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59951500;

   return block;
};

Block __72975680;

void code__72975680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_59134340_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58560_52421840_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72975680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72975680 = block;
   block->owner = (Object)__72975420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72975680;

   return block;
};

Block __72975320;

void code__72975320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58560_52421840_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,dbus__r_59134340_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72975320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72975320 = block;
   block->owner = (Object)__72975140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72975320;

   return block;
};

Block __72974820;

void code__72974820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_58738620_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72974820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72974820 = block;
   block->owner = (Object)__72974660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72974820;

   return block;
};

Block __72974600;

void code__72974600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,trig__r_58738620_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72974600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72974600 = block;
   block->owner = (Object)__72974400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72974600;

   return block;
};

Block __72998440;

void code__72998440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_59134220_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58559_52421400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72998440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72998440 = block;
   block->owner = (Object)__72998160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72998440;

   return block;
};

Block __72998100;

void code__72998100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58559_52421400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,abus__r_59134220_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72998100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72998100 = block;
   block->owner = (Object)__72997900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72998100;

   return block;
};

Block __62091900;

void code__62091900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_61535600_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(abus__r_61237620_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_61237920_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__62091900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62091900 = block;
   block->owner = (Object)__47463980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62091900;

   return block;
};

Block __72996360;

void code__72996360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_61237920_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58575_53310360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72996360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72996360 = block;
   block->owner = (Object)__72996060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72996360;

   return block;
};

Block __72995940;

void code__72995940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58575_53310360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,dbus__r_61237920_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72995940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72995940 = block;
   block->owner = (Object)__72995580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72995940;

   return block;
};

Block __72995260;

void code__72995260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_61055240_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72995260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72995260 = block;
   block->owner = (Object)__72995080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72995260;

   return block;
};

Block __72995040;

void code__72995040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,trig__r_61055240_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72995040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72995040 = block;
   block->owner = (Object)__72994840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72995040;

   return block;
};

Block __72994420;

void code__72994420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_61237620_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58574_53309420_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72994420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72994420 = block;
   block->owner = (Object)__72994180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72994420;

   return block;
};

Block __72994100;

void code__72994100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58574_53309420_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,abus__r_61237620_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72994100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72994100 = block;
   block->owner = (Object)__72993500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72994100;

   return block;
};

Block __72991500;

void code__72991500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50643900_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58588_52725620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72991500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72991500 = block;
   block->owner = (Object)__72991280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72991500;

   return block;
};

Block __72991240;

void code__72991240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58588_52725620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,reg__0_50643900_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72991240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72991240 = block;
   block->owner = (Object)__72991020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72991240;

   return block;
};

Block __73162620;

void code__73162620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51931060_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58589_53026540_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73162620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73162620 = block;
   block->owner = (Object)__73162400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73162620;

   return block;
};

Block __73162340;

void code__73162340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58589_53026540_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,reg__1_51931060_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73162340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73162340 = block;
   block->owner = (Object)__73162160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73162340;

   return block;
};

Block __61374400;

Block __61374100;

void code__61374100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73404240(),_58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61374100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61374100 = block;
   block->owner = (Object)__61374400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61374100;

   return block;
};

Block __61373520;

void code__61373520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73404160(),_58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61373520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61373520 = block;
   block->owner = (Object)__61374400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61373520;

   return block;
};

Block __61370680;

Block __61370160;

void code__61370160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58519_50518500_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,lv0_59653460_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73402600(),lvok0_61317460_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61370160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61370160 = block;
   block->owner = (Object)__61370680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61370160;

   return block;
};

Block __62441440;

Block __62440900;

Block __62512640;

void code__62512640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58560_52421840_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,rv0_61026800_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73402180(),_58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73402120(),rvok0_61317360_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__62512640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62512640 = block;
   block->owner = (Object)__62440900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62512640;

   return block;
};

Block __62440700;

void code__62440700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73402060(),_58559_52421400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73402000(),_58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__62440700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62440700 = block;
   block->owner = (Object)__62440900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62440700;

   return block;
};

void code__62440900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73402340();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62512640();
   }
   else {
  code__62440700();
   }
      }
   }
}

Block make__62440900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62440900 = block;
   block->owner = (Object)__62441440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62440900;

   return block;
};

void code__62441440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58561_52421760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73402480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62440900();
   }
      }
   }
}

Block make__62441440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62441440 = block;
   block->owner = (Object)__61370680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62441440;

   return block;
};

Block __50728600;

Block __50699600;

void code__50699600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_59653460_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      src1 = rv0_61026800_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58588_52725620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50699600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50699600 = block;
   block->owner = (Object)__50728600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50699600;

   return block;
};

void code__50728600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73401820(),run_61317240_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73401720(),ack__add_47375940_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__50699600();
}

Block make__50728600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50728600 = block;
   block->owner = (Object)__61370680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50728600;

   return block;
};

Block __58655700;

void code__58655700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58520_50911980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,lv1_60070360_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73401280(),lvok1_61317400_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__58655700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58655700 = block;
   block->owner = (Object)__61370680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58655700;

   return block;
};

Block __59665400;

Block __59664180;

Block __59662720;

void code__59662720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58575_53310360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,rv1_61317480_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73400920(),_58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73400820(),rvok1_61317260_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59662720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59662720 = block;
   block->owner = (Object)__59664180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59662720;

   return block;
};

Block __59663920;

void code__59663920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73400740(),_58574_53309420_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73400620(),_58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59663920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59663920 = block;
   block->owner = (Object)__59664180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59663920;

   return block;
};

void code__59664180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73401100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59662720();
   }
   else {
  code__59663920();
   }
      }
   }
}

Block make__59664180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59664180 = block;
   block->owner = (Object)__59665400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59664180;

   return block;
};

void code__59665400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58576_53310320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73401200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59664180();
   }
      }
   }
}

Block make__59665400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59665400 = block;
   block->owner = (Object)__61370680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59665400;

   return block;
};

Block __61220520;

Block __61219580;

void code__61219580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_60070360_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      src1 = rv1_61317480_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58589_53026540_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61219580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61219580 = block;
   block->owner = (Object)__61220520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61219580;

   return block;
};

void code__61220520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73424800(),run_61317240_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73424720(),ack__add_47375940_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__61219580();
}

Block make__61220520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61220520 = block;
   block->owner = (Object)__61370680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61220520;

   return block;
};

void code__61370680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73402960(),run_61317240_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__61370160();
 code__62441440();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_61317460_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         src1 = rvok0_61317360_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50728600();
   }
      }
   }
 code__58655700();
 code__59665400();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_61317400_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         src1 = rvok1_61317260_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61220520();
   }
      }
   }
}

Block make__61370680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61370680 = block;
   block->owner = (Object)__61374400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61370680;

   return block;
};

Block __61372400;

void code__61372400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73424440(),lvok0_61317460_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73424340(),rvok0_61317360_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73424280(),lvok1_61317400_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73424220(),rvok1_61317260_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61372400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61372400 = block;
   block->owner = (Object)__61374400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61372400;

   return block;
};

void code__61374400() {
 code__61374100();
 code__61373520();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73404080(),ack__add_47375940_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73403980(),run_61317240_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_47376320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         src1 = run_61317240_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61370680();
   }
   else {
  code__61372400();
   }
      }
   }
}

Block make__61374400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61374400 = block;
   block->owner = (Object)__47328400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61374400;

   return block;
};

Value make__73371220() {
   static unsigned long long data[] = { 4294967267ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73371200() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73369720() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73369700() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73407560() {
   static unsigned long long data[] = { 5ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__73406360() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__73367700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73392080() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73392000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73391900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73391820() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73391700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73391620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73391520() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73391460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73391380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73391320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73391180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73391100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73391040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73390900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73390840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73390620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73390420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73390280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73390100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73389900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73389840() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73389460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73389380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73389260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73389120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73389020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73388800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73388700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73388620() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73388220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73388160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73388040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73387740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73387660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73386860() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73386680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73386520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73386460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73386380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73386300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73386220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73385980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73385800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73385620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73385500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73385460() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73385140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73385080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73384940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73384580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73384420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73384080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73408360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73408080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73408020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73407940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73407860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73407760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73407640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73407580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__73404240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73404160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73404080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73403980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73402960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73402600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73402480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73402340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73402180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73402120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73402060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73402000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73401820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73401720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73401280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73401200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73401100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73400920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73400820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73400740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__73400620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73424800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73424720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73424440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73424340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73424280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73424220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73422360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73422300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73422240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73421980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73421700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73421640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73421580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73421480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73421380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73421100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73420940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_840_59835720;

SignalI req__mac_47376520_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makereq__mac_47376520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_47376520_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
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

SignalI ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack_47376400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
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

SignalI ack__mac_47376320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack__mac_47376320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_47376320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
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

SignalI ack__add_47375940_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack__add_47375940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_47375940_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
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

SignalI _58496_49521120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58496_49521120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58496_49521120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":496";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58494_49521060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":494";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58495_49520880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":495";
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

SignalI _58519_50518500_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58519_50518500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58519_50518500_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":519";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58520_50911980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58520_50911980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58520_50911980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":520";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58511_51932980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58511_51932980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58511_51932980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":511";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58509_51932880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":509";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58510_51932480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":510";
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

SignalI _58560_52421840_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58560_52421840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58560_52421840_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":560";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58561_52421760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58561_52421760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58561_52421760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":561";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58558_52421740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":558";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58559_52421400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58559_52421400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58559_52421400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":559";
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

SignalI _58588_52725620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58588_52725620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58588_52725620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":588";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58589_53026540_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58589_53026540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58589_53026540_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":589";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58575_53310360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58575_53310360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58575_53310360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":575";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58576_53310320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58576_53310320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58576_53310320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":576";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58573_53310220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":573";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58574_53309420_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58574_53309420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58574_53309420_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
   signalI->name = ":574";
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

SignalI value__z0_58505820_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makevalue__z0_58505820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_58505820_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
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

SignalI value__z1_58671440_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makevalue__z1_58671440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_58671440_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
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

SignalI value__a0_59051320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makevalue__a0_59051320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_59051320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
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

SignalI value__a1_59266740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makevalue__a1_59266740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_59266740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
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

SignalI flag__z0_59266720_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeflag__z0_59266720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_59266720_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
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

SignalI flag__z1_59266680_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeflag__z1_59266680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_59266680_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
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

SignalI ack__a0_59266640_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack__a0_59266640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_59266640_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
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

SignalI ack__a1_59266620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack__a1_59266620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_59266620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_840_59835720;
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

SystemI counter_59293900;

SystemI makecounter_59293900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_59293900 = systemI;
   systemI->owner = (Object)layer0_58_840_59835720;
   systemI->name = "counter";
   systemI->system = counter_58_8410_59298260;

   return systemI;
};

SystemI func0_61782840;

SystemI makefunc0_61782840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_61782840 = systemI;
   systemI->owner = (Object)layer0_58_840_59835720;
   systemI->name = "func0";
   systemI->system = func0_58_8410_61285300;

   return systemI;
};

SystemI func1_69270780;

SystemI makefunc1_69270780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_69270780 = systemI;
   systemI->owner = (Object)layer0_58_840_59835720;
   systemI->name = "func1";
   systemI->system = func1_58_8400_69007700;

   return systemI;
};

Scope channel__w0_58487_59834900;

SignalI trig__r_59927960_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI maketrig__r_59927960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_59927960_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58487_59834900;
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

SignalI dbus__r_60055000_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makedbus__r_60055000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_60055000_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58487_59834900;
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

SignalI abus__r_60054880_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_60054880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_60054880_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58487_59834900;
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

SignalI mem_61318300_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makemem_61318300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_61318300_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58487_59834900;
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
         src0 = make__73371220();
         src1 = make__73371200();
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

Scope raddr_58488_59932300;

Scope makeraddr_58488_59932300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58488_59932300 = scope;
   scope->owner = (Object)channel__w0_58487_59834900;
   scope->name = "raddr:488";
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

Scope rinc_58493_59930720;

Scope makerinc_58493_59930720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58493_59930720 = scope;
   scope->owner = (Object)channel__w0_58487_59834900;
   scope->name = "rinc:493";
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

Scope rdec_58497_59930200;

Scope makerdec_58497_59930200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58497_59930200 = scope;
   scope->owner = (Object)channel__w0_58487_59834900;
   scope->name = "rdec:497";
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

Behavior __62378360;

Behavior make__62378360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62378360 = behavior;
   behavior->owner = (Object)channel__w0_58487_59834900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg = realloc(clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg[clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__61581700();

   return behavior;
}

Behavior __72888980;

Behavior make__72888980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72888980 = behavior;
   behavior->owner = (Object)channel__w0_58487_59834900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_60055000_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   dbus__r_60055000_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__r_60055000_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(dbus__r_60055000_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,dbus__r_60055000_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__r_60055000_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[dbus__r_60055000_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72889180();

   return behavior;
}

Behavior __72888680;

Behavior make__72888680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72888680 = behavior;
   behavior->owner = (Object)channel__w0_58487_59834900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58496_49521120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58496_49521120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58496_49521120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58496_49521120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58496_49521120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58496_49521120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58496_49521120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72888940();

   return behavior;
}

Behavior __72888040;

Behavior make__72888040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72888040 = behavior;
   behavior->owner = (Object)channel__w0_58487_59834900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_59927960_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   trig__r_59927960_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   trig__r_59927960_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(trig__r_59927960_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,trig__r_59927960_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
trig__r_59927960_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[trig__r_59927960_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72888300();

   return behavior;
}

Behavior __72887640;

Behavior make__72887640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72887640 = behavior;
   behavior->owner = (Object)channel__w0_58487_59834900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58494_49521060_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72887920();

   return behavior;
}

Behavior __72887140;

Behavior make__72887140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72887140 = behavior;
   behavior->owner = (Object)channel__w0_58487_59834900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_60054880_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   abus__r_60054880_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_60054880_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(abus__r_60054880_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,abus__r_60054880_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_60054880_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[abus__r_60054880_channel__w0_58487_59834900_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72887300();

   return behavior;
}

Behavior __72886920;

Behavior make__72886920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72886920 = behavior;
   behavior->owner = (Object)channel__w0_58487_59834900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58495_49520880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72887100();

   return behavior;
}

Scope makechannel__w0_58487_59834900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58487_59834900 = scope;
   scope->owner = (Object)layer0_58_840_59835720;
   scope->name = "channel_w0:487";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_59927960();
   scope->inners[1] = makedbus__r_60055000();
   scope->inners[2] = makeabus__r_60054880();
   scope->inners[3] = makemem_61318300();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58488_59932300();
   scope->scopes[1] = makerinc_58493_59930720();
   scope->scopes[2] = makerdec_58497_59930200();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62378360();
   scope->behaviors[1] = make__72888980();
   scope->behaviors[2] = make__72888680();
   scope->behaviors[3] = make__72888040();
   scope->behaviors[4] = make__72887640();
   scope->behaviors[5] = make__72887140();
   scope->behaviors[6] = make__72886920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58502_62377920;

SignalI trig__r_62375140_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI maketrig__r_62375140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_62375140_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w1_58502_62377920;
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

SignalI dbus__r_62573380_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makedbus__r_62573380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_62573380_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w1_58502_62377920;
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

SignalI abus__r_62573300_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_62573300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62573300_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w1_58502_62377920;
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

SignalI mem_51145480_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makemem_51145480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51145480_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w1_58502_62377920;
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
         src0 = make__73369720();
         src1 = make__73369700();
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

Scope raddr_58503_62377580;

Scope makeraddr_58503_62377580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58503_62377580 = scope;
   scope->owner = (Object)channel__w1_58502_62377920;
   scope->name = "raddr:503";
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

Scope rinc_58508_62377080;

Scope makerinc_58508_62377080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58508_62377080 = scope;
   scope->owner = (Object)channel__w1_58502_62377920;
   scope->name = "rinc:508";
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

Scope rdec_58512_62376320;

Scope makerdec_58512_62376320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58512_62376320 = scope;
   scope->owner = (Object)channel__w1_58502_62377920;
   scope->name = "rdec:512";
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

Behavior __52991540;

Behavior make__52991540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52991540 = behavior;
   behavior->owner = (Object)channel__w1_58502_62377920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg = realloc(clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg[clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__52260380();

   return behavior;
}

Behavior __72884960;

Behavior make__72884960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72884960 = behavior;
   behavior->owner = (Object)channel__w1_58502_62377920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_62573380_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   dbus__r_62573380_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__r_62573380_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(dbus__r_62573380_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,dbus__r_62573380_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__r_62573380_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[dbus__r_62573380_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72885120();

   return behavior;
}

Behavior __72884760;

Behavior make__72884760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72884760 = behavior;
   behavior->owner = (Object)channel__w1_58502_62377920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58511_51932980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58511_51932980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58511_51932980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58511_51932980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58511_51932980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58511_51932980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58511_51932980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72884920();

   return behavior;
}

Behavior __72982400;

Behavior make__72982400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72982400 = behavior;
   behavior->owner = (Object)channel__w1_58502_62377920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_62375140_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   trig__r_62375140_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   trig__r_62375140_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(trig__r_62375140_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,trig__r_62375140_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
trig__r_62375140_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[trig__r_62375140_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72884320();

   return behavior;
}

Behavior __72982180;

Behavior make__72982180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72982180 = behavior;
   behavior->owner = (Object)channel__w1_58502_62377920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58509_51932880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72982340();

   return behavior;
}

Behavior __72981560;

Behavior make__72981560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72981560 = behavior;
   behavior->owner = (Object)channel__w1_58502_62377920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_62573300_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   abus__r_62573300_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_62573300_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(abus__r_62573300_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,abus__r_62573300_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_62573300_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[abus__r_62573300_channel__w1_58502_62377920_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72981780();

   return behavior;
}

Behavior __72981160;

Behavior make__72981160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72981160 = behavior;
   behavior->owner = (Object)channel__w1_58502_62377920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58510_51932480_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72981500();

   return behavior;
}

Scope makechannel__w1_58502_62377920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58502_62377920 = scope;
   scope->owner = (Object)layer0_58_840_59835720;
   scope->name = "channel_w1:502";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_62375140();
   scope->inners[1] = makedbus__r_62573380();
   scope->inners[2] = makeabus__r_62573300();
   scope->inners[3] = makemem_51145480();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58503_62377580();
   scope->scopes[1] = makerinc_58508_62377080();
   scope->scopes[2] = makerdec_58512_62376320();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52991540();
   scope->behaviors[1] = make__72884960();
   scope->behaviors[2] = make__72884760();
   scope->behaviors[3] = make__72982400();
   scope->behaviors[4] = make__72982180();
   scope->behaviors[5] = make__72981560();
   scope->behaviors[6] = make__72981160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58517_52991120;

SignalI reg__0_53228100_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makereg__0_53228100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53228100_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__accum_58517_52991120;
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

SignalI reg__1_58456320_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makereg__1_58456320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_58456320_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__accum_58517_52991120;
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

Scope anum_58518_52990480;

Scope makeanum_58518_52990480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58518_52990480 = scope;
   scope->owner = (Object)channel__accum_58517_52991120;
   scope->name = "anum:518";
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

Scope raddr_58521_52989480;

Scope makeraddr_58521_52989480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58521_52989480 = scope;
   scope->owner = (Object)channel__accum_58517_52991120;
   scope->name = "raddr:521";
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

Scope waddr_58525_52987840;

Scope makewaddr_58525_52987840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58525_52987840 = scope;
   scope->owner = (Object)channel__accum_58517_52991120;
   scope->name = "waddr:525";
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

Scope rinc_58529_52986820;

SignalI abus__r_52985940_rinc_58529_52986820_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_52985940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52985940_rinc_58529_52986820_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rinc_58529_52986820;
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

Scope makerinc_58529_52986820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58529_52986820 = scope;
   scope->owner = (Object)channel__accum_58517_52991120;
   scope->name = "rinc:529";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52985940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58534_53010240;

SignalI abus__w_53008920_winc_58534_53010240_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__w_53008920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53008920_winc_58534_53010240_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)winc_58534_53010240;
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

Scope makewinc_58534_53010240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58534_53010240 = scope;
   scope->owner = (Object)channel__accum_58517_52991120;
   scope->name = "winc:534";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53008920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58539_53008580;

SignalI abus__r_53007640_rdec_58539_53008580_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_53007640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53007640_rdec_58539_53008580_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rdec_58539_53008580;
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

Scope makerdec_58539_53008580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58539_53008580 = scope;
   scope->owner = (Object)channel__accum_58517_52991120;
   scope->name = "rdec:539";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53007640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58544_53007360;

SignalI abus__w_53005880_wdec_58544_53007360_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__w_53005880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53005880_wdec_58544_53007360_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)wdec_58544_53007360;
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

Scope makewdec_58544_53007360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58544_53007360 = scope;
   scope->owner = (Object)channel__accum_58517_52991120;
   scope->name = "wdec:544";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53005880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __72979440;

Behavior make__72979440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72979440 = behavior;
   behavior->owner = (Object)channel__accum_58517_52991120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53228100_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   reg__0_53228100_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   reg__0_53228100_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(reg__0_53228100_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,reg__0_53228100_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__0_53228100_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[reg__0_53228100_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72979600();

   return behavior;
}

Behavior __72979180;

Behavior make__72979180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72979180 = behavior;
   behavior->owner = (Object)channel__accum_58517_52991120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58519_50518500_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58519_50518500_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58519_50518500_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58519_50518500_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58519_50518500_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58519_50518500_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58519_50518500_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72979400();

   return behavior;
}

Behavior __72978460;

Behavior make__72978460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72978460 = behavior;
   behavior->owner = (Object)channel__accum_58517_52991120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_58456320_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   reg__1_58456320_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   reg__1_58456320_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(reg__1_58456320_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,reg__1_58456320_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__1_58456320_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[reg__1_58456320_channel__accum_58517_52991120_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72978680();

   return behavior;
}

Behavior __72977940;

Behavior make__72977940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72977940 = behavior;
   behavior->owner = (Object)channel__accum_58517_52991120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58520_50911980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58520_50911980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58520_50911980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58520_50911980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58520_50911980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58520_50911980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58520_50911980_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72978420();

   return behavior;
}

Scope makechannel__accum_58517_52991120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58517_52991120 = scope;
   scope->owner = (Object)layer0_58_840_59835720;
   scope->name = "channel_accum:517";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53228100();
   scope->inners[1] = makereg__1_58456320();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58518_52990480();
   scope->scopes[1] = makeraddr_58521_52989480();
   scope->scopes[2] = makewaddr_58525_52987840();
   scope->scopes[3] = makerinc_58529_52986820();
   scope->scopes[4] = makewinc_58534_53010240();
   scope->scopes[5] = makerdec_58539_53008580();
   scope->scopes[6] = makewdec_58544_53007360();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__72979440();
   scope->behaviors[1] = make__72979180();
   scope->behaviors[2] = make__72978460();
   scope->behaviors[3] = make__72977940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58549_59212760;

SignalI lv0_59429140_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelv0_59429140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_59429140_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58549_59212760;
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

SignalI lv1_59616420_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelv1_59616420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_59616420_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58549_59212760;
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

SignalI av0_59819200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeav0_59819200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_59819200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58549_59212760;
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

SignalI av1_60035740_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeav1_60035740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_60035740_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58549_59212760;
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

SignalI rv_60320300_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makerv_60320300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_60320300_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58549_59212760;
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

SignalI lvok0_60320280_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelvok0_60320280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_60320280_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58549_59212760;
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

SignalI lvok1_60320260_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelvok1_60320260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_60320260_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58549_59212760;
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

SignalI rvok_60320240_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makervok_60320240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_60320240_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58549_59212760;
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

SignalI wok0_60320220_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makewok0_60320220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_60320220_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58549_59212760;
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

SignalI wok1_60320200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makewok1_60320200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_60320200_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58549_59212760;
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

SignalI run_60320180_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makerun_60320180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_60320180_mac__n1_58549_59212760_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58549_59212760;
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

Behavior __58741620;

Behavior make__58741620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58741620 = behavior;
   behavior->owner = (Object)mac__n1_58549_59212760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos = realloc(clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos[clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__60320040();

   return behavior;
}

Scope makemac__n1_58549_59212760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58549_59212760 = scope;
   scope->owner = (Object)layer0_58_840_59835720;
   scope->name = "mac_n1:549";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_59429140();
   scope->inners[1] = makelv1_59616420();
   scope->inners[2] = makeav0_59819200();
   scope->inners[3] = makeav1_60035740();
   scope->inners[4] = makerv_60320300();
   scope->inners[5] = makelvok0_60320280();
   scope->inners[6] = makelvok1_60320260();
   scope->inners[7] = makervok_60320240();
   scope->inners[8] = makewok0_60320220();
   scope->inners[9] = makewok1_60320200();
   scope->inners[10] = makerun_60320180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58741620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58556_58741280;

SignalI trig__r_58738620_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI maketrig__r_58738620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_58738620_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58556_58741280;
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

SignalI dbus__r_59134340_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makedbus__r_59134340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_59134340_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58556_58741280;
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

SignalI abus__r_59134220_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_59134220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59134220_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58556_58741280;
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

SignalI mem_59476280_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makemem_59476280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_59476280_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58556_58741280;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__73407560(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58557_58740740;

Scope makeraddr_58557_58740740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58557_58740740 = scope;
   scope->owner = (Object)channel__b0_58556_58741280;
   scope->name = "raddr:557";
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

Scope rinc_58562_58740120;

Scope makerinc_58562_58740120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58562_58740120 = scope;
   scope->owner = (Object)channel__b0_58556_58741280;
   scope->name = "rinc:562";
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

Scope rdec_58566_58739340;

Scope makerdec_58566_58739340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58566_58739340 = scope;
   scope->owner = (Object)channel__b0_58556_58741280;
   scope->name = "rdec:566";
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

Behavior __61058520;

Behavior make__61058520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61058520 = behavior;
   behavior->owner = (Object)channel__b0_58556_58741280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg = realloc(clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg[clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__59951500();

   return behavior;
}

Behavior __72975420;

Behavior make__72975420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72975420 = behavior;
   behavior->owner = (Object)channel__b0_58556_58741280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_59134340_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   dbus__r_59134340_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__r_59134340_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(dbus__r_59134340_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,dbus__r_59134340_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__r_59134340_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[dbus__r_59134340_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72975680();

   return behavior;
}

Behavior __72975140;

Behavior make__72975140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72975140 = behavior;
   behavior->owner = (Object)channel__b0_58556_58741280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58560_52421840_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58560_52421840_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58560_52421840_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58560_52421840_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58560_52421840_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58560_52421840_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58560_52421840_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72975320();

   return behavior;
}

Behavior __72974660;

Behavior make__72974660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72974660 = behavior;
   behavior->owner = (Object)channel__b0_58556_58741280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_58738620_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   trig__r_58738620_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   trig__r_58738620_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(trig__r_58738620_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,trig__r_58738620_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
trig__r_58738620_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[trig__r_58738620_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72974820();

   return behavior;
}

Behavior __72974400;

Behavior make__72974400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72974400 = behavior;
   behavior->owner = (Object)channel__b0_58556_58741280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58558_52421740_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72974600();

   return behavior;
}

Behavior __72998160;

Behavior make__72998160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72998160 = behavior;
   behavior->owner = (Object)channel__b0_58556_58741280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_59134220_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   abus__r_59134220_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_59134220_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(abus__r_59134220_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,abus__r_59134220_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_59134220_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[abus__r_59134220_channel__b0_58556_58741280_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72998440();

   return behavior;
}

Behavior __72997900;

Behavior make__72997900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72997900 = behavior;
   behavior->owner = (Object)channel__b0_58556_58741280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58559_52421400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58559_52421400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58559_52421400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58559_52421400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58559_52421400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58559_52421400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58559_52421400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72998100();

   return behavior;
}

Scope makechannel__b0_58556_58741280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58556_58741280 = scope;
   scope->owner = (Object)layer0_58_840_59835720;
   scope->name = "channel_b0:556";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_58738620();
   scope->inners[1] = makedbus__r_59134340();
   scope->inners[2] = makeabus__r_59134220();
   scope->inners[3] = makemem_59476280();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58557_58740740();
   scope->scopes[1] = makerinc_58562_58740120();
   scope->scopes[2] = makerdec_58566_58739340();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61058520();
   scope->behaviors[1] = make__72975420();
   scope->behaviors[2] = make__72975140();
   scope->behaviors[3] = make__72974660();
   scope->behaviors[4] = make__72974400();
   scope->behaviors[5] = make__72998160();
   scope->behaviors[6] = make__72997900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58571_61058360;

SignalI trig__r_61055240_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI maketrig__r_61055240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_61055240_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b1_58571_61058360;
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

SignalI dbus__r_61237920_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makedbus__r_61237920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_61237920_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b1_58571_61058360;
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

SignalI abus__r_61237620_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_61237620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_61237620_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b1_58571_61058360;
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

SignalI mem_61535600_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makemem_61535600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_61535600_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b1_58571_61058360;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__73406360(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58572_61057820;

Scope makeraddr_58572_61057820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58572_61057820 = scope;
   scope->owner = (Object)channel__b1_58571_61058360;
   scope->name = "raddr:572";
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

Scope rinc_58577_61057320;

Scope makerinc_58577_61057320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58577_61057320 = scope;
   scope->owner = (Object)channel__b1_58571_61058360;
   scope->name = "rinc:577";
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

Scope rdec_58581_61056040;

Scope makerdec_58581_61056040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58581_61056040 = scope;
   scope->owner = (Object)channel__b1_58571_61058360;
   scope->name = "rdec:581";
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

Behavior __47463980;

Behavior make__47463980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47463980 = behavior;
   behavior->owner = (Object)channel__b1_58571_61058360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg = realloc(clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg[clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__62091900();

   return behavior;
}

Behavior __72996060;

Behavior make__72996060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72996060 = behavior;
   behavior->owner = (Object)channel__b1_58571_61058360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_61237920_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   dbus__r_61237920_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__r_61237920_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(dbus__r_61237920_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,dbus__r_61237920_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__r_61237920_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[dbus__r_61237920_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72996360();

   return behavior;
}

Behavior __72995580;

Behavior make__72995580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72995580 = behavior;
   behavior->owner = (Object)channel__b1_58571_61058360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58575_53310360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58575_53310360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58575_53310360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58575_53310360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58575_53310360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58575_53310360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58575_53310360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72995940();

   return behavior;
}

Behavior __72995080;

Behavior make__72995080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72995080 = behavior;
   behavior->owner = (Object)channel__b1_58571_61058360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_61055240_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   trig__r_61055240_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   trig__r_61055240_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(trig__r_61055240_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,trig__r_61055240_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
trig__r_61055240_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[trig__r_61055240_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72995260();

   return behavior;
}

Behavior __72994840;

Behavior make__72994840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72994840 = behavior;
   behavior->owner = (Object)channel__b1_58571_61058360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58573_53310220_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72995040();

   return behavior;
}

Behavior __72994180;

Behavior make__72994180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72994180 = behavior;
   behavior->owner = (Object)channel__b1_58571_61058360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_61237620_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   abus__r_61237620_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_61237620_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(abus__r_61237620_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,abus__r_61237620_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_61237620_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[abus__r_61237620_channel__b1_58571_61058360_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72994420();

   return behavior;
}

Behavior __72993500;

Behavior make__72993500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72993500 = behavior;
   behavior->owner = (Object)channel__b1_58571_61058360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58574_53309420_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58574_53309420_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58574_53309420_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58574_53309420_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58574_53309420_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58574_53309420_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58574_53309420_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72994100();

   return behavior;
}

Scope makechannel__b1_58571_61058360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58571_61058360 = scope;
   scope->owner = (Object)layer0_58_840_59835720;
   scope->name = "channel_b1:571";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_61055240();
   scope->inners[1] = makedbus__r_61237920();
   scope->inners[2] = makeabus__r_61237620();
   scope->inners[3] = makemem_61535600();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58572_61057820();
   scope->scopes[1] = makerinc_58577_61057320();
   scope->scopes[2] = makerdec_58581_61056040();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47463980();
   scope->behaviors[1] = make__72996060();
   scope->behaviors[2] = make__72995580();
   scope->behaviors[3] = make__72995080();
   scope->behaviors[4] = make__72994840();
   scope->behaviors[5] = make__72994180();
   scope->behaviors[6] = make__72993500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58586_47461880;

SignalI reg__0_50643900_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makereg__0_50643900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50643900_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__z_58586_47461880;
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

SignalI reg__1_51931060_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makereg__1_51931060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51931060_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__z_58586_47461880;
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

Scope anum_58587_47459640;

Scope makeanum_58587_47459640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58587_47459640 = scope;
   scope->owner = (Object)channel__z_58586_47461880;
   scope->name = "anum:587";
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

Scope raddr_58590_47621400;

Scope makeraddr_58590_47621400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58590_47621400 = scope;
   scope->owner = (Object)channel__z_58586_47461880;
   scope->name = "raddr:590";
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

Scope waddr_58594_47851400;

Scope makewaddr_58594_47851400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58594_47851400 = scope;
   scope->owner = (Object)channel__z_58586_47461880;
   scope->name = "waddr:594";
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

Scope rinc_58598_48714120;

SignalI abus__r_48840320_rinc_58598_48714120_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_48840320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48840320_rinc_58598_48714120_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rinc_58598_48714120;
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

Scope makerinc_58598_48714120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58598_48714120 = scope;
   scope->owner = (Object)channel__z_58586_47461880;
   scope->name = "rinc:598";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48840320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58602_48839720;

SignalI abus__w_48835700_winc_58602_48839720_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__w_48835700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48835700_winc_58602_48839720_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)winc_58602_48839720;
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

Scope makewinc_58602_48839720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58602_48839720 = scope;
   scope->owner = (Object)channel__z_58586_47461880;
   scope->name = "winc:602";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48835700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58606_48835400;

SignalI abus__r_48867660_rdec_58606_48835400_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_48867660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48867660_rdec_58606_48835400_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rdec_58606_48835400;
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

Scope makerdec_58606_48835400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58606_48835400 = scope;
   scope->owner = (Object)channel__z_58586_47461880;
   scope->name = "rdec:606";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48867660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58611_48929980;

SignalI abus__w_48925320_wdec_58611_48929980_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__w_48925320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48925320_wdec_58611_48929980_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)wdec_58611_48929980;
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

Scope makewdec_58611_48929980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58611_48929980 = scope;
   scope->owner = (Object)channel__z_58586_47461880;
   scope->name = "wdec:611";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48925320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __72991280;

Behavior make__72991280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72991280 = behavior;
   behavior->owner = (Object)channel__z_58586_47461880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50643900_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   reg__0_50643900_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   reg__0_50643900_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(reg__0_50643900_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,reg__0_50643900_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__0_50643900_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[reg__0_50643900_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72991500();

   return behavior;
}

Behavior __72991020;

Behavior make__72991020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72991020 = behavior;
   behavior->owner = (Object)channel__z_58586_47461880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58588_52725620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58588_52725620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58588_52725620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58588_52725620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58588_52725620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58588_52725620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58588_52725620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72991240();

   return behavior;
}

Behavior __73162400;

Behavior make__73162400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73162400 = behavior;
   behavior->owner = (Object)channel__z_58586_47461880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51931060_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   reg__1_51931060_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   reg__1_51931060_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(reg__1_51931060_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,reg__1_51931060_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__1_51931060_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[reg__1_51931060_channel__z_58586_47461880_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73162620();

   return behavior;
}

Behavior __73162160;

Behavior make__73162160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73162160 = behavior;
   behavior->owner = (Object)channel__z_58586_47461880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58589_53026540_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58589_53026540_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58589_53026540_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58589_53026540_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58589_53026540_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58589_53026540_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58589_53026540_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73162340();

   return behavior;
}

Scope makechannel__z_58586_47461880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58586_47461880 = scope;
   scope->owner = (Object)layer0_58_840_59835720;
   scope->name = "channel_z:586";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50643900();
   scope->inners[1] = makereg__1_51931060();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58587_47459640();
   scope->scopes[1] = makeraddr_58590_47621400();
   scope->scopes[2] = makewaddr_58594_47851400();
   scope->scopes[3] = makerinc_58598_48714120();
   scope->scopes[4] = makewinc_58602_48839720();
   scope->scopes[5] = makerdec_58606_48835400();
   scope->scopes[6] = makewdec_58611_48929980();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__72991280();
   scope->behaviors[1] = make__72991020();
   scope->behaviors[2] = make__73162400();
   scope->behaviors[3] = make__73162160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58616_59166380;

SignalI lv0_59653460_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelv0_59653460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_59653460_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58616_59166380;
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

SignalI lv1_60070360_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelv1_60070360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_60070360_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58616_59166380;
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

SignalI rv0_61026800_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makerv0_61026800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_61026800_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58616_59166380;
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

SignalI rv1_61317480_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makerv1_61317480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_61317480_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58616_59166380;
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

SignalI lvok0_61317460_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelvok0_61317460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_61317460_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58616_59166380;
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

SignalI lvok1_61317400_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelvok1_61317400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_61317400_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58616_59166380;
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

SignalI rvok0_61317360_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makervok0_61317360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_61317360_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58616_59166380;
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

SignalI rvok1_61317260_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makervok1_61317260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_61317260_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58616_59166380;
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

SignalI run_61317240_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makerun_61317240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_61317240_add__n_58616_59166380_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58616_59166380;
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

Behavior __47328400;

Behavior make__47328400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47328400 = behavior;
   behavior->owner = (Object)add__n_58616_59166380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos = realloc(clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos[clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__61374400();

   return behavior;
}

Scope makeadd__n_58616_59166380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58616_59166380 = scope;
   scope->owner = (Object)layer0_58_840_59835720;
   scope->name = "add_n:616";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_59653460();
   scope->inners[1] = makelv1_60070360();
   scope->inners[2] = makerv0_61026800();
   scope->inners[3] = makerv1_61317480();
   scope->inners[4] = makelvok0_61317460();
   scope->inners[5] = makelvok1_61317400();
   scope->inners[6] = makervok0_61317360();
   scope->inners[7] = makervok1_61317260();
   scope->inners[8] = makerun_61317240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47328400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __70360320;

Behavior make__70360320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70360320 = behavior;
   behavior->owner = (Object)layer0_58_840_59835720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos = realloc(clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos[clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__70337160();

   return behavior;
}

Behavior __70896180;

Behavior make__70896180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70896180 = behavior;
   behavior->owner = (Object)layer0_58_840_59835720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos = realloc(clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos[clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__70360200();

   return behavior;
}

Behavior __71480960;

Behavior make__71480960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71480960 = behavior;
   behavior->owner = (Object)layer0_58_840_59835720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos = realloc(clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos[clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__70896020();

   return behavior;
}

Behavior __72852740;

Behavior make__72852740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72852740 = behavior;
   behavior->owner = (Object)layer0_58_840_59835720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_71478440_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   req_71478440_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   req_71478440_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(req_71478440_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,req_71478440_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
req_71478440_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[req_71478440_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_47376320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   ack__mac_47376320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   ack__mac_47376320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(ack__mac_47376320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,ack__mac_47376320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__mac_47376320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[ack__mac_47376320_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72852980();

   return behavior;
}

Behavior __72890300;

Behavior make__72890300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72890300 = behavior;
   behavior->owner = (Object)layer0_58_840_59835720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[clk_71478500_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[ack_47376400_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_58505820_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   value__z0_58505820_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   value__z0_58505820_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(value__z0_58505820_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,value__z0_58505820_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
value__z0_58505820_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[value__z0_58505820_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_58671440_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   value__z1_58671440_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   value__z1_58671440_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(value__z1_58671440_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,value__z1_58671440_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
value__z1_58671440_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[value__z1_58671440_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_59266640_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   ack__a0_59266640_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   ack__a0_59266640_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(ack__a0_59266640_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,ack__a0_59266640_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__a0_59266640_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[ack__a0_59266640_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_59266620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   ack__a1_59266620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   ack__a1_59266620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(ack__a1_59266620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,ack__a1_59266620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__a1_59266620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[ack__a1_59266620_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72853300();

   return behavior;
}

Behavior __72890100;

Behavior make__72890100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __72890100 = behavior;
   behavior->owner = (Object)layer0_58_840_59835720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_59294400_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   ack__mac_59294400_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   ack__mac_59294400_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(ack__mac_59294400_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,ack__mac_59294400_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__mac_59294400_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[ack__mac_59294400_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[rst_71478480_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_61783040_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   a_61783040_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   a_61783040_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(a_61783040_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,a_61783040_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
a_61783040_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[a_61783040_func0_58_8410_61285300_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_69270920_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   a_69270920_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   a_69270920_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(a_69270920_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,a_69270920_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
a_69270920_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[a_69270920_func1_58_8400_69007700_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__72853220();

   return behavior;
}

Scope makelayer0_58_840_59835720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_840_59835720 = scope;
   scope->owner = (Object)layer0_58_8400_71480580;
   scope->name = "layer0:T0";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_59293900();
   scope->systemIs[1] = makefunc0_61782840();
   scope->systemIs[2] = makefunc1_69270780();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_47376520();
   scope->inners[1] = makeack_47376400();
   scope->inners[2] = makeack__mac_47376320();
   scope->inners[3] = makeack__add_47375940();
   scope->inners[4] = make_58496_49521120();
   scope->inners[5] = make_58494_49521060();
   scope->inners[6] = make_58495_49520880();
   scope->inners[7] = make_58519_50518500();
   scope->inners[8] = make_58520_50911980();
   scope->inners[9] = make_58511_51932980();
   scope->inners[10] = make_58509_51932880();
   scope->inners[11] = make_58510_51932480();
   scope->inners[12] = make_58560_52421840();
   scope->inners[13] = make_58561_52421760();
   scope->inners[14] = make_58558_52421740();
   scope->inners[15] = make_58559_52421400();
   scope->inners[16] = make_58588_52725620();
   scope->inners[17] = make_58589_53026540();
   scope->inners[18] = make_58575_53310360();
   scope->inners[19] = make_58576_53310320();
   scope->inners[20] = make_58573_53310220();
   scope->inners[21] = make_58574_53309420();
   scope->inners[22] = makevalue__z0_58505820();
   scope->inners[23] = makevalue__z1_58671440();
   scope->inners[24] = makevalue__a0_59051320();
   scope->inners[25] = makevalue__a1_59266740();
   scope->inners[26] = makeflag__z0_59266720();
   scope->inners[27] = makeflag__z1_59266680();
   scope->inners[28] = makeack__a0_59266640();
   scope->inners[29] = makeack__a1_59266620();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58487_59834900();
   scope->scopes[1] = makechannel__w1_58502_62377920();
   scope->scopes[2] = makechannel__accum_58517_52991120();
   scope->scopes[3] = makemac__n1_58549_59212760();
   scope->scopes[4] = makechannel__b0_58556_58741280();
   scope->scopes[5] = makechannel__b1_58571_61058360();
   scope->scopes[6] = makechannel__z_58586_47461880();
   scope->scopes[7] = makeadd__n_58616_59166380();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__70360320();
   scope->behaviors[1] = make__70896180();
   scope->behaviors[2] = make__71480960();
   scope->behaviors[3] = make__72852740();
   scope->behaviors[4] = make__72890300();
   scope->behaviors[5] = make__72890100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_8400_71480580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_8400_71480580 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T00";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_71478500();
   systemT->inputs[1] = makerst_71478480();
   systemT->inputs[2] = makereq_71478440();
   systemT->inputs[3] = make_58419_71593340();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_71593300();
   systemT->outputs[1] = make_58417_71593280();
   systemT->outputs[2] = make_58418_71593180();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58459_71692980();
   systemT->inouts[1] = make_58460_71841980();

   systemT->scope = makelayer0_58_840_59835720();

   return systemT;
}