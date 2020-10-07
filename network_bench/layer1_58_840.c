#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_49478680;

SignalI clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeclk_49473200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_840_49478680;
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

SignalI rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makerst_49473180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_840_49478680;
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

SignalI fill_49473140_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makefill_49473140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49473140_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_840_49478680;
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

SignalI req_49473040_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makereq_49473040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49473040_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_840_49478680;
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

SignalI _5866_49906340_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_5866_49906340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5866_49906340_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_840_49478680;
   signalI->name = ":66";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5867_50698360_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_5867_50698360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_50698360_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_840_49478680;
   signalI->name = ":67";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_50698160_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeack__layer_50698160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_50698160_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_840_49478680;
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

SignalI _5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_5868_50697720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_840_49478680;
   signalI->name = ":68";
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

SignalI _5832_51025780_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_5832_51025780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_51025780_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_840_49478680;
   signalI->name = ":32";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __59765760;

Block __59765420;

void code__59765420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58879080(),ack_60219480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58879000(),ack__mac_60219460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58878920(),ack__add_60219440_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__59765420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59765420 = block;
   block->owner = (Object)__59765760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59765420;

   return block;
};

void code__59765760() {
   {
      Value cond = rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59765420();
   }
      }
   }
}

Block make__59765760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59765760 = block;
   block->owner = (Object)__59764140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59765760;

   return block;
};

Block __59764020;

Block __59763340;

Block __59763120;

void code__59763120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_60924120_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,value__z0_61028460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58878580(),flag__z0_48074400_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__59763120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59763120 = block;
   block->owner = (Object)__59763340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59763120;

   return block;
};

void code__59763340() {
 code__59763120();
}

Block make__59763340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59763340 = block;
   block->owner = (Object)__59764020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59763340;

   return block;
};

Block __59763860;

void code__59763860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58878480(),flag__z0_48074400_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__59763860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59763860 = block;
   block->owner = (Object)__59764020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59763860;

   return block;
};

void code__59764020() {
   {
      Value cond = ack__add_60219440_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59763340();
   }
   else {
  code__59763860();
   }
      }
   }
}

Block make__59764020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59764020 = block;
   block->owner = (Object)__59917940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59764020;

   return block;
};

Block __59917400;

Block __59917160;

void code__59917160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58878380(),ack__a0_48074320_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__59917160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59917160 = block;
   block->owner = (Object)__59917400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59917160;

   return block;
};

Block __59916620;

Block __59916460;

void code__59916460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_48074420_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_5832_51025780_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58878140(),ack__a0_48074320_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__59916460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59916460 = block;
   block->owner = (Object)__59916620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59916460;

   return block;
};

void code__59916620() {
 code__59916460();
}

Block make__59916620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59916620 = block;
   block->owner = (Object)__59917400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59916620;

   return block;
};

void code__59917400() {
   {
      Value cond = rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59917160();
   }
   else if (value2integer(flag__z0_48074400_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value)) {
  code__59916620();
   }
      }
   }
}

Block make__59917400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59917400 = block;
   block->owner = (Object)__60275220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59917400;

   return block;
};

Block __60275100;

Block __60274940;

Block __60274560;

void code__60274560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58877860(),_58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__60274560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60274560 = block;
   block->owner = (Object)__60274940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60274560;

   return block;
};

void code__60274940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58878000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60274560();
   }
      }
   }
}

Block make__60274940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60274940 = block;
   block->owner = (Object)__60275100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60274940;

   return block;
};

Block __60273820;

Block __60273400;

void code__60273400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58877700(),_58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__60273400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60273400 = block;
   block->owner = (Object)__60273820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60273400;

   return block;
};

void code__60273820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58877780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60273400();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58877620(),_58268_52130560_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__60273820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60273820 = block;
   block->owner = (Object)__60275100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60273820;

   return block;
};

Block __60272660;

void code__60272660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58877500(),address__weights0_48074060_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58877440(),ack__weights0_48073500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58877320(),address__bias_48073620_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58877260(),ack__bias_48073480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__60272660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60272660 = block;
   block->owner = (Object)__60275100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60272660;

   return block;
};

Block __60271040;

Block __60270640;

Block __60270480;

Block __60270160;

void code__60270160() {
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
                  src0 = _58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58876880();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58876700(),_58268_52130560_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = w0_51168500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
            idx = value2integer(address__weights0_48074060_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58270_52460500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__60270160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60270160 = block;
   block->owner = (Object)__60270480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60270160;

   return block;
};

void code__60270480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58877060();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60270160();
   }
      }
   }
}

Block make__60270480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60270480 = block;
   block->owner = (Object)__60270640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60270480;

   return block;
};

void code__60270640() {
 code__60270480();
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
                  src0 = address__weights0_48074060_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58876280();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights0_48074060_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__60270640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60270640 = block;
   block->owner = (Object)__60271040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60270640;

   return block;
};

Block __60941180;

Block __60940980;

Block __60940660;

Block __60981100;

void code__60981100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_52130620_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
            idx = value2integer(address__bias_48073620_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58324_49285100_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__60981100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60981100 = block;
   block->owner = (Object)__60940660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60981100;

   return block;
};

void code__60940660() {
{
      Value value = _58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__58900360())) {
    code__60981100();
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
                  src0 = _58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58899740();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__60940660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60940660 = block;
   block->owner = (Object)__60940980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60940660;

   return block;
};

void code__60940980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58875960();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60940660();
   }
      }
   }
}

Block make__60940980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60940980 = block;
   block->owner = (Object)__60941180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60940980;

   return block;
};

void code__60941180() {
 code__60940980();
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
                  src0 = address__bias_48073620_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58899580();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_48073620_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__60941180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60941180 = block;
   block->owner = (Object)__60271040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60941180;

   return block;
};

void code__60271040() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights0_48073500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60270640();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_48073480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60941180();
   }
      }
   }
}

Block make__60271040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60271040 = block;
   block->owner = (Object)__60275100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60271040;

   return block;
};

Block __49462300;

void code__49462300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58899380(),ack__weights0_48073500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__49462300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49462300 = block;
   block->owner = (Object)__60275100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49462300;

   return block;
};

Block __49459760;

