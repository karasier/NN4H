#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_8400_64933120;

SignalI clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeclk_64929880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_8400_64933120;
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

SignalI rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makerst_64929860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_8400_64933120;
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

SignalI req_64929800_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereq_64929800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_64929800_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_8400_64933120;
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

SignalI _58407_65243340_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58407_65243340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58407_65243340_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_8400_64933120;
   signalI->name = ":407";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_65243280_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__layer_65243280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_65243280_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_8400_64933120;
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

SignalI _58405_65243160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58405_65243160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58405_65243160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_8400_64933120;
   signalI->name = ":405";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58406_65243000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_8400_64933120;
   signalI->name = ":406";
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

SignalI _58447_65355960_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58447_65355960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58447_65355960_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_8400_64933120;
   signalI->name = ":447";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58448_65641160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58448_65641160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58448_65641160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_8400_64933120;
   signalI->name = ":448";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __62929560;

Block __62929340;

void code__62929340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77255500(),ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77255440(),ack__mac_64353020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77255380(),ack__add_64352960_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62929340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62929340 = block;
   block->owner = (Object)__62929560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62929340;

   return block;
};

void code__62929560() {
   {
      Value cond = rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62929340();
   }
      }
   }
}

Block make__62929560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62929560 = block;
   block->owner = (Object)__62927620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62929560;

   return block;
};

Block __62927140;

Block __62926180;

Block __62925940;

void code__62925940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58576_65360800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,value__z0_65881600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77255200(),flag__z0_66340760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62925940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62925940 = block;
   block->owner = (Object)__62926180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62925940;

   return block;
};

Block __63252040;

void code__63252040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58577_65562120_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,value__z1_66034020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77255060(),flag__z1_66340700_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__63252040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63252040 = block;
   block->owner = (Object)__62926180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63252040;

   return block;
};

void code__62926180() {
 code__62925940();
 code__63252040();
}

Block make__62926180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62926180 = block;
   block->owner = (Object)__62927140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62926180;

   return block;
};

Block __62926860;

void code__62926860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77255000(),flag__z0_66340760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77254920(),flag__z1_66340700_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62926860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62926860 = block;
   block->owner = (Object)__62927140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62926860;

   return block;
};

void code__62927140() {
   {
      Value cond = ack__add_64352960_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62926180();
   }
   else {
  code__62926860();
   }
      }
   }
}

Block make__62927140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62927140 = block;
   block->owner = (Object)__63867720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62927140;

   return block;
};

Block __63867520;

Block __63867180;

void code__63867180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77254800(),ack__a0_66340680_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77254740(),ack__a1_66340660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__63867180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63867180 = block;
   block->owner = (Object)__63867520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63867180;

   return block;
};

Block __63865920;

Block __63865640;

void code__63865640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_66130340_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58447_65355960_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77254400(),ack__a0_66340680_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__63865640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63865640 = block;
   block->owner = (Object)__63865920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63865640;

   return block;
};

Block __64367400;

void code__64367400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_66340780_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58448_65641160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77254260(),ack__a1_66340660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__64367400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64367400 = block;
   block->owner = (Object)__63865920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64367400;

   return block;
};

void code__63865920() {
 code__63865640();
 code__64367400();
}

Block make__63865920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63865920 = block;
   block->owner = (Object)__63867520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63865920;

   return block;
};

void code__63867520() {
   {
      Value cond = rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63867180();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_66340760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         src1 = flag__z1_66340700_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__63865920();
   }
      }
   }
}

Block make__63867520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63867520 = block;
   block->owner = (Object)__64933680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63867520;

   return block;
};

Block __76898480;

void code__76898480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_64929800_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_64353020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_64353060_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76898480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76898480 = block;
   block->owner = (Object)__76922780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76898480;

   return block;
};

Block __76898700;

void code__76898700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,clk_66357900_counter_58_8410_66360220_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,ack_66357860_counter_58_8410_66360220_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,rst_66357840_counter_58_8410_66360220_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_65881600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,z__value_66082260_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_66034020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,z__value_55626360_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_66340680_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      src1 = ack__a1_66340660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_65243280_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76898700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76898700 = block;
   block->owner = (Object)__76915000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76898700;

   return block;
};

Block __76898640;

void code__76898640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_66357760_counter_58_8410_66360220_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,ack__mac_64353020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58549_65257600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58564_65673480_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_66257260_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,value__a0_66130340_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_56076920_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,value__a1_66340780_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76898640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76898640 = block;
   block->owner = (Object)__76914840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76898640;

   return block;
};

Block __65627320;

void code__65627320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_65347260_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(abus__r_64572280_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_64572360_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65627320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65627320 = block;
   block->owner = (Object)__66030660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65627320;

   return block;
};

Block __76938640;

void code__76938640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_64572360_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58484_64413900_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76938640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76938640 = block;
   block->owner = (Object)__76938480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76938640;

   return block;
};

Block __76938440;

void code__76938440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58484_64413900_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,dbus__r_64572360_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76938440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76938440 = block;
   block->owner = (Object)__76938280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76938440;

   return block;
};

Block __76937960;

void code__76937960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_64382640_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76937960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76937960 = block;
   block->owner = (Object)__76937780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76937960;

   return block;
};

Block __76937720;

void code__76937720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,trig__r_64382640_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76937720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76937720 = block;
   block->owner = (Object)__76937520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76937720;

   return block;
};

Block __76937220;

void code__76937220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_64572280_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76937220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76937220 = block;
   block->owner = (Object)__76937060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76937220;

   return block;
};

Block __76937020;

void code__76937020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,abus__r_64572280_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76937020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76937020 = block;
   block->owner = (Object)__76936860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76937020;

   return block;
};

Block __50929920;

void code__50929920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49573540_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(abus__r_66130840_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_66130920_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__50929920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50929920 = block;
   block->owner = (Object)__53782260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50929920;

   return block;
};

Block __76935520;

void code__76935520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_66130920_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58499_65132980_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76935520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76935520 = block;
   block->owner = (Object)__76935360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76935520;

   return block;
};

Block __76935320;

void code__76935320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58499_65132980_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,dbus__r_66130920_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76935320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76935320 = block;
   block->owner = (Object)__76935160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76935320;

   return block;
};

Block __76934860;

void code__76934860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_66028720_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76934860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76934860 = block;
   block->owner = (Object)__76934700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76934860;

   return block;
};

Block __76934660;

void code__76934660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,trig__r_66028720_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76934660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76934660 = block;
   block->owner = (Object)__76934480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76934660;

   return block;
};

Block __76934180;

void code__76934180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_66130840_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76934180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76934180 = block;
   block->owner = (Object)__76934020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76934180;

   return block;
};

Block __76933980;

void code__76933980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,abus__r_66130840_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76933980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76933980 = block;
   block->owner = (Object)__76933800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76933980;

   return block;
};

Block __76932480;

void code__76932480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54172960_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58507_64737640_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76932480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76932480 = block;
   block->owner = (Object)__76932320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76932480;

   return block;
};

Block __76932280;

void code__76932280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58507_64737640_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,reg__0_54172960_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76932280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76932280 = block;
   block->owner = (Object)__76932120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76932280;

   return block;
};

Block __76931820;

void code__76931820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_54403560_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58508_64832760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76931820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76931820 = block;
   block->owner = (Object)__76931620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76931820;

   return block;
};

Block __76931580;

void code__76931580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58508_64832760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,reg__1_54403560_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76931580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76931580 = block;
   block->owner = (Object)__76931360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76931580;

   return block;
};

Block __52561580;

Block __52561380;

Block __52561060;

