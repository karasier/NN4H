#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_8400_64497540;

SignalI clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeclk_64615540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_8400_64497540;
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

SignalI rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makerst_64615520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_8400_64497540;
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

SignalI req_64615480_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereq_64615480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_64615480_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_8400_64497540;
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

SignalI _58430_65281320_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58430_65281320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58430_65281320_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_8400_64497540;
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

SignalI ack__layer_65281280_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__layer_65281280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_65281280_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_8400_64497540;
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

SignalI _58428_65281220_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58428_65281220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58428_65281220_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_8400_64497540;
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

SignalI _58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58429_65281140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_8400_64497540;
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

SignalI _58470_65660660_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58470_65660660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58470_65660660_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_8400_64497540;
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

SignalI _58471_66080980_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58471_66080980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58471_66080980_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_8400_64497540;
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

Block __54297800;

Block __54296960;

void code__54296960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79499580(),ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79499520(),ack__mac_53884300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79499460(),ack__add_53884260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__54296960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54296960 = block;
   block->owner = (Object)__54297800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54296960;

   return block;
};

void code__54297800() {
   {
      Value cond = rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54296960();
   }
      }
   }
}

Block make__54297800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54297800 = block;
   block->owner = (Object)__54349680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54297800;

   return block;
};

Block __54349040;

Block __54385300;

Block __54384940;

void code__54384940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58599_56074440_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,value__z0_56033060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79499280(),flag__z0_62357300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__54384940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54384940 = block;
   block->owner = (Object)__54385300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54384940;

   return block;
};

Block __56592780;

void code__56592780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58600_56347140_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,value__z1_54623620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79499140(),flag__z1_62357280_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__56592780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56592780 = block;
   block->owner = (Object)__54385300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56592780;

   return block;
};

void code__54385300() {
 code__54384940();
 code__56592780();
}

Block make__54385300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54385300 = block;
   block->owner = (Object)__54349040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54385300;

   return block;
};

Block __54348440;

void code__54348440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79499080(),flag__z0_62357300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79499020(),flag__z1_62357280_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__54348440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54348440 = block;
   block->owner = (Object)__54349040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54348440;

   return block;
};

void code__54349040() {
   {
      Value cond = ack__add_53884260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54385300();
   }
   else {
  code__54348440();
   }
      }
   }
}

Block make__54349040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54349040 = block;
   block->owner = (Object)__62607240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54349040;

   return block;
};

Block __62607080;

Block __62606780;

void code__62606780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79498920(),ack__a0_62357260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79498840(),ack__a1_62357240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62606780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62606780 = block;
   block->owner = (Object)__62607080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62606780;

   return block;
};

Block __62605400;

Block __62605160;

void code__62605160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_62186640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58470_65660660_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79498560(),ack__a0_62357260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62605160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62605160 = block;
   block->owner = (Object)__62605400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62605160;

   return block;
};

Block __63530020;

void code__63530020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_62357320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58471_66080980_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79498420(),ack__a1_62357240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__63530020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63530020 = block;
   block->owner = (Object)__62605400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63530020;

   return block;
};

void code__62605400() {
 code__62605160();
 code__63530020();
}

Block make__62605400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62605400 = block;
   block->owner = (Object)__62607080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62605400;

   return block;
};

void code__62607080() {
   {
      Value cond = rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62606780();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_62357300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         src1 = flag__z1_62357280_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__62605400();
   }
      }
   }
}

Block make__62607080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62607080 = block;
   block->owner = (Object)__64498160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62607080;

   return block;
};

Block __79256960;

void code__79256960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_64615480_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_53884300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_53884380_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79256960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79256960 = block;
   block->owner = (Object)__79256720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79256960;

   return block;
};

Block __79257200;

void code__79257200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,clk_62388820_counter_58_8410_62350640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,ack_62388800_counter_58_8410_62350640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,rst_62388780_counter_58_8410_62350640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_56033060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,z__value_62512600_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_54623620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,z__value_65483340_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_62357260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      src1 = ack__a1_62357240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_65281280_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79257200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79257200 = block;
   block->owner = (Object)__79273500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79257200;

   return block;
};

Block __79257120;

void code__79257120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_62388720_counter_58_8410_62350640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,ack__mac_53884300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58572_55722240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58587_57004240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_62631840_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,value__a0_62186640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_65659000_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,value__a1_62357320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79257120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79257120 = block;
   block->owner = (Object)__79273320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79257120;

   return block;
};

Block __55862600;

void code__55862600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55311780_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(abus__r_51992120_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51992600_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__55862600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55862600 = block;
   block->owner = (Object)__57022460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55862600;

   return block;
};

Block __79272580;

void code__79272580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51992600_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58507_54201600_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79272580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79272580 = block;
   block->owner = (Object)__79272400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79272580;

   return block;
};

Block __79272360;

void code__79272360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58507_54201600_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,dbus__r_51992600_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79272360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79272360 = block;
   block->owner = (Object)__79272140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79272360;

   return block;
};

Block __79271840;

void code__79271840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_51489560_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79271840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79271840 = block;
   block->owner = (Object)__79271680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79271840;

   return block;
};

Block __79271640;

void code__79271640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,trig__r_51489560_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79271640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79271640 = block;
   block->owner = (Object)__79271480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79271640;

   return block;
};

Block __79271160;

void code__79271160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_51992120_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79271160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79271160 = block;
   block->owner = (Object)__79271000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79271160;

   return block;
};

Block __79270960;

void code__79270960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,abus__r_51992120_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79270960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79270960 = block;
   block->owner = (Object)__79270800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79270960;

   return block;
};

Block __62765160;

void code__62765160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_62524640_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(abus__r_54650580_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54650700_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62765160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62765160 = block;
   block->owner = (Object)__63305240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62765160;

   return block;
};

Block __79269480;

void code__79269480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54650700_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58522_55358520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79269480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79269480 = block;
   block->owner = (Object)__79269320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79269480;

   return block;
};

Block __79269280;

void code__79269280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58522_55358520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,dbus__r_54650700_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79269280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79269280 = block;
   block->owner = (Object)__79269100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79269280;

   return block;
};

Block __79268800;

void code__79268800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_57017060_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79268800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79268800 = block;
   block->owner = (Object)__79268640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79268800;

   return block;
};

Block __79268600;

void code__79268600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,trig__r_57017060_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79268600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79268600 = block;
   block->owner = (Object)__79268420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79268600;

   return block;
};

Block __79268040;

void code__79268040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_54650580_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79268040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79268040 = block;
   block->owner = (Object)__79267880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79268040;

   return block;
};

Block __79267840;

void code__79267840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,abus__r_54650580_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79267840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79267840 = block;
   block->owner = (Object)__79267680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79267840;

   return block;
};

Block __79266440;

void code__79266440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_63438480_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58530_54400560_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79266440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79266440 = block;
   block->owner = (Object)__79266240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79266440;

   return block;
};

Block __79266200;

void code__79266200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58530_54400560_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,reg__0_63438480_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79266200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79266200 = block;
   block->owner = (Object)__79265980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79266200;

   return block;
};

Block __79322980;

void code__79322980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_63568620_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58531_54972100_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79322980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79322980 = block;
   block->owner = (Object)__79322820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79322980;

   return block;
};

Block __79322780;

void code__79322780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58531_54972100_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,reg__1_63568620_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79322780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79322780 = block;
   block->owner = (Object)__79322620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79322780;

   return block;
};

Block __65128140;

Block __65127940;

Block __65127580;

void code__65127580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79464280(),_58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65127580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65127580 = block;
   block->owner = (Object)__65127940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65127580;

   return block;
};