void code__49459760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58899220(),ack__bias_48073480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__49459760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49459760 = block;
   block->owner = (Object)__60275100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49459760;

   return block;
};

void code__60275100() {
 code__60274940();
 code__60273820();
   {
      Value cond = rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60272660();
   }
      }
   }
   {
      Value cond = fill__channel_60219420_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60271040();
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
               src0 = address__weights0_48074060_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58899460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49462300();
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
               src0 = address__bias_48073620_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58899300();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49459760();
   }
      }
   }
}

Block make__60275100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60275100 = block;
   block->owner = (Object)__49457020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60275100;

   return block;
};

Block __58625920;

void code__58625920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_49473040_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_60219460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_60219500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58625920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58625920 = block;
   block->owner = (Object)__58625580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58625920;

   return block;
};

Block __58642980;

void code__58642980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_49473140_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__weights0_48073500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                  src1 = ack__bias_48073480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                  dst = and_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_60219420_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58642980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58642980 = block;
   block->owner = (Object)__58641860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58642980;

   return block;
};

Block __58626260;

void code__58626260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,clk_52557640_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_60219480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,ack_52557540_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,rst_52557420_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_61028460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,z__value_58784020_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_48074320_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,ack__layer_50698160_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58626260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58626260 = block;
   block->owner = (Object)__58640720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58626260;

   return block;
};

Block __58626160;

void code__58626160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_52557140_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,ack__mac_60219460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_58894900_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,value__a0_48074420_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58626160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58626160 = block;
   block->owner = (Object)__58640380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58626160;

   return block;
};

Block __59418500;

Block __59796640;

void code__59796640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_58679900_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,make_ref_rangeS(mem_58781740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820,value2integer(abus__w_58679740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value),value2integer(abus__w_58679740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__59796640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59796640 = block;
   block->owner = (Object)__59418500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59796640;

   return block;
};

void code__59418500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_58781740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
            idx = value2integer(abus__r_58679820_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_58594180_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_58475720_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59796640();
   }
      }
   }
}

Block make__59418500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59418500 = block;
   block->owner = (Object)__60052220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59418500;

   return block;
};

Block __58639220;

void code__58639220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_58594180_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_58266_60319880_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58639220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58639220 = block;
   block->owner = (Object)__58639060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58639220;

   return block;
};

Block __58639020;

void code__58639020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_60319880_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,dbus__r_58594180_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58639020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58639020 = block;
   block->owner = (Object)__58638860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58639020;

   return block;
};

Block __58638560;

void code__58638560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_58475740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58638560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58638560 = block;
   block->owner = (Object)__58638360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58638560;

   return block;
};

Block __58687400;

void code__58687400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,trig__r_58475740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58687400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58687400 = block;
   block->owner = (Object)__58687140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58687400;

   return block;
};

Block __58685820;

void code__58685820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_58679820_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58685820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58685820 = block;
   block->owner = (Object)__58685660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58685820;

   return block;
};

Block __58685620;

void code__58685620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,abus__r_58679820_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58685620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58685620 = block;
   block->owner = (Object)__58685460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58685620;

   return block;
};

Block __58685160;

void code__58685160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_58475720_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_58268_52130560_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58685160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58685160 = block;
   block->owner = (Object)__58684960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58685160;

   return block;
};

Block __58684920;

void code__58684920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_52130560_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,trig__w_58475720_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58684920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58684920 = block;
   block->owner = (Object)__58684580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58684920;

   return block;
};

Block __58684100;

void code__58684100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_58679740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58684100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58684100 = block;
   block->owner = (Object)__58683940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58684100;

   return block;
};

Block __58683900;

void code__58683900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,abus__w_58679740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58683900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58683900 = block;
   block->owner = (Object)__58683720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58683900;

   return block;
};

Block __58683240;

void code__58683240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_58679900_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_58270_52460500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58683240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58683240 = block;
   block->owner = (Object)__58683080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58683240;

   return block;
};

Block __58683040;

void code__58683040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_52460500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,dbus__w_58679900_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58683040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58683040 = block;
   block->owner = (Object)__58682880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58683040;

   return block;
};

Block __58680820;

void code__58680820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_60224180_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_58283_60460960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58680820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58680820 = block;
   block->owner = (Object)__58680560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58680820;

   return block;
};

Block __58680520;

void code__58680520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_60460960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,reg__0_60224180_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58680520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58680520 = block;
   block->owner = (Object)__58680300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58680520;

   return block;
};

Block __60994200;

Block __60993980;

Block __60993660;

void code__60993660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58846520(),_58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__60993660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60993660 = block;
   block->owner = (Object)__60993980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60993660;

   return block;
};

void code__60993980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58846600();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60993660();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58846460(),_58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__60993980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60993980 = block;
   block->owner = (Object)__60994200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60993980;

   return block;
};

Block __60993040;

Block __60992720;

void code__60992720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58846260(),_5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__60992720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60992720 = block;
   block->owner = (Object)__60993040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60992720;

   return block;
};

void code__60993040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58846380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60992720();
   }
      }
   }
}

Block make__60993040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60993040 = block;
   block->owner = (Object)__60994200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60993040;

   return block;
};

Block __60991760;

void code__60991760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58845860(),rvok_60994360_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58845740(),lvok0_60994380_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58845640(),av0_60763220_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__60991760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60991760 = block;
   block->owner = (Object)__60994200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60991760;

   return block;
};

Block __47818600;

Block __47838980;

Block __47838040;

Block __47854920;

void code__47854920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5866_49906340_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,rv_60994400_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__47854920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47854920 = block;
   block->owner = (Object)__47838040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47854920;

   return block;
};

Block __49412740;

void code__49412740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_50698360_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,rv_60994400_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__49412740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49412740 = block;
   block->owner = (Object)__47838040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49412740;

   return block;
};

void code__47838040() {
{
      Value value = _5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__58845260())) {
    code__47854920();
         }
         else if (value2integer(value) == value2integer(make__58845100())) {
    code__49412740();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58844840(),rvok_60994360_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
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
                  src0 = _5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58844620();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__47838040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47838040 = block;
   block->owner = (Object)__47838980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47838040;

   return block;
};

