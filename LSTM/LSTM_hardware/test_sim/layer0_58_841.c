#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_841_51273600;

SignalI clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeclk_51267780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_841_51273600;
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

SignalI rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makerst_51267760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_841_51273600;
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

SignalI req_51267740_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makereq_51267740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_51267740_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_841_51273600;
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

SignalI _5891_51462840_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_5891_51462840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5891_51462840_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_841_51273600;
   signalI->name = ":91";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_51552060_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack__layer_51552060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_51552060_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_841_51273600;
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

SignalI _5889_51551780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_5889_51551780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5889_51551780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_841_51273600;
   signalI->name = ":89";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5890_51549980_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_5890_51549980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5890_51549980_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_841_51273600;
   signalI->name = ":90";
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

SignalI _58131_53578280_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58131_53578280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58131_53578280_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_841_51273600;
   signalI->name = ":131";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58132_53781880_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58132_53781880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58132_53781880_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_841_51273600;
   signalI->name = ":132";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __56975420;

Block __56999600;

void code__56999600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75777780(),ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75777720(),ack__mac_56993100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75777660(),ack__add_56993080_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__56999600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56999600 = block;
   block->owner = (Object)__56975420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56999600;

   return block;
};

void code__56975420() {
   {
      Value cond = rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56999600();
   }
      }
   }
}

Block make__56975420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56975420 = block;
   block->owner = (Object)__56997940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56975420;

   return block;
};

Block __56997820;

Block __56996640;

Block __56996300;

void code__56996300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58260_49766700_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,value__z0_50752000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75777480(),flag__z0_51185940_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__56996300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56996300 = block;
   block->owner = (Object)__56996640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56996300;

   return block;
};

Block __45619280;

void code__45619280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58261_50005340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,value__z1_50932660_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75777340(),flag__z1_51185920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__45619280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45619280 = block;
   block->owner = (Object)__56996640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45619280;

   return block;
};

void code__56996640() {
 code__56996300();
 code__45619280();
}

Block make__56996640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56996640 = block;
   block->owner = (Object)__56997820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56996640;

   return block;
};

Block __56997660;

void code__56997660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75777280(),flag__z0_51185940_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75777220(),flag__z1_51185920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__56997660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56997660 = block;
   block->owner = (Object)__56997820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56997660;

   return block;
};

void code__56997820() {
   {
      Value cond = ack__add_56993080_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56996640();
   }
   else {
  code__56997660();
   }
      }
   }
}

Block make__56997820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56997820 = block;
   block->owner = (Object)__49789820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56997820;

   return block;
};

Block __49788900;

Block __49787140;

void code__49787140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75777080(),ack__a0_51185900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75777020(),ack__a1_51185860_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__49787140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49787140 = block;
   block->owner = (Object)__49788900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49787140;

   return block;
};

Block __49784740;

Block __49784280;

void code__49784280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_51065840_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58131_53578280_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75776680(),ack__a0_51185900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__49784280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49784280 = block;
   block->owner = (Object)__49784740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49784280;

   return block;
};

Block __50782300;

void code__50782300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_51186000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58132_53781880_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75776540(),ack__a1_51185860_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__50782300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50782300 = block;
   block->owner = (Object)__49784740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50782300;

   return block;
};

void code__49784740() {
 code__49784280();
 code__50782300();
}

Block make__49784740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49784740 = block;
   block->owner = (Object)__49788900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49784740;

   return block;
};

void code__49788900() {
   {
      Value cond = rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49787140();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_51185940_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         src1 = flag__z1_51185920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__49784740();
   }
      }
   }
}

Block make__49788900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49788900 = block;
   block->owner = (Object)__51254380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49788900;

   return block;
};

Block __75355140;

void code__75355140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_51267740_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_56993100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_56993140_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75355140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75355140 = block;
   block->owner = (Object)__75354900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75355140;

   return block;
};

Block __75355420;

void code__75355420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,clk_51240560_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,ack_51240540_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,rst_51240500_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_50752000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,z__value_55374900_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_50932660_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,z__value_54905080_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_51185900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      src1 = ack__a1_51185860_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_51552060_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75355420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75355420 = block;
   block->owner = (Object)__75404500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75355420;

   return block;
};

Block __75355340;

void code__75355340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_51240420_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,ack__mac_56993100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58233_49403680_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58248_50371460_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_55459900_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,value__a0_51065840_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_55119500_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,value__a1_51186000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75355340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75355340 = block;
   block->owner = (Object)__75404320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75355340;

   return block;
};

Block __55824880;

void code__55824880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55691840_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(abus__r_55149220_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55149300_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__55824880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55824880 = block;
   block->owner = (Object)__56315500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55824880;

   return block;
};

Block __75403340;

void code__75403340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55149300_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58168_57109200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75403340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75403340 = block;
   block->owner = (Object)__75403180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75403340;

   return block;
};

Block __75403140;

void code__75403140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58168_57109200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,dbus__r_55149300_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75403140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75403140 = block;
   block->owner = (Object)__75402960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75403140;

   return block;
};

Block __75402660;

void code__75402660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_55078340_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75402660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75402660 = block;
   block->owner = (Object)__75402500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75402660;

   return block;
};

Block __75402460;

void code__75402460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,trig__r_55078340_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75402460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75402460 = block;
   block->owner = (Object)__75402300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75402460;

   return block;
};

Block __75401900;

void code__75401900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55149220_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75401900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75401900 = block;
   block->owner = (Object)__75401740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75401900;

   return block;
};

Block __75401700;

void code__75401700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,abus__r_55149220_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75401700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75401700 = block;
   block->owner = (Object)__75401540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75401700;

   return block;
};

Block __46018260;

void code__46018260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_57140180_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(abus__r_56466520_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_56466600_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__46018260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46018260 = block;
   block->owner = (Object)__49684780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46018260;

   return block;
};

Block __75400300;

void code__75400300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_56466600_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58183_48082800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75400300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75400300 = block;
   block->owner = (Object)__75400120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75400300;

   return block;
};

Block __75400060;

void code__75400060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_48082800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,dbus__r_56466600_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75400060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75400060 = block;
   block->owner = (Object)__75399880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75400060;

   return block;
};

Block __75399540;

void code__75399540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_56313800_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75399540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75399540 = block;
   block->owner = (Object)__75399380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75399540;

   return block;
};

Block __75399340;

void code__75399340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,trig__r_56313800_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75399340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75399340 = block;
   block->owner = (Object)__75399180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75399340;

   return block;
};

Block __75562660;

void code__75562660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56466520_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75562660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75562660 = block;
   block->owner = (Object)__75562500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75562660;

   return block;
};

Block __75562460;

void code__75562460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,abus__r_56466520_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75562460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75562460 = block;
   block->owner = (Object)__75562300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75562460;

   return block;
};

Block __75560980;

void code__75560980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49891580_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58191_57225220_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75560980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75560980 = block;
   block->owner = (Object)__75560820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75560980;

   return block;
};

Block __75560780;

void code__75560780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58191_57225220_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,reg__0_49891580_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75560780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75560780 = block;
   block->owner = (Object)__75560620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75560780;

   return block;
};

Block __75560300;

void code__75560300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49803400_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58192_44954200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75560300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75560300 = block;
   block->owner = (Object)__75560140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75560300;

   return block;
};

Block __75560100;

void code__75560100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58192_44954200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,reg__1_49803400_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75560100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75560100 = block;
   block->owner = (Object)__75559940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75560100;

   return block;
};

Block __53280120;

Block __53279960;

Block __53279640;

void code__53279640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75767140(),_58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53279640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53279640 = block;
   block->owner = (Object)__53279960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53279640;

   return block;
};