void code__65127940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79464360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65127580();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79464220(),_58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65127940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65127940 = block;
   block->owner = (Object)__65128140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65127940;

   return block;
};

Block __65126920;

Block __65126500;

void code__65126500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79464060(),_58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65126500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65126500 = block;
   block->owner = (Object)__65126920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65126500;

   return block;
};

void code__65126920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79464140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65126500();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79464000(),_58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65126920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65126920 = block;
   block->owner = (Object)__65128140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65126920;

   return block;
};

Block __65150180;

Block __65149840;

void code__65149840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79463840(),_58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65149840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65149840 = block;
   block->owner = (Object)__65150180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65149840;

   return block;
};

void code__65150180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79463920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65149840();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79463780(),_58428_65281220_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65150180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65150180 = block;
   block->owner = (Object)__65128140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65150180;

   return block;
};

Block __65148640;

void code__65148640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79463520(),rvok_65128340_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79463440(),lvok0_65128420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79463380(),wok0_65128320_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79463300(),lvok1_65128360_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79463200(),wok1_65128300_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65148640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65148640 = block;
   block->owner = (Object)__65128140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65148640;

   return block;
};

Block __65453740;

Block __65453240;

Block __65453080;

Block __65452620;

Block __65450540;

Block __65450260;

void code__65450260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58430_65281320_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,rv_65128540_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79462640(),rvok_65128340_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65450260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65450260 = block;
   block->owner = (Object)__65450540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65450260;

   return block;
};

void code__65450540() {
 code__65450260();
}

Block make__65450540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65450540 = block;
   block->owner = (Object)__65452620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65450540;

   return block;
};

Block __65452380;

void code__65452380() {
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
                  src0 = _58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__79462540();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79462500();
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
                        src0 = _58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79486760();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79486700();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79486580(),_58428_65281220_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65452380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65452380 = block;
   block->owner = (Object)__65452620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65452380;

   return block;
};

void code__65452620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58428_65281220_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79462800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65450540();
   }
   else {
  code__65452380();
   }
      }
   }
}

Block make__65452620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65452620 = block;
   block->owner = (Object)__65453080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65452620;

   return block;
};

void code__65453080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79462900();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65452620();
   }
      }
   }
}

Block make__65453080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65453080 = block;
   block->owner = (Object)__65453240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65453080;

   return block;
};

void code__65453240() {
 code__65453080();
}

Block make__65453240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65453240 = block;
   block->owner = (Object)__65453740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65453240;

   return block;
};

Block __65683400;

Block __65683140;

Block __65682740;

Block __65680580;

Block __65680420;

void code__65680420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58507_54201600_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,lv0_64332640_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79486180(),lvok0_65128420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65680420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65680420 = block;
   block->owner = (Object)__65680580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65680420;

   return block;
};

void code__65680580() {
 code__65680420();
}

Block make__65680580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65680580 = block;
   block->owner = (Object)__65682740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65680580;

   return block;
};

Block __65682580;

void code__65682580() {
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
                  src0 = _58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__79486080();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79486020();
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
                        src0 = _58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79485740();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79485640();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79485520(),_58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65682580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65682580 = block;
   block->owner = (Object)__65682740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65682580;

   return block;
};

void code__65682740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79486340();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65680580();
   }
   else {
  code__65682580();
   }
      }
   }
}

Block make__65682740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65682740 = block;
   block->owner = (Object)__65683140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65682740;

   return block;
};

void code__65683140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79486440();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65682740();
   }
      }
   }
}

Block make__65683140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65683140 = block;
   block->owner = (Object)__65683400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65683140;

   return block;
};

void code__65683400() {
 code__65683140();
}

Block make__65683400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65683400 = block;
   block->owner = (Object)__65453740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65683400;

   return block;
};

Block __65940380;

Block __65939780;

Block __65939620;

void code__65939620() {
}

Block make__65939620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65939620 = block;
   block->owner = (Object)__65939780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65939620;

   return block;
};

Block __66795500;

void code__66795500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_64663860_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58530_54400560_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79484700(),wok0_65128320_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__66795500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66795500 = block;
   block->owner = (Object)__65939780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66795500;

   return block;
};

void code__65939780() {
 code__65939620();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_64663860_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
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
                              src0 = lv0_64332640_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_65128540_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79484900();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_64663860_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__66795500();
}

Block make__65939780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65939780 = block;
   block->owner = (Object)__65940380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65939780;

   return block;
};

void code__65940380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79485280(),ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79485220(),run_65128280_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__65939780();
}

Block make__65940380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65940380 = block;
   block->owner = (Object)__65453740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65940380;

   return block;
};

Block __47894080;

void code__47894080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79484540(),wok0_65128320_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79484480(),wok1_65128300_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79484420(),lvok0_65128420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79484360(),lvok1_65128360_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79484300(),rvok_65128340_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__47894080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47894080 = block;
   block->owner = (Object)__65453740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47894080;

   return block;
};

Block __47946340;

Block __47945880;

Block __47945080;

Block __47960880;

Block __47960500;

void code__47960500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58522_55358520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,lv1_64479400_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79483880(),lvok1_65128360_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__47960500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47960500 = block;
   block->owner = (Object)__47960880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47960500;

   return block;
};

void code__47960880() {
 code__47960500();
}

Block make__47960880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47960880 = block;
   block->owner = (Object)__47945080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47960880;

   return block;
};

Block __47944540;

void code__47944540() {
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
                  src0 = _58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__79483760();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79483720();
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
                        src0 = _58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79483420();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79483360();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79483240(),_58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__47944540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47944540 = block;
   block->owner = (Object)__47945080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47944540;

   return block;
};

void code__47945080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79484060();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47960880();
   }
   else {
  code__47944540();
   }
      }
   }
}

Block make__47945080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47945080 = block;
   block->owner = (Object)__47945880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47945080;

   return block;
};

void code__47945880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79484160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47945080();
   }
      }
   }
}

Block make__47945880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47945880 = block;
   block->owner = (Object)__47946340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47945880;

   return block;
};

void code__47946340() {
 code__47945880();
}

Block make__47946340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47946340 = block;
   block->owner = (Object)__65453740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47946340;

   return block;
};

Block __50427600;

Block __50423020;

Block __50441560;

void code__50441560() {
}

Block make__50441560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50441560 = block;
   block->owner = (Object)__50423020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50441560;

   return block;
};

Block __54349880;

void code__54349880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_64933420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58531_54972100_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79482420(),wok1_65128300_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__54349880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54349880 = block;
   block->owner = (Object)__50423020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54349880;

   return block;
};

void code__50423020() {
 code__50441560();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_64933420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
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
                              src0 = lv1_64479400_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_65128540_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79482600();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_64933420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__54349880();
}

Block make__50423020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50423020 = block;
   block->owner = (Object)__50427600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50423020;

   return block;
};

void code__50427600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79483000(),ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79482940(),run_65128280_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__50423020();
}

Block make__50427600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50427600 = block;
   block->owner = (Object)__65453740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50427600;

   return block;
};

Block __55163480;

void code__55163480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79482260(),wok0_65128320_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79482200(),wok1_65128300_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79482140(),lvok0_65128420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79482080(),lvok1_65128360_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79482020(),rvok_65128340_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__55163480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55163480 = block;
   block->owner = (Object)__65453740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55163480;

   return block;
};