void code__47838980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58845400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47838040();
   }
      }
   }
}

Block make__47838980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47838980 = block;
   block->owner = (Object)__47818600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47838980;

   return block;
};

Block __50005900;

Block __50004280;

Block __50027540;

void code__50027540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_60319880_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,lv0_60546380_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58844240(),lvok0_60994380_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__50027540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50027540 = block;
   block->owner = (Object)__50004280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50027540;

   return block;
};

void code__50004280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58844400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50027540();
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
                  src0 = _58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58844120();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58844020(),_58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__50004280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50004280 = block;
   block->owner = (Object)__50005900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50004280;

   return block;
};

void code__50005900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58844500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50004280();
   }
      }
   }
}

Block make__50005900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50005900 = block;
   block->owner = (Object)__47818600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50005900;

   return block;
};

Block __50974620;

Block __50973920;

Block __50973340;

void code__50973340() {
}

Block make__50973340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50973340 = block;
   block->owner = (Object)__50973920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50973340;

   return block;
};

Block __57598520;

void code__57598520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_60763220_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_58283_60460960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__57598520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57598520 = block;
   block->owner = (Object)__50973920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57598520;

   return block;
};

void code__50973920() {
 code__50973340();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_60763220_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
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
                              src0 = lv0_60546380_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_60994400_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58843160();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_60763220_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
 code__57598520();
}

Block make__50973920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50973920 = block;
   block->owner = (Object)__50974620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50973920;

   return block;
};

void code__50974620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58843860(),ack_60219480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58843760(),run_60994320_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
 code__50973920();
}

Block make__50974620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50974620 = block;
   block->owner = (Object)__47818600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50974620;

   return block;
};

void code__47818600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58845480(),run_60994320_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
 code__47838980();
 code__50005900();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_60994380_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
         src1 = rvok_60994360_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50974620();
   }
      }
   }
}

Block make__47818600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47818600 = block;
   block->owner = (Object)__60994200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47818600;

   return block;
};

void code__60994200() {
 code__60993980();
 code__60993040();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58846180(),ack_60219480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58846100(),run_60994320_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_60994320_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60991760();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_60219500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
         src1 = run_60994320_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47818600();
   }
      }
   }
}

Block make__60994200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60994200 = block;
   block->owner = (Object)__57962320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60994200;

   return block;
};

Block __58702220;

void code__58702220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_58313_60700680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58702220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58702220 = block;
   block->owner = (Object)__58701900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58702220;

   return block;
};

Block __58701860;

void code__58701860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_60700680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58701860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58701860 = block;
   block->owner = (Object)__58701580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58701860;

   return block;
};

Block __58701280;

void code__58701280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_58324_49285100_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58701280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58701280 = block;
   block->owner = (Object)__58701120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58701280;

   return block;
};

Block __58701060;

void code__58701060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58324_49285100_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58701060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58701060 = block;
   block->owner = (Object)__58700880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58701060;

   return block;
};

Block __58698500;

void code__58698500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_57959380_winc_58323_57959760_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58698500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58698500 = block;
   block->owner = (Object)__58698340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58698500;

   return block;
};

Block __58698300;

void code__58698300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,abus__w_57959380_winc_58323_57959760_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58698300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58698300 = block;
   block->owner = (Object)__58698140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58698300;

   return block;
};

Block __58696420;

void code__58696420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58622760_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_58336_60924120_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58696420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58696420 = block;
   block->owner = (Object)__58696260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58696420;

   return block;
};

Block __58696220;

void code__58696220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_60924120_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,reg__0_58622760_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58696220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58696220 = block;
   block->owner = (Object)__58696060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58696220;

   return block;
};

Block __59227720;

Block __59226520;

Block __59226160;

void code__59226160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_60460960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,lv0_58947820_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58882160(),lvok0_59227880_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__59226160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59226160 = block;
   block->owner = (Object)__59226520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59226160;

   return block;
};

Block __59500320;

void code__59500320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_60700680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,rv0_59227900_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58882000(),rvok0_59227860_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__59500320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59500320 = block;
   block->owner = (Object)__59226520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59500320;

   return block;
};

Block __59797600;

Block __59797060;

void code__59797060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_58947820_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      src1 = rv0_59227900_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58336_60924120_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__59797060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59797060 = block;
   block->owner = (Object)__59797600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59797060;

   return block;
};

void code__59797600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58881700(),run_59227840_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58881640(),ack__add_60219440_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
 code__59797060();
}

Block make__59797600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59797600 = block;
   block->owner = (Object)__59226520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59797600;

   return block;
};

void code__59226520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58882380(),run_59227840_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
 code__59226160();
 code__59500320();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_59227880_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
         src1 = rvok0_59227860_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59797600();
   }
      }
   }
}

Block make__59226520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59226520 = block;
   block->owner = (Object)__59227720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59226520;

   return block;
};

Block __59227200;

void code__59227200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58881200(),lvok0_59227880_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58881080(),rvok0_59227860_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__59227200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59227200 = block;
   block->owner = (Object)__59227720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59227200;

   return block;
};

void code__59227720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58882640(),ack__add_60219440_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58882560(),run_59227840_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_60219460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
         src1 = run_59227840_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59226520();
   }
   else {
  code__59227200();
   }
      }
   }
}

Block make__59227720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59227720 = block;
   block->owner = (Object)__60219700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59227720;

   return block;
};