void code__53279960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75767280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53279640();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75766860(),_58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53279960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53279960 = block;
   block->owner = (Object)__53280120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53279960;

   return block;
};

Block __53278480;

Block __53278120;

void code__53278120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75766700(),_58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53278120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53278120 = block;
   block->owner = (Object)__53278480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53278120;

   return block;
};

void code__53278480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75766780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53278120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75766640(),_58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53278480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53278480 = block;
   block->owner = (Object)__53280120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53278480;

   return block;
};

Block __53277500;

Block __53277160;

void code__53277160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75766480(),_5890_51549980_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53277160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53277160 = block;
   block->owner = (Object)__53277500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53277160;

   return block;
};

void code__53277500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75766560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53277160();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75766420(),_5889_51551780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53277500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53277500 = block;
   block->owner = (Object)__53280120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53277500;

   return block;
};

Block __53276040;

void code__53276040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75766180(),rvok_53280320_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75766120(),lvok0_53280360_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75766060(),wok0_53280280_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75766000(),lvok1_53280340_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75765940(),wok1_53280260_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53276040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53276040 = block;
   block->owner = (Object)__53280120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53276040;

   return block;
};

Block __53780620;

Block __53804740;

Block __53804540;

Block __53804160;

Block __53802240;

Block __53802080;

void code__53802080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5891_51462840_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,rv_53280380_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__75765360(),rvok_53280320_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53802080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53802080 = block;
   block->owner = (Object)__53802240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53802080;

   return block;
};

void code__53802240() {
 code__53802080();
}

Block make__53802240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53802240 = block;
   block->owner = (Object)__53804160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53802240;

   return block;
};

Block __53804000;

void code__53804000() {
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
                  src0 = _5890_51549980_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__75765260();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__75765220();
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
                        src0 = _5890_51549980_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__75764940();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__75764860();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5890_51549980_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75764700(),_5889_51551780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53804000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53804000 = block;
   block->owner = (Object)__53804160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53804000;

   return block;
};

void code__53804160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5889_51551780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75765520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53802240();
   }
   else {
  code__53804000();
   }
      }
   }
}

Block make__53804160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53804160 = block;
   block->owner = (Object)__53804540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53804160;

   return block;
};

void code__53804540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75765620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53804160();
   }
      }
   }
}

Block make__53804540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53804540 = block;
   block->owner = (Object)__53804740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53804540;

   return block;
};

void code__53804740() {
 code__53804540();
}

Block make__53804740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53804740 = block;
   block->owner = (Object)__53780620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53804740;

   return block;
};

Block __54045940;

Block __54045780;

Block __54045460;

Block __54043540;

Block __54043380;

void code__54043380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58168_57109200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,lv0_51168440_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__75764300(),lvok0_53280360_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54043380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54043380 = block;
   block->owner = (Object)__54043540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54043380;

   return block;
};

void code__54043540() {
 code__54043380();
}

Block make__54043540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54043540 = block;
   block->owner = (Object)__54045460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54043540;

   return block;
};

Block __54045280;

void code__54045280() {
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
                  src0 = _58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__75764200();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__75764160();
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
                        src0 = _58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__75763920();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__75763860();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75763720(),_58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54045280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54045280 = block;
   block->owner = (Object)__54045460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54045280;

   return block;
};

void code__54045460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75764460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54043540();
   }
   else {
  code__54045280();
   }
      }
   }
}

Block make__54045460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54045460 = block;
   block->owner = (Object)__54045780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54045460;

   return block;
};

void code__54045780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75764560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54045460();
   }
      }
   }
}

Block make__54045780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54045780 = block;
   block->owner = (Object)__54045940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54045780;

   return block;
};

void code__54045940() {
 code__54045780();
}

Block make__54045940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54045940 = block;
   block->owner = (Object)__53780620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54045940;

   return block;
};

Block __54327100;

Block __54326620;

Block __54326460;

void code__54326460() {
}

Block make__54326460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54326460 = block;
   block->owner = (Object)__54326620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54326460;

   return block;
};

Block __55103560;

void code__55103560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_51365780_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58191_57225220_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75762880(),wok0_53280280_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__55103560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55103560 = block;
   block->owner = (Object)__54326620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55103560;

   return block;
};

void code__54326620() {
 code__54326460();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_51365780_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
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
                              src0 = lv0_51168440_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_53280380_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__75763100();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_51365780_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__55103560();
}

Block make__54326620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54326620 = block;
   block->owner = (Object)__54327100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54326620;

   return block;
};

void code__54327100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75763480(),ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75763420(),run_53280240_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__54326620();
}

Block make__54327100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54327100 = block;
   block->owner = (Object)__53780620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54327100;

   return block;
};

Block __55306560;

void code__55306560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75762660(),wok0_53280280_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75762600(),wok1_53280260_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75762540(),lvok0_53280360_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75762480(),lvok1_53280340_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75762420(),rvok_53280320_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__55306560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55306560 = block;
   block->owner = (Object)__53780620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55306560;

   return block;
};

Block __55305340;

Block __55305180;

Block __55304860;

Block __55376640;

Block __55376480;

void code__55376480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58183_48082800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,lv1_51285140_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__75762020(),lvok1_53280340_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__55376480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55376480 = block;
   block->owner = (Object)__55376640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55376480;

   return block;
};

void code__55376640() {
 code__55376480();
}

Block make__55376640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55376640 = block;
   block->owner = (Object)__55304860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55376640;

   return block;
};

Block __55304680;

void code__55304680() {
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
                  src0 = _58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__75761920();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__75761880();
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
                        src0 = _58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__75761620();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__75761560();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75761440(),_58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__55304680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55304680 = block;
   block->owner = (Object)__55304860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55304680;

   return block;
};

void code__55304860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75762180();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55376640();
   }
   else {
  code__55304680();
   }
      }
   }
}

Block make__55304860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55304860 = block;
   block->owner = (Object)__55305180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55304860;

   return block;
};

void code__55305180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75762280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55304860();
   }
      }
   }
}

Block make__55305180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55305180 = block;
   block->owner = (Object)__55305340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55305180;

   return block;
};

void code__55305340() {
 code__55305180();
}

Block make__55305340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55305340 = block;
   block->owner = (Object)__53780620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55305340;

   return block;
};

Block __55546500;

Block __55546020;

Block __55545840;

void code__55545840() {
}

Block make__55545840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55545840 = block;
   block->owner = (Object)__55546020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55545840;

   return block;
};

Block __56242100;

void code__56242100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_51661460_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58192_44954200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75760540(),wok1_53280260_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__56242100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56242100 = block;
   block->owner = (Object)__55546020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56242100;

   return block;
};

void code__55546020() {
 code__55545840();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_51661460_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
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
                              src0 = lv1_51285140_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_53280380_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__75760780();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_51661460_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__56242100();
}

Block make__55546020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55546020 = block;
   block->owner = (Object)__55546500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55546020;

   return block;
};

void code__55546500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75761200(),ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75761140(),run_53280240_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__55546020();
}

Block make__55546500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55546500 = block;
   block->owner = (Object)__53780620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55546500;

   return block;
};

Block __56460420;

void code__56460420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75760380(),wok0_53280280_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75760320(),wok1_53280260_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75760260(),lvok0_53280360_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75760200(),lvok1_53280340_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75760140(),rvok_53280320_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__56460420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56460420 = block;
   block->owner = (Object)__53780620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56460420;

   return block;
};