void code__65453740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79463040(),run_65128280_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_65128340_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65453240();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_65128420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65683400();
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
               src0 = lvok0_65128420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               src1 = rvok_65128340_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_65128320_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65940380();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_65128320_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         src1 = wok1_65128300_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47894080();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_65128360_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47946340();
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
               src0 = lvok1_65128360_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               src1 = rvok_65128340_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_65128300_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50427600();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_65128320_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         src1 = wok1_65128300_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55163480();
   }
      }
   }
}

Block make__65453740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65453740 = block;
   block->owner = (Object)__65128140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65453740;

   return block;
};

Block __65147220;

void code__65147220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79481960(),av0_64663860_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79481900(),av1_64933420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65147220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65147220 = block;
   block->owner = (Object)__65128140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65147220;

   return block;
};

void code__65128140() {
 code__65127940();
 code__65126920();
 code__65150180();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79463720(),ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79463660(),run_65128280_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_65128280_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65148640();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_53884380_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         src1 = run_65128280_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65453740();
   }
   else {
  code__65147220();
   }
      }
   }
}

Block make__65128140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65128140 = block;
   block->owner = (Object)__55159540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65128140;

   return block;
};

Block __57170900;

void code__57170900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_56219380_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(abus__r_55565760_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55565980_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__57170900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57170900 = block;
   block->owner = (Object)__62242700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57170900;

   return block;
};

Block __79320780;

void code__79320780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55565980_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58571_55722340_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79320780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79320780 = block;
   block->owner = (Object)__79320620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79320780;

   return block;
};

Block __79320580;

void code__79320580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58571_55722340_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,dbus__r_55565980_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79320580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79320580 = block;
   block->owner = (Object)__79320420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79320580;

   return block;
};

Block __79320100;

void code__79320100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_55308220_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79320100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79320100 = block;
   block->owner = (Object)__79319940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79320100;

   return block;
};

Block __79319900;

void code__79319900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,trig__r_55308220_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79319900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79319900 = block;
   block->owner = (Object)__79319740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79319900;

   return block;
};

Block __79319420;

void code__79319420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55565760_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58570_55746480_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79319420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79319420 = block;
   block->owner = (Object)__79319220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79319420;

   return block;
};

Block __79319140;

void code__79319140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58570_55746480_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,abus__r_55565760_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79319140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79319140 = block;
   block->owner = (Object)__79318980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79319140;

   return block;
};

Block __62919200;

void code__62919200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_62635380_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(abus__r_62390120_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_62390220_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62919200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62919200 = block;
   block->owner = (Object)__63433860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62919200;

   return block;
};

Block __79317740;

void code__79317740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_62390220_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58586_57004260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79317740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79317740 = block;
   block->owner = (Object)__79317580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79317740;

   return block;
};

Block __79317540;

void code__79317540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58586_57004260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,dbus__r_62390220_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79317540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79317540 = block;
   block->owner = (Object)__79317360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79317540;

   return block;
};

Block __79316980;

void code__79316980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_62240520_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79316980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79316980 = block;
   block->owner = (Object)__79316820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79316980;

   return block;
};

Block __79316780;

void code__79316780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,trig__r_62240520_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79316780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79316780 = block;
   block->owner = (Object)__79316620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79316780;

   return block;
};

Block __79316320;

void code__79316320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_62390120_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58585_57004040_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79316320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79316320 = block;
   block->owner = (Object)__79316160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79316320;

   return block;
};

Block __79316100;

void code__79316100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58585_57004040_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,abus__r_62390120_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79316100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79316100 = block;
   block->owner = (Object)__79315940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79316100;

   return block;
};

Block __79388300;

void code__79388300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_63581920_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58599_56074440_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79388300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79388300 = block;
   block->owner = (Object)__79388140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79388300;

   return block;
};

Block __79388100;

void code__79388100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58599_56074440_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,reg__0_63581920_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79388100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79388100 = block;
   block->owner = (Object)__79387940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79388100;

   return block;
};

Block __79387620;

void code__79387620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_63857180_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58600_56347140_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79387620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79387620 = block;
   block->owner = (Object)__79387460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79387620;

   return block;
};

Block __79387420;

void code__79387420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58600_56347140_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,reg__1_63857180_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79387420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79387420 = block;
   block->owner = (Object)__79387260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79387420;

   return block;
};

Block __65296920;

Block __65296460;

void code__65296460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79479340(),_58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65296460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65296460 = block;
   block->owner = (Object)__65296920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65296460;

   return block;
};

Block __65295560;

void code__65295560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79479280(),_58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65295560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65295560 = block;
   block->owner = (Object)__65296920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65295560;

   return block;
};

Block __65292500;

Block __65292140;

void code__65292140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58530_54400560_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,lv0_64646960_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79478860(),lvok0_65297260_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65292140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65292140 = block;
   block->owner = (Object)__65292500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65292140;

   return block;
};

Block __65550700;

Block __65550300;

Block __65549260;

void code__65549260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58571_55722340_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,rv0_65131980_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79503060(),_58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79502980(),rvok0_65297180_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65549260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65549260 = block;
   block->owner = (Object)__65550300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65549260;

   return block;
};

Block __65550140;

void code__65550140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79502920(),_58570_55746480_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79502860(),_58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65550140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65550140 = block;
   block->owner = (Object)__65550300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65550140;

   return block;
};

void code__65550300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79503220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65549260();
   }
   else {
  code__65550140();
   }
      }
   }
}

Block make__65550300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65550300 = block;
   block->owner = (Object)__65550700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65550300;

   return block;
};

void code__65550700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58572_55722240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79503320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65550300();
   }
      }
   }
}

Block make__65550700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65550700 = block;
   block->owner = (Object)__65292500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65550700;

   return block;
};

Block __65892320;

Block __65891760;

void code__65891760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_64646960_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      src1 = rv0_65131980_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58599_56074440_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65891760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65891760 = block;
   block->owner = (Object)__65892320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65891760;

   return block;
};

void code__65892320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79502700(),run_65297120_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79502640(),ack__add_53884260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__65891760();
}

Block make__65892320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65892320 = block;
   block->owner = (Object)__65292500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65892320;

   return block;
};

Block __66533180;

void code__66533180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58531_54972100_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,lv1_64767020_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79502320(),lvok1_65297200_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__66533180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66533180 = block;
   block->owner = (Object)__65292500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66533180;

   return block;
};

Block __66877780;

Block __66877320;

Block __66876300;

void code__66876300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58586_57004260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,rv1_65297280_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79501880(),_58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79501820(),rvok1_65297160_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__66876300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66876300 = block;
   block->owner = (Object)__66877320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66876300;

   return block;
};

Block __66877140;

void code__66877140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79501760(),_58585_57004040_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79501700(),_58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__66877140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66877140 = block;
   block->owner = (Object)__66877320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66877140;

   return block;
};

void code__66877320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79502100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66876300();
   }
   else {
  code__66877140();
   }
      }
   }
}

Block make__66877320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66877320 = block;
   block->owner = (Object)__66877780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66877320;

   return block;
};

void code__66877780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58587_57004240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79502220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66877320();
   }
      }
   }
}

Block make__66877780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66877780 = block;
   block->owner = (Object)__65292500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66877780;

   return block;
};

Block __49260360;

Block __49292800;

void code__49292800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_64767020_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      src1 = rv1_65297280_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58600_56347140_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49292800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49292800 = block;
   block->owner = (Object)__49260360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49292800;

   return block;
};

void code__49260360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79501540(),run_65297120_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79501480(),ack__add_53884260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__49292800();
}

Block make__49260360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49260360 = block;
   block->owner = (Object)__65292500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49260360;

   return block;
};

void code__65292500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79479000(),run_65297120_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__65292140();
 code__65550700();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_65297260_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         src1 = rvok0_65297180_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65892320();
   }
      }
   }
 code__66533180();
 code__66877780();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_65297200_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         src1 = rvok1_65297160_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49260360();
   }
      }
   }
}