Value make__58880860() {
   static unsigned long long data[] = { 26ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58880840() {
   static unsigned long long data[] = { 231ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58880640() {
   static unsigned long long data[] = { 34ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58846600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58846520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58846460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58846380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58846260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58846180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58846100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58845860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58845740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58845640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58845480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58845400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58845260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58845100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58844840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58844620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58844500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58844400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58844240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58844120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58844020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58843860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58843760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58843160() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58882640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58882560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58882380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58882160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58882000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58881700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58881640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58881200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58881080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58879080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58879000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58878920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58878580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58878480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58878380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58878140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58878000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58877860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58877780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58877700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58877620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58877500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58877440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58877320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58877260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58877060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58876880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58876700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58876280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58875960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58900360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58899740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58899580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58899460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58899380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58899300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58899220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_58478980;

SignalI req__mac_60219500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makereq__mac_60219500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_60219500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SignalI ack_60219480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeack_60219480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_60219480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SignalI ack__mac_60219460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeack__mac_60219460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_60219460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SignalI ack__add_60219440_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeack__add_60219440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_60219440_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SignalI fill__channel_60219420_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makefill__channel_60219420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_60219420_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SignalI _58266_60319880_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_58266_60319880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_60319880_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
   signalI->name = ":266";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_58264_60319860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
   signalI->name = ":264";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_58265_60319780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
   signalI->name = ":265";
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

SignalI _58283_60460960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_58283_60460960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_60460960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SignalI _58313_60700680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_58313_60700680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58313_60700680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
   signalI->name = ":313";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58336_60924120_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_58336_60924120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58336_60924120_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
   signalI->name = ":336";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_61028460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makevalue__z0_61028460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_61028460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SignalI value__a0_48074420_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makevalue__a0_48074420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_48074420_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SignalI flag__z0_48074400_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeflag__z0_48074400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_48074400_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SignalI ack__a0_48074320_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeack__a0_48074320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_48074320_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SignalI address__weights0_48074060_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeaddress__weights0_48074060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights0_48074060_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
   signalI->name = "address_weights0";
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

SignalI address__bias_48073620_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeaddress__bias_48073620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_48073620_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
   signalI->name = "address_bias";
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

SignalI ack__weights0_48073500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeack__weights0_48073500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights0_48073500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
   signalI->name = "ack_weights0";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__bias_48073480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeack__bias_48073480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_48073480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SignalI _58324_49285100_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_58324_49285100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58324_49285100_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
   signalI->name = ":324";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_58325_49284940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
   signalI->name = ":325";
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

SignalI w0_51168500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makew0_51168500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w0_51168500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
   signalI->name = "w0";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__58880860();
         src1 = make__58880840();
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

SignalI b_52130620_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeb_52130620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_52130620_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
   signalI->name = "b";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__58880640();
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

SignalI _58268_52130560_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_58268_52130560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_52130560_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SignalI _58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_58269_52130380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SignalI _58270_52460500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_58270_52460500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_52460500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)layer1_58_84_58478980;
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

SystemI counter_52556400;

SystemI makecounter_52556400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_52556400 = systemI;
   systemI->owner = (Object)layer1_58_84_58478980;
   systemI->name = "counter";
   systemI->system = counter_58_8400_52487960;

   return systemI;
};

SystemI func0_58894760;

SystemI makefunc0_58894760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_58894760 = systemI;
   systemI->owner = (Object)layer1_58_84_58478980;
   systemI->name = "func0";
   systemI->system = func0_58_8400_58642720;

   return systemI;
};

Scope channel__w0_58252_58478680;

SignalI trig__r_58475740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI maketrig__r_58475740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_58475740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__w0_58252_58478680;
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

SignalI trig__w_58475720_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI maketrig__w_58475720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_58475720_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__w0_58252_58478680;
   signalI->name = "trig_w";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__r_58594180_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makedbus__r_58594180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_58594180_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__w0_58252_58478680;
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

SignalI dbus__w_58679900_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makedbus__w_58679900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_58679900_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__w0_58252_58478680;
   signalI->name = "dbus_w";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__r_58679820_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__r_58679820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58679820_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__w0_58252_58478680;
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

SignalI abus__w_58679740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__w_58679740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58679740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__w0_58252_58478680;
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

SignalI mem_58781740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makemem_58781740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_58781740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__w0_58252_58478680;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58253_58478380;

Scope makeraddr_58253_58478380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_58478380 = scope;
   scope->owner = (Object)channel__w0_58252_58478680;
   scope->name = "raddr:253";
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

Scope waddr_58258_58477960;

Scope makewaddr_58258_58477960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_58477960 = scope;
   scope->owner = (Object)channel__w0_58252_58478680;
   scope->name = "waddr:258";
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

Scope rinc_58263_58477500;

Scope makerinc_58263_58477500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_58477500 = scope;
   scope->owner = (Object)channel__w0_58252_58478680;
   scope->name = "rinc:263";
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

Scope winc_58267_58477020;

Scope makewinc_58267_58477020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_58477020 = scope;
   scope->owner = (Object)channel__w0_58252_58478680;
   scope->name = "winc:267";
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

Scope rdec_58271_58476600;

Scope makerdec_58271_58476600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_58476600 = scope;
   scope->owner = (Object)channel__w0_58252_58478680;
   scope->name = "rdec:271";
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

Scope wdec_58276_58476180;

Scope makewdec_58276_58476180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_58476180 = scope;
   scope->owner = (Object)channel__w0_58252_58478680;
   scope->name = "wdec:276";
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

Behavior __60052220;

Behavior make__60052220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60052220 = behavior;
   behavior->owner = (Object)channel__w0_58252_58478680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_neg += 1;
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->neg = realloc(clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->neg,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_neg*sizeof(Object));
clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->neg[clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_neg-1] = (Object)behavior;
   behavior->block = make__59418500();

   return behavior;
}

Behavior __58639060;

Behavior make__58639060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58639060 = behavior;
   behavior->owner = (Object)channel__w0_58252_58478680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_58594180_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   dbus__r_58594180_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   dbus__r_58594180_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(dbus__r_58594180_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,dbus__r_58594180_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
dbus__r_58594180_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[dbus__r_58594180_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58639220();

   return behavior;
}

Behavior __58638860;

Behavior make__58638860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58638860 = behavior;
   behavior->owner = (Object)channel__w0_58252_58478680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_60319880_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _58266_60319880_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _58266_60319880_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_58266_60319880_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_58266_60319880_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_58266_60319880_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_58266_60319880_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58639020();

   return behavior;
}

Behavior __58638360;

Behavior make__58638360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58638360 = behavior;
   behavior->owner = (Object)channel__w0_58252_58478680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_58475740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   trig__r_58475740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   trig__r_58475740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(trig__r_58475740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,trig__r_58475740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
trig__r_58475740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[trig__r_58475740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58638560();

   return behavior;
}

Behavior __58687140;

Behavior make__58687140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58687140 = behavior;
   behavior->owner = (Object)channel__w0_58252_58478680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_58264_60319860_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58687400();

   return behavior;
}

Behavior __58685660;

Behavior make__58685660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58685660 = behavior;
   behavior->owner = (Object)channel__w0_58252_58478680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_58679820_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   abus__r_58679820_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   abus__r_58679820_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(abus__r_58679820_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,abus__r_58679820_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
abus__r_58679820_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[abus__r_58679820_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58685820();

   return behavior;
}

Behavior __58685460;

Behavior make__58685460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58685460 = behavior;
   behavior->owner = (Object)channel__w0_58252_58478680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_58265_60319780_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58685620();

   return behavior;
}

Behavior __58684960;

Behavior make__58684960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58684960 = behavior;
   behavior->owner = (Object)channel__w0_58252_58478680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_58475720_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   trig__w_58475720_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   trig__w_58475720_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(trig__w_58475720_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,trig__w_58475720_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
trig__w_58475720_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[trig__w_58475720_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58685160();

   return behavior;
}

Behavior __58684580;

Behavior make__58684580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58684580 = behavior;
   behavior->owner = (Object)channel__w0_58252_58478680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_52130560_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _58268_52130560_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _58268_52130560_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_58268_52130560_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_58268_52130560_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_58268_52130560_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_58268_52130560_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58684920();

   return behavior;
}

Behavior __58683940;

Behavior make__58683940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58683940 = behavior;
   behavior->owner = (Object)channel__w0_58252_58478680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_58679740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   abus__w_58679740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   abus__w_58679740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(abus__w_58679740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,abus__w_58679740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
abus__w_58679740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[abus__w_58679740_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58684100();

   return behavior;
}

Behavior __58683720;

Behavior make__58683720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58683720 = behavior;
   behavior->owner = (Object)channel__w0_58252_58478680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_58269_52130380_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58683900();

   return behavior;
}

Behavior __58683080;

Behavior make__58683080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58683080 = behavior;
   behavior->owner = (Object)channel__w0_58252_58478680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_58679900_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   dbus__w_58679900_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   dbus__w_58679900_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(dbus__w_58679900_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,dbus__w_58679900_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
dbus__w_58679900_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[dbus__w_58679900_channel__w0_58252_58478680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58683240();

   return behavior;
}

Behavior __58682880;

Behavior make__58682880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58682880 = behavior;
   behavior->owner = (Object)channel__w0_58252_58478680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_52460500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _58270_52460500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _58270_52460500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_58270_52460500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_58270_52460500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_58270_52460500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_58270_52460500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58683040();

   return behavior;
}

Scope makechannel__w0_58252_58478680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_58478680 = scope;
   scope->owner = (Object)layer1_58_84_58478980;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_58475740();
   scope->inners[1] = maketrig__w_58475720();
   scope->inners[2] = makedbus__r_58594180();
   scope->inners[3] = makedbus__w_58679900();
   scope->inners[4] = makeabus__r_58679820();
   scope->inners[5] = makeabus__w_58679740();
   scope->inners[6] = makemem_58781740();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_58478380();
   scope->scopes[1] = makewaddr_58258_58477960();
   scope->scopes[2] = makerinc_58263_58477500();
   scope->scopes[3] = makewinc_58267_58477020();
   scope->scopes[4] = makerdec_58271_58476600();
   scope->scopes[5] = makewdec_58276_58476180();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60052220();
   scope->behaviors[1] = make__58639060();
   scope->behaviors[2] = make__58638860();
   scope->behaviors[3] = make__58638360();
   scope->behaviors[4] = make__58687140();
   scope->behaviors[5] = make__58685660();
   scope->behaviors[6] = make__58685460();
   scope->behaviors[7] = make__58684960();
   scope->behaviors[8] = make__58684580();
   scope->behaviors[9] = make__58683940();
   scope->behaviors[10] = make__58683720();
   scope->behaviors[11] = make__58683080();
   scope->behaviors[12] = make__58682880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_60052080;

SignalI reg__0_60224180_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makereg__0_60224180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_60224180_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__accum_58281_60052080;
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

Scope anum_58282_60051720;

Scope makeanum_58282_60051720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_60051720 = scope;
   scope->owner = (Object)channel__accum_58281_60052080;
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

Scope raddr_58284_60051300;

Scope makeraddr_58284_60051300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_60051300 = scope;
   scope->owner = (Object)channel__accum_58281_60052080;
   scope->name = "raddr:284";
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

Scope waddr_58287_60050880;

Scope makewaddr_58287_60050880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_60050880 = scope;
   scope->owner = (Object)channel__accum_58281_60052080;
   scope->name = "waddr:287";
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

Scope rinc_58290_60050460;

SignalI abus__r_60050040_rinc_58290_60050460_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__r_60050040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_60050040_rinc_58290_60050460_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)rinc_58290_60050460;
   signalI->name = "abus_r";
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

Scope makerinc_58290_60050460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_60050460 = scope;
   scope->owner = (Object)channel__accum_58281_60052080;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_60050040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_60049900;

SignalI abus__w_60049480_winc_58294_60049900_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__w_60049480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_60049480_winc_58294_60049900_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)winc_58294_60049900;
   signalI->name = "abus_w";
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