void code__52561060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77203720(),_58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__52561060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52561060 = block;
   block->owner = (Object)__52561380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52561060;

   return block;
};

void code__52561380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77203860();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52561060();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77203660(),_58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__52561380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52561380 = block;
   block->owner = (Object)__52561580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52561380;

   return block;
};

Block __52560140;

Block __54812580;

void code__54812580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77203500(),_58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54812580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54812580 = block;
   block->owner = (Object)__52560140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54812580;

   return block;
};

void code__52560140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77203580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54812580();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77203440(),_58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__52560140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52560140 = block;
   block->owner = (Object)__52561580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52560140;

   return block;
};

Block __54811740;

Block __54811420;

void code__54811420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77203280(),_58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54811420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54811420 = block;
   block->owner = (Object)__54811740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54811420;

   return block;
};

void code__54811740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77203360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54811420();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77203220(),_58405_65243160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54811740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54811740 = block;
   block->owner = (Object)__52561580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54811740;

   return block;
};

Block __54810200;

void code__54810200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77202980(),rvok_52561860_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77202920(),lvok0_52561940_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77202860(),wok0_52561840_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77202800(),lvok1_52561900_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77202720(),wok1_52561820_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54810200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54810200 = block;
   block->owner = (Object)__52561580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54810200;

   return block;
};

Block __62034400;

Block __62033940;

Block __62033720;

Block __62033380;

Block __62031240;

Block __62031020;

void code__62031020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58407_65243340_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,rv_52561980_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__77202160(),rvok_52561860_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62031020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62031020 = block;
   block->owner = (Object)__62031240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62031020;

   return block;
};

void code__62031240() {
 code__62031020();
}

Block make__62031240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62031240 = block;
   block->owner = (Object)__62033380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62031240;

   return block;
};

Block __62033180;

void code__62033180() {
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
                  src0 = _58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__77202060();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77202020();
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
                        src0 = _58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77201720();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__77201620();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77201500(),_58405_65243160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62033180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62033180 = block;
   block->owner = (Object)__62033380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62033180;

   return block;
};

void code__62033380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58405_65243160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77202320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62031240();
   }
   else {
  code__62033180();
   }
      }
   }
}

Block make__62033380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62033380 = block;
   block->owner = (Object)__62033720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62033380;

   return block;
};

void code__62033720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77202420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62033380();
   }
      }
   }
}

Block make__62033720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62033720 = block;
   block->owner = (Object)__62033940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62033720;

   return block;
};

void code__62033940() {
 code__62033720();
}

Block make__62033940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62033940 = block;
   block->owner = (Object)__62034400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62033940;

   return block;
};

Block __62298080;

Block __62297920;

Block __62297460;

Block __62295380;

Block __62294640;

void code__62294640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58484_64413900_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,lv0_56243480_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__77225640(),lvok0_52561940_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62294640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62294640 = block;
   block->owner = (Object)__62295380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62294640;

   return block;
};

void code__62295380() {
 code__62294640();
}

Block make__62295380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62295380 = block;
   block->owner = (Object)__62297460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62295380;

   return block;
};

Block __62297280;

void code__62297280() {
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
                  src0 = _58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__77225540();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77225500();
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
                        src0 = _58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77225260();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__77225180();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77225060(),_58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62297280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62297280 = block;
   block->owner = (Object)__62297460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62297280;

   return block;
};

void code__62297460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77225800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62295380();
   }
   else {
  code__62297280();
   }
      }
   }
}

Block make__62297460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62297460 = block;
   block->owner = (Object)__62297920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62297460;

   return block;
};

void code__62297920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77225900();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62297460();
   }
      }
   }
}

Block make__62297920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62297920 = block;
   block->owner = (Object)__62298080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62297920;

   return block;
};

void code__62298080() {
 code__62297920();
}

Block make__62298080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62298080 = block;
   block->owner = (Object)__62034400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62298080;

   return block;
};

Block __62642700;

Block __62642100;

Block __62641880;

void code__62641880() {
}

Block make__62641880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62641880 = block;
   block->owner = (Object)__62642100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62641880;

   return block;
};

Block __63235600;

void code__63235600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_57060660_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58507_64737640_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77224220(),wok0_52561840_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__63235600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63235600 = block;
   block->owner = (Object)__62642100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63235600;

   return block;
};

void code__62642100() {
 code__62641880();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_57060660_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
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
                              src0 = lv0_56243480_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_52561980_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77224420();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_57060660_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__63235600();
}

Block make__62642100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62642100 = block;
   block->owner = (Object)__62642700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62642100;

   return block;
};

void code__62642700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77224820(),ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77224760(),run_52561800_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__62642100();
}

Block make__62642700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62642700 = block;
   block->owner = (Object)__62034400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62642700;

   return block;
};

Block __63748700;

void code__63748700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77224000(),wok0_52561840_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77223940(),wok1_52561820_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77223880(),lvok0_52561940_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77223820(),lvok1_52561900_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77223760(),rvok_52561860_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__63748700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63748700 = block;
   block->owner = (Object)__62034400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63748700;

   return block;
};

Block __63747240;

Block __63747080;

Block __63746700;

Block __63744520;

Block __63744240;

void code__63744240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58499_65132980_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,lv1_56607380_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__77223360(),lvok1_52561900_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__63744240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63744240 = block;
   block->owner = (Object)__63744520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63744240;

   return block;
};

void code__63744520() {
 code__63744240();
}

Block make__63744520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63744520 = block;
   block->owner = (Object)__63746700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63744520;

   return block;
};

Block __63746400;

void code__63746400() {
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
                  src0 = _58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__77223260();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77223220();
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
                        src0 = _58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77222960();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__77222900();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77222780(),_58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__63746400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63746400 = block;
   block->owner = (Object)__63746700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63746400;

   return block;
};

void code__63746700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77223520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63744520();
   }
   else {
  code__63746400();
   }
      }
   }
}

Block make__63746700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63746700 = block;
   block->owner = (Object)__63747080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63746700;

   return block;
};

void code__63747080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77223620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63746700();
   }
      }
   }
}

Block make__63747080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63747080 = block;
   block->owner = (Object)__63747240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63747080;

   return block;
};

void code__63747240() {
 code__63747080();
}

Block make__63747240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63747240 = block;
   block->owner = (Object)__62034400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63747240;

   return block;
};

Block __63979580;

Block __64003500;

Block __64003340;

void code__64003340() {
}

Block make__64003340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64003340 = block;
   block->owner = (Object)__64003500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64003340;

   return block;
};

Block __64839120;

void code__64839120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_57275160_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58508_64832760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77221880(),wok1_52561820_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__64839120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64839120 = block;
   block->owner = (Object)__64003500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64839120;

   return block;
};

void code__64003500() {
 code__64003340();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_57275160_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
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
                              src0 = lv1_56607380_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_52561980_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77222100();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_57275160_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__64839120();
}

Block make__64003500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64003500 = block;
   block->owner = (Object)__63979580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64003500;

   return block;
};

void code__63979580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77222540(),ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77222480(),run_52561800_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__64003500();
}

Block make__63979580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63979580 = block;
   block->owner = (Object)__62034400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63979580;

   return block;
};

Block __65246920;

void code__65246920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77221720(),wok0_52561840_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77221660(),wok1_52561820_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77221600(),lvok0_52561940_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77221540(),lvok1_52561900_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77221480(),rvok_52561860_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65246920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65246920 = block;
   block->owner = (Object)__62034400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65246920;

   return block;
};