Block make__65292500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65292500 = block;
   block->owner = (Object)__65296920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65292500;

   return block;
};

Block __65294120;

void code__65294120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79501240(),lvok0_65297260_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79501180(),rvok0_65297180_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79501120(),lvok1_65297200_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79501060(),rvok1_65297160_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65294120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65294120 = block;
   block->owner = (Object)__65296920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65294120;

   return block;
};

void code__65296920() {
 code__65296460();
 code__65295560();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79479220(),ack__add_53884260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79479160(),run_65297120_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_53884300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         src1 = run_65297120_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65292500();
   }
   else {
  code__65294120();
   }
      }
   }
}

Block make__65296920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65296920 = block;
   block->owner = (Object)__53884680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65296920;

   return block;
};

Value make__79467100() {
   static unsigned long long data[] = { 4294967267ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79467080() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79465980() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79465960() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79481860() {
   static unsigned long long data[] = { 5ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__79480880() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__79464360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79464280() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79464220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79464140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79464060() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79464000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79463920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79463840() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79463780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79463720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79463660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79463520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79463440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79463380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79463300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79463200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79463040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79462900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79462800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79462640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79462540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79462500() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79486760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79486700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79486580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79486440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79486340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79486180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79486080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79486020() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79485740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79485640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79485520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79485280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79485220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79484900() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79484700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79484540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79484480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79484420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79484360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79484300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79484160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79484060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79483880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79483760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79483720() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79483420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79483360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79483240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79483000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79482940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79482600() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79482420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79482260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79482200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79482140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79482080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79482020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79481960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79481900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79479340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79479280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79479220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79479160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79479000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79478860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79503320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79503220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79503060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79502980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79502920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79502860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79502700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79502640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79502320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79502220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79502100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79501880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79501820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79501760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79501700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79501540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79501480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79501240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79501180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79501120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79501060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79499580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79499520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79499460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79499280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79499140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79499080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79499020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79498920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79498840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79498560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79498420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_840_51470720;

SignalI req__mac_53884380_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereq__mac_53884380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_53884380_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack_53884320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI ack__mac_53884300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__mac_53884300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53884300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI ack__add_53884260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__add_53884260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_53884260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58507_54201600_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58507_54201600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58507_54201600_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58505_54201580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58506_54201320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58530_54400560_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58530_54400560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58530_54400560_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58531_54972100_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58531_54972100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58531_54972100_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58522_55358520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58522_55358520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58522_55358520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58520_55358420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58521_55358120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58571_55722340_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58571_55722340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58571_55722340_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58572_55722240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58572_55722240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58572_55722240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58569_55722160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58570_55746480_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58570_55746480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58570_55746480_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58599_56074440_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58599_56074440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58599_56074440_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58600_56347140_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58600_56347140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58600_56347140_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58586_57004260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58586_57004260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58586_57004260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58587_57004240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58587_57004240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58587_57004240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58584_57004200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI _58585_57004040_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58585_57004040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58585_57004040_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI value__z0_56033060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makevalue__z0_56033060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_56033060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI value__z1_54623620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makevalue__z1_54623620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_54623620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI value__a0_62186640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makevalue__a0_62186640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_62186640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI value__a1_62357320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makevalue__a1_62357320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_62357320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI flag__z0_62357300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeflag__z0_62357300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_62357300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI flag__z1_62357280_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeflag__z1_62357280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_62357280_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI ack__a0_62357260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__a0_62357260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_62357260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SignalI ack__a1_62357240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__a1_62357240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_62357240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer0_58_840_51470720;
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

SystemI counter_62388560;

SystemI makecounter_62388560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_62388560 = systemI;
   systemI->owner = (Object)layer0_58_840_51470720;
   systemI->name = "counter";
   systemI->system = counter_58_8410_62350640;

   return systemI;
};

SystemI func0_62631680;

SystemI makefunc0_62631680() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_62631680 = systemI;
   systemI->owner = (Object)layer0_58_840_51470720;
   systemI->name = "func0";
   systemI->system = func0_58_8410_62300320;

   return systemI;
};

SystemI func1_65683080;

SystemI makefunc1_65683080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_65683080 = systemI;
   systemI->owner = (Object)layer0_58_840_51470720;
   systemI->name = "func1";
   systemI->system = func1_58_8400_65277520;

   return systemI;
};

Scope channel__w0_58498_51493700;

SignalI trig__r_51489560_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI maketrig__r_51489560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51489560_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w0_58498_51493700;
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

SignalI dbus__r_51992600_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makedbus__r_51992600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51992600_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w0_58498_51493700;
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

SignalI abus__r_51992120_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_51992120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51992120_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w0_58498_51493700;
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

SignalI mem_55311780_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makemem_55311780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55311780_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w0_58498_51493700;
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
         src0 = make__79467100();
         src1 = make__79467080();
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

Scope raddr_58499_51493020;

Scope makeraddr_58499_51493020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58499_51493020 = scope;
   scope->owner = (Object)channel__w0_58498_51493700;
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

Scope rinc_58504_51491840;

Scope makerinc_58504_51491840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58504_51491840 = scope;
   scope->owner = (Object)channel__w0_58498_51493700;
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

Scope rdec_58508_51490600;

Scope makerdec_58508_51490600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58508_51490600 = scope;
   scope->owner = (Object)channel__w0_58498_51493700;
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

Behavior __57022460;

Behavior make__57022460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57022460 = behavior;
   behavior->owner = (Object)channel__w0_58498_51493700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg += 1;
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg = realloc(clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg*sizeof(Object));
clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg[clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg-1] = (Object)behavior;
   behavior->block = make__55862600();

   return behavior;
}

Behavior __79272400;

Behavior make__79272400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79272400 = behavior;
   behavior->owner = (Object)channel__w0_58498_51493700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51992600_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   dbus__r_51992600_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   dbus__r_51992600_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(dbus__r_51992600_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,dbus__r_51992600_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
dbus__r_51992600_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[dbus__r_51992600_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79272580();

   return behavior;
}

Behavior __79272140;

Behavior make__79272140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79272140 = behavior;
   behavior->owner = (Object)channel__w0_58498_51493700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58507_54201600_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58507_54201600_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58507_54201600_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58507_54201600_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58507_54201600_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58507_54201600_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58507_54201600_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79272360();

   return behavior;
}

Behavior __79271680;

Behavior make__79271680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79271680 = behavior;
   behavior->owner = (Object)channel__w0_58498_51493700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_51489560_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   trig__r_51489560_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   trig__r_51489560_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(trig__r_51489560_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,trig__r_51489560_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
trig__r_51489560_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[trig__r_51489560_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79271840();

   return behavior;
}

Behavior __79271480;

Behavior make__79271480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79271480 = behavior;
   behavior->owner = (Object)channel__w0_58498_51493700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58505_54201580_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79271640();

   return behavior;
}

Behavior __79271000;

Behavior make__79271000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79271000 = behavior;
   behavior->owner = (Object)channel__w0_58498_51493700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_51992120_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   abus__r_51992120_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   abus__r_51992120_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(abus__r_51992120_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,abus__r_51992120_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__r_51992120_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[abus__r_51992120_channel__w0_58498_51493700_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79271160();

   return behavior;
}

Behavior __79270800;

Behavior make__79270800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79270800 = behavior;
   behavior->owner = (Object)channel__w0_58498_51493700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58506_54201320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79270960();

   return behavior;
}