Scope makewinc_58294_60049900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_60049900 = scope;
   scope->owner = (Object)channel__accum_58281_60052080;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_60049480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_60049360;

SignalI abus__r_60048980_rdec_58298_60049360_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__r_60048980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_60048980_rdec_58298_60049360_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)rdec_58298_60049360;
   signalI->name = "abus_r";
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

Scope makerdec_58298_60049360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_60049360 = scope;
   scope->owner = (Object)channel__accum_58281_60052080;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_60048980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_60048860;

SignalI abus__w_60048480_wdec_58302_60048860_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__w_60048480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_60048480_wdec_58302_60048860_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)wdec_58302_60048860;
   signalI->name = "abus_w";
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

Scope makewdec_58302_60048860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_60048860 = scope;
   scope->owner = (Object)channel__accum_58281_60052080;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_60048480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58680560;

Behavior make__58680560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58680560 = behavior;
   behavior->owner = (Object)channel__accum_58281_60052080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_60224180_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   reg__0_60224180_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   reg__0_60224180_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(reg__0_60224180_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,reg__0_60224180_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
reg__0_60224180_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[reg__0_60224180_channel__accum_58281_60052080_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58680820();

   return behavior;
}

Behavior __58680300;

Behavior make__58680300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58680300 = behavior;
   behavior->owner = (Object)channel__accum_58281_60052080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_60460960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _58283_60460960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _58283_60460960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_58283_60460960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_58283_60460960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_58283_60460960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_58283_60460960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58680520();

   return behavior;
}