void code__62034400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77202560(),run_52561800_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_52561860_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62033940();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52561940_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62298080();
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
               src0 = lvok0_52561940_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               src1 = rvok_52561860_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_52561840_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62642700();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_52561840_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         src1 = wok1_52561820_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63748700();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_52561900_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63747240();
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
               src0 = lvok1_52561900_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               src1 = rvok_52561860_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_52561820_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63979580();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_52561840_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         src1 = wok1_52561820_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65246920();
   }
      }
   }
}

Block make__62034400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62034400 = block;
   block->owner = (Object)__52561580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62034400;

   return block;
};

Block __54808940;

void code__54808940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77221420(),av0_57060660_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77221360(),av1_57275160_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54808940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54808940 = block;
   block->owner = (Object)__52561580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54808940;

   return block;
};

void code__52561580() {
 code__52561380();
 code__52560140();
 code__54811740();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77203160(),ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77203100(),run_52561800_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_52561800_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54810200();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_64353060_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         src1 = run_52561800_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62034400();
   }
   else {
  code__54808940();
   }
      }
   }
}

Block make__52561580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52561580 = block;
   block->owner = (Object)__65245360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52561580;

   return block;
};

Block __65947480;

void code__65947480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_65639700_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(abus__r_65323160_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_65323280_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65947480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65947480 = block;
   block->owner = (Object)__66452580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65947480;

   return block;
};

Block __76954120;

void code__76954120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_65323280_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58548_65257620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76954120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76954120 = block;
   block->owner = (Object)__76953940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76954120;

   return block;
};

Block __76953860;

void code__76953860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58548_65257620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,dbus__r_65323280_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76953860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76953860 = block;
   block->owner = (Object)__76953700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76953860;

   return block;
};

Block __76953400;

void code__76953400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_65241840_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76953400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76953400 = block;
   block->owner = (Object)__76953240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76953400;

   return block;
};

Block __76953200;

void code__76953200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,trig__r_65241840_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76953200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76953200 = block;
   block->owner = (Object)__76953040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76953200;

   return block;
};

Block __76952720;

void code__76952720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_65323160_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58547_65257500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76952720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76952720 = block;
   block->owner = (Object)__76952560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76952720;

   return block;
};

Block __76952520;

void code__76952520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58547_65257500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,abus__r_65323160_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76952520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76952520 = block;
   block->owner = (Object)__76952360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76952520;

   return block;
};

Block __50881940;

void code__50881940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49356460_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(abus__r_66563260_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_66563340_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__50881940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50881940 = block;
   block->owner = (Object)__53816620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50881940;

   return block;
};

Block __76951040;

void code__76951040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_66563340_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58563_65673500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76951040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76951040 = block;
   block->owner = (Object)__76950880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76951040;

   return block;
};

Block __76950820;

void code__76950820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58563_65673500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,dbus__r_66563340_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76950820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76950820 = block;
   block->owner = (Object)__76950660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76950820;

   return block;
};

Block __76950360;

void code__76950360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_66449300_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76950360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76950360 = block;
   block->owner = (Object)__76950200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76950360;

   return block;
};

Block __76950160;

void code__76950160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,trig__r_66449300_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76950160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76950160 = block;
   block->owner = (Object)__76949960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76950160;

   return block;
};

Block __76949600;

void code__76949600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_66563260_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58562_65673320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76949600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76949600 = block;
   block->owner = (Object)__76949440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76949600;

   return block;
};

Block __76949400;

void code__76949400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58562_65673320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,abus__r_66563260_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76949400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76949400 = block;
   block->owner = (Object)__76949240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76949400;

   return block;
};

Block __76947980;

void code__76947980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54247160_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58576_65360800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76947980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76947980 = block;
   block->owner = (Object)__76947800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76947980;

   return block;
};

Block __76947760;

void code__76947760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58576_65360800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,reg__0_54247160_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76947760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76947760 = block;
   block->owner = (Object)__76947540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76947760;

   return block;
};

Block __76988160;

void code__76988160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_54678620_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58577_65562120_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76988160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76988160 = block;
   block->owner = (Object)__76988000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76988160;

   return block;
};

Block __76987960;

void code__76987960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58577_65562120_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,reg__1_54678620_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76987960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76987960 = block;
   block->owner = (Object)__76987800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76987960;

   return block;
};

Block __52566860;

Block __52566660;

void code__52566660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77218880(),_58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__52566660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52566660 = block;
   block->owner = (Object)__52566860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52566660;

   return block;
};

Block __52566240;

void code__52566240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77218820(),_58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__52566240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52566240 = block;
   block->owner = (Object)__52566860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52566240;

   return block;
};

Block __52564260;

Block __52563820;

void code__52563820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58507_64737640_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,lv0_56381820_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77218400(),lvok0_52567120_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__52563820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52563820 = block;
   block->owner = (Object)__52564260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52563820;

   return block;
};

Block __62033560;

Block __62032740;

Block __62030420;

void code__62030420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58548_65257620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,rv0_57243320_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77218020(),_58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77217940(),rvok0_52567080_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62030420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62030420 = block;
   block->owner = (Object)__62032740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62030420;

   return block;
};

Block __62032200;

void code__62032200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77217840(),_58547_65257500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77258700(),_58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62032200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62032200 = block;
   block->owner = (Object)__62032740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62032200;

   return block;
};

void code__62032740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77218200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62030420();
   }
   else {
  code__62032200();
   }
      }
   }
}

Block make__62032740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62032740 = block;
   block->owner = (Object)__62033560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62032740;

   return block;
};

void code__62033560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58549_65257600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77218320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62032740();
   }
      }
   }
}

Block make__62033560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62033560 = block;
   block->owner = (Object)__52564260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62033560;

   return block;
};

Block __62314760;

Block __62314180;

void code__62314180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_56381820_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      src1 = rv0_57243320_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58576_65360800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62314180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62314180 = block;
   block->owner = (Object)__62314760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62314180;

   return block;
};

void code__62314760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77258540(),run_52567040_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77258480(),ack__add_64352960_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__62314180();
}

Block make__62314760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62314760 = block;
   block->owner = (Object)__52564260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62314760;

   return block;
};

Block __62962080;

void code__62962080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58508_64832760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,lv1_56977340_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77258160(),lvok1_52567100_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__62962080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62962080 = block;
   block->owner = (Object)__52564260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62962080;

   return block;
};

Block __63201560;

Block __63225700;

Block __63224760;

void code__63224760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58563_65673500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,rv1_52567140_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77257800(),_58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77257740(),rvok1_52567060_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__63224760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63224760 = block;
   block->owner = (Object)__63225700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63224760;

   return block;
};

Block __63225540;

void code__63225540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77257680(),_58562_65673320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77257620(),_58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__63225540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63225540 = block;
   block->owner = (Object)__63225700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63225540;

   return block;
};

void code__63225700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77257980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63224760();
   }
   else {
  code__63225540();
   }
      }
   }
}

Block make__63225700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63225700 = block;
   block->owner = (Object)__63201560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63225700;

   return block;
};

void code__63201560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58564_65673480_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77258080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63225700();
   }
      }
   }
}

Block make__63201560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63201560 = block;
   block->owner = (Object)__52564260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63201560;

   return block;
};

Block __63560760;

Block __63560060;

void code__63560060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_56977340_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      src1 = rv1_52567140_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58577_65562120_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__63560060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63560060 = block;
   block->owner = (Object)__63560760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63560060;

   return block;
};

void code__63560760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77257460(),run_52567040_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77257400(),ack__add_64352960_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__63560060();
}

Block make__63560760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63560760 = block;
   block->owner = (Object)__52564260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63560760;

   return block;
};

void code__52564260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77218540(),run_52567040_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__52563820();
 code__62033560();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52567120_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         src1 = rvok0_52567080_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62314760();
   }
      }
   }
 code__62962080();
 code__63201560();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_52567100_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         src1 = rvok1_52567060_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63560760();
   }
      }
   }
}