Scope makechannel__w0_58498_51493700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58498_51493700 = scope;
   scope->owner = (Object)layer0_58_840_51470720;
   scope->name = "channel_w0:498";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51489560();
   scope->inners[1] = makedbus__r_51992600();
   scope->inners[2] = makeabus__r_51992120();
   scope->inners[3] = makemem_55311780();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58499_51493020();
   scope->scopes[1] = makerinc_58504_51491840();
   scope->scopes[2] = makerdec_58508_51490600();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57022460();
   scope->behaviors[1] = make__79272400();
   scope->behaviors[2] = make__79272140();
   scope->behaviors[3] = make__79271680();
   scope->behaviors[4] = make__79271480();
   scope->behaviors[5] = make__79271000();
   scope->behaviors[6] = make__79270800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58513_57022080;

SignalI trig__r_57017060_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI maketrig__r_57017060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_57017060_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w1_58513_57022080;
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

SignalI dbus__r_54650700_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makedbus__r_54650700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54650700_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w1_58513_57022080;
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

SignalI abus__r_54650580_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_54650580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54650580_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w1_58513_57022080;
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

SignalI mem_62524640_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makemem_62524640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_62524640_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w1_58513_57022080;
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
         src0 = make__79465980();
         src1 = make__79465960();
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

Scope raddr_58514_57020780;

Scope makeraddr_58514_57020780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58514_57020780 = scope;
   scope->owner = (Object)channel__w1_58513_57022080;
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

Scope rinc_58519_57019500;

Scope makerinc_58519_57019500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58519_57019500 = scope;
   scope->owner = (Object)channel__w1_58513_57022080;
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

Scope rdec_58523_57018200;

Scope makerdec_58523_57018200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58523_57018200 = scope;
   scope->owner = (Object)channel__w1_58513_57022080;
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

Behavior __63305240;

Behavior make__63305240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63305240 = behavior;
   behavior->owner = (Object)channel__w1_58513_57022080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg += 1;
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg = realloc(clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg*sizeof(Object));
clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg[clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg-1] = (Object)behavior;
   behavior->block = make__62765160();

   return behavior;
}

Behavior __79269320;

Behavior make__79269320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79269320 = behavior;
   behavior->owner = (Object)channel__w1_58513_57022080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54650700_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   dbus__r_54650700_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   dbus__r_54650700_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(dbus__r_54650700_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,dbus__r_54650700_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
dbus__r_54650700_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[dbus__r_54650700_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79269480();

   return behavior;
}

Behavior __79269100;

Behavior make__79269100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79269100 = behavior;
   behavior->owner = (Object)channel__w1_58513_57022080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58522_55358520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58522_55358520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58522_55358520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58522_55358520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58522_55358520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58522_55358520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58522_55358520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79269280();

   return behavior;
}

Behavior __79268640;

Behavior make__79268640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79268640 = behavior;
   behavior->owner = (Object)channel__w1_58513_57022080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_57017060_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   trig__r_57017060_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   trig__r_57017060_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(trig__r_57017060_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,trig__r_57017060_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
trig__r_57017060_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[trig__r_57017060_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79268800();

   return behavior;
}

Behavior __79268420;

Behavior make__79268420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79268420 = behavior;
   behavior->owner = (Object)channel__w1_58513_57022080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58520_55358420_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79268600();

   return behavior;
}

Behavior __79267880;

Behavior make__79267880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79267880 = behavior;
   behavior->owner = (Object)channel__w1_58513_57022080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_54650580_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   abus__r_54650580_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   abus__r_54650580_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(abus__r_54650580_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,abus__r_54650580_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__r_54650580_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[abus__r_54650580_channel__w1_58513_57022080_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79268040();

   return behavior;
}

Behavior __79267680;

Behavior make__79267680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79267680 = behavior;
   behavior->owner = (Object)channel__w1_58513_57022080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58521_55358120_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79267840();

   return behavior;
}

Scope makechannel__w1_58513_57022080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58513_57022080 = scope;
   scope->owner = (Object)layer0_58_840_51470720;
   scope->name = "channel_w1:513";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_57017060();
   scope->inners[1] = makedbus__r_54650700();
   scope->inners[2] = makeabus__r_54650580();
   scope->inners[3] = makemem_62524640();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58514_57020780();
   scope->scopes[1] = makerinc_58519_57019500();
   scope->scopes[2] = makerdec_58523_57018200();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63305240();
   scope->behaviors[1] = make__79269320();
   scope->behaviors[2] = make__79269100();
   scope->behaviors[3] = make__79268640();
   scope->behaviors[4] = make__79268420();
   scope->behaviors[5] = make__79267880();
   scope->behaviors[6] = make__79267680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58528_63305060;

SignalI reg__0_63438480_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereg__0_63438480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_63438480_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__accum_58528_63305060;
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

SignalI reg__1_63568620_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereg__1_63568620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_63568620_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__accum_58528_63305060;
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

Scope anum_58529_63304740;

Scope makeanum_58529_63304740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58529_63304740 = scope;
   scope->owner = (Object)channel__accum_58528_63305060;
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

Scope raddr_58532_63304240;

Scope makeraddr_58532_63304240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58532_63304240 = scope;
   scope->owner = (Object)channel__accum_58528_63305060;
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

Scope waddr_58536_63303780;

Scope makewaddr_58536_63303780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58536_63303780 = scope;
   scope->owner = (Object)channel__accum_58528_63305060;
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

Scope rinc_58540_63303340;

SignalI abus__r_63302760_rinc_58540_63303340_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_63302760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63302760_rinc_58540_63303340_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rinc_58540_63303340;
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

Scope makerinc_58540_63303340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58540_63303340 = scope;
   scope->owner = (Object)channel__accum_58528_63305060;
   scope->name = "rinc:540";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_63302760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58545_63302620;

SignalI abus__w_63302160_winc_58545_63302620_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__w_63302160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63302160_winc_58545_63302620_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)winc_58545_63302620;
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

Scope makewinc_58545_63302620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58545_63302620 = scope;
   scope->owner = (Object)channel__accum_58528_63305060;
   scope->name = "winc:545";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_63302160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58550_63302040;

SignalI abus__r_63301620_rdec_58550_63302040_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_63301620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63301620_rdec_58550_63302040_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rdec_58550_63302040;
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

Scope makerdec_58550_63302040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58550_63302040 = scope;
   scope->owner = (Object)channel__accum_58528_63305060;
   scope->name = "rdec:550";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_63301620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58555_63301500;

SignalI abus__w_63301100_wdec_58555_63301500_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__w_63301100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63301100_wdec_58555_63301500_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)wdec_58555_63301500;
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

Scope makewdec_58555_63301500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58555_63301500 = scope;
   scope->owner = (Object)channel__accum_58528_63305060;
   scope->name = "wdec:555";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_63301100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __79266240;

Behavior make__79266240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79266240 = behavior;
   behavior->owner = (Object)channel__accum_58528_63305060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_63438480_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   reg__0_63438480_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_63438480_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(reg__0_63438480_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,reg__0_63438480_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_63438480_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[reg__0_63438480_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79266440();

   return behavior;
}

Behavior __79265980;

Behavior make__79265980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79265980 = behavior;
   behavior->owner = (Object)channel__accum_58528_63305060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58530_54400560_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58530_54400560_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58530_54400560_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58530_54400560_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58530_54400560_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58530_54400560_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58530_54400560_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79266200();

   return behavior;
}

Behavior __79322820;