void code__53780620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75765760(),run_53280240_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_53280320_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53804740();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53280360_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54045940();
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
               src0 = lvok0_53280360_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               src1 = rvok_53280320_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_53280280_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54327100();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_53280280_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         src1 = wok1_53280260_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55306560();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_53280340_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55305340();
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
               src0 = lvok1_53280340_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               src1 = rvok_53280320_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_53280260_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55546500();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_53280280_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         src1 = wok1_53280260_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56460420();
   }
      }
   }
}

Block make__53780620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53780620 = block;
   block->owner = (Object)__53280120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53780620;

   return block;
};

Block __53274980;

void code__53274980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75760080(),av0_51365780_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75760020(),av1_51661460_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53274980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53274980 = block;
   block->owner = (Object)__53280120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53274980;

   return block;
};

void code__53280120() {
 code__53279960();
 code__53278480();
 code__53277500();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75766360(),ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75766300(),run_53280240_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_53280240_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53276040();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_56993140_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         src1 = run_53280240_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53780620();
   }
   else {
  code__53274980();
   }
      }
   }
}

Block make__53280120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53280120 = block;
   block->owner = (Object)__56565440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53280120;

   return block;
};

Block __57243740;

void code__57243740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_56999960_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(abus__r_56730940_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_56731020_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__57243740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57243740 = block;
   block->owner = (Object)__49381500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57243740;

   return block;
};

Block __75558100;

void code__75558100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_56731020_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58232_49403740_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75558100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75558100 = block;
   block->owner = (Object)__75557940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75558100;

   return block;
};

Block __75557900;

void code__75557900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58232_49403740_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,dbus__r_56731020_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75557900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75557900 = block;
   block->owner = (Object)__75557720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75557900;

   return block;
};

Block __75557340;

void code__75557340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_56563640_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75557340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75557340 = block;
   block->owner = (Object)__75557180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75557340;

   return block;
};

Block __75557140;

void code__75557140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,trig__r_56563640_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75557140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75557140 = block;
   block->owner = (Object)__75556980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75557140;

   return block;
};

Block __75556680;

void code__75556680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56730940_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58231_49403280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75556680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75556680 = block;
   block->owner = (Object)__75556520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75556680;

   return block;
};

Block __75556480;

void code__75556480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58231_49403280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,abus__r_56730940_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75556480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75556480 = block;
   block->owner = (Object)__75556300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75556480;

   return block;
};

Block __50883160;

void code__50883160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50304600_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(abus__r_49769280_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49769400_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__50883160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50883160 = block;
   block->owner = (Object)__51269880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50883160;

   return block;
};

Block __75554980;

void code__75554980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49769400_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58247_50371480_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75554980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75554980 = block;
   block->owner = (Object)__75554820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75554980;

   return block;
};

Block __75628480;

void code__75628480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58247_50371480_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,dbus__r_49769400_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75628480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75628480 = block;
   block->owner = (Object)__75628320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75628480;

   return block;
};

Block __75628000;

void code__75628000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49402960_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75628000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75628000 = block;
   block->owner = (Object)__75627840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75628000;

   return block;
};

Block __75627800;

void code__75627800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,trig__r_49402960_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75627800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75627800 = block;
   block->owner = (Object)__75627640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75627800;

   return block;
};

Block __75627340;

void code__75627340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49769280_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58246_50371340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75627340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75627340 = block;
   block->owner = (Object)__75627140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75627340;

   return block;
};

Block __75627100;

void code__75627100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58246_50371340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,abus__r_49769280_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75627100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75627100 = block;
   block->owner = (Object)__75626880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75627100;

   return block;
};

Block __75625640;

void code__75625640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51366780_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58260_49766700_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75625640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75625640 = block;
   block->owner = (Object)__75625480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75625640;

   return block;
};

Block __75625440;

void code__75625440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58260_49766700_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,reg__0_51366780_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75625440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75625440 = block;
   block->owner = (Object)__75625280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75625440;

   return block;
};

Block __75624920;

void code__75624920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51697820_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58261_50005340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75624920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75624920 = block;
   block->owner = (Object)__75624720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75624920;

   return block;
};

Block __75624680;

void code__75624680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58261_50005340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,reg__1_51697820_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75624680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75624680 = block;
   block->owner = (Object)__75624520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75624680;

   return block;
};

Block __54621000;

Block __54620820;

void code__54620820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75782080(),_58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54620820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54620820 = block;
   block->owner = (Object)__54621000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54620820;

   return block;
};

Block __54620460;

void code__54620460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75782020(),_58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54620460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54620460 = block;
   block->owner = (Object)__54621000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54620460;

   return block;
};

Block __54618640;

Block __54618320;

void code__54618320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58191_57225220_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,lv0_54077660_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75781600(),lvok0_54621240_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54618320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54618320 = block;
   block->owner = (Object)__54618640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54618320;

   return block;
};

Block __54907420;

Block __54907080;

Block __54906160;

void code__54906160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58232_49403740_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,rv0_54349340_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75781220(),_58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75781160(),rvok0_54621200_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54906160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54906160 = block;
   block->owner = (Object)__54907080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54906160;

   return block;
};

Block __54906920;

void code__54906920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75781080(),_58231_49403280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75780980(),_58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54906920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54906920 = block;
   block->owner = (Object)__54907080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54906920;

   return block;
};

void code__54907080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75781420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54906160();
   }
   else {
  code__54906920();
   }
      }
   }
}

Block make__54907080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54907080 = block;
   block->owner = (Object)__54907420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54907080;

   return block;
};

void code__54907420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58233_49403680_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75781520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54907080();
   }
      }
   }
}

Block make__54907420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54907420 = block;
   block->owner = (Object)__54618640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54907420;

   return block;
};

Block __55168560;

Block __55168060;

void code__55168060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_54077660_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      src1 = rv0_54349340_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58260_49766700_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__55168060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55168060 = block;
   block->owner = (Object)__55168560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55168060;

   return block;
};

void code__55168560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75780820(),run_54621160_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75780760(),ack__add_56993080_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__55168060();
}

Block make__55168560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55168560 = block;
   block->owner = (Object)__54618640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55168560;

   return block;
};

Block __55694660;

void code__55694660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58192_44954200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,lv1_54217620_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75780440(),lvok1_54621220_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__55694660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55694660 = block;
   block->owner = (Object)__54618640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55694660;

   return block;
};

Block __55860440;

Block __55860080;

Block __55859040;

void code__55859040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58247_50371480_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,rv1_54621260_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75780100(),_58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75780020(),rvok1_54621180_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__55859040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55859040 = block;
   block->owner = (Object)__55860080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55859040;

   return block;
};

Block __55859880;

void code__55859880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75779960(),_58246_50371340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75779900(),_58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__55859880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55859880 = block;
   block->owner = (Object)__55860080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55859880;

   return block;
};

void code__55860080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75780260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55859040();
   }
   else {
  code__55859880();
   }
      }
   }
}

Block make__55860080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55860080 = block;
   block->owner = (Object)__55860440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55860080;

   return block;
};

void code__55860440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58248_50371460_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75780360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55860080();
   }
      }
   }
}

Block make__55860440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55860440 = block;
   block->owner = (Object)__54618640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55860440;

   return block;
};

Block __56303360;

Block __56302840;

void code__56302840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_54217620_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      src1 = rv1_54621260_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58261_50005340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__56302840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56302840 = block;
   block->owner = (Object)__56303360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56302840;

   return block;
};

void code__56303360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75779740(),run_54621160_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75779680(),ack__add_56993080_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__56302840();
}

Block make__56303360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56303360 = block;
   block->owner = (Object)__54618640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56303360;

   return block;
};

void code__54618640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75781740(),run_54621160_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__54618320();
 code__54907420();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_54621240_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         src1 = rvok0_54621200_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55168560();
   }
      }
   }
 code__55694660();
 code__55860440();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_54621220_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         src1 = rvok1_54621180_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56303360();
   }
      }
   }
}