Block make__52564260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52564260 = block;
   block->owner = (Object)__52566860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52564260;

   return block;
};

Block __52565480;

void code__52565480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77257160(),lvok0_52567120_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77257100(),rvok0_52567080_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77257020(),lvok1_52567100_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77256940(),rvok1_52567060_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__52565480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52565480 = block;
   block->owner = (Object)__52566860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52565480;

   return block;
};

void code__52566860() {
 code__52566660();
 code__52566240();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77218760(),ack__add_64352960_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77218700(),run_52567040_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_64353020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         src1 = run_52567040_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52564260();
   }
   else {
  code__52565480();
   }
      }
   }
}

Block make__52566860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52566860 = block;
   block->owner = (Object)__64353240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52566860;

   return block;
};

Value make__77206620() {
   static unsigned long long data[] = { 4294967267ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77206600() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77205420() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77205400() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77221340() {
   static unsigned long long data[] = { 5ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__77220420() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__77203860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77203720() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77203660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77203580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77203500() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77203440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77203360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77203280() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77203220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77203160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77203100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77202980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77202920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77202860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77202800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77202720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77202560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77202420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77202320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77202160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77202060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77202020() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77201720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77201620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77201500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77225900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77225800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77225640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77225540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77225500() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77225260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77225180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77225060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77224820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77224760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77224420() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77224220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77224000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77223940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77223880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77223820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77223760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77223620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77223520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77223360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77223260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77223220() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77222960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77222900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77222780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77222540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77222480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77222100() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77221880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77221720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77221660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77221600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77221540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77221480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77221420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77221360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77218880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77218820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77218760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77218700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77218540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77218400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77218320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77218200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77218020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77217940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77217840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77258700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77258540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77258480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77258160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77258080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77257980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77257800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77257740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77257680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77257620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77257460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77257400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77257160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77257100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77257020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77256940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77255500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77255440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77255380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77255200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77255060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77255000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77254920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77254800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77254740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77254400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77254260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_840_64384760;

SignalI req__mac_64353060_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereq__mac_64353060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_64353060_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SignalI ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack_64353040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SignalI ack__mac_64353020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__mac_64353020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_64353020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SignalI ack__add_64352960_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__add_64352960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_64352960_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SignalI _58484_64413900_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58484_64413900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58484_64413900_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":484";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58482_64413880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":482";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58483_64413800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":483";
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

SignalI _58507_64737640_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58507_64737640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58507_64737640_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SignalI _58508_64832760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58508_64832760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58508_64832760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":508";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58499_65132980_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58499_65132980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58499_65132980_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":499";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58497_65132820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":497";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58498_65132740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":498";
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

SignalI _58548_65257620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58548_65257620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58548_65257620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":548";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58549_65257600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58549_65257600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58549_65257600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":549";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58546_65257580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":546";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58547_65257500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58547_65257500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58547_65257500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":547";
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

SignalI _58576_65360800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58576_65360800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58576_65360800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":576";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58577_65562120_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58577_65562120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58577_65562120_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":577";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58563_65673500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58563_65673500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58563_65673500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":563";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58564_65673480_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58564_65673480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58564_65673480_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":564";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58561_65673460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SignalI _58562_65673320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58562_65673320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58562_65673320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
   signalI->name = ":562";
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

SignalI value__z0_65881600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makevalue__z0_65881600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_65881600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SignalI value__z1_66034020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makevalue__z1_66034020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_66034020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SignalI value__a0_66130340_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makevalue__a0_66130340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_66130340_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SignalI value__a1_66340780_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makevalue__a1_66340780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_66340780_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SignalI flag__z0_66340760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeflag__z0_66340760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_66340760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SignalI flag__z1_66340700_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeflag__z1_66340700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_66340700_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SignalI ack__a0_66340680_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__a0_66340680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_66340680_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SignalI ack__a1_66340660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__a1_66340660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_66340660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer0_58_840_64384760;
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

SystemI counter_66357620;

SystemI makecounter_66357620() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_66357620 = systemI;
   systemI->owner = (Object)layer0_58_840_64384760;
   systemI->name = "counter";
   systemI->system = counter_58_8410_66360220;

   return systemI;
};

SystemI func0_66257100;

SystemI makefunc0_66257100() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_66257100 = systemI;
   systemI->owner = (Object)layer0_58_840_64384760;
   systemI->name = "func0";
   systemI->system = func0_58_8410_65897800;

   return systemI;
};

SystemI func1_56076580;

SystemI makefunc1_56076580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_56076580 = systemI;
   systemI->owner = (Object)layer0_58_840_64384760;
   systemI->name = "func1";
   systemI->system = func1_58_8400_55166660;

   return systemI;
};

Scope channel__w0_58475_64384460;

SignalI trig__r_64382640_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI maketrig__r_64382640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_64382640_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58475_64384460;
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

SignalI dbus__r_64572360_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makedbus__r_64572360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_64572360_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58475_64384460;
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

SignalI abus__r_64572280_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_64572280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_64572280_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58475_64384460;
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

SignalI mem_65347260_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makemem_65347260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_65347260_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58475_64384460;
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
         src0 = make__77206620();
         src1 = make__77206600();
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

Scope raddr_58476_64384120;

Scope makeraddr_58476_64384120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58476_64384120 = scope;
   scope->owner = (Object)channel__w0_58475_64384460;
   scope->name = "raddr:476";
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

Scope rinc_58481_64383620;

Scope makerinc_58481_64383620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58481_64383620 = scope;
   scope->owner = (Object)channel__w0_58475_64384460;
   scope->name = "rinc:481";
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

Scope rdec_58485_64383100;

Scope makerdec_58485_64383100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58485_64383100 = scope;
   scope->owner = (Object)channel__w0_58475_64384460;
   scope->name = "rdec:485";
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

Behavior __66030660;

Behavior make__66030660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66030660 = behavior;
   behavior->owner = (Object)channel__w0_58475_64384460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg = realloc(clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg[clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__65627320();

   return behavior;
}

Behavior __76938480;

Behavior make__76938480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76938480 = behavior;
   behavior->owner = (Object)channel__w0_58475_64384460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_64572360_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   dbus__r_64572360_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__r_64572360_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(dbus__r_64572360_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,dbus__r_64572360_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__r_64572360_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[dbus__r_64572360_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76938640();

   return behavior;
}

Behavior __76938280;

Behavior make__76938280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76938280 = behavior;
   behavior->owner = (Object)channel__w0_58475_64384460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58484_64413900_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58484_64413900_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58484_64413900_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58484_64413900_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58484_64413900_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58484_64413900_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58484_64413900_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76938440();

   return behavior;
}

Behavior __76937780;

Behavior make__76937780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76937780 = behavior;
   behavior->owner = (Object)channel__w0_58475_64384460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_64382640_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   trig__r_64382640_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   trig__r_64382640_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(trig__r_64382640_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,trig__r_64382640_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
trig__r_64382640_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[trig__r_64382640_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76937960();

   return behavior;
}

Behavior __76937520;

Behavior make__76937520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76937520 = behavior;
   behavior->owner = (Object)channel__w0_58475_64384460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58482_64413880_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76937720();

   return behavior;
}

Behavior __76937060;

Behavior make__76937060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76937060 = behavior;
   behavior->owner = (Object)channel__w0_58475_64384460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_64572280_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   abus__r_64572280_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_64572280_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(abus__r_64572280_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,abus__r_64572280_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_64572280_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[abus__r_64572280_channel__w0_58475_64384460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76937220();

   return behavior;
}

Behavior __76936860;

Behavior make__76936860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76936860 = behavior;
   behavior->owner = (Object)channel__w0_58475_64384460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58483_64413800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76937020();

   return behavior;
}

Scope makechannel__w0_58475_64384460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58475_64384460 = scope;
   scope->owner = (Object)layer0_58_840_64384760;
   scope->name = "channel_w0:475";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_64382640();
   scope->inners[1] = makedbus__r_64572360();
   scope->inners[2] = makeabus__r_64572280();
   scope->inners[3] = makemem_65347260();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58476_64384120();
   scope->scopes[1] = makerinc_58481_64383620();
   scope->scopes[2] = makerdec_58485_64383100();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__66030660();
   scope->behaviors[1] = make__76938480();
   scope->behaviors[2] = make__76938280();
   scope->behaviors[3] = make__76937780();
   scope->behaviors[4] = make__76937520();
   scope->behaviors[5] = make__76937060();
   scope->behaviors[6] = make__76936860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58490_66030540;

SignalI trig__r_66028720_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI maketrig__r_66028720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_66028720_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w1_58490_66030540;
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

SignalI dbus__r_66130920_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makedbus__r_66130920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_66130920_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w1_58490_66030540;
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

SignalI abus__r_66130840_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_66130840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_66130840_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w1_58490_66030540;
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

SignalI mem_49573540_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makemem_49573540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49573540_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w1_58490_66030540;
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
         src0 = make__77205420();
         src1 = make__77205400();
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

Scope raddr_58491_66030220;

Scope makeraddr_58491_66030220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58491_66030220 = scope;
   scope->owner = (Object)channel__w1_58490_66030540;
   scope->name = "raddr:491";
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

Scope rinc_58496_66029780;

Scope makerinc_58496_66029780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58496_66029780 = scope;
   scope->owner = (Object)channel__w1_58490_66030540;
   scope->name = "rinc:496";
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

Scope rdec_58500_66029260;

Scope makerdec_58500_66029260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58500_66029260 = scope;
   scope->owner = (Object)channel__w1_58490_66030540;
   scope->name = "rdec:500";
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

Behavior __53782260;

Behavior make__53782260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53782260 = behavior;
   behavior->owner = (Object)channel__w1_58490_66030540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg = realloc(clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg[clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__50929920();

   return behavior;
}

Behavior __76935360;

Behavior make__76935360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76935360 = behavior;
   behavior->owner = (Object)channel__w1_58490_66030540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_66130920_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   dbus__r_66130920_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__r_66130920_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(dbus__r_66130920_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,dbus__r_66130920_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__r_66130920_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[dbus__r_66130920_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76935520();

   return behavior;
}

Behavior __76935160;

Behavior make__76935160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76935160 = behavior;
   behavior->owner = (Object)channel__w1_58490_66030540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58499_65132980_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58499_65132980_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58499_65132980_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58499_65132980_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58499_65132980_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58499_65132980_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58499_65132980_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76935320();

   return behavior;
}

Behavior __76934700;

Behavior make__76934700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76934700 = behavior;
   behavior->owner = (Object)channel__w1_58490_66030540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_66028720_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   trig__r_66028720_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   trig__r_66028720_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(trig__r_66028720_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,trig__r_66028720_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
trig__r_66028720_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[trig__r_66028720_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76934860();

   return behavior;
}

Behavior __76934480;

Behavior make__76934480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76934480 = behavior;
   behavior->owner = (Object)channel__w1_58490_66030540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58497_65132820_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76934660();

   return behavior;
}

Behavior __76934020;

Behavior make__76934020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76934020 = behavior;
   behavior->owner = (Object)channel__w1_58490_66030540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_66130840_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   abus__r_66130840_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_66130840_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(abus__r_66130840_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,abus__r_66130840_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_66130840_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[abus__r_66130840_channel__w1_58490_66030540_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76934180();

   return behavior;
}

Behavior __76933800;

Behavior make__76933800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76933800 = behavior;
   behavior->owner = (Object)channel__w1_58490_66030540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58498_65132740_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76933980();

   return behavior;
}

Scope makechannel__w1_58490_66030540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58490_66030540 = scope;
   scope->owner = (Object)layer0_58_840_64384760;
   scope->name = "channel_w1:490";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_66028720();
   scope->inners[1] = makedbus__r_66130920();
   scope->inners[2] = makeabus__r_66130840();
   scope->inners[3] = makemem_49573540();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58491_66030220();
   scope->scopes[1] = makerinc_58496_66029780();
   scope->scopes[2] = makerdec_58500_66029260();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53782260();
   scope->behaviors[1] = make__76935360();
   scope->behaviors[2] = make__76935160();
   scope->behaviors[3] = make__76934700();
   scope->behaviors[4] = make__76934480();
   scope->behaviors[5] = make__76934020();
   scope->behaviors[6] = make__76933800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58505_53781620;

SignalI reg__0_54172960_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereg__0_54172960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_54172960_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__accum_58505_53781620;
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

SignalI reg__1_54403560_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereg__1_54403560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_54403560_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__accum_58505_53781620;
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

Scope anum_58506_53804600;

Scope makeanum_58506_53804600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58506_53804600 = scope;
   scope->owner = (Object)channel__accum_58505_53781620;
   scope->name = "anum:506";
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

Scope raddr_58509_53801020;

Scope makeraddr_58509_53801020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58509_53801020 = scope;
   scope->owner = (Object)channel__accum_58505_53781620;
   scope->name = "raddr:509";
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

Scope waddr_58513_53799780;

Scope makewaddr_58513_53799780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58513_53799780 = scope;
   scope->owner = (Object)channel__accum_58505_53781620;
   scope->name = "waddr:513";
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

Scope rinc_58517_53798920;

SignalI abus__r_53797020_rinc_58517_53798920_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_53797020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53797020_rinc_58517_53798920_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rinc_58517_53798920;
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

Scope makerinc_58517_53798920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58517_53798920 = scope;
   scope->owner = (Object)channel__accum_58505_53781620;
   scope->name = "rinc:517";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53797020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58522_53821260;

SignalI abus__w_53820180_winc_58522_53821260_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__w_53820180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53820180_winc_58522_53821260_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)winc_58522_53821260;
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

Scope makewinc_58522_53821260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58522_53821260 = scope;
   scope->owner = (Object)channel__accum_58505_53781620;
   scope->name = "winc:522";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53820180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58527_53819980;

SignalI abus__r_53819200_rdec_58527_53819980_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_53819200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53819200_rdec_58527_53819980_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rdec_58527_53819980;
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

Scope makerdec_58527_53819980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58527_53819980 = scope;
   scope->owner = (Object)channel__accum_58505_53781620;
   scope->name = "rdec:527";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53819200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58532_53819060;

SignalI abus__w_53818100_wdec_58532_53819060_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__w_53818100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53818100_wdec_58532_53819060_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)wdec_58532_53819060;
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

Scope makewdec_58532_53819060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58532_53819060 = scope;
   scope->owner = (Object)channel__accum_58505_53781620;
   scope->name = "wdec:532";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53818100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __76932320;

Behavior make__76932320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76932320 = behavior;
   behavior->owner = (Object)channel__accum_58505_53781620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54172960_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   reg__0_54172960_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   reg__0_54172960_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(reg__0_54172960_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,reg__0_54172960_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__0_54172960_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[reg__0_54172960_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76932480();

   return behavior;
}

Behavior __76932120;

Behavior make__76932120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76932120 = behavior;
   behavior->owner = (Object)channel__accum_58505_53781620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58507_64737640_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58507_64737640_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58507_64737640_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58507_64737640_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58507_64737640_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58507_64737640_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58507_64737640_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76932280();

   return behavior;
}

Behavior __76931620;

Behavior make__76931620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76931620 = behavior;
   behavior->owner = (Object)channel__accum_58505_53781620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_54403560_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   reg__1_54403560_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   reg__1_54403560_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(reg__1_54403560_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,reg__1_54403560_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__1_54403560_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[reg__1_54403560_channel__accum_58505_53781620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76931820();

   return behavior;
}

Behavior __76931360;

Behavior make__76931360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76931360 = behavior;
   behavior->owner = (Object)channel__accum_58505_53781620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58508_64832760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58508_64832760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58508_64832760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58508_64832760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58508_64832760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58508_64832760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58508_64832760_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76931580();

   return behavior;
}

Scope makechannel__accum_58505_53781620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58505_53781620 = scope;
   scope->owner = (Object)layer0_58_840_64384760;
   scope->name = "channel_accum:505";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_54172960();
   scope->inners[1] = makereg__1_54403560();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58506_53804600();
   scope->scopes[1] = makeraddr_58509_53801020();
   scope->scopes[2] = makewaddr_58513_53799780();
   scope->scopes[3] = makerinc_58517_53798920();
   scope->scopes[4] = makewinc_58522_53821260();
   scope->scopes[5] = makerdec_58527_53819980();
   scope->scopes[6] = makewdec_58532_53819060();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76932320();
   scope->behaviors[1] = make__76932120();
   scope->behaviors[2] = make__76931620();
   scope->behaviors[3] = make__76931360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58537_55775260;

SignalI lv0_56243480_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelv0_56243480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_56243480_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58537_55775260;
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

SignalI lv1_56607380_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelv1_56607380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_56607380_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58537_55775260;
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

SignalI av0_57060660_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeav0_57060660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_57060660_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58537_55775260;
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

SignalI av1_57275160_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeav1_57275160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_57275160_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58537_55775260;
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

SignalI rv_52561980_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makerv_52561980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_52561980_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58537_55775260;
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

SignalI lvok0_52561940_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelvok0_52561940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52561940_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58537_55775260;
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

SignalI lvok1_52561900_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelvok1_52561900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_52561900_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58537_55775260;
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

SignalI rvok_52561860_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makervok_52561860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_52561860_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58537_55775260;
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

SignalI wok0_52561840_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makewok0_52561840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_52561840_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58537_55775260;
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

SignalI wok1_52561820_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makewok1_52561820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_52561820_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58537_55775260;
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

SignalI run_52561800_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makerun_52561800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52561800_mac__n1_58537_55775260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58537_55775260;
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

Behavior __65245360;

Behavior make__65245360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65245360 = behavior;
   behavior->owner = (Object)mac__n1_58537_55775260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos = realloc(clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos[clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__52561580();

   return behavior;
}

Scope makemac__n1_58537_55775260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58537_55775260 = scope;
   scope->owner = (Object)layer0_58_840_64384760;
   scope->name = "mac_n1:537";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_56243480();
   scope->inners[1] = makelv1_56607380();
   scope->inners[2] = makeav0_57060660();
   scope->inners[3] = makeav1_57275160();
   scope->inners[4] = makerv_52561980();
   scope->inners[5] = makelvok0_52561940();
   scope->inners[6] = makelvok1_52561900();
   scope->inners[7] = makervok_52561860();
   scope->inners[8] = makewok0_52561840();
   scope->inners[9] = makewok1_52561820();
   scope->inners[10] = makerun_52561800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65245360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58544_65245240;

SignalI trig__r_65241840_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI maketrig__r_65241840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_65241840_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58544_65245240;
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

SignalI dbus__r_65323280_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makedbus__r_65323280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_65323280_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58544_65245240;
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

SignalI abus__r_65323160_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_65323160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_65323160_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58544_65245240;
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

SignalI mem_65639700_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makemem_65639700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_65639700_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58544_65245240;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__77221340(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58545_65244860;

Scope makeraddr_58545_65244860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58545_65244860 = scope;
   scope->owner = (Object)channel__b0_58544_65245240;
   scope->name = "raddr:545";
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

Scope rinc_58550_65243840;

Scope makerinc_58550_65243840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58550_65243840 = scope;
   scope->owner = (Object)channel__b0_58544_65245240;
   scope->name = "rinc:550";
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

Scope rdec_58554_65242940;

Scope makerdec_58554_65242940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58554_65242940 = scope;
   scope->owner = (Object)channel__b0_58544_65245240;
   scope->name = "rdec:554";
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

Behavior __66452580;

Behavior make__66452580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66452580 = behavior;
   behavior->owner = (Object)channel__b0_58544_65245240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg = realloc(clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg[clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__65947480();

   return behavior;
}

Behavior __76953940;

Behavior make__76953940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76953940 = behavior;
   behavior->owner = (Object)channel__b0_58544_65245240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_65323280_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   dbus__r_65323280_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__r_65323280_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(dbus__r_65323280_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,dbus__r_65323280_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__r_65323280_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[dbus__r_65323280_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76954120();

   return behavior;
}

Behavior __76953700;

Behavior make__76953700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76953700 = behavior;
   behavior->owner = (Object)channel__b0_58544_65245240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58548_65257620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58548_65257620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58548_65257620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58548_65257620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58548_65257620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58548_65257620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58548_65257620_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76953860();

   return behavior;
}

Behavior __76953240;

Behavior make__76953240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76953240 = behavior;
   behavior->owner = (Object)channel__b0_58544_65245240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_65241840_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   trig__r_65241840_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   trig__r_65241840_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(trig__r_65241840_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,trig__r_65241840_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
trig__r_65241840_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[trig__r_65241840_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76953400();

   return behavior;
}

Behavior __76953040;

Behavior make__76953040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76953040 = behavior;
   behavior->owner = (Object)channel__b0_58544_65245240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58546_65257580_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76953200();

   return behavior;
}

Behavior __76952560;

Behavior make__76952560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76952560 = behavior;
   behavior->owner = (Object)channel__b0_58544_65245240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_65323160_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   abus__r_65323160_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_65323160_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(abus__r_65323160_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,abus__r_65323160_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_65323160_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[abus__r_65323160_channel__b0_58544_65245240_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76952720();

   return behavior;
}

Behavior __76952360;

Behavior make__76952360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76952360 = behavior;
   behavior->owner = (Object)channel__b0_58544_65245240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58547_65257500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58547_65257500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58547_65257500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58547_65257500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58547_65257500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58547_65257500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58547_65257500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76952520();

   return behavior;
}

Scope makechannel__b0_58544_65245240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58544_65245240 = scope;
   scope->owner = (Object)layer0_58_840_64384760;
   scope->name = "channel_b0:544";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_65241840();
   scope->inners[1] = makedbus__r_65323280();
   scope->inners[2] = makeabus__r_65323160();
   scope->inners[3] = makemem_65639700();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58545_65244860();
   scope->scopes[1] = makerinc_58550_65243840();
   scope->scopes[2] = makerdec_58554_65242940();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__66452580();
   scope->behaviors[1] = make__76953940();
   scope->behaviors[2] = make__76953700();
   scope->behaviors[3] = make__76953240();
   scope->behaviors[4] = make__76953040();
   scope->behaviors[5] = make__76952560();
   scope->behaviors[6] = make__76952360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58559_66452260;

SignalI trig__r_66449300_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI maketrig__r_66449300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_66449300_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b1_58559_66452260;
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

SignalI dbus__r_66563340_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makedbus__r_66563340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_66563340_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b1_58559_66452260;
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

SignalI abus__r_66563260_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_66563260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_66563260_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b1_58559_66452260;
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

SignalI mem_49356460_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makemem_49356460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49356460_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b1_58559_66452260;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__77220420(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58560_66451620;

Scope makeraddr_58560_66451620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58560_66451620 = scope;
   scope->owner = (Object)channel__b1_58559_66452260;
   scope->name = "raddr:560";
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

Scope rinc_58565_66450420;

Scope makerinc_58565_66450420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58565_66450420 = scope;
   scope->owner = (Object)channel__b1_58559_66452260;
   scope->name = "rinc:565";
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

Scope rdec_58569_66449760;

Scope makerdec_58569_66449760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58569_66449760 = scope;
   scope->owner = (Object)channel__b1_58559_66452260;
   scope->name = "rdec:569";
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

Behavior __53816620;

Behavior make__53816620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53816620 = behavior;
   behavior->owner = (Object)channel__b1_58559_66452260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg = realloc(clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg[clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__50881940();

   return behavior;
}

Behavior __76950880;

Behavior make__76950880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76950880 = behavior;
   behavior->owner = (Object)channel__b1_58559_66452260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_66563340_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   dbus__r_66563340_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__r_66563340_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(dbus__r_66563340_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,dbus__r_66563340_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__r_66563340_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[dbus__r_66563340_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76951040();

   return behavior;
}

Behavior __76950660;

Behavior make__76950660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76950660 = behavior;
   behavior->owner = (Object)channel__b1_58559_66452260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58563_65673500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58563_65673500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58563_65673500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58563_65673500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58563_65673500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58563_65673500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58563_65673500_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76950820();

   return behavior;
}

Behavior __76950200;

Behavior make__76950200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76950200 = behavior;
   behavior->owner = (Object)channel__b1_58559_66452260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_66449300_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   trig__r_66449300_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   trig__r_66449300_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(trig__r_66449300_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,trig__r_66449300_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
trig__r_66449300_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[trig__r_66449300_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76950360();

   return behavior;
}

Behavior __76949960;

Behavior make__76949960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76949960 = behavior;
   behavior->owner = (Object)channel__b1_58559_66452260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58561_65673460_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76950160();

   return behavior;
}

Behavior __76949440;

Behavior make__76949440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76949440 = behavior;
   behavior->owner = (Object)channel__b1_58559_66452260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_66563260_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   abus__r_66563260_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_66563260_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(abus__r_66563260_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,abus__r_66563260_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_66563260_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[abus__r_66563260_channel__b1_58559_66452260_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76949600();

   return behavior;
}

Behavior __76949240;

Behavior make__76949240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76949240 = behavior;
   behavior->owner = (Object)channel__b1_58559_66452260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58562_65673320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58562_65673320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58562_65673320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58562_65673320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58562_65673320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58562_65673320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58562_65673320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76949400();

   return behavior;
}

Scope makechannel__b1_58559_66452260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58559_66452260 = scope;
   scope->owner = (Object)layer0_58_840_64384760;
   scope->name = "channel_b1:559";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_66449300();
   scope->inners[1] = makedbus__r_66563340();
   scope->inners[2] = makeabus__r_66563260();
   scope->inners[3] = makemem_49356460();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58560_66451620();
   scope->scopes[1] = makerinc_58565_66450420();
   scope->scopes[2] = makerdec_58569_66449760();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53816620();
   scope->behaviors[1] = make__76950880();
   scope->behaviors[2] = make__76950660();
   scope->behaviors[3] = make__76950200();
   scope->behaviors[4] = make__76949960();
   scope->behaviors[5] = make__76949440();
   scope->behaviors[6] = make__76949240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58574_53816280;

SignalI reg__0_54247160_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereg__0_54247160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_54247160_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__z_58574_53816280;
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

SignalI reg__1_54678620_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereg__1_54678620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_54678620_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__z_58574_53816280;
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

Scope anum_58575_53815900;

Scope makeanum_58575_53815900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58575_53815900 = scope;
   scope->owner = (Object)channel__z_58574_53816280;
   scope->name = "anum:575";
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

Scope raddr_58578_53814820;

Scope makeraddr_58578_53814820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58578_53814820 = scope;
   scope->owner = (Object)channel__z_58574_53816280;
   scope->name = "raddr:578";
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

Scope waddr_58582_53837560;

Scope makewaddr_58582_53837560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58582_53837560 = scope;
   scope->owner = (Object)channel__z_58574_53816280;
   scope->name = "waddr:582";
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

Scope rinc_58586_53836320;

SignalI abus__r_53835340_rinc_58586_53836320_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_53835340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53835340_rinc_58586_53836320_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rinc_58586_53836320;
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

Scope makerinc_58586_53836320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58586_53836320 = scope;
   scope->owner = (Object)channel__z_58574_53816280;
   scope->name = "rinc:586";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53835340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58590_53835020;

SignalI abus__w_53834360_winc_58590_53835020_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__w_53834360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53834360_winc_58590_53835020_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)winc_58590_53835020;
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

Scope makewinc_58590_53835020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58590_53835020 = scope;
   scope->owner = (Object)channel__z_58574_53816280;
   scope->name = "winc:590";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53834360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58594_53834120;

SignalI abus__r_53833080_rdec_58594_53834120_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_53833080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53833080_rdec_58594_53834120_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rdec_58594_53834120;
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

Scope makerdec_58594_53834120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58594_53834120 = scope;
   scope->owner = (Object)channel__z_58574_53816280;
   scope->name = "rdec:594";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53833080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58599_53832820;

SignalI abus__w_53831780_wdec_58599_53832820_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__w_53831780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53831780_wdec_58599_53832820_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)wdec_58599_53832820;
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

Scope makewdec_58599_53832820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58599_53832820 = scope;
   scope->owner = (Object)channel__z_58574_53816280;
   scope->name = "wdec:599";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53831780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __76947800;

Behavior make__76947800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76947800 = behavior;
   behavior->owner = (Object)channel__z_58574_53816280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54247160_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   reg__0_54247160_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   reg__0_54247160_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(reg__0_54247160_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,reg__0_54247160_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__0_54247160_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[reg__0_54247160_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76947980();

   return behavior;
}

Behavior __76947540;

Behavior make__76947540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76947540 = behavior;
   behavior->owner = (Object)channel__z_58574_53816280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58576_65360800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58576_65360800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58576_65360800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58576_65360800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58576_65360800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58576_65360800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58576_65360800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76947760();

   return behavior;
}

Behavior __76988000;

Behavior make__76988000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76988000 = behavior;
   behavior->owner = (Object)channel__z_58574_53816280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_54678620_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   reg__1_54678620_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   reg__1_54678620_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(reg__1_54678620_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,reg__1_54678620_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__1_54678620_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[reg__1_54678620_channel__z_58574_53816280_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76988160();

   return behavior;
}

Behavior __76987800;

Behavior make__76987800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76987800 = behavior;
   behavior->owner = (Object)channel__z_58574_53816280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58577_65562120_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58577_65562120_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58577_65562120_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58577_65562120_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58577_65562120_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58577_65562120_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58577_65562120_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76987960();

   return behavior;
}

Scope makechannel__z_58574_53816280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58574_53816280 = scope;
   scope->owner = (Object)layer0_58_840_64384760;
   scope->name = "channel_z:574";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_54247160();
   scope->inners[1] = makereg__1_54678620();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58575_53815900();
   scope->scopes[1] = makeraddr_58578_53814820();
   scope->scopes[2] = makewaddr_58582_53837560();
   scope->scopes[3] = makerinc_58586_53836320();
   scope->scopes[4] = makewinc_58590_53835020();
   scope->scopes[5] = makerdec_58594_53834120();
   scope->scopes[6] = makewdec_58599_53832820();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76947800();
   scope->behaviors[1] = make__76947540();
   scope->behaviors[2] = make__76988000();
   scope->behaviors[3] = make__76987800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58604_55946320;

SignalI lv0_56381820_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelv0_56381820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_56381820_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58604_55946320;
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

SignalI lv1_56977340_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelv1_56977340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_56977340_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58604_55946320;
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

SignalI rv0_57243320_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makerv0_57243320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_57243320_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58604_55946320;
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

SignalI rv1_52567140_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makerv1_52567140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_52567140_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58604_55946320;
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

SignalI lvok0_52567120_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelvok0_52567120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52567120_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58604_55946320;
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

SignalI lvok1_52567100_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelvok1_52567100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_52567100_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58604_55946320;
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

SignalI rvok0_52567080_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makervok0_52567080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52567080_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58604_55946320;
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

SignalI rvok1_52567060_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makervok1_52567060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_52567060_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58604_55946320;
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

SignalI run_52567040_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makerun_52567040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52567040_add__n_58604_55946320_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58604_55946320;
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

Behavior __64353240;

Behavior make__64353240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64353240 = behavior;
   behavior->owner = (Object)add__n_58604_55946320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos = realloc(clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos[clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__52566860();

   return behavior;
}

Scope makeadd__n_58604_55946320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58604_55946320 = scope;
   scope->owner = (Object)layer0_58_840_64384760;
   scope->name = "add_n:604";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_56381820();
   scope->inners[1] = makelv1_56977340();
   scope->inners[2] = makerv0_57243320();
   scope->inners[3] = makerv1_52567140();
   scope->inners[4] = makelvok0_52567120();
   scope->inners[5] = makelvok1_52567100();
   scope->inners[6] = makervok0_52567080();
   scope->inners[7] = makervok1_52567060();
   scope->inners[8] = makerun_52567040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__64353240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __62927620;

Behavior make__62927620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62927620 = behavior;
   behavior->owner = (Object)layer0_58_840_64384760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos = realloc(clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos[clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__62929560();

   return behavior;
}

Behavior __63867720;

Behavior make__63867720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63867720 = behavior;
   behavior->owner = (Object)layer0_58_840_64384760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos = realloc(clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos[clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__62927140();

   return behavior;
}

Behavior __64933680;

Behavior make__64933680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64933680 = behavior;
   behavior->owner = (Object)layer0_58_840_64384760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos = realloc(clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos[clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__63867520();

   return behavior;
}

Behavior __76922780;

Behavior make__76922780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76922780 = behavior;
   behavior->owner = (Object)layer0_58_840_64384760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_64929800_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   req_64929800_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   req_64929800_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(req_64929800_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,req_64929800_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
req_64929800_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[req_64929800_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_64353020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__mac_64353020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__mac_64353020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__mac_64353020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__mac_64353020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__mac_64353020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__mac_64353020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76898480();

   return behavior;
}

Behavior __76915000;

Behavior make__76915000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76915000 = behavior;
   behavior->owner = (Object)layer0_58_840_64384760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack_64353040_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_65881600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   value__z0_65881600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   value__z0_65881600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(value__z0_65881600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,value__z0_65881600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
value__z0_65881600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[value__z0_65881600_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_66034020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   value__z1_66034020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   value__z1_66034020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(value__z1_66034020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,value__z1_66034020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
value__z1_66034020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[value__z1_66034020_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_66340680_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__a0_66340680_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__a0_66340680_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__a0_66340680_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__a0_66340680_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__a0_66340680_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__a0_66340680_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_66340660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__a1_66340660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__a1_66340660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__a1_66340660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__a1_66340660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__a1_66340660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__a1_66340660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76898700();

   return behavior;
}

Behavior __76914840;

Behavior make__76914840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76914840 = behavior;
   behavior->owner = (Object)layer0_58_840_64384760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_66357760_counter_58_8410_66360220_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__mac_66357760_counter_58_8410_66360220_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__mac_66357760_counter_58_8410_66360220_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__mac_66357760_counter_58_8410_66360220_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__mac_66357760_counter_58_8410_66360220_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__mac_66357760_counter_58_8410_66360220_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__mac_66357760_counter_58_8410_66360220_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_66257260_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   a_66257260_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   a_66257260_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(a_66257260_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,a_66257260_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
a_66257260_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[a_66257260_func0_58_8410_65897800_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_56076920_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   a_56076920_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   a_56076920_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(a_56076920_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,a_56076920_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
a_56076920_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[a_56076920_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76898640();

   return behavior;
}

Scope makelayer0_58_840_64384760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_840_64384760 = scope;
   scope->owner = (Object)layer0_58_8400_64933120;
   scope->name = "layer0:T0";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_66357620();
   scope->systemIs[1] = makefunc0_66257100();
   scope->systemIs[2] = makefunc1_56076580();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_64353060();
   scope->inners[1] = makeack_64353040();
   scope->inners[2] = makeack__mac_64353020();
   scope->inners[3] = makeack__add_64352960();
   scope->inners[4] = make_58484_64413900();
   scope->inners[5] = make_58482_64413880();
   scope->inners[6] = make_58483_64413800();
   scope->inners[7] = make_58507_64737640();
   scope->inners[8] = make_58508_64832760();
   scope->inners[9] = make_58499_65132980();
   scope->inners[10] = make_58497_65132820();
   scope->inners[11] = make_58498_65132740();
   scope->inners[12] = make_58548_65257620();
   scope->inners[13] = make_58549_65257600();
   scope->inners[14] = make_58546_65257580();
   scope->inners[15] = make_58547_65257500();
   scope->inners[16] = make_58576_65360800();
   scope->inners[17] = make_58577_65562120();
   scope->inners[18] = make_58563_65673500();
   scope->inners[19] = make_58564_65673480();
   scope->inners[20] = make_58561_65673460();
   scope->inners[21] = make_58562_65673320();
   scope->inners[22] = makevalue__z0_65881600();
   scope->inners[23] = makevalue__z1_66034020();
   scope->inners[24] = makevalue__a0_66130340();
   scope->inners[25] = makevalue__a1_66340780();
   scope->inners[26] = makeflag__z0_66340760();
   scope->inners[27] = makeflag__z1_66340700();
   scope->inners[28] = makeack__a0_66340680();
   scope->inners[29] = makeack__a1_66340660();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58475_64384460();
   scope->scopes[1] = makechannel__w1_58490_66030540();
   scope->scopes[2] = makechannel__accum_58505_53781620();
   scope->scopes[3] = makemac__n1_58537_55775260();
   scope->scopes[4] = makechannel__b0_58544_65245240();
   scope->scopes[5] = makechannel__b1_58559_66452260();
   scope->scopes[6] = makechannel__z_58574_53816280();
   scope->scopes[7] = makeadd__n_58604_55946320();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62927620();
   scope->behaviors[1] = make__63867720();
   scope->behaviors[2] = make__64933680();
   scope->behaviors[3] = make__76922780();
   scope->behaviors[4] = make__76915000();
   scope->behaviors[5] = make__76914840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_8400_64933120() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_8400_64933120 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T00";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_64929880();
   systemT->inputs[1] = makerst_64929860();
   systemT->inputs[2] = makereq_64929800();
   systemT->inputs[3] = make_58407_65243340();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_65243280();
   systemT->outputs[1] = make_58405_65243160();
   systemT->outputs[2] = make_58406_65243000();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58447_65355960();
   systemT->inouts[1] = make_58448_65641160();

   systemT->scope = makelayer0_58_840_64384760();

   return systemT;
}