Scope makechannel__accum_58281_60052080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_60052080 = scope;
   scope->owner = (Object)layer1_58_84_58478980;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_60224180();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_60051720();
   scope->scopes[1] = makeraddr_58284_60051300();
   scope->scopes[2] = makewaddr_58287_60050880();
   scope->scopes[3] = makerinc_58290_60050460();
   scope->scopes[4] = makewinc_58294_60049900();
   scope->scopes[5] = makerdec_58298_60049360();
   scope->scopes[6] = makewdec_58302_60048860();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58680560();
   scope->behaviors[1] = make__58680300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_60444520;

SignalI lv0_60546380_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makelv0_60546380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_60546380_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)mac__n1_58306_60444520;
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

SignalI av0_60763220_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeav0_60763220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_60763220_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)mac__n1_58306_60444520;
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

SignalI rv_60994400_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makerv_60994400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_60994400_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)mac__n1_58306_60444520;
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

SignalI lvok0_60994380_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makelvok0_60994380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_60994380_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)mac__n1_58306_60444520;
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

SignalI rvok_60994360_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makervok_60994360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_60994360_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)mac__n1_58306_60444520;
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

SignalI run_60994320_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makerun_60994320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_60994320_mac__n1_58306_60444520_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)mac__n1_58306_60444520;
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

Behavior __57962320;

Behavior make__57962320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57962320 = behavior;
   behavior->owner = (Object)mac__n1_58306_60444520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos += 1;
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos = realloc(clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos*sizeof(Object));
clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos[clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos-1] = (Object)behavior;
   behavior->block = make__60994200();

   return behavior;
}

Scope makemac__n1_58306_60444520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_60444520 = scope;
   scope->owner = (Object)layer1_58_84_58478980;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_60546380();
   scope->inners[1] = makeav0_60763220();
   scope->inners[2] = makerv_60994400();
   scope->inners[3] = makelvok0_60994380();
   scope->inners[4] = makervok_60994360();
   scope->inners[5] = makerun_60994320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57962320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58311_57962200;

SignalI reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makereg__0_58074540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__bias_58311_57962200;
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

Scope anum_58312_57961900;

Scope makeanum_58312_57961900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58312_57961900 = scope;
   scope->owner = (Object)channel__bias_58311_57962200;
   scope->name = "anum:312";
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

Scope raddr_58314_57961480;

Scope makeraddr_58314_57961480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58314_57961480 = scope;
   scope->owner = (Object)channel__bias_58311_57962200;
   scope->name = "raddr:314";
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

Scope waddr_58317_57961040;

Scope makewaddr_58317_57961040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58317_57961040 = scope;
   scope->owner = (Object)channel__bias_58311_57962200;
   scope->name = "waddr:317";
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

Scope rinc_58320_57960260;

SignalI abus__r_57959880_rinc_58320_57960260_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__r_57959880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57959880_rinc_58320_57960260_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)rinc_58320_57960260;
   signalI->name = "abus_r";
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

Scope makerinc_58320_57960260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58320_57960260 = scope;
   scope->owner = (Object)channel__bias_58311_57962200;
   scope->name = "rinc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57959880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58323_57959760;

SignalI abus__w_57959380_winc_58323_57959760_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__w_57959380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57959380_winc_58323_57959760_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)winc_58323_57959760;
   signalI->name = "abus_w";
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

Behavior __58698340;

Behavior make__58698340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58698340 = behavior;
   behavior->owner = (Object)winc_58323_57959760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_57959380_winc_58323_57959760_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   abus__w_57959380_winc_58323_57959760_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   abus__w_57959380_winc_58323_57959760_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(abus__w_57959380_winc_58323_57959760_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,abus__w_57959380_winc_58323_57959760_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
abus__w_57959380_winc_58323_57959760_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[abus__w_57959380_winc_58323_57959760_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58698500();

   return behavior;
}

Behavior __58698140;

Behavior make__58698140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58698140 = behavior;
   behavior->owner = (Object)winc_58323_57959760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_58325_49284940_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58698300();

   return behavior;
}

Scope makewinc_58323_57959760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58323_57959760 = scope;
   scope->owner = (Object)channel__bias_58311_57962200;
   scope->name = "winc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57959380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58698340();
   scope->behaviors[1] = make__58698140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58326_57958980;

SignalI abus__r_57958500_rdec_58326_57958980_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__r_57958500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57958500_rdec_58326_57958980_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)rdec_58326_57958980;
   signalI->name = "abus_r";
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

Scope makerdec_58326_57958980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58326_57958980 = scope;
   scope->owner = (Object)channel__bias_58311_57962200;
   scope->name = "rdec:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57958500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58330_58015660;

SignalI abus__w_58015220_wdec_58330_58015660_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__w_58015220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58015220_wdec_58330_58015660_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)wdec_58330_58015660;
   signalI->name = "abus_w";
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

Scope makewdec_58330_58015660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58330_58015660 = scope;
   scope->owner = (Object)channel__bias_58311_57962200;
   scope->name = "wdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58015220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58701900;

Behavior make__58701900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58701900 = behavior;
   behavior->owner = (Object)channel__bias_58311_57962200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58702220();

   return behavior;
}

Behavior __58701580;

Behavior make__58701580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58701580 = behavior;
   behavior->owner = (Object)channel__bias_58311_57962200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58313_60700680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _58313_60700680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _58313_60700680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_58313_60700680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_58313_60700680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_58313_60700680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_58313_60700680_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58701860();

   return behavior;
}

Behavior __58701120;

Behavior make__58701120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58701120 = behavior;
   behavior->owner = (Object)channel__bias_58311_57962200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[reg__0_58074540_channel__bias_58311_57962200_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58701280();

   return behavior;
}