Behavior make__79322820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79322820 = behavior;
   behavior->owner = (Object)channel__accum_58528_63305060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_63568620_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   reg__1_63568620_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   reg__1_63568620_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(reg__1_63568620_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,reg__1_63568620_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__1_63568620_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[reg__1_63568620_channel__accum_58528_63305060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79322980();

   return behavior;
}

Behavior __79322620;

Behavior make__79322620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79322620 = behavior;
   behavior->owner = (Object)channel__accum_58528_63305060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58531_54972100_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58531_54972100_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58531_54972100_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58531_54972100_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58531_54972100_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58531_54972100_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58531_54972100_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79322780();

   return behavior;
}

Scope makechannel__accum_58528_63305060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58528_63305060 = scope;
   scope->owner = (Object)layer0_58_840_51470720;
   scope->name = "channel_accum:528";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_63438480();
   scope->inners[1] = makereg__1_63568620();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58529_63304740();
   scope->scopes[1] = makeraddr_58532_63304240();
   scope->scopes[2] = makewaddr_58536_63303780();
   scope->scopes[3] = makerinc_58540_63303340();
   scope->scopes[4] = makewinc_58545_63302620();
   scope->scopes[5] = makerdec_58550_63302040();
   scope->scopes[6] = makewdec_58555_63301500();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79266240();
   scope->behaviors[1] = make__79265980();
   scope->behaviors[2] = make__79322820();
   scope->behaviors[3] = make__79322620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58560_64187920;

SignalI lv0_64332640_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelv0_64332640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_64332640_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58560_64187920;
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

SignalI lv1_64479400_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelv1_64479400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_64479400_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58560_64187920;
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

SignalI av0_64663860_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeav0_64663860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_64663860_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58560_64187920;
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

SignalI av1_64933420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeav1_64933420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_64933420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58560_64187920;
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

SignalI rv_65128540_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makerv_65128540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_65128540_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58560_64187920;
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

SignalI lvok0_65128420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelvok0_65128420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_65128420_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58560_64187920;
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

SignalI lvok1_65128360_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelvok1_65128360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_65128360_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58560_64187920;
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

SignalI rvok_65128340_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makervok_65128340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_65128340_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58560_64187920;
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

SignalI wok0_65128320_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makewok0_65128320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_65128320_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58560_64187920;
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

SignalI wok1_65128300_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makewok1_65128300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_65128300_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58560_64187920;
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

SignalI run_65128280_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makerun_65128280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_65128280_mac__n1_58560_64187920_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58560_64187920;
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

Behavior __55159540;

Behavior make__55159540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55159540 = behavior;
   behavior->owner = (Object)mac__n1_58560_64187920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos = realloc(clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos[clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__65128140();

   return behavior;
}

Scope makemac__n1_58560_64187920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58560_64187920 = scope;
   scope->owner = (Object)layer0_58_840_51470720;
   scope->name = "mac_n1:560";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_64332640();
   scope->inners[1] = makelv1_64479400();
   scope->inners[2] = makeav0_64663860();
   scope->inners[3] = makeav1_64933420();
   scope->inners[4] = makerv_65128540();
   scope->inners[5] = makelvok0_65128420();
   scope->inners[6] = makelvok1_65128360();
   scope->inners[7] = makervok_65128340();
   scope->inners[8] = makewok0_65128320();
   scope->inners[9] = makewok1_65128300();
   scope->inners[10] = makerun_65128280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55159540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58567_55158520;

SignalI trig__r_55308220_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI maketrig__r_55308220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_55308220_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b0_58567_55158520;
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

SignalI dbus__r_55565980_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makedbus__r_55565980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55565980_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b0_58567_55158520;
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

SignalI abus__r_55565760_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_55565760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55565760_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b0_58567_55158520;
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

SignalI mem_56219380_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makemem_56219380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_56219380_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b0_58567_55158520;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__79481860(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58568_55156960;

Scope makeraddr_58568_55156960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58568_55156960 = scope;
   scope->owner = (Object)channel__b0_58567_55158520;
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

Scope rinc_58573_55310520;

Scope makerinc_58573_55310520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58573_55310520 = scope;
   scope->owner = (Object)channel__b0_58567_55158520;
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

Scope rdec_58577_55309420;

Scope makerdec_58577_55309420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58577_55309420 = scope;
   scope->owner = (Object)channel__b0_58567_55158520;
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

Behavior __62242700;

Behavior make__62242700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62242700 = behavior;
   behavior->owner = (Object)channel__b0_58567_55158520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg += 1;
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg = realloc(clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg*sizeof(Object));
clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg[clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg-1] = (Object)behavior;
   behavior->block = make__57170900();

   return behavior;
}

Behavior __79320620;

Behavior make__79320620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79320620 = behavior;
   behavior->owner = (Object)channel__b0_58567_55158520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55565980_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   dbus__r_55565980_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   dbus__r_55565980_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(dbus__r_55565980_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,dbus__r_55565980_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
dbus__r_55565980_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[dbus__r_55565980_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79320780();

   return behavior;
}

Behavior __79320420;

Behavior make__79320420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79320420 = behavior;
   behavior->owner = (Object)channel__b0_58567_55158520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58571_55722340_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58571_55722340_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58571_55722340_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58571_55722340_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58571_55722340_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58571_55722340_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58571_55722340_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79320580();

   return behavior;
}

Behavior __79319940;

Behavior make__79319940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79319940 = behavior;
   behavior->owner = (Object)channel__b0_58567_55158520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_55308220_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   trig__r_55308220_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   trig__r_55308220_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(trig__r_55308220_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,trig__r_55308220_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
trig__r_55308220_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[trig__r_55308220_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79320100();

   return behavior;
}

Behavior __79319740;

Behavior make__79319740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79319740 = behavior;
   behavior->owner = (Object)channel__b0_58567_55158520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58569_55722160_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79319900();

   return behavior;
}

Behavior __79319220;

Behavior make__79319220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79319220 = behavior;
   behavior->owner = (Object)channel__b0_58567_55158520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55565760_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   abus__r_55565760_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   abus__r_55565760_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(abus__r_55565760_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,abus__r_55565760_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__r_55565760_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[abus__r_55565760_channel__b0_58567_55158520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79319420();

   return behavior;
}

Behavior __79318980;

Behavior make__79318980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79318980 = behavior;
   behavior->owner = (Object)channel__b0_58567_55158520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58570_55746480_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58570_55746480_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58570_55746480_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58570_55746480_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58570_55746480_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58570_55746480_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58570_55746480_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79319140();

   return behavior;
}

Scope makechannel__b0_58567_55158520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58567_55158520 = scope;
   scope->owner = (Object)layer0_58_840_51470720;
   scope->name = "channel_b0:567";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_55308220();
   scope->inners[1] = makedbus__r_55565980();
   scope->inners[2] = makeabus__r_55565760();
   scope->inners[3] = makemem_56219380();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58568_55156960();
   scope->scopes[1] = makerinc_58573_55310520();
   scope->scopes[2] = makerdec_58577_55309420();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62242700();
   scope->behaviors[1] = make__79320620();
   scope->behaviors[2] = make__79320420();
   scope->behaviors[3] = make__79319940();
   scope->behaviors[4] = make__79319740();
   scope->behaviors[5] = make__79319220();
   scope->behaviors[6] = make__79318980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58582_62242520;

SignalI trig__r_62240520_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI maketrig__r_62240520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_62240520_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b1_58582_62242520;
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

SignalI dbus__r_62390220_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makedbus__r_62390220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_62390220_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b1_58582_62242520;
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

SignalI abus__r_62390120_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_62390120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62390120_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b1_58582_62242520;
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

SignalI mem_62635380_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makemem_62635380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_62635380_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b1_58582_62242520;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__79480880(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58583_62242060;

Scope makeraddr_58583_62242060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58583_62242060 = scope;
   scope->owner = (Object)channel__b1_58582_62242520;
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

Scope rinc_58588_62241580;

Scope makerinc_58588_62241580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58588_62241580 = scope;
   scope->owner = (Object)channel__b1_58582_62242520;
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

Scope rdec_58592_62241060;

Scope makerdec_58592_62241060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58592_62241060 = scope;
   scope->owner = (Object)channel__b1_58582_62242520;
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

Behavior __63433860;

Behavior make__63433860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63433860 = behavior;
   behavior->owner = (Object)channel__b1_58582_62242520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg += 1;
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg = realloc(clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg*sizeof(Object));
clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg[clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg-1] = (Object)behavior;
   behavior->block = make__62919200();

   return behavior;
}

Behavior __79317580;

Behavior make__79317580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79317580 = behavior;
   behavior->owner = (Object)channel__b1_58582_62242520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_62390220_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   dbus__r_62390220_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   dbus__r_62390220_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(dbus__r_62390220_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,dbus__r_62390220_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
dbus__r_62390220_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[dbus__r_62390220_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79317740();

   return behavior;
}

Behavior __79317360;

Behavior make__79317360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79317360 = behavior;
   behavior->owner = (Object)channel__b1_58582_62242520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58586_57004260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58586_57004260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58586_57004260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58586_57004260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58586_57004260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58586_57004260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58586_57004260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79317540();

   return behavior;
}

Behavior __79316820;

Behavior make__79316820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79316820 = behavior;
   behavior->owner = (Object)channel__b1_58582_62242520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_62240520_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   trig__r_62240520_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   trig__r_62240520_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(trig__r_62240520_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,trig__r_62240520_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
trig__r_62240520_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[trig__r_62240520_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79316980();

   return behavior;
}

Behavior __79316620;

Behavior make__79316620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79316620 = behavior;
   behavior->owner = (Object)channel__b1_58582_62242520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58584_57004200_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79316780();

   return behavior;
}

Behavior __79316160;

Behavior make__79316160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79316160 = behavior;
   behavior->owner = (Object)channel__b1_58582_62242520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_62390120_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   abus__r_62390120_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   abus__r_62390120_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(abus__r_62390120_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,abus__r_62390120_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__r_62390120_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[abus__r_62390120_channel__b1_58582_62242520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79316320();

   return behavior;
}

Behavior __79315940;

Behavior make__79315940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79315940 = behavior;
   behavior->owner = (Object)channel__b1_58582_62242520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58585_57004040_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58585_57004040_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58585_57004040_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58585_57004040_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58585_57004040_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58585_57004040_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58585_57004040_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79316100();

   return behavior;
}

Scope makechannel__b1_58582_62242520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58582_62242520 = scope;
   scope->owner = (Object)layer0_58_840_51470720;
   scope->name = "channel_b1:582";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_62240520();
   scope->inners[1] = makedbus__r_62390220();
   scope->inners[2] = makeabus__r_62390120();
   scope->inners[3] = makemem_62635380();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58583_62242060();
   scope->scopes[1] = makerinc_58588_62241580();
   scope->scopes[2] = makerdec_58592_62241060();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63433860();
   scope->behaviors[1] = make__79317580();
   scope->behaviors[2] = make__79317360();
   scope->behaviors[3] = make__79316820();
   scope->behaviors[4] = make__79316620();
   scope->behaviors[5] = make__79316160();
   scope->behaviors[6] = make__79315940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58597_63433740;

SignalI reg__0_63581920_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereg__0_63581920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_63581920_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__z_58597_63433740;
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

SignalI reg__1_63857180_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereg__1_63857180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_63857180_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__z_58597_63433740;
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

Scope anum_58598_63433320;

Scope makeanum_58598_63433320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58598_63433320 = scope;
   scope->owner = (Object)channel__z_58597_63433740;
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

Scope raddr_58601_63432520;

Scope makeraddr_58601_63432520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58601_63432520 = scope;
   scope->owner = (Object)channel__z_58597_63433740;
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

Scope waddr_58605_63432000;

Scope makewaddr_58605_63432000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58605_63432000 = scope;
   scope->owner = (Object)channel__z_58597_63433740;
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

Scope rinc_58609_63431520;

SignalI abus__r_63431120_rinc_58609_63431520_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_63431120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63431120_rinc_58609_63431520_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rinc_58609_63431520;
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

Scope makerinc_58609_63431520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58609_63431520 = scope;
   scope->owner = (Object)channel__z_58597_63433740;
   scope->name = "rinc:609";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_63431120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58613_63430960;

SignalI abus__w_63487640_winc_58613_63430960_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__w_63487640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63487640_winc_58613_63430960_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)winc_58613_63430960;
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