Block make__54618640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54618640 = block;
   block->owner = (Object)__54621000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54618640;

   return block;
};

Block __54619780;

void code__54619780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75779440(),lvok0_54621240_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75779380(),rvok0_54621200_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75779320(),lvok1_54621220_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75779240(),rvok1_54621180_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54619780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54619780 = block;
   block->owner = (Object)__54621000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54619780;

   return block;
};

void code__54621000() {
 code__54620820();
 code__54620460();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75781960(),ack__add_56993080_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__75781900(),run_54621160_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_56993100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         src1 = run_54621160_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54618640();
   }
   else {
  code__54619780();
   }
      }
   }
}

Block make__54621000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54621000 = block;
   block->owner = (Object)__56993300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54621000;

   return block;
};

Value make__75720920() {
   static unsigned long long data[] = { 4294967238ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75720900() {
   static unsigned long long data[] = { 4294967242ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75719720() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75719700() {
   static unsigned long long data[] = { 4294967271ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75760000() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__75783620() {
   static unsigned long long data[] = { 33ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__75767280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75767140() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75766860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75766780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75766700() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75766640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75766560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75766480() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75766420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75766360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75766300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75766180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75766120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75766060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75766000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75765940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75765760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75765620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75765520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75765360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75765260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75765220() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75764940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75764860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75764700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75764560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75764460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75764300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75764200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75764160() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75763920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75763860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75763720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75763480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75763420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75763100() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75762880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75762660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75762600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75762540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75762480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75762420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75762280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75762180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75762020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75761920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75761880() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75761620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75761560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75761440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75761200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75761140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75760780() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75760540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75760380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75760320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75760260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75760200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75760140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75760080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75760020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75782080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75782020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75781960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75781900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75781740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75781600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75781520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75781420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75781220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75781160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75781080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75780980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75780820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75780760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75780440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75780360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75780260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75780100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75780020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75779960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75779900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75779740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75779680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75779440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75779380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75779320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75779240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75777780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75777720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75777660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75777480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75777340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75777280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75777220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75777080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75777020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75776680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__75776540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_55080220;

SignalI req__mac_56993140_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makereq__mac_56993140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_56993140_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
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

SignalI ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack_56993120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
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

SignalI ack__mac_56993100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack__mac_56993100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_56993100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
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

SignalI ack__add_56993080_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack__add_56993080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_56993080_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
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

SignalI _58168_57109200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58168_57109200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58168_57109200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":168";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58166_57109180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":166";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58167_57109100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":167";
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

SignalI _58191_57225220_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58191_57225220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58191_57225220_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
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

SignalI _58192_44954200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58192_44954200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58192_44954200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":192";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58183_48082800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58183_48082800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58183_48082800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":183";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58181_48081980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":181";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58182_48103340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":182";
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

SignalI _58232_49403740_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58232_49403740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58232_49403740_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":232";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58233_49403680_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58233_49403680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58233_49403680_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":233";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58230_49403360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":230";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58231_49403280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58231_49403280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58231_49403280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":231";
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

SignalI _58260_49766700_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58260_49766700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58260_49766700_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":260";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58261_50005340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58261_50005340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58261_50005340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":261";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58247_50371480_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58247_50371480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58247_50371480_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":247";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58248_50371460_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58248_50371460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58248_50371460_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":248";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58245_50371440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":245";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58246_50371340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58246_50371340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58246_50371340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
   signalI->name = ":246";
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

SignalI value__z0_50752000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makevalue__z0_50752000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_50752000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
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

SignalI value__z1_50932660_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makevalue__z1_50932660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_50932660_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
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

SignalI value__a0_51065840_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makevalue__a0_51065840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_51065840_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
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

SignalI value__a1_51186000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makevalue__a1_51186000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_51186000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
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

SignalI flag__z0_51185940_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeflag__z0_51185940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_51185940_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
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

SignalI flag__z1_51185920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeflag__z1_51185920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_51185920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
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

SignalI ack__a0_51185900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack__a0_51185900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_51185900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
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

SignalI ack__a1_51185860_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack__a1_51185860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_51185860_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_84_55080220;
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

SystemI counter_51240280;

SystemI makecounter_51240280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_51240280 = systemI;
   systemI->owner = (Object)layer0_58_84_55080220;
   systemI->name = "counter";
   systemI->system = counter_58_843_51203280;

   return systemI;
};

SystemI func0_55484280;

SystemI makefunc0_55484280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_55484280 = systemI;
   systemI->owner = (Object)layer0_58_84_55080220;
   systemI->name = "func0";
   systemI->system = func0_58_843_55150800;

   return systemI;
};

SystemI func1_55119280;

SystemI makefunc1_55119280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_55119280 = systemI;
   systemI->owner = (Object)layer0_58_84_55080220;
   systemI->name = "func1";
   systemI->system = func1_58_841_54661280;

   return systemI;
};

Scope channel__w0_58159_55079920;

SignalI trig__r_55078340_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI maketrig__r_55078340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_55078340_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58159_55079920;
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

SignalI dbus__r_55149300_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makedbus__r_55149300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55149300_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58159_55079920;
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

SignalI abus__r_55149220_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_55149220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55149220_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58159_55079920;
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

SignalI mem_55691840_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makemem_55691840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55691840_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58159_55079920;
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
         src0 = make__75720920();
         src1 = make__75720900();
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

Scope raddr_58160_55079620;

Scope makeraddr_58160_55079620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58160_55079620 = scope;
   scope->owner = (Object)channel__w0_58159_55079920;
   scope->name = "raddr:160";
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

Scope rinc_58165_55079200;

Scope makerinc_58165_55079200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58165_55079200 = scope;
   scope->owner = (Object)channel__w0_58159_55079920;
   scope->name = "rinc:165";
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

Scope rdec_58169_55078780;

Scope makerdec_58169_55078780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58169_55078780 = scope;
   scope->owner = (Object)channel__w0_58159_55079920;
   scope->name = "rdec:169";
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

Behavior __56315500;

Behavior make__56315500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56315500 = behavior;
   behavior->owner = (Object)channel__w0_58159_55079920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg = realloc(clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg[clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__55824880();

   return behavior;
}

Behavior __75403180;

Behavior make__75403180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75403180 = behavior;
   behavior->owner = (Object)channel__w0_58159_55079920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55149300_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   dbus__r_55149300_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__r_55149300_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(dbus__r_55149300_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,dbus__r_55149300_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__r_55149300_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[dbus__r_55149300_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75403340();

   return behavior;
}

Behavior __75402960;

Behavior make__75402960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75402960 = behavior;
   behavior->owner = (Object)channel__w0_58159_55079920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58168_57109200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58168_57109200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58168_57109200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58168_57109200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58168_57109200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58168_57109200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58168_57109200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75403140();

   return behavior;
}

Behavior __75402500;

Behavior make__75402500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75402500 = behavior;
   behavior->owner = (Object)channel__w0_58159_55079920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_55078340_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   trig__r_55078340_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   trig__r_55078340_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(trig__r_55078340_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,trig__r_55078340_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
trig__r_55078340_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[trig__r_55078340_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75402660();

   return behavior;
}

Behavior __75402300;

Behavior make__75402300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75402300 = behavior;
   behavior->owner = (Object)channel__w0_58159_55079920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58166_57109180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75402460();

   return behavior;
}

Behavior __75401740;

Behavior make__75401740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75401740 = behavior;
   behavior->owner = (Object)channel__w0_58159_55079920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55149220_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   abus__r_55149220_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_55149220_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(abus__r_55149220_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,abus__r_55149220_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_55149220_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[abus__r_55149220_channel__w0_58159_55079920_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75401900();

   return behavior;
}

Behavior __75401540;

Behavior make__75401540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75401540 = behavior;
   behavior->owner = (Object)channel__w0_58159_55079920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58167_57109100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75401700();

   return behavior;
}

Scope makechannel__w0_58159_55079920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58159_55079920 = scope;
   scope->owner = (Object)layer0_58_84_55080220;
   scope->name = "channel_w0:159";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_55078340();
   scope->inners[1] = makedbus__r_55149300();
   scope->inners[2] = makeabus__r_55149220();
   scope->inners[3] = makemem_55691840();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58160_55079620();
   scope->scopes[1] = makerinc_58165_55079200();
   scope->scopes[2] = makerdec_58169_55078780();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56315500();
   scope->behaviors[1] = make__75403180();
   scope->behaviors[2] = make__75402960();
   scope->behaviors[3] = make__75402500();
   scope->behaviors[4] = make__75402300();
   scope->behaviors[5] = make__75401740();
   scope->behaviors[6] = make__75401540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58174_56315380;

SignalI trig__r_56313800_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI maketrig__r_56313800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_56313800_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w1_58174_56315380;
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

SignalI dbus__r_56466600_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makedbus__r_56466600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_56466600_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w1_58174_56315380;
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

SignalI abus__r_56466520_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_56466520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56466520_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w1_58174_56315380;
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

SignalI mem_57140180_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makemem_57140180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_57140180_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w1_58174_56315380;
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
         src0 = make__75719720();
         src1 = make__75719700();
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

Scope raddr_58175_56315080;

Scope makeraddr_58175_56315080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58175_56315080 = scope;
   scope->owner = (Object)channel__w1_58174_56315380;
   scope->name = "raddr:175";
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

Scope rinc_58180_56314660;

Scope makerinc_58180_56314660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58180_56314660 = scope;
   scope->owner = (Object)channel__w1_58174_56315380;
   scope->name = "rinc:180";
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

Scope rdec_58184_56314240;

Scope makerdec_58184_56314240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58184_56314240 = scope;
   scope->owner = (Object)channel__w1_58174_56315380;
   scope->name = "rdec:184";
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

Behavior __49684780;

Behavior make__49684780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49684780 = behavior;
   behavior->owner = (Object)channel__w1_58174_56315380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg = realloc(clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg[clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__46018260();

   return behavior;
}

Behavior __75400120;

Behavior make__75400120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75400120 = behavior;
   behavior->owner = (Object)channel__w1_58174_56315380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_56466600_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   dbus__r_56466600_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__r_56466600_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(dbus__r_56466600_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,dbus__r_56466600_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__r_56466600_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[dbus__r_56466600_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75400300();

   return behavior;
}

Behavior __75399880;

Behavior make__75399880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75399880 = behavior;
   behavior->owner = (Object)channel__w1_58174_56315380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58183_48082800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58183_48082800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58183_48082800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58183_48082800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58183_48082800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58183_48082800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58183_48082800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75400060();

   return behavior;
}

Behavior __75399380;

Behavior make__75399380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75399380 = behavior;
   behavior->owner = (Object)channel__w1_58174_56315380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_56313800_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   trig__r_56313800_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   trig__r_56313800_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(trig__r_56313800_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,trig__r_56313800_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
trig__r_56313800_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[trig__r_56313800_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75399540();

   return behavior;
}

Behavior __75399180;

Behavior make__75399180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75399180 = behavior;
   behavior->owner = (Object)channel__w1_58174_56315380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58181_48081980_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75399340();

   return behavior;
}

Behavior __75562500;

Behavior make__75562500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75562500 = behavior;
   behavior->owner = (Object)channel__w1_58174_56315380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56466520_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   abus__r_56466520_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_56466520_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(abus__r_56466520_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,abus__r_56466520_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_56466520_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[abus__r_56466520_channel__w1_58174_56315380_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75562660();

   return behavior;
}

Behavior __75562300;

Behavior make__75562300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75562300 = behavior;
   behavior->owner = (Object)channel__w1_58174_56315380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58182_48103340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75562460();

   return behavior;
}

Scope makechannel__w1_58174_56315380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58174_56315380 = scope;
   scope->owner = (Object)layer0_58_84_55080220;
   scope->name = "channel_w1:174";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_56313800();
   scope->inners[1] = makedbus__r_56466600();
   scope->inners[2] = makeabus__r_56466520();
   scope->inners[3] = makemem_57140180();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58175_56315080();
   scope->scopes[1] = makerinc_58180_56314660();
   scope->scopes[2] = makerdec_58184_56314240();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49684780();
   scope->behaviors[1] = make__75400120();
   scope->behaviors[2] = make__75399880();
   scope->behaviors[3] = make__75399380();
   scope->behaviors[4] = make__75399180();
   scope->behaviors[5] = make__75562500();
   scope->behaviors[6] = make__75562300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58189_49684640;

SignalI reg__0_49891580_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makereg__0_49891580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49891580_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__accum_58189_49684640;
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

SignalI reg__1_49803400_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makereg__1_49803400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49803400_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__accum_58189_49684640;
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

Scope anum_58190_49708720;

Scope makeanum_58190_49708720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58190_49708720 = scope;
   scope->owner = (Object)channel__accum_58189_49684640;
   scope->name = "anum:190";
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

Scope raddr_58193_49707660;

Scope makeraddr_58193_49707660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58193_49707660 = scope;
   scope->owner = (Object)channel__accum_58189_49684640;
   scope->name = "raddr:193";
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

Scope waddr_58197_49706660;

Scope makewaddr_58197_49706660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58197_49706660 = scope;
   scope->owner = (Object)channel__accum_58189_49684640;
   scope->name = "waddr:197";
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

Scope rinc_58201_49706200;

SignalI abus__r_49701040_rinc_58201_49706200_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_49701040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49701040_rinc_58201_49706200_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rinc_58201_49706200;
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

Scope makerinc_58201_49706200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58201_49706200 = scope;
   scope->owner = (Object)channel__accum_58189_49684640;
   scope->name = "rinc:201";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49701040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58206_49724740;

SignalI abus__w_49722960_winc_58206_49724740_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__w_49722960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49722960_winc_58206_49724740_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)winc_58206_49724740;
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

Scope makewinc_58206_49724740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58206_49724740 = scope;
   scope->owner = (Object)channel__accum_58189_49684640;
   scope->name = "winc:206";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49722960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58211_49722240;

SignalI abus__r_49719440_rdec_58211_49722240_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_49719440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49719440_rdec_58211_49722240_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rdec_58211_49722240;
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

Scope makerdec_58211_49722240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58211_49722240 = scope;
   scope->owner = (Object)channel__accum_58189_49684640;
   scope->name = "rdec:211";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49719440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58216_49717440;

SignalI abus__w_49739080_wdec_58216_49717440_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__w_49739080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49739080_wdec_58216_49717440_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)wdec_58216_49717440;
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

Scope makewdec_58216_49717440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58216_49717440 = scope;
   scope->owner = (Object)channel__accum_58189_49684640;
   scope->name = "wdec:216";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49739080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __75560820;

Behavior make__75560820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75560820 = behavior;
   behavior->owner = (Object)channel__accum_58189_49684640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49891580_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   reg__0_49891580_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   reg__0_49891580_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(reg__0_49891580_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,reg__0_49891580_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__0_49891580_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[reg__0_49891580_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75560980();

   return behavior;
}

Behavior __75560620;

Behavior make__75560620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75560620 = behavior;
   behavior->owner = (Object)channel__accum_58189_49684640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58191_57225220_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58191_57225220_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58191_57225220_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58191_57225220_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58191_57225220_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58191_57225220_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58191_57225220_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75560780();

   return behavior;
}

Behavior __75560140;

Behavior make__75560140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75560140 = behavior;
   behavior->owner = (Object)channel__accum_58189_49684640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49803400_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   reg__1_49803400_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   reg__1_49803400_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(reg__1_49803400_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,reg__1_49803400_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__1_49803400_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[reg__1_49803400_channel__accum_58189_49684640_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75560300();

   return behavior;
}

Behavior __75559940;

Behavior make__75559940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75559940 = behavior;
   behavior->owner = (Object)channel__accum_58189_49684640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58192_44954200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58192_44954200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58192_44954200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58192_44954200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58192_44954200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58192_44954200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58192_44954200_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75560100();

   return behavior;
}

Scope makechannel__accum_58189_49684640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58189_49684640 = scope;
   scope->owner = (Object)layer0_58_84_55080220;
   scope->name = "channel_accum:189";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49891580();
   scope->inners[1] = makereg__1_49803400();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58190_49708720();
   scope->scopes[1] = makeraddr_58193_49707660();
   scope->scopes[2] = makewaddr_58197_49706660();
   scope->scopes[3] = makerinc_58201_49706200();
   scope->scopes[4] = makewinc_58206_49724740();
   scope->scopes[5] = makerdec_58211_49722240();
   scope->scopes[6] = makewdec_58216_49717440();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__75560820();
   scope->behaviors[1] = make__75560620();
   scope->behaviors[2] = make__75560140();
   scope->behaviors[3] = make__75559940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58221_51067020;

SignalI lv0_51168440_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelv0_51168440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51168440_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58221_51067020;
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

SignalI lv1_51285140_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelv1_51285140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_51285140_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58221_51067020;
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

SignalI av0_51365780_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeav0_51365780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_51365780_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58221_51067020;
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

SignalI av1_51661460_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeav1_51661460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_51661460_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58221_51067020;
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

SignalI rv_53280380_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makerv_53280380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_53280380_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58221_51067020;
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

SignalI lvok0_53280360_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelvok0_53280360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53280360_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58221_51067020;
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

SignalI lvok1_53280340_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelvok1_53280340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_53280340_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58221_51067020;
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

SignalI rvok_53280320_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makervok_53280320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_53280320_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58221_51067020;
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

SignalI wok0_53280280_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makewok0_53280280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_53280280_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58221_51067020;
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

SignalI wok1_53280260_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makewok1_53280260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_53280260_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58221_51067020;
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

SignalI run_53280240_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makerun_53280240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53280240_mac__n1_58221_51067020_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58221_51067020;
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

Behavior __56565440;

Behavior make__56565440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56565440 = behavior;
   behavior->owner = (Object)mac__n1_58221_51067020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos = realloc(clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos[clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__53280120();

   return behavior;
}

Scope makemac__n1_58221_51067020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58221_51067020 = scope;
   scope->owner = (Object)layer0_58_84_55080220;
   scope->name = "mac_n1:221";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51168440();
   scope->inners[1] = makelv1_51285140();
   scope->inners[2] = makeav0_51365780();
   scope->inners[3] = makeav1_51661460();
   scope->inners[4] = makerv_53280380();
   scope->inners[5] = makelvok0_53280360();
   scope->inners[6] = makelvok1_53280340();
   scope->inners[7] = makervok_53280320();
   scope->inners[8] = makewok0_53280280();
   scope->inners[9] = makewok1_53280260();
   scope->inners[10] = makerun_53280240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56565440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58228_56565320;

SignalI trig__r_56563640_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI maketrig__r_56563640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_56563640_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58228_56565320;
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

SignalI dbus__r_56731020_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makedbus__r_56731020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_56731020_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58228_56565320;
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

SignalI abus__r_56730940_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_56730940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56730940_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58228_56565320;
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

SignalI mem_56999960_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makemem_56999960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_56999960_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58228_56565320;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__75760000(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58229_56565020;

Scope makeraddr_58229_56565020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58229_56565020 = scope;
   scope->owner = (Object)channel__b0_58228_56565320;
   scope->name = "raddr:229";
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

Scope rinc_58234_56564540;

Scope makerinc_58234_56564540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58234_56564540 = scope;
   scope->owner = (Object)channel__b0_58228_56565320;
   scope->name = "rinc:234";
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

Scope rdec_58238_56564080;

Scope makerdec_58238_56564080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58238_56564080 = scope;
   scope->owner = (Object)channel__b0_58228_56565320;
   scope->name = "rdec:238";
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

Behavior __49381500;

Behavior make__49381500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49381500 = behavior;
   behavior->owner = (Object)channel__b0_58228_56565320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg = realloc(clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg[clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__57243740();

   return behavior;
}

Behavior __75557940;

Behavior make__75557940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75557940 = behavior;
   behavior->owner = (Object)channel__b0_58228_56565320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_56731020_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   dbus__r_56731020_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__r_56731020_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(dbus__r_56731020_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,dbus__r_56731020_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__r_56731020_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[dbus__r_56731020_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75558100();

   return behavior;
}

Behavior __75557720;

Behavior make__75557720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75557720 = behavior;
   behavior->owner = (Object)channel__b0_58228_56565320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58232_49403740_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58232_49403740_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58232_49403740_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58232_49403740_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58232_49403740_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58232_49403740_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58232_49403740_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75557900();

   return behavior;
}

Behavior __75557180;

Behavior make__75557180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75557180 = behavior;
   behavior->owner = (Object)channel__b0_58228_56565320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_56563640_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   trig__r_56563640_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   trig__r_56563640_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(trig__r_56563640_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,trig__r_56563640_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
trig__r_56563640_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[trig__r_56563640_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75557340();

   return behavior;
}

Behavior __75556980;

Behavior make__75556980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75556980 = behavior;
   behavior->owner = (Object)channel__b0_58228_56565320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58230_49403360_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75557140();

   return behavior;
}

Behavior __75556520;

Behavior make__75556520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75556520 = behavior;
   behavior->owner = (Object)channel__b0_58228_56565320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56730940_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   abus__r_56730940_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_56730940_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(abus__r_56730940_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,abus__r_56730940_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_56730940_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[abus__r_56730940_channel__b0_58228_56565320_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75556680();

   return behavior;
}

Behavior __75556300;

Behavior make__75556300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75556300 = behavior;
   behavior->owner = (Object)channel__b0_58228_56565320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58231_49403280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58231_49403280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58231_49403280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58231_49403280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58231_49403280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58231_49403280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58231_49403280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75556480();

   return behavior;
}

Scope makechannel__b0_58228_56565320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58228_56565320 = scope;
   scope->owner = (Object)layer0_58_84_55080220;
   scope->name = "channel_b0:228";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_56563640();
   scope->inners[1] = makedbus__r_56731020();
   scope->inners[2] = makeabus__r_56730940();
   scope->inners[3] = makemem_56999960();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58229_56565020();
   scope->scopes[1] = makerinc_58234_56564540();
   scope->scopes[2] = makerdec_58238_56564080();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49381500();
   scope->behaviors[1] = make__75557940();
   scope->behaviors[2] = make__75557720();
   scope->behaviors[3] = make__75557180();
   scope->behaviors[4] = make__75556980();
   scope->behaviors[5] = make__75556520();
   scope->behaviors[6] = make__75556300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58243_49405900;

SignalI trig__r_49402960_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI maketrig__r_49402960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49402960_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b1_58243_49405900;
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

SignalI dbus__r_49769400_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makedbus__r_49769400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49769400_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b1_58243_49405900;
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

SignalI abus__r_49769280_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_49769280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49769280_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b1_58243_49405900;
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

SignalI mem_50304600_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makemem_50304600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50304600_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b1_58243_49405900;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__75783620(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58244_49405380;

Scope makeraddr_58244_49405380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58244_49405380 = scope;
   scope->owner = (Object)channel__b1_58243_49405900;
   scope->name = "raddr:244";
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

Scope rinc_58249_49404420;

Scope makerinc_58249_49404420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58249_49404420 = scope;
   scope->owner = (Object)channel__b1_58243_49405900;
   scope->name = "rinc:249";
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

Scope rdec_58253_49403660;

Scope makerdec_58253_49403660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58253_49403660 = scope;
   scope->owner = (Object)channel__b1_58243_49405900;
   scope->name = "rdec:253";
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

Behavior __51269880;

Behavior make__51269880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51269880 = behavior;
   behavior->owner = (Object)channel__b1_58243_49405900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg = realloc(clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg[clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__50883160();

   return behavior;
}

Behavior __75554820;

Behavior make__75554820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75554820 = behavior;
   behavior->owner = (Object)channel__b1_58243_49405900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49769400_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   dbus__r_49769400_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__r_49769400_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(dbus__r_49769400_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,dbus__r_49769400_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__r_49769400_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[dbus__r_49769400_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75554980();

   return behavior;
}

Behavior __75628320;

Behavior make__75628320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75628320 = behavior;
   behavior->owner = (Object)channel__b1_58243_49405900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58247_50371480_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58247_50371480_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58247_50371480_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58247_50371480_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58247_50371480_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58247_50371480_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58247_50371480_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75628480();

   return behavior;
}

Behavior __75627840;

Behavior make__75627840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75627840 = behavior;
   behavior->owner = (Object)channel__b1_58243_49405900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49402960_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   trig__r_49402960_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   trig__r_49402960_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(trig__r_49402960_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,trig__r_49402960_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
trig__r_49402960_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[trig__r_49402960_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75628000();

   return behavior;
}

Behavior __75627640;

Behavior make__75627640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75627640 = behavior;
   behavior->owner = (Object)channel__b1_58243_49405900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58245_50371440_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75627800();

   return behavior;
}

Behavior __75627140;

Behavior make__75627140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75627140 = behavior;
   behavior->owner = (Object)channel__b1_58243_49405900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49769280_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   abus__r_49769280_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_49769280_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(abus__r_49769280_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,abus__r_49769280_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_49769280_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[abus__r_49769280_channel__b1_58243_49405900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75627340();

   return behavior;
}

Behavior __75626880;

Behavior make__75626880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75626880 = behavior;
   behavior->owner = (Object)channel__b1_58243_49405900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58246_50371340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58246_50371340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58246_50371340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58246_50371340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58246_50371340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58246_50371340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58246_50371340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75627100();

   return behavior;
}

Scope makechannel__b1_58243_49405900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58243_49405900 = scope;
   scope->owner = (Object)layer0_58_84_55080220;
   scope->name = "channel_b1:243";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49402960();
   scope->inners[1] = makedbus__r_49769400();
   scope->inners[2] = makeabus__r_49769280();
   scope->inners[3] = makemem_50304600();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58244_49405380();
   scope->scopes[1] = makerinc_58249_49404420();
   scope->scopes[2] = makerdec_58253_49403660();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51269880();
   scope->behaviors[1] = make__75554820();
   scope->behaviors[2] = make__75628320();
   scope->behaviors[3] = make__75627840();
   scope->behaviors[4] = make__75627640();
   scope->behaviors[5] = make__75627140();
   scope->behaviors[6] = make__75626880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58258_51269720;

SignalI reg__0_51366780_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makereg__0_51366780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51366780_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__z_58258_51269720;
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

SignalI reg__1_51697820_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makereg__1_51697820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51697820_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__z_58258_51269720;
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

Scope anum_58259_51269340;

Scope makeanum_58259_51269340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58259_51269340 = scope;
   scope->owner = (Object)channel__z_58258_51269720;
   scope->name = "anum:259";
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

Scope raddr_58262_51268860;

Scope makeraddr_58262_51268860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58262_51268860 = scope;
   scope->owner = (Object)channel__z_58258_51269720;
   scope->name = "raddr:262";
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

Scope waddr_58266_51268080;

Scope makewaddr_58266_51268080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58266_51268080 = scope;
   scope->owner = (Object)channel__z_58258_51269720;
   scope->name = "waddr:266";
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

Scope rinc_58270_51267560;

SignalI abus__r_51267120_rinc_58270_51267560_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_51267120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51267120_rinc_58270_51267560_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rinc_58270_51267560;
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

Scope makerinc_58270_51267560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58270_51267560 = scope;
   scope->owner = (Object)channel__z_58258_51269720;
   scope->name = "rinc:270";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51267120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58274_51266900;

SignalI abus__w_51266440_winc_58274_51266900_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__w_51266440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51266440_winc_58274_51266900_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)winc_58274_51266900;
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

Scope makewinc_58274_51266900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58274_51266900 = scope;
   scope->owner = (Object)channel__z_58258_51269720;
   scope->name = "winc:274";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51266440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58278_51266300;

SignalI abus__r_51289700_rdec_58278_51266300_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_51289700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51289700_rdec_58278_51266300_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rdec_58278_51266300;
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

Scope makerdec_58278_51266300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58278_51266300 = scope;
   scope->owner = (Object)channel__z_58258_51269720;
   scope->name = "rdec:278";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51289700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58283_51289140;

SignalI abus__w_51288560_wdec_58283_51289140_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__w_51288560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51288560_wdec_58283_51289140_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)wdec_58283_51289140;
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

Scope makewdec_58283_51289140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58283_51289140 = scope;
   scope->owner = (Object)channel__z_58258_51269720;
   scope->name = "wdec:283";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51288560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __75625480;

Behavior make__75625480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75625480 = behavior;
   behavior->owner = (Object)channel__z_58258_51269720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51366780_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   reg__0_51366780_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   reg__0_51366780_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(reg__0_51366780_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,reg__0_51366780_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__0_51366780_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[reg__0_51366780_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75625640();

   return behavior;
}

Behavior __75625280;

Behavior make__75625280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75625280 = behavior;
   behavior->owner = (Object)channel__z_58258_51269720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58260_49766700_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58260_49766700_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58260_49766700_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58260_49766700_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58260_49766700_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58260_49766700_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58260_49766700_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75625440();

   return behavior;
}

Behavior __75624720;

Behavior make__75624720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75624720 = behavior;
   behavior->owner = (Object)channel__z_58258_51269720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51697820_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   reg__1_51697820_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   reg__1_51697820_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(reg__1_51697820_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,reg__1_51697820_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__1_51697820_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[reg__1_51697820_channel__z_58258_51269720_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75624920();

   return behavior;
}

Behavior __75624520;

Behavior make__75624520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75624520 = behavior;
   behavior->owner = (Object)channel__z_58258_51269720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58261_50005340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58261_50005340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58261_50005340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58261_50005340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58261_50005340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58261_50005340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58261_50005340_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75624680();

   return behavior;
}

Scope makechannel__z_58258_51269720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58258_51269720 = scope;
   scope->owner = (Object)layer0_58_84_55080220;
   scope->name = "channel_z:258";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51366780();
   scope->inners[1] = makereg__1_51697820();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58259_51269340();
   scope->scopes[1] = makeraddr_58262_51268860();
   scope->scopes[2] = makewaddr_58266_51268080();
   scope->scopes[3] = makerinc_58270_51267560();
   scope->scopes[4] = makewinc_58274_51266900();
   scope->scopes[5] = makerdec_58278_51266300();
   scope->scopes[6] = makewdec_58283_51289140();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__75625480();
   scope->behaviors[1] = make__75625280();
   scope->behaviors[2] = make__75624720();
   scope->behaviors[3] = make__75624520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58288_53898180;

SignalI lv0_54077660_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelv0_54077660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_54077660_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58288_53898180;
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

SignalI lv1_54217620_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelv1_54217620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_54217620_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58288_53898180;
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

SignalI rv0_54349340_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makerv0_54349340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_54349340_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58288_53898180;
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

SignalI rv1_54621260_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makerv1_54621260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_54621260_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58288_53898180;
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

SignalI lvok0_54621240_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelvok0_54621240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_54621240_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58288_53898180;
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

SignalI lvok1_54621220_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelvok1_54621220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_54621220_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58288_53898180;
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

SignalI rvok0_54621200_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makervok0_54621200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_54621200_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58288_53898180;
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

SignalI rvok1_54621180_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makervok1_54621180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_54621180_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58288_53898180;
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

SignalI run_54621160_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makerun_54621160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_54621160_add__n_58288_53898180_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58288_53898180;
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

Behavior __56993300;

Behavior make__56993300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56993300 = behavior;
   behavior->owner = (Object)add__n_58288_53898180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos = realloc(clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos[clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__54621000();

   return behavior;
}

Scope makeadd__n_58288_53898180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58288_53898180 = scope;
   scope->owner = (Object)layer0_58_84_55080220;
   scope->name = "add_n:288";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_54077660();
   scope->inners[1] = makelv1_54217620();
   scope->inners[2] = makerv0_54349340();
   scope->inners[3] = makerv1_54621260();
   scope->inners[4] = makelvok0_54621240();
   scope->inners[5] = makelvok1_54621220();
   scope->inners[6] = makervok0_54621200();
   scope->inners[7] = makervok1_54621180();
   scope->inners[8] = makerun_54621160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56993300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56997940;

Behavior make__56997940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56997940 = behavior;
   behavior->owner = (Object)layer0_58_84_55080220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos = realloc(clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos[clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__56975420();

   return behavior;
}

Behavior __49789820;

Behavior make__49789820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49789820 = behavior;
   behavior->owner = (Object)layer0_58_84_55080220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos = realloc(clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos[clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__56997820();

   return behavior;
}

Behavior __51254380;

Behavior make__51254380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51254380 = behavior;
   behavior->owner = (Object)layer0_58_84_55080220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos = realloc(clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos[clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__49788900();

   return behavior;
}

Behavior __75354900;

Behavior make__75354900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75354900 = behavior;
   behavior->owner = (Object)layer0_58_84_55080220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_51267740_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   req_51267740_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   req_51267740_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(req_51267740_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,req_51267740_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
req_51267740_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[req_51267740_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_56993100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   ack__mac_56993100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   ack__mac_56993100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(ack__mac_56993100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,ack__mac_56993100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__mac_56993100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[ack__mac_56993100_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75355140();

   return behavior;
}

Behavior __75404500;

Behavior make__75404500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75404500 = behavior;
   behavior->owner = (Object)layer0_58_84_55080220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[clk_51267780_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[ack_56993120_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_50752000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   value__z0_50752000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   value__z0_50752000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(value__z0_50752000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,value__z0_50752000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
value__z0_50752000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[value__z0_50752000_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_50932660_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   value__z1_50932660_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   value__z1_50932660_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(value__z1_50932660_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,value__z1_50932660_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
value__z1_50932660_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[value__z1_50932660_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_51185900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   ack__a0_51185900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   ack__a0_51185900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(ack__a0_51185900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,ack__a0_51185900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__a0_51185900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[ack__a0_51185900_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_51185860_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   ack__a1_51185860_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   ack__a1_51185860_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(ack__a1_51185860_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,ack__a1_51185860_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__a1_51185860_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[ack__a1_51185860_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75355420();

   return behavior;
}

Behavior __75404320;

Behavior make__75404320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75404320 = behavior;
   behavior->owner = (Object)layer0_58_84_55080220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_51240420_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   ack__mac_51240420_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   ack__mac_51240420_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(ack__mac_51240420_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,ack__mac_51240420_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__mac_51240420_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[ack__mac_51240420_counter_58_843_51203280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[rst_51267760_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_55459900_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   a_55459900_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   a_55459900_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(a_55459900_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,a_55459900_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
a_55459900_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[a_55459900_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_55119500_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   a_55119500_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   a_55119500_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(a_55119500_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,a_55119500_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
a_55119500_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[a_55119500_func1_58_841_54661280_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75355340();

   return behavior;
}

Scope makelayer0_58_84_55080220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_55080220 = scope;
   scope->owner = (Object)layer0_58_841_51273600;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_51240280();
   scope->systemIs[1] = makefunc0_55484280();
   scope->systemIs[2] = makefunc1_55119280();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_56993140();
   scope->inners[1] = makeack_56993120();
   scope->inners[2] = makeack__mac_56993100();
   scope->inners[3] = makeack__add_56993080();
   scope->inners[4] = make_58168_57109200();
   scope->inners[5] = make_58166_57109180();
   scope->inners[6] = make_58167_57109100();
   scope->inners[7] = make_58191_57225220();
   scope->inners[8] = make_58192_44954200();
   scope->inners[9] = make_58183_48082800();
   scope->inners[10] = make_58181_48081980();
   scope->inners[11] = make_58182_48103340();
   scope->inners[12] = make_58232_49403740();
   scope->inners[13] = make_58233_49403680();
   scope->inners[14] = make_58230_49403360();
   scope->inners[15] = make_58231_49403280();
   scope->inners[16] = make_58260_49766700();
   scope->inners[17] = make_58261_50005340();
   scope->inners[18] = make_58247_50371480();
   scope->inners[19] = make_58248_50371460();
   scope->inners[20] = make_58245_50371440();
   scope->inners[21] = make_58246_50371340();
   scope->inners[22] = makevalue__z0_50752000();
   scope->inners[23] = makevalue__z1_50932660();
   scope->inners[24] = makevalue__a0_51065840();
   scope->inners[25] = makevalue__a1_51186000();
   scope->inners[26] = makeflag__z0_51185940();
   scope->inners[27] = makeflag__z1_51185920();
   scope->inners[28] = makeack__a0_51185900();
   scope->inners[29] = makeack__a1_51185860();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58159_55079920();
   scope->scopes[1] = makechannel__w1_58174_56315380();
   scope->scopes[2] = makechannel__accum_58189_49684640();
   scope->scopes[3] = makemac__n1_58221_51067020();
   scope->scopes[4] = makechannel__b0_58228_56565320();
   scope->scopes[5] = makechannel__b1_58243_49405900();
   scope->scopes[6] = makechannel__z_58258_51269720();
   scope->scopes[7] = makeadd__n_58288_53898180();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56997940();
   scope->behaviors[1] = make__49789820();
   scope->behaviors[2] = make__51254380();
   scope->behaviors[3] = make__75354900();
   scope->behaviors[4] = make__75404500();
   scope->behaviors[5] = make__75404320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_841_51273600() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_841_51273600 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T1";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51267780();
   systemT->inputs[1] = makerst_51267760();
   systemT->inputs[2] = makereq_51267740();
   systemT->inputs[3] = make_5891_51462840();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_51552060();
   systemT->outputs[1] = make_5889_51551780();
   systemT->outputs[2] = make_5890_51549980();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58131_53578280();
   systemT->inouts[1] = make_58132_53781880();

   systemT->scope = makelayer0_58_84_55080220();

   return systemT;
}