Behavior __58700880;

Behavior make__58700880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58700880 = behavior;
   behavior->owner = (Object)channel__bias_58311_57962200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58324_49285100_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _58324_49285100_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _58324_49285100_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_58324_49285100_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_58324_49285100_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_58324_49285100_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_58324_49285100_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58701060();

   return behavior;
}

Scope makechannel__bias_58311_57962200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58311_57962200 = scope;
   scope->owner = (Object)layer1_58_84_58478980;
   scope->name = "channel_bias:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_58074540();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58312_57961900();
   scope->scopes[1] = makeraddr_58314_57961480();
   scope->scopes[2] = makewaddr_58317_57961040();
   scope->scopes[3] = makerinc_58320_57960260();
   scope->scopes[4] = makewinc_58323_57959760();
   scope->scopes[5] = makerdec_58326_57958980();
   scope->scopes[6] = makewdec_58330_58015660();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58701900();
   scope->behaviors[1] = make__58701580();
   scope->behaviors[2] = make__58701120();
   scope->behaviors[3] = make__58700880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58334_58509720;

SignalI reg__0_58622760_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makereg__0_58622760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_58622760_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__z_58334_58509720;
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

Scope anum_58335_58509420;

Scope makeanum_58335_58509420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58335_58509420 = scope;
   scope->owner = (Object)channel__z_58334_58509720;
   scope->name = "anum:335";
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

Scope raddr_58337_58509000;

Scope makeraddr_58337_58509000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58337_58509000 = scope;
   scope->owner = (Object)channel__z_58334_58509720;
   scope->name = "raddr:337";
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

Scope waddr_58340_58508580;

Scope makewaddr_58340_58508580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58340_58508580 = scope;
   scope->owner = (Object)channel__z_58334_58509720;
   scope->name = "waddr:340";
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

Scope rinc_58343_58508140;

SignalI abus__r_58507580_rinc_58343_58508140_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__r_58507580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58507580_rinc_58343_58508140_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)rinc_58343_58508140;
   signalI->name = "abus_r";
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

Scope makerinc_58343_58508140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58343_58508140 = scope;
   scope->owner = (Object)channel__z_58334_58509720;
   scope->name = "rinc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58507580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58346_58507460;

SignalI abus__w_58531620_winc_58346_58507460_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__w_58531620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58531620_winc_58346_58507460_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)winc_58346_58507460;
   signalI->name = "abus_w";
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

Scope makewinc_58346_58507460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58346_58507460 = scope;
   scope->owner = (Object)channel__z_58334_58509720;
   scope->name = "winc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58531620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58349_58531500;

SignalI abus__r_58531120_rdec_58349_58531500_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__r_58531120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58531120_rdec_58349_58531500_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)rdec_58349_58531500;
   signalI->name = "abus_r";
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

Scope makerdec_58349_58531500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58349_58531500 = scope;
   scope->owner = (Object)channel__z_58334_58509720;
   scope->name = "rdec:349";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58531120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58353_58531000;

SignalI abus__w_58530600_wdec_58353_58531000_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__w_58530600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58530600_wdec_58353_58531000_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)wdec_58353_58531000;
   signalI->name = "abus_w";
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

Scope makewdec_58353_58531000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58353_58531000 = scope;
   scope->owner = (Object)channel__z_58334_58509720;
   scope->name = "wdec:353";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58530600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58696260;

Behavior make__58696260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58696260 = behavior;
   behavior->owner = (Object)channel__z_58334_58509720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58622760_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   reg__0_58622760_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   reg__0_58622760_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(reg__0_58622760_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,reg__0_58622760_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
reg__0_58622760_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[reg__0_58622760_channel__z_58334_58509720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58696420();

   return behavior;
}

Behavior __58696060;

Behavior make__58696060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58696060 = behavior;
   behavior->owner = (Object)channel__z_58334_58509720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58336_60924120_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _58336_60924120_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _58336_60924120_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_58336_60924120_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_58336_60924120_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_58336_60924120_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_58336_60924120_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58696220();

   return behavior;
}

Scope makechannel__z_58334_58509720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58334_58509720 = scope;
   scope->owner = (Object)layer1_58_84_58478980;
   scope->name = "channel_z:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_58622760();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58335_58509420();
   scope->scopes[1] = makeraddr_58337_58509000();
   scope->scopes[2] = makewaddr_58340_58508580();
   scope->scopes[3] = makerinc_58343_58508140();
   scope->scopes[4] = makewinc_58346_58507460();
   scope->scopes[5] = makerdec_58349_58531500();
   scope->scopes[6] = makewdec_58353_58531000();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58696260();
   scope->behaviors[1] = make__58696060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58357_58847660;

SignalI lv0_58947820_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makelv0_58947820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_58947820_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)add__n_58357_58847660;
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

SignalI rv0_59227900_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makerv0_59227900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_59227900_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)add__n_58357_58847660;
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

SignalI lvok0_59227880_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makelvok0_59227880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_59227880_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)add__n_58357_58847660;
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

SignalI rvok0_59227860_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makervok0_59227860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_59227860_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)add__n_58357_58847660;
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

SignalI run_59227840_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makerun_59227840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_59227840_add__n_58357_58847660_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)add__n_58357_58847660;
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

Behavior __60219700;

Behavior make__60219700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60219700 = behavior;
   behavior->owner = (Object)add__n_58357_58847660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos += 1;
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos = realloc(clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos*sizeof(Object));
clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos[clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos-1] = (Object)behavior;
   behavior->block = make__59227720();

   return behavior;
}

Scope makeadd__n_58357_58847660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58357_58847660 = scope;
   scope->owner = (Object)layer1_58_84_58478980;
   scope->name = "add_n:357";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_58947820();
   scope->inners[1] = makerv0_59227900();
   scope->inners[2] = makelvok0_59227880();
   scope->inners[3] = makervok0_59227860();
   scope->inners[4] = makerun_59227840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60219700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59764140;

Behavior make__59764140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59764140 = behavior;
   behavior->owner = (Object)layer1_58_84_58478980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos += 1;
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos = realloc(clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos*sizeof(Object));
clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos[clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos-1] = (Object)behavior;
   behavior->block = make__59765760();

   return behavior;
}