Scope makewinc_58613_63430960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58613_63430960 = scope;
   scope->owner = (Object)channel__z_58597_63433740;
   scope->name = "winc:613";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_63487640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58617_63487500;

SignalI abus__r_63487020_rdec_58617_63487500_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_63487020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63487020_rdec_58617_63487500_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rdec_58617_63487500;
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

Scope makerdec_58617_63487500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58617_63487500 = scope;
   scope->owner = (Object)channel__z_58597_63433740;
   scope->name = "rdec:617";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_63487020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58622_63486900;

SignalI abus__w_63486480_wdec_58622_63486900_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__w_63486480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63486480_wdec_58622_63486900_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)wdec_58622_63486900;
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

Scope makewdec_58622_63486900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58622_63486900 = scope;
   scope->owner = (Object)channel__z_58597_63433740;
   scope->name = "wdec:622";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_63486480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __79388140;

Behavior make__79388140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79388140 = behavior;
   behavior->owner = (Object)channel__z_58597_63433740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_63581920_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   reg__0_63581920_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_63581920_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(reg__0_63581920_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,reg__0_63581920_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_63581920_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[reg__0_63581920_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79388300();

   return behavior;
}

Behavior __79387940;

Behavior make__79387940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79387940 = behavior;
   behavior->owner = (Object)channel__z_58597_63433740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58599_56074440_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58599_56074440_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58599_56074440_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58599_56074440_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58599_56074440_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58599_56074440_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58599_56074440_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79388100();

   return behavior;
}

Behavior __79387460;

Behavior make__79387460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79387460 = behavior;
   behavior->owner = (Object)channel__z_58597_63433740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_63857180_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   reg__1_63857180_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   reg__1_63857180_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(reg__1_63857180_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,reg__1_63857180_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__1_63857180_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[reg__1_63857180_channel__z_58597_63433740_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79387620();

   return behavior;
}

Behavior __79387260;

Behavior make__79387260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79387260 = behavior;
   behavior->owner = (Object)channel__z_58597_63433740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58600_56347140_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58600_56347140_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58600_56347140_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58600_56347140_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58600_56347140_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58600_56347140_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58600_56347140_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79387420();

   return behavior;
}

Scope makechannel__z_58597_63433740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58597_63433740 = scope;
   scope->owner = (Object)layer0_58_840_51470720;
   scope->name = "channel_z:597";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_63581920();
   scope->inners[1] = makereg__1_63857180();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58598_63433320();
   scope->scopes[1] = makeraddr_58601_63432520();
   scope->scopes[2] = makewaddr_58605_63432000();
   scope->scopes[3] = makerinc_58609_63431520();
   scope->scopes[4] = makewinc_58613_63430960();
   scope->scopes[5] = makerdec_58617_63487500();
   scope->scopes[6] = makewdec_58622_63486900();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79388140();
   scope->behaviors[1] = make__79387940();
   scope->behaviors[2] = make__79387460();
   scope->behaviors[3] = make__79387260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58627_64399620;

SignalI lv0_64646960_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelv0_64646960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_64646960_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58627_64399620;
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

SignalI lv1_64767020_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelv1_64767020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_64767020_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58627_64399620;
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

SignalI rv0_65131980_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makerv0_65131980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_65131980_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58627_64399620;
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

SignalI rv1_65297280_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makerv1_65297280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_65297280_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58627_64399620;
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

SignalI lvok0_65297260_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelvok0_65297260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_65297260_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58627_64399620;
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

SignalI lvok1_65297200_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelvok1_65297200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_65297200_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58627_64399620;
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

SignalI rvok0_65297180_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makervok0_65297180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_65297180_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58627_64399620;
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

SignalI rvok1_65297160_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makervok1_65297160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_65297160_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58627_64399620;
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

SignalI run_65297120_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makerun_65297120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_65297120_add__n_58627_64399620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58627_64399620;
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

Behavior __53884680;

Behavior make__53884680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53884680 = behavior;
   behavior->owner = (Object)add__n_58627_64399620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos = realloc(clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos[clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__65296920();

   return behavior;
}

Scope makeadd__n_58627_64399620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58627_64399620 = scope;
   scope->owner = (Object)layer0_58_840_51470720;
   scope->name = "add_n:627";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_64646960();
   scope->inners[1] = makelv1_64767020();
   scope->inners[2] = makerv0_65131980();
   scope->inners[3] = makerv1_65297280();
   scope->inners[4] = makelvok0_65297260();
   scope->inners[5] = makelvok1_65297200();
   scope->inners[6] = makervok0_65297180();
   scope->inners[7] = makervok1_65297160();
   scope->inners[8] = makerun_65297120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53884680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54349680;

Behavior make__54349680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54349680 = behavior;
   behavior->owner = (Object)layer0_58_840_51470720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos = realloc(clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos[clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__54297800();

   return behavior;
}

Behavior __62607240;

Behavior make__62607240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62607240 = behavior;
   behavior->owner = (Object)layer0_58_840_51470720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos = realloc(clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos[clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__54349040();

   return behavior;
}

Behavior __64498160;

Behavior make__64498160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64498160 = behavior;
   behavior->owner = (Object)layer0_58_840_51470720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos = realloc(clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos[clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__62607080();

   return behavior;
}

Behavior __79256720;

Behavior make__79256720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79256720 = behavior;
   behavior->owner = (Object)layer0_58_840_51470720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_64615480_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   req_64615480_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   req_64615480_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(req_64615480_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,req_64615480_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
req_64615480_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[req_64615480_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_53884300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__mac_53884300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__mac_53884300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__mac_53884300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__mac_53884300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__mac_53884300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__mac_53884300_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79256960();

   return behavior;
}

Behavior __79273500;

Behavior make__79273500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79273500 = behavior;
   behavior->owner = (Object)layer0_58_840_51470720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack_53884320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_56033060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   value__z0_56033060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   value__z0_56033060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(value__z0_56033060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,value__z0_56033060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
value__z0_56033060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[value__z0_56033060_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_54623620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   value__z1_54623620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   value__z1_54623620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(value__z1_54623620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,value__z1_54623620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
value__z1_54623620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[value__z1_54623620_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_62357260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__a0_62357260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__a0_62357260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__a0_62357260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__a0_62357260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__a0_62357260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__a0_62357260_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_62357240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__a1_62357240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__a1_62357240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__a1_62357240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__a1_62357240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__a1_62357240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__a1_62357240_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79257200();

   return behavior;
}

Behavior __79273320;

Behavior make__79273320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79273320 = behavior;
   behavior->owner = (Object)layer0_58_840_51470720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_62388720_counter_58_8410_62350640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__mac_62388720_counter_58_8410_62350640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__mac_62388720_counter_58_8410_62350640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__mac_62388720_counter_58_8410_62350640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__mac_62388720_counter_58_8410_62350640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__mac_62388720_counter_58_8410_62350640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__mac_62388720_counter_58_8410_62350640_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_62631840_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   a_62631840_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   a_62631840_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(a_62631840_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,a_62631840_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
a_62631840_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[a_62631840_func0_58_8410_62300320_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_65659000_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   a_65659000_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   a_65659000_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(a_65659000_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,a_65659000_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
a_65659000_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[a_65659000_func1_58_8400_65277520_layer0_58_840_51470720_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79257120();

   return behavior;
}

Scope makelayer0_58_840_51470720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_840_51470720 = scope;
   scope->owner = (Object)layer0_58_8400_64497540;
   scope->name = "layer0:T0";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_62388560();
   scope->systemIs[1] = makefunc0_62631680();
   scope->systemIs[2] = makefunc1_65683080();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_53884380();
   scope->inners[1] = makeack_53884320();
   scope->inners[2] = makeack__mac_53884300();
   scope->inners[3] = makeack__add_53884260();
   scope->inners[4] = make_58507_54201600();
   scope->inners[5] = make_58505_54201580();
   scope->inners[6] = make_58506_54201320();
   scope->inners[7] = make_58530_54400560();
   scope->inners[8] = make_58531_54972100();
   scope->inners[9] = make_58522_55358520();
   scope->inners[10] = make_58520_55358420();
   scope->inners[11] = make_58521_55358120();
   scope->inners[12] = make_58571_55722340();
   scope->inners[13] = make_58572_55722240();
   scope->inners[14] = make_58569_55722160();
   scope->inners[15] = make_58570_55746480();
   scope->inners[16] = make_58599_56074440();
   scope->inners[17] = make_58600_56347140();
   scope->inners[18] = make_58586_57004260();
   scope->inners[19] = make_58587_57004240();
   scope->inners[20] = make_58584_57004200();
   scope->inners[21] = make_58585_57004040();
   scope->inners[22] = makevalue__z0_56033060();
   scope->inners[23] = makevalue__z1_54623620();
   scope->inners[24] = makevalue__a0_62186640();
   scope->inners[25] = makevalue__a1_62357320();
   scope->inners[26] = makeflag__z0_62357300();
   scope->inners[27] = makeflag__z1_62357280();
   scope->inners[28] = makeack__a0_62357260();
   scope->inners[29] = makeack__a1_62357240();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58498_51493700();
   scope->scopes[1] = makechannel__w1_58513_57022080();
   scope->scopes[2] = makechannel__accum_58528_63305060();
   scope->scopes[3] = makemac__n1_58560_64187920();
   scope->scopes[4] = makechannel__b0_58567_55158520();
   scope->scopes[5] = makechannel__b1_58582_62242520();
   scope->scopes[6] = makechannel__z_58597_63433740();
   scope->scopes[7] = makeadd__n_58627_64399620();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54349680();
   scope->behaviors[1] = make__62607240();
   scope->behaviors[2] = make__64498160();
   scope->behaviors[3] = make__79256720();
   scope->behaviors[4] = make__79273500();
   scope->behaviors[5] = make__79273320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_8400_64497540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_8400_64497540 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T00";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_64615540();
   systemT->inputs[1] = makerst_64615520();
   systemT->inputs[2] = makereq_64615480();
   systemT->inputs[3] = make_58430_65281320();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_65281280();
   systemT->outputs[1] = make_58428_65281220();
   systemT->outputs[2] = make_58429_65281140();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58470_65660660();
   systemT->inouts[1] = make_58471_66080980();

   systemT->scope = makelayer0_58_840_51470720();

   return systemT;
}