Behavior __59917940;

Behavior make__59917940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59917940 = behavior;
   behavior->owner = (Object)layer1_58_84_58478980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos += 1;
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos = realloc(clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos*sizeof(Object));
clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos[clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos-1] = (Object)behavior;
   behavior->block = make__59764020();

   return behavior;
}

Behavior __60275220;

Behavior make__60275220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60275220 = behavior;
   behavior->owner = (Object)layer1_58_84_58478980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos += 1;
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos = realloc(clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos*sizeof(Object));
clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos[clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos-1] = (Object)behavior;
   behavior->block = make__59917400();

   return behavior;
}

Behavior __49457020;

Behavior make__49457020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49457020 = behavior;
   behavior->owner = (Object)layer1_58_84_58478980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos += 1;
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos = realloc(clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos*sizeof(Object));
clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos[clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos-1] = (Object)behavior;
   behavior->block = make__60275100();

   return behavior;
}

Behavior __58625580;

Behavior make__58625580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58625580 = behavior;
   behavior->owner = (Object)layer1_58_84_58478980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_49473040_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   req_49473040_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   req_49473040_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(req_49473040_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,req_49473040_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
req_49473040_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[req_49473040_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_60219460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   ack__mac_60219460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   ack__mac_60219460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(ack__mac_60219460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,ack__mac_60219460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
ack__mac_60219460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[ack__mac_60219460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58625920();

   return behavior;
}

Behavior __58641860;

Behavior make__58641860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58641860 = behavior;
   behavior->owner = (Object)layer1_58_84_58478980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_49473140_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   fill_49473140_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   fill_49473140_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(fill_49473140_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,fill_49473140_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
fill_49473140_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[fill_49473140_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__weights0_48073500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   ack__weights0_48073500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   ack__weights0_48073500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(ack__weights0_48073500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,ack__weights0_48073500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
ack__weights0_48073500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[ack__weights0_48073500_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__bias_48073480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   ack__bias_48073480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   ack__bias_48073480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(ack__bias_48073480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,ack__bias_48073480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
ack__bias_48073480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[ack__bias_48073480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58642980();

   return behavior;
}

Behavior __58640720;

Behavior make__58640720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58640720 = behavior;
   behavior->owner = (Object)layer1_58_84_58478980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_60219480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   ack_60219480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   ack_60219480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(ack_60219480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,ack_60219480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
ack_60219480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[ack_60219480_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_61028460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   value__z0_61028460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   value__z0_61028460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(value__z0_61028460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,value__z0_61028460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
value__z0_61028460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[value__z0_61028460_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_48074320_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   ack__a0_48074320_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   ack__a0_48074320_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(ack__a0_48074320_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,ack__a0_48074320_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
ack__a0_48074320_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[ack__a0_48074320_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58626260();

   return behavior;
}

Behavior __58640380;

Behavior make__58640380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58640380 = behavior;
   behavior->owner = (Object)layer1_58_84_58478980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_52557140_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   ack__mac_52557140_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   ack__mac_52557140_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(ack__mac_52557140_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,ack__mac_52557140_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
ack__mac_52557140_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[ack__mac_52557140_counter_58_8400_52487960_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_58894900_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   a_58894900_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   a_58894900_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(a_58894900_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,a_58894900_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
a_58894900_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[a_58894900_func0_58_8400_58642720_layer1_58_84_58478980_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58626160();

   return behavior;
}

Scope makelayer1_58_84_58478980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_58478980 = scope;
   scope->owner = (Object)layer1_58_840_49478680;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_52556400();
   scope->systemIs[1] = makefunc0_58894760();
   scope->num_inners = 26;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_60219500();
   scope->inners[1] = makeack_60219480();
   scope->inners[2] = makeack__mac_60219460();
   scope->inners[3] = makeack__add_60219440();
   scope->inners[4] = makefill__channel_60219420();
   scope->inners[5] = make_58266_60319880();
   scope->inners[6] = make_58264_60319860();
   scope->inners[7] = make_58265_60319780();
   scope->inners[8] = make_58283_60460960();
   scope->inners[9] = make_58313_60700680();
   scope->inners[10] = make_58336_60924120();
   scope->inners[11] = makevalue__z0_61028460();
   scope->inners[12] = makevalue__a0_48074420();
   scope->inners[13] = makeflag__z0_48074400();
   scope->inners[14] = makeack__a0_48074320();
   scope->inners[15] = makeaddress__weights0_48074060();
   scope->inners[16] = makeaddress__bias_48073620();
   scope->inners[17] = makeack__weights0_48073500();
   scope->inners[18] = makeack__bias_48073480();
   scope->inners[19] = make_58324_49285100();
   scope->inners[20] = make_58325_49284940();
   scope->inners[21] = makew0_51168500();
   scope->inners[22] = makeb_52130620();
   scope->inners[23] = make_58268_52130560();
   scope->inners[24] = make_58269_52130380();
   scope->inners[25] = make_58270_52460500();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_58478680();
   scope->scopes[1] = makechannel__accum_58281_60052080();
   scope->scopes[2] = makemac__n1_58306_60444520();
   scope->scopes[3] = makechannel__bias_58311_57962200();
   scope->scopes[4] = makechannel__z_58334_58509720();
   scope->scopes[5] = makeadd__n_58357_58847660();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59764140();
   scope->behaviors[1] = make__59917940();
   scope->behaviors[2] = make__60275220();
   scope->behaviors[3] = make__49457020();
   scope->behaviors[4] = make__58625580();
   scope->behaviors[5] = make__58641860();
   scope->behaviors[6] = make__58640720();
   scope->behaviors[7] = make__58640380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_49478680() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_49478680 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_49473200();
   systemT->inputs[1] = makerst_49473180();
   systemT->inputs[2] = makefill_49473140();
   systemT->inputs[3] = makereq_49473040();
   systemT->inputs[4] = make_5866_49906340();
   systemT->inputs[5] = make_5867_50698360();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_50698160();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_50697720();
   systemT->inouts[1] = make_5832_51025780();

   systemT->scope = makelayer1_58_84_58478980();

   return systemT;
}