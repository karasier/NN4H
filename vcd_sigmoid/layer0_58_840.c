#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_53426560;

SignalI clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeclk_53424040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_840_53426560;
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

SignalI rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makerst_53424020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_840_53426560;
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

SignalI req_53424000_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makereq_53424000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_53424000_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_840_53426560;
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

SignalI _5859_53717420_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5859_53717420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5859_53717420_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_840_53426560;
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

SignalI ack__layer_53717340_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeack__layer_53717340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_53717340_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_840_53426560;
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

SignalI _5857_53717240_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5857_53717240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5857_53717240_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_840_53426560;
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

SignalI _5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5858_53717140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_840_53426560;
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

SignalI _58113_53979580_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58113_53979580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58113_53979580_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_840_53426560;
   signalI->name = ":113";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58114_54062020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58114_54062020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58114_54062020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_840_53426560;
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

Block __48928820;

Block __48928360;

void code__48928360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64469480(),ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64469380(),ack__mac_53719740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64469320(),ack__add_53719720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__48928360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48928360 = block;
   block->owner = (Object)__48928820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48928360;

   return block;
};

void code__48928820() {
   {
      Value cond = rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48928360();
   }
      }
   }
}

Block make__48928820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48928820 = block;
   block->owner = (Object)__48925900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48928820;

   return block;
};

Block __48925740;

Block __48923540;

Block __48923240;

void code__48923240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58242_54470000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,value__z0_54784340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64469020(),flag__z0_55303300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__48923240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48923240 = block;
   block->owner = (Object)__48923540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48923240;

   return block;
};

Block __49492700;

void code__49492700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58243_54613000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,value__z1_54886480_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64468660(),flag__z1_55303280_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49492700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49492700 = block;
   block->owner = (Object)__48923540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49492700;

   return block;
};

void code__48923540() {
 code__48923240();
 code__49492700();
}

Block make__48923540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48923540 = block;
   block->owner = (Object)__48925740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48923540;

   return block;
};

Block __48925360;

void code__48925360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64468560(),flag__z0_55303300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64468440(),flag__z1_55303280_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__48925360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48925360 = block;
   block->owner = (Object)__48925740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48925360;

   return block;
};

void code__48925740() {
   {
      Value cond = ack__add_53719720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48923540();
   }
   else {
  code__48925360();
   }
      }
   }
}

Block make__48925740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48925740 = block;
   block->owner = (Object)__50106280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48925740;

   return block;
};

Block __50105640;

Block __50103280;

void code__50103280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64468340(),ack__a0_55303240_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64468280(),ack__a1_55303220_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__50103280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50103280 = block;
   block->owner = (Object)__50105640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50103280;

   return block;
};

Block __50124440;

Block __50124180;

void code__50124180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_54988180_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58113_53979580_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64467880(),ack__a0_55303240_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__50124180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50124180 = block;
   block->owner = (Object)__50124440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50124180;

   return block;
};

Block __53137120;

void code__53137120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_55303320_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58114_54062020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64467200(),ack__a1_55303220_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__53137120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53137120 = block;
   block->owner = (Object)__50124440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53137120;

   return block;
};

void code__50124440() {
 code__50124180();
 code__53137120();
}

Block make__50124440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50124440 = block;
   block->owner = (Object)__50105640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50124440;

   return block;
};

void code__50105640() {
   {
      Value cond = rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50103280();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_55303300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         src1 = flag__z1_55303280_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__50124440();
   }
      }
   }
}

Block make__50105640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50105640 = block;
   block->owner = (Object)__53427020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50105640;

   return block;
};

Block __63734360;

void code__63734360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_53424000_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_53719740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_53719780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63734360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63734360 = block;
   block->owner = (Object)__63734060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63734360;

   return block;
};

Block __63734580;

void code__63734580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,clk_55297180_counter_58_841_55299080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,ack_55297160_counter_58_841_55299080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,rst_55297140_counter_58_841_55299080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_54784340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,z__value_48540680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_54886480_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,z__value_55423120_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_55303240_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      src1 = ack__a1_55303220_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_53717340_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63734580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63734580 = block;
   block->owner = (Object)__63788680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63734580;

   return block;
};

Block __63734520;

void code__63734520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_55297080_counter_58_841_55299080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,ack__mac_53719740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58215_54377060_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58230_54698720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_49127680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,value__a0_54988180_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_55587700_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,value__a1_55303320_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63734520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63734520 = block;
   block->owner = (Object)__63788500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63734520;

   return block;
};

Block __47789280;

void code__47789280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_45629860_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            idx = value2integer(abus__r_49494560_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49494640_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__47789280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47789280 = block;
   block->owner = (Object)__48479460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47789280;

   return block;
};

Block __63787620;

void code__63787620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49494640_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58150_53772720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63787620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63787620 = block;
   block->owner = (Object)__63787320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63787620;

   return block;
};

Block __63787280;

void code__63787280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58150_53772720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,dbus__r_49494640_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63787280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63787280 = block;
   block->owner = (Object)__63787040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63787280;

   return block;
};

Block __63786380;

void code__63786380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49374000_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63786380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63786380 = block;
   block->owner = (Object)__63786180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63786380;

   return block;
};

Block __63786100;

void code__63786100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,trig__r_49374000_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63786100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63786100 = block;
   block->owner = (Object)__63785940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63786100;

   return block;
};

Block __63785580;

void code__63785580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49494560_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63785580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63785580 = block;
   block->owner = (Object)__63785260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63785580;

   return block;
};

Block __63785140;

void code__63785140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,abus__r_49494560_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63785140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63785140 = block;
   block->owner = (Object)__63784980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63785140;

   return block;
};

Block __49775480;

void code__49775480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49475480_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            idx = value2integer(abus__r_47630520_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47630600_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49775480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49775480 = block;
   block->owner = (Object)__46441220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49775480;

   return block;
};

Block __63783180;

void code__63783180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47630600_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58165_54168540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63783180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63783180 = block;
   block->owner = (Object)__63782920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63783180;

   return block;
};

Block __63807380;

void code__63807380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58165_54168540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,dbus__r_47630600_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63807380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63807380 = block;
   block->owner = (Object)__63807100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63807380;

   return block;
};

Block __63806660;

void code__63806660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48477220_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63806660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63806660 = block;
   block->owner = (Object)__63806480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63806660;

   return block;
};

Block __63806440;

void code__63806440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,trig__r_48477220_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63806440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63806440 = block;
   block->owner = (Object)__63806220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63806440;

   return block;
};

Block __63805900;

void code__63805900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47630520_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63805900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63805900 = block;
   block->owner = (Object)__63805680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63805900;

   return block;
};

Block __63805600;

void code__63805600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,abus__r_47630520_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63805600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63805600 = block;
   block->owner = (Object)__63805220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63805600;

   return block;
};

Block __63803640;

void code__63803640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48008760_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58173_54013940_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63803640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63803640 = block;
   block->owner = (Object)__63803480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63803640;

   return block;
};

Block __63803440;

void code__63803440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58173_54013940_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,reg__0_48008760_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63803440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63803440 = block;
   block->owner = (Object)__63803180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63803440;

   return block;
};

Block __63802200;

void code__63802200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48593360_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58174_54115780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63802200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63802200 = block;
   block->owner = (Object)__63802040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63802200;

   return block;
};

Block __63802000;

void code__63802000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58174_54115780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,reg__1_48593360_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63802000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63802000 = block;
   block->owner = (Object)__63801820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63802000;

   return block;
};

Block __49347660;

Block __49347500;

Block __49347120;

void code__49347120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64177040(),_58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49347120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49347120 = block;
   block->owner = (Object)__49347500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49347120;

   return block;
};

void code__49347500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__64177140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49347120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64176960(),_58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49347500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49347500 = block;
   block->owner = (Object)__49347660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49347500;

   return block;
};

Block __49346160;

Block __49345780;

void code__49345780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64176660(),_58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49345780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49345780 = block;
   block->owner = (Object)__49346160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49345780;

   return block;
};

void code__49346160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__64176760();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49345780();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64176440(),_58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49346160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49346160 = block;
   block->owner = (Object)__49347660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49346160;

   return block;
};

Block __49345080;

Block __49344640;

void code__49344640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64176200(),_5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49344640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49344640 = block;
   block->owner = (Object)__49345080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49344640;

   return block;
};

void code__49345080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__64176320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49344640();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64200660(),_5857_53717240_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49345080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49345080 = block;
   block->owner = (Object)__49347660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49345080;

   return block;
};

Block __49343240;

void code__49343240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64200320(),rvok_49347880_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64200240(),lvok0_49347940_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64200160(),wok0_49347860_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64200040(),lvok1_49347920_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64199940(),wok1_49347800_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49343240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49343240 = block;
   block->owner = (Object)__49347660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49343240;

   return block;
};

Block __49791300;

Block __49961620;

Block __49961260;

Block __49960880;

Block __49956860;

Block __49956380;

void code__49956380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5859_53717420_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,rv_49347960_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__64199380(),rvok_49347880_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49956380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49956380 = block;
   block->owner = (Object)__49956860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49956380;

   return block;
};

void code__49956860() {
 code__49956380();
}

Block make__49956860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49956860 = block;
   block->owner = (Object)__49960880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49956860;

   return block;
};

Block __49960620;

void code__49960620() {
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
                  src0 = _5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                  src1 = make__64199280();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__64199240();
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
                        src0 = _5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__64198920();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__64198840();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64198420(),_5857_53717240_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49960620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49960620 = block;
   block->owner = (Object)__49960880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49960620;

   return block;
};

void code__49960880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5857_53717240_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__64199540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49956860();
   }
   else {
  code__49960620();
   }
      }
   }
}

Block make__49960880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49960880 = block;
   block->owner = (Object)__49961260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49960880;

   return block;
};

void code__49961260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__64199640();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49960880();
   }
      }
   }
}

Block make__49961260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49961260 = block;
   block->owner = (Object)__49961620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49961260;

   return block;
};

void code__49961620() {
 code__49961260();
}

Block make__49961620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49961620 = block;
   block->owner = (Object)__49791300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49961620;

   return block;
};

Block __45811940;

Block __45811660;

Block __45810080;

Block __45848380;

Block __45846100;

void code__45846100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58150_53772720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,lv0_45410820_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__64197720(),lvok0_49347940_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__45846100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45846100 = block;
   block->owner = (Object)__45848380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45846100;

   return block;
};

void code__45848380() {
 code__45846100();
}

Block make__45848380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45848380 = block;
   block->owner = (Object)__45810080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45848380;

   return block;
};

Block __45809840;

void code__45809840() {
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
                  src0 = _58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                  src1 = make__64197620();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__64197580();
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
                        src0 = _58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__64197340();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__64197280();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64197160(),_58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__45809840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45809840 = block;
   block->owner = (Object)__45810080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45809840;

   return block;
};

void code__45810080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__64197940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45848380();
   }
   else {
  code__45809840();
   }
      }
   }
}

Block make__45810080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45810080 = block;
   block->owner = (Object)__45811660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45810080;

   return block;
};

void code__45811660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__64198080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45810080();
   }
      }
   }
}

Block make__45811660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45811660 = block;
   block->owner = (Object)__45811940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45811660;

   return block;
};

void code__45811940() {
 code__45811660();
}

Block make__45811940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45811940 = block;
   block->owner = (Object)__49791300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45811940;

   return block;
};

Block __47895160;

Block __47894400;

Block __47894240;

void code__47894240() {
}

Block make__47894240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47894240 = block;
   block->owner = (Object)__47894400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47894240;

   return block;
};

Block __49230020;

void code__49230020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_48541620_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58173_54013940_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64196120(),wok0_49347860_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49230020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49230020 = block;
   block->owner = (Object)__47894400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49230020;

   return block;
};

void code__47894400() {
 code__47894240();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_48541620_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
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
                              src0 = lv0_45410820_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49347960_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__64196520();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_48541620_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
 code__49230020();
}

Block make__47894400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47894400 = block;
   block->owner = (Object)__47895160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47894400;

   return block;
};

void code__47895160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64196920(),ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64196860(),run_49347780_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
 code__47894400();
}

Block make__47895160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47895160 = block;
   block->owner = (Object)__49791300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47895160;

   return block;
};

Block __49406720;

void code__49406720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64195600(),wok0_49347860_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64195440(),wok1_49347800_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64195380(),lvok0_49347940_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64195320(),lvok1_49347920_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64195260(),rvok_49347880_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49406720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49406720 = block;
   block->owner = (Object)__49791300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49406720;

   return block;
};

Block __49462640;

Block __49462380;

Block __49461920;

Block __49459420;

Block __49459140;

void code__49459140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58165_54168540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,lv1_47923500_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__64194860(),lvok1_49347920_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49459140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49459140 = block;
   block->owner = (Object)__49459420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49459140;

   return block;
};

void code__49459420() {
 code__49459140();
}

Block make__49459420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49459420 = block;
   block->owner = (Object)__49461920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49459420;

   return block;
};

Block __49461700;

void code__49461700() {
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
                  src0 = _58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                  src1 = make__64194760();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__64194720();
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
                        src0 = _58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__64194480();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__64194420();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64194280(),_58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49461700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49461700 = block;
   block->owner = (Object)__49461920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49461700;

   return block;
};

void code__49461920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__64195020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49459420();
   }
   else {
  code__49461700();
   }
      }
   }
}

Block make__49461920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49461920 = block;
   block->owner = (Object)__49462380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49461920;

   return block;
};

void code__49462380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__64195120();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49461920();
   }
      }
   }
}

Block make__49462380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49462380 = block;
   block->owner = (Object)__49462640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49462380;

   return block;
};

void code__49462640() {
 code__49462380();
}

Block make__49462640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49462640 = block;
   block->owner = (Object)__49791300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49462640;

   return block;
};

Block __49758540;

Block __49782320;

Block __49782100;

void code__49782100() {
}

Block make__49782100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49782100 = block;
   block->owner = (Object)__49782320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49782100;

   return block;
};

Block __53238600;

void code__53238600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_48454620_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58174_54115780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64192600(),wok1_49347800_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__53238600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53238600 = block;
   block->owner = (Object)__49782320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53238600;

   return block;
};

void code__49782320() {
 code__49782100();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_48454620_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
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
                              src0 = lv1_47923500_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49347960_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__64192880();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_48454620_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
 code__53238600();
}

Block make__49782320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49782320 = block;
   block->owner = (Object)__49758540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49782320;

   return block;
};

void code__49758540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64193940(),ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64193540(),run_49347780_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
 code__49782320();
}

Block make__49758540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49758540 = block;
   block->owner = (Object)__49791300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49758540;

   return block;
};

Block __53363460;

void code__53363460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64454500(),wok0_49347860_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64454440(),wok1_49347800_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64454380(),lvok0_49347940_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64454320(),lvok1_49347920_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64454260(),rvok_49347880_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__53363460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53363460 = block;
   block->owner = (Object)__49791300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53363460;

   return block;
};

void code__49791300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64199780(),run_49347780_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_49347880_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49961620();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49347940_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45811940();
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
               src0 = lvok0_49347940_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               src1 = rvok_49347880_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_49347860_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47895160();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_49347860_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         src1 = wok1_49347800_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49406720();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49347920_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49462640();
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
               src0 = lvok1_49347920_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               src1 = rvok_49347880_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_49347800_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49758540();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_49347860_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         src1 = wok1_49347800_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53363460();
   }
      }
   }
}

Block make__49791300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49791300 = block;
   block->owner = (Object)__49347660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49791300;

   return block;
};

Block __49341600;

void code__49341600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64454200(),av0_48541620_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64454140(),av1_48454620_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49341600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49341600 = block;
   block->owner = (Object)__49347660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49341600;

   return block;
};

void code__49347660() {
 code__49347500();
 code__49346160();
 code__49345080();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64200560(),ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64200500(),run_49347780_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_49347780_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49343240();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_53719780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         src1 = run_49347780_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49791300();
   }
   else {
  code__49341600();
   }
      }
   }
}

Block make__49347660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49347660 = block;
   block->owner = (Object)__53386660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49347660;

   return block;
};

Block __54115620;

void code__54115620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_53810540_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            idx = value2integer(abus__r_53586920_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53587000_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__54115620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54115620 = block;
   block->owner = (Object)__54475200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54115620;

   return block;
};

Block __63799420;

void code__63799420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53587000_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58214_54377080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63799420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63799420 = block;
   block->owner = (Object)__63889300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63799420;

   return block;
};

Block __63889260;

void code__63889260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_54377080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,dbus__r_53587000_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63889260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63889260 = block;
   block->owner = (Object)__63888980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63889260;

   return block;
};

Block __63888440;

void code__63888440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53384960_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63888440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63888440 = block;
   block->owner = (Object)__63888280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63888440;

   return block;
};

Block __63888240;

void code__63888240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,trig__r_53384960_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63888240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63888240 = block;
   block->owner = (Object)__63888040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63888240;

   return block;
};

Block __63887580;

void code__63887580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53586920_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58213_54376960_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63887580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63887580 = block;
   block->owner = (Object)__63887420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63887580;

   return block;
};

Block __63887380;

void code__63887380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_54376960_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,abus__r_53586920_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63887380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63887380 = block;
   block->owner = (Object)__63887180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63887380;

   return block;
};

Block __54974700;

void code__54974700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54759760_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            idx = value2integer(abus__r_54577120_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54577200_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__54974700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54974700 = block;
   block->owner = (Object)__55457140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54974700;

   return block;
};

Block __63885380;

void code__63885380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54577200_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58229_54698740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63885380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63885380 = block;
   block->owner = (Object)__63885180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63885380;

   return block;
};

Block __63885100;

void code__63885100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_54698740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,dbus__r_54577200_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63885100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63885100 = block;
   block->owner = (Object)__63884940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63885100;

   return block;
};

Block __63884580;

void code__63884580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_54473500_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63884580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63884580 = block;
   block->owner = (Object)__63884260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63884580;

   return block;
};

Block __63884200;

void code__63884200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,trig__r_54473500_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63884200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63884200 = block;
   block->owner = (Object)__63883660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63884200;

   return block;
};

Block __63883200;

void code__63883200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_54577120_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58228_54698620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63883200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63883200 = block;
   block->owner = (Object)__63883040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63883200;

   return block;
};

Block __63883000;

void code__63883000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58228_54698620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,abus__r_54577120_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63883000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63883000 = block;
   block->owner = (Object)__63882800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63883000;

   return block;
};

Block __63970980;

void code__63970980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_55589920_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58242_54470000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63970980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63970980 = block;
   block->owner = (Object)__63970700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63970980;

   return block;
};

Block __63970640;

void code__63970640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58242_54470000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,reg__0_55589920_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63970640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63970640 = block;
   block->owner = (Object)__63970460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63970640;

   return block;
};

Block __63970020;

void code__63970020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_55701820_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58243_54613000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63970020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63970020 = block;
   block->owner = (Object)__63969740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63970020;

   return block;
};

Block __63969680;

void code__63969680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58243_54613000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,reg__1_55701820_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63969680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63969680 = block;
   block->owner = (Object)__63969500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63969680;

   return block;
};

Block __48125240;

Block __48125040;

void code__48125040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64450640(),_58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__48125040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48125040 = block;
   block->owner = (Object)__48125240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48125040;

   return block;
};

Block __48124600;

void code__48124600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64450560(),_58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__48124600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48124600 = block;
   block->owner = (Object)__48125240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48124600;

   return block;
};

Block __48121020;

Block __48120400;

void code__48120400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58173_54013940_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,lv0_45813340_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64450020(),lvok0_48125620_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__48120400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48120400 = block;
   block->owner = (Object)__48121020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48120400;

   return block;
};

Block __48141680;

Block __48141200;

Block __48139340;

void code__48139340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_54377080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,rv0_47892960_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64449540(),_58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64449360(),rvok0_48125440_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__48139340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48139340 = block;
   block->owner = (Object)__48141200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48139340;

   return block;
};

Block __48141040;

void code__48141040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64449300(),_58213_54376960_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64449200(),_58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__48141040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48141040 = block;
   block->owner = (Object)__48141200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48141040;

   return block;
};

void code__48141200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__64449760();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48139340();
   }
   else {
  code__48141040();
   }
      }
   }
}

Block make__48141200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48141200 = block;
   block->owner = (Object)__48141680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48141200;

   return block;
};

void code__48141680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58215_54377060_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__64449900();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48141200();
   }
      }
   }
}

Block make__48141680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48141680 = block;
   block->owner = (Object)__48121020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48141680;

   return block;
};

Block __49278600;

Block __49277760;

void code__49277760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_45813340_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      src1 = rv0_47892960_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58242_54470000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49277760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49277760 = block;
   block->owner = (Object)__49278600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49277760;

   return block;
};

void code__49278600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64448900(),run_48125400_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64448740(),ack__add_53719720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
 code__49277760();
}

Block make__49278600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49278600 = block;
   block->owner = (Object)__48121020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49278600;

   return block;
};

Block __49873660;

void code__49873660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58174_54115780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,lv1_47706160_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64448420(),lvok1_48125600_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49873660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49873660 = block;
   block->owner = (Object)__48121020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49873660;

   return block;
};

Block __50212720;

Block __50212400;

Block __50211440;

void code__50211440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_54698740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,rv1_48125640_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64447980(),_58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64447920(),rvok1_48125420_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__50211440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50211440 = block;
   block->owner = (Object)__50212400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50211440;

   return block;
};

Block __50212200;

void code__50212200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64447860(),_58228_54698620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64447780(),_58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__50212200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50212200 = block;
   block->owner = (Object)__50212400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50212200;

   return block;
};

void code__50212400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__64448200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50211440();
   }
   else {
  code__50212200();
   }
      }
   }
}

Block make__50212400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50212400 = block;
   block->owner = (Object)__50212720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50212400;

   return block;
};

void code__50212720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58230_54698720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__64448320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50212400();
   }
      }
   }
}

Block make__50212720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50212720 = block;
   block->owner = (Object)__48121020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50212720;

   return block;
};

Block __53167140;

Block __53166660;

void code__53166660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_47706160_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      src1 = rv1_48125640_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58243_54613000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__53166660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53166660 = block;
   block->owner = (Object)__53167140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53166660;

   return block;
};

void code__53167140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64447560(),run_48125400_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64447480(),ack__add_53719720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
 code__53166660();
}

Block make__53167140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53167140 = block;
   block->owner = (Object)__48121020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53167140;

   return block;
};

void code__48121020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64450180(),run_48125400_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
 code__48120400();
 code__48141680();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_48125620_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         src1 = rvok0_48125440_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49278600();
   }
      }
   }
 code__49873660();
 code__50212720();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_48125600_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         src1 = rvok1_48125420_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53167140();
   }
      }
   }
}

Block make__48121020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48121020 = block;
   block->owner = (Object)__48125240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48121020;

   return block;
};

Block __48122540;

void code__48122540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64447120(),lvok0_48125620_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64447040(),rvok0_48125440_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64446980(),lvok1_48125600_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64446860(),rvok1_48125420_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__48122540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48122540 = block;
   block->owner = (Object)__48125240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48122540;

   return block;
};

void code__48125240() {
 code__48125040();
 code__48124600();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64450500(),ack__add_53719720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__64450420(),run_48125400_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_53719740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         src1 = run_48125400_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48121020();
   }
   else {
  code__48122540();
   }
      }
   }
}

Block make__48125240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48125240 = block;
   block->owner = (Object)__53719920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48125240;

   return block;
};

Value make__64180660() {
   static unsigned long long data[] = { 10ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__64180640() {
   static unsigned long long data[] = { 10ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__64179120() {
   static unsigned long long data[] = { 10ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__64179080() {
   static unsigned long long data[] = { 10ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__64454120() {
   static unsigned long long data[] = { 4294967293ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__64452820() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__64177140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64177040() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64176960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64176760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64176660() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64176440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64176320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64176200() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64200660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64200560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64200500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64200320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64200240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64200160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64200040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64199940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64199780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64199640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64199540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64199380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64199280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64199240() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64198920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64198840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64198420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64198080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64197940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64197720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64197620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64197580() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64197340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64197280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64197160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64196920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64196860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64196520() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64196120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64195600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64195440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64195380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64195320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64195260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64195120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64195020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64194860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64194760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64194720() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64194480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64194420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64194280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64193940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64193540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64192880() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64192600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64454500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64454440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64454380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64454320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64454260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64454200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__64454140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__64450640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64450560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64450500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64450420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64450180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64450020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64449900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64449760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64449540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64449360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64449300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64449200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64448900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64448740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64448420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64448320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64448200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__64447980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64447920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64447860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__64447780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64447560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64447480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64447120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64447040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64446980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64446860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64469480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64469380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64469320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64469020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64468660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64468560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64468440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64468340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64468280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64467880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__64467200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_49376100;

SignalI req__mac_53719780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makereq__mac_53719780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_53719780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeack_53719760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI ack__mac_53719740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeack__mac_53719740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53719740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI ack__add_53719720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeack__add_53719720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_53719720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI _58150_53772720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58150_53772720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58150_53772720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":150";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58148_53772700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":148";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58149_53772620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":149";
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

SignalI _58173_54013940_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58173_54013940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58173_54013940_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":173";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58174_54115780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58174_54115780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58174_54115780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":174";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58165_54168540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58165_54168540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58165_54168540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":165";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58163_54168520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":163";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58164_54168440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":164";
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

SignalI _58214_54377080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58214_54377080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58214_54377080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI _58215_54377060_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58215_54377060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58215_54377060_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":215";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58212_54377040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":212";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58213_54376960_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58213_54376960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_54376960_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":213";
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

SignalI _58242_54470000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58242_54470000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58242_54470000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":242";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58243_54613000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58243_54613000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58243_54613000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":243";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58229_54698740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58229_54698740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58229_54698740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI _58230_54698720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58230_54698720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58230_54698720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI _58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58227_54698700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":227";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58228_54698620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_58228_54698620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58228_54698620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
   signalI->name = ":228";
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

SignalI value__z0_54784340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makevalue__z0_54784340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_54784340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI value__z1_54886480_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makevalue__z1_54886480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_54886480_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI value__a0_54988180_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makevalue__a0_54988180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_54988180_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI value__a1_55303320_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makevalue__a1_55303320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_55303320_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI flag__z0_55303300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeflag__z0_55303300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_55303300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI flag__z1_55303280_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeflag__z1_55303280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_55303280_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI ack__a0_55303240_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeack__a0_55303240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_55303240_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SignalI ack__a1_55303220_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeack__a1_55303220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_55303220_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)layer0_58_84_49376100;
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

SystemI counter_55296920;

SystemI makecounter_55296920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_55296920 = systemI;
   systemI->owner = (Object)layer0_58_84_49376100;
   systemI->name = "counter";
   systemI->system = counter_58_841_55299080;

   return systemI;
};

SystemI func0_49127440;

SystemI makefunc0_49127440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_49127440 = systemI;
   systemI->owner = (Object)layer0_58_84_49376100;
   systemI->name = "func0";
   systemI->system = func0_58_841_48125140;

   return systemI;
};

SystemI func1_55587460;

SystemI makefunc1_55587460() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_55587460 = systemI;
   systemI->owner = (Object)layer0_58_84_49376100;
   systemI->name = "func1";
   systemI->system = func1_58_841_55238560;

   return systemI;
};

Scope channel__w0_58141_49375760;

SignalI trig__r_49374000_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI maketrig__r_49374000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49374000_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__w0_58141_49375760;
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

SignalI dbus__r_49494640_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makedbus__r_49494640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49494640_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__w0_58141_49375760;
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

SignalI abus__r_49494560_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__r_49494560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49494560_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__w0_58141_49375760;
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

SignalI mem_45629860_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makemem_45629860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_45629860_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__w0_58141_49375760;
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
         src0 = make__64180660();
         src1 = make__64180640();
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

Scope raddr_58142_49375460;

Scope makeraddr_58142_49375460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58142_49375460 = scope;
   scope->owner = (Object)channel__w0_58141_49375760;
   scope->name = "raddr:142";
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

Scope rinc_58147_49375000;

Scope makerinc_58147_49375000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58147_49375000 = scope;
   scope->owner = (Object)channel__w0_58141_49375760;
   scope->name = "rinc:147";
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

Scope rdec_58151_49374520;

Scope makerdec_58151_49374520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58151_49374520 = scope;
   scope->owner = (Object)channel__w0_58141_49375760;
   scope->name = "rdec:151";
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

Behavior __48479460;

Behavior make__48479460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48479460 = behavior;
   behavior->owner = (Object)channel__w0_58141_49375760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg += 1;
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg = realloc(clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg*sizeof(Object));
clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg[clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg-1] = (Object)behavior;
   behavior->block = make__47789280();

   return behavior;
}

Behavior __63787320;

Behavior make__63787320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63787320 = behavior;
   behavior->owner = (Object)channel__w0_58141_49375760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49494640_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   dbus__r_49494640_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   dbus__r_49494640_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(dbus__r_49494640_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,dbus__r_49494640_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
dbus__r_49494640_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[dbus__r_49494640_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63787620();

   return behavior;
}

Behavior __63787040;

Behavior make__63787040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63787040 = behavior;
   behavior->owner = (Object)channel__w0_58141_49375760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58150_53772720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58150_53772720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58150_53772720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58150_53772720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58150_53772720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58150_53772720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58150_53772720_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63787280();

   return behavior;
}

Behavior __63786180;

Behavior make__63786180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63786180 = behavior;
   behavior->owner = (Object)channel__w0_58141_49375760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49374000_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   trig__r_49374000_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   trig__r_49374000_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(trig__r_49374000_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,trig__r_49374000_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
trig__r_49374000_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[trig__r_49374000_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63786380();

   return behavior;
}

Behavior __63785940;

Behavior make__63785940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63785940 = behavior;
   behavior->owner = (Object)channel__w0_58141_49375760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58148_53772700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63786100();

   return behavior;
}

Behavior __63785260;

Behavior make__63785260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63785260 = behavior;
   behavior->owner = (Object)channel__w0_58141_49375760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49494560_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   abus__r_49494560_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   abus__r_49494560_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(abus__r_49494560_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,abus__r_49494560_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
abus__r_49494560_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[abus__r_49494560_channel__w0_58141_49375760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63785580();

   return behavior;
}

Behavior __63784980;

Behavior make__63784980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63784980 = behavior;
   behavior->owner = (Object)channel__w0_58141_49375760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58149_53772620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63785140();

   return behavior;
}

Scope makechannel__w0_58141_49375760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58141_49375760 = scope;
   scope->owner = (Object)layer0_58_84_49376100;
   scope->name = "channel_w0:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49374000();
   scope->inners[1] = makedbus__r_49494640();
   scope->inners[2] = makeabus__r_49494560();
   scope->inners[3] = makemem_45629860();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58142_49375460();
   scope->scopes[1] = makerinc_58147_49375000();
   scope->scopes[2] = makerdec_58151_49374520();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48479460();
   scope->behaviors[1] = make__63787320();
   scope->behaviors[2] = make__63787040();
   scope->behaviors[3] = make__63786180();
   scope->behaviors[4] = make__63785940();
   scope->behaviors[5] = make__63785260();
   scope->behaviors[6] = make__63784980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58156_48479340;

SignalI trig__r_48477220_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI maketrig__r_48477220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48477220_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__w1_58156_48479340;
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

SignalI dbus__r_47630600_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makedbus__r_47630600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47630600_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__w1_58156_48479340;
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

SignalI abus__r_47630520_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__r_47630520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47630520_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__w1_58156_48479340;
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

SignalI mem_49475480_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makemem_49475480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49475480_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__w1_58156_48479340;
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
         src0 = make__64179120();
         src1 = make__64179080();
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

Scope raddr_58157_48478960;

Scope makeraddr_58157_48478960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58157_48478960 = scope;
   scope->owner = (Object)channel__w1_58156_48479340;
   scope->name = "raddr:157";
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

Scope rinc_58162_48478340;

Scope makerinc_58162_48478340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58162_48478340 = scope;
   scope->owner = (Object)channel__w1_58156_48479340;
   scope->name = "rinc:162";
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

Scope rdec_58166_48477740;

Scope makerdec_58166_48477740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58166_48477740 = scope;
   scope->owner = (Object)channel__w1_58156_48479340;
   scope->name = "rdec:166";
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

Behavior __46441220;

Behavior make__46441220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46441220 = behavior;
   behavior->owner = (Object)channel__w1_58156_48479340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg += 1;
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg = realloc(clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg*sizeof(Object));
clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg[clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg-1] = (Object)behavior;
   behavior->block = make__49775480();

   return behavior;
}

Behavior __63782920;

Behavior make__63782920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63782920 = behavior;
   behavior->owner = (Object)channel__w1_58156_48479340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47630600_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   dbus__r_47630600_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   dbus__r_47630600_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(dbus__r_47630600_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,dbus__r_47630600_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
dbus__r_47630600_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[dbus__r_47630600_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63783180();

   return behavior;
}

Behavior __63807100;

Behavior make__63807100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63807100 = behavior;
   behavior->owner = (Object)channel__w1_58156_48479340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58165_54168540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58165_54168540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58165_54168540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58165_54168540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58165_54168540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58165_54168540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58165_54168540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63807380();

   return behavior;
}

Behavior __63806480;

Behavior make__63806480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63806480 = behavior;
   behavior->owner = (Object)channel__w1_58156_48479340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48477220_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   trig__r_48477220_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   trig__r_48477220_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(trig__r_48477220_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,trig__r_48477220_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
trig__r_48477220_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[trig__r_48477220_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63806660();

   return behavior;
}

Behavior __63806220;

Behavior make__63806220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63806220 = behavior;
   behavior->owner = (Object)channel__w1_58156_48479340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58163_54168520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63806440();

   return behavior;
}

Behavior __63805680;

Behavior make__63805680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63805680 = behavior;
   behavior->owner = (Object)channel__w1_58156_48479340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47630520_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   abus__r_47630520_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   abus__r_47630520_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(abus__r_47630520_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,abus__r_47630520_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
abus__r_47630520_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[abus__r_47630520_channel__w1_58156_48479340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63805900();

   return behavior;
}

Behavior __63805220;

Behavior make__63805220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63805220 = behavior;
   behavior->owner = (Object)channel__w1_58156_48479340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58164_54168440_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63805600();

   return behavior;
}

Scope makechannel__w1_58156_48479340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58156_48479340 = scope;
   scope->owner = (Object)layer0_58_84_49376100;
   scope->name = "channel_w1:156";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48477220();
   scope->inners[1] = makedbus__r_47630600();
   scope->inners[2] = makeabus__r_47630520();
   scope->inners[3] = makemem_49475480();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58157_48478960();
   scope->scopes[1] = makerinc_58162_48478340();
   scope->scopes[2] = makerdec_58166_48477740();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46441220();
   scope->behaviors[1] = make__63782920();
   scope->behaviors[2] = make__63807100();
   scope->behaviors[3] = make__63806480();
   scope->behaviors[4] = make__63806220();
   scope->behaviors[5] = make__63805680();
   scope->behaviors[6] = make__63805220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58171_46857340;

SignalI reg__0_48008760_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makereg__0_48008760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48008760_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__accum_58171_46857340;
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

SignalI reg__1_48593360_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makereg__1_48593360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48593360_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__accum_58171_46857340;
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

Scope anum_58172_46851820;

Scope makeanum_58172_46851820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58172_46851820 = scope;
   scope->owner = (Object)channel__accum_58171_46857340;
   scope->name = "anum:172";
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

Scope raddr_58175_46850440;

Scope makeraddr_58175_46850440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58175_46850440 = scope;
   scope->owner = (Object)channel__accum_58171_46857340;
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

Scope waddr_58179_47002120;

Scope makewaddr_58179_47002120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58179_47002120 = scope;
   scope->owner = (Object)channel__accum_58171_46857340;
   scope->name = "waddr:179";
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

Scope rinc_58183_46999820;

SignalI abus__r_46998000_rinc_58183_46999820_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__r_46998000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46998000_rinc_58183_46999820_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)rinc_58183_46999820;
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

Scope makerinc_58183_46999820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58183_46999820 = scope;
   scope->owner = (Object)channel__accum_58171_46857340;
   scope->name = "rinc:183";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_46998000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58188_46997540;

SignalI abus__w_47149400_winc_58188_46997540_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__w_47149400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47149400_winc_58188_46997540_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)winc_58188_46997540;
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

Scope makewinc_58188_46997540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58188_46997540 = scope;
   scope->owner = (Object)channel__accum_58171_46857340;
   scope->name = "winc:188";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47149400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58193_47148560;

SignalI abus__r_47660000_rdec_58193_47148560_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__r_47660000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47660000_rdec_58193_47148560_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)rdec_58193_47148560;
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

Scope makerdec_58193_47148560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58193_47148560 = scope;
   scope->owner = (Object)channel__accum_58171_46857340;
   scope->name = "rdec:193";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47660000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58198_47659520;

SignalI abus__w_47655900_wdec_58198_47659520_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__w_47655900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47655900_wdec_58198_47659520_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)wdec_58198_47659520;
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

Scope makewdec_58198_47659520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58198_47659520 = scope;
   scope->owner = (Object)channel__accum_58171_46857340;
   scope->name = "wdec:198";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47655900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __63803480;

Behavior make__63803480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63803480 = behavior;
   behavior->owner = (Object)channel__accum_58171_46857340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48008760_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__0_48008760_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__0_48008760_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__0_48008760_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__0_48008760_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__0_48008760_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__0_48008760_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63803640();

   return behavior;
}

Behavior __63803180;

Behavior make__63803180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63803180 = behavior;
   behavior->owner = (Object)channel__accum_58171_46857340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58173_54013940_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58173_54013940_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58173_54013940_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58173_54013940_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58173_54013940_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58173_54013940_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58173_54013940_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63803440();

   return behavior;
}

Behavior __63802040;

Behavior make__63802040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63802040 = behavior;
   behavior->owner = (Object)channel__accum_58171_46857340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48593360_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__1_48593360_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__1_48593360_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__1_48593360_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__1_48593360_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__1_48593360_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__1_48593360_channel__accum_58171_46857340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63802200();

   return behavior;
}

Behavior __63801820;

Behavior make__63801820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63801820 = behavior;
   behavior->owner = (Object)channel__accum_58171_46857340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58174_54115780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58174_54115780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58174_54115780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58174_54115780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58174_54115780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58174_54115780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58174_54115780_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63802000();

   return behavior;
}

Scope makechannel__accum_58171_46857340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58171_46857340 = scope;
   scope->owner = (Object)layer0_58_84_49376100;
   scope->name = "channel_accum:171";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48008760();
   scope->inners[1] = makereg__1_48593360();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58172_46851820();
   scope->scopes[1] = makeraddr_58175_46850440();
   scope->scopes[2] = makewaddr_58179_47002120();
   scope->scopes[3] = makerinc_58183_46999820();
   scope->scopes[4] = makewinc_58188_46997540();
   scope->scopes[5] = makerdec_58193_47148560();
   scope->scopes[6] = makewdec_58198_47659520();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63803480();
   scope->behaviors[1] = make__63803180();
   scope->behaviors[2] = make__63802040();
   scope->behaviors[3] = make__63801820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58203_49974520;

SignalI lv0_45410820_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makelv0_45410820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_45410820_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)mac__n1_58203_49974520;
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

SignalI lv1_47923500_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makelv1_47923500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47923500_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)mac__n1_58203_49974520;
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

SignalI av0_48541620_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeav0_48541620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_48541620_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)mac__n1_58203_49974520;
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

SignalI av1_48454620_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeav1_48454620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_48454620_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)mac__n1_58203_49974520;
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

SignalI rv_49347960_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makerv_49347960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49347960_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)mac__n1_58203_49974520;
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

SignalI lvok0_49347940_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makelvok0_49347940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49347940_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)mac__n1_58203_49974520;
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

SignalI lvok1_49347920_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makelvok1_49347920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49347920_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)mac__n1_58203_49974520;
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

SignalI rvok_49347880_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makervok_49347880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49347880_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)mac__n1_58203_49974520;
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

SignalI wok0_49347860_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makewok0_49347860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_49347860_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)mac__n1_58203_49974520;
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

SignalI wok1_49347800_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makewok1_49347800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_49347800_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)mac__n1_58203_49974520;
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

SignalI run_49347780_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makerun_49347780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49347780_mac__n1_58203_49974520_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)mac__n1_58203_49974520;
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

Behavior __53386660;

Behavior make__53386660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53386660 = behavior;
   behavior->owner = (Object)mac__n1_58203_49974520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos += 1;
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos = realloc(clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos*sizeof(Object));
clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos[clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos-1] = (Object)behavior;
   behavior->block = make__49347660();

   return behavior;
}

Scope makemac__n1_58203_49974520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58203_49974520 = scope;
   scope->owner = (Object)layer0_58_84_49376100;
   scope->name = "mac_n1:203";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_45410820();
   scope->inners[1] = makelv1_47923500();
   scope->inners[2] = makeav0_48541620();
   scope->inners[3] = makeav1_48454620();
   scope->inners[4] = makerv_49347960();
   scope->inners[5] = makelvok0_49347940();
   scope->inners[6] = makelvok1_49347920();
   scope->inners[7] = makervok_49347880();
   scope->inners[8] = makewok0_49347860();
   scope->inners[9] = makewok1_49347800();
   scope->inners[10] = makerun_49347780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53386660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58210_53386540;

SignalI trig__r_53384960_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI maketrig__r_53384960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53384960_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__b0_58210_53386540;
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

SignalI dbus__r_53587000_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makedbus__r_53587000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53587000_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__b0_58210_53386540;
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

SignalI abus__r_53586920_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__r_53586920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53586920_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__b0_58210_53386540;
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

SignalI mem_53810540_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makemem_53810540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_53810540_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__b0_58210_53386540;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__64454120(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58211_53386240;

Scope makeraddr_58211_53386240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58211_53386240 = scope;
   scope->owner = (Object)channel__b0_58210_53386540;
   scope->name = "raddr:211";
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

Scope rinc_58216_53385820;

Scope makerinc_58216_53385820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58216_53385820 = scope;
   scope->owner = (Object)channel__b0_58210_53386540;
   scope->name = "rinc:216";
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

Scope rdec_58220_53385400;

Scope makerdec_58220_53385400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58220_53385400 = scope;
   scope->owner = (Object)channel__b0_58210_53386540;
   scope->name = "rdec:220";
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

Behavior __54475200;

Behavior make__54475200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54475200 = behavior;
   behavior->owner = (Object)channel__b0_58210_53386540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg += 1;
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg = realloc(clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg*sizeof(Object));
clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg[clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg-1] = (Object)behavior;
   behavior->block = make__54115620();

   return behavior;
}

Behavior __63889300;

Behavior make__63889300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63889300 = behavior;
   behavior->owner = (Object)channel__b0_58210_53386540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53587000_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   dbus__r_53587000_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   dbus__r_53587000_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(dbus__r_53587000_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,dbus__r_53587000_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
dbus__r_53587000_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[dbus__r_53587000_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63799420();

   return behavior;
}

Behavior __63888980;

Behavior make__63888980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63888980 = behavior;
   behavior->owner = (Object)channel__b0_58210_53386540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58214_54377080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58214_54377080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58214_54377080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58214_54377080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58214_54377080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58214_54377080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58214_54377080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63889260();

   return behavior;
}

Behavior __63888280;

Behavior make__63888280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63888280 = behavior;
   behavior->owner = (Object)channel__b0_58210_53386540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53384960_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   trig__r_53384960_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   trig__r_53384960_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(trig__r_53384960_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,trig__r_53384960_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
trig__r_53384960_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[trig__r_53384960_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63888440();

   return behavior;
}

Behavior __63888040;

Behavior make__63888040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63888040 = behavior;
   behavior->owner = (Object)channel__b0_58210_53386540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58212_54377040_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63888240();

   return behavior;
}

Behavior __63887420;

Behavior make__63887420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63887420 = behavior;
   behavior->owner = (Object)channel__b0_58210_53386540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53586920_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   abus__r_53586920_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   abus__r_53586920_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(abus__r_53586920_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,abus__r_53586920_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
abus__r_53586920_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[abus__r_53586920_channel__b0_58210_53386540_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63887580();

   return behavior;
}

Behavior __63887180;

Behavior make__63887180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63887180 = behavior;
   behavior->owner = (Object)channel__b0_58210_53386540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_54376960_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58213_54376960_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58213_54376960_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58213_54376960_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58213_54376960_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58213_54376960_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58213_54376960_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63887380();

   return behavior;
}

Scope makechannel__b0_58210_53386540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58210_53386540 = scope;
   scope->owner = (Object)layer0_58_84_49376100;
   scope->name = "channel_b0:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53384960();
   scope->inners[1] = makedbus__r_53587000();
   scope->inners[2] = makeabus__r_53586920();
   scope->inners[3] = makemem_53810540();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58211_53386240();
   scope->scopes[1] = makerinc_58216_53385820();
   scope->scopes[2] = makerdec_58220_53385400();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54475200();
   scope->behaviors[1] = make__63889300();
   scope->behaviors[2] = make__63888980();
   scope->behaviors[3] = make__63888280();
   scope->behaviors[4] = make__63888040();
   scope->behaviors[5] = make__63887420();
   scope->behaviors[6] = make__63887180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58225_54475080;

SignalI trig__r_54473500_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI maketrig__r_54473500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_54473500_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__b1_58225_54475080;
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

SignalI dbus__r_54577200_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makedbus__r_54577200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54577200_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__b1_58225_54475080;
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

SignalI abus__r_54577120_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__r_54577120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54577120_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__b1_58225_54475080;
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

SignalI mem_54759760_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makemem_54759760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54759760_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__b1_58225_54475080;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__64452820(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58226_54474780;

Scope makeraddr_58226_54474780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58226_54474780 = scope;
   scope->owner = (Object)channel__b1_58225_54475080;
   scope->name = "raddr:226";
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

Scope rinc_58231_54474360;

Scope makerinc_58231_54474360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58231_54474360 = scope;
   scope->owner = (Object)channel__b1_58225_54475080;
   scope->name = "rinc:231";
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

Scope rdec_58235_54473940;

Scope makerdec_58235_54473940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58235_54473940 = scope;
   scope->owner = (Object)channel__b1_58225_54475080;
   scope->name = "rdec:235";
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

Behavior __55457140;

Behavior make__55457140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55457140 = behavior;
   behavior->owner = (Object)channel__b1_58225_54475080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg += 1;
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg = realloc(clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg*sizeof(Object));
clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg[clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg-1] = (Object)behavior;
   behavior->block = make__54974700();

   return behavior;
}

Behavior __63885180;

Behavior make__63885180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63885180 = behavior;
   behavior->owner = (Object)channel__b1_58225_54475080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54577200_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   dbus__r_54577200_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   dbus__r_54577200_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(dbus__r_54577200_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,dbus__r_54577200_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
dbus__r_54577200_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[dbus__r_54577200_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63885380();

   return behavior;
}

Behavior __63884940;

Behavior make__63884940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63884940 = behavior;
   behavior->owner = (Object)channel__b1_58225_54475080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58229_54698740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58229_54698740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58229_54698740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58229_54698740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58229_54698740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58229_54698740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58229_54698740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63885100();

   return behavior;
}

Behavior __63884260;

Behavior make__63884260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63884260 = behavior;
   behavior->owner = (Object)channel__b1_58225_54475080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_54473500_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   trig__r_54473500_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   trig__r_54473500_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(trig__r_54473500_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,trig__r_54473500_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
trig__r_54473500_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[trig__r_54473500_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63884580();

   return behavior;
}

Behavior __63883660;

Behavior make__63883660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63883660 = behavior;
   behavior->owner = (Object)channel__b1_58225_54475080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58227_54698700_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63884200();

   return behavior;
}

Behavior __63883040;

Behavior make__63883040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63883040 = behavior;
   behavior->owner = (Object)channel__b1_58225_54475080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_54577120_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   abus__r_54577120_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   abus__r_54577120_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(abus__r_54577120_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,abus__r_54577120_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
abus__r_54577120_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[abus__r_54577120_channel__b1_58225_54475080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63883200();

   return behavior;
}

Behavior __63882800;

Behavior make__63882800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63882800 = behavior;
   behavior->owner = (Object)channel__b1_58225_54475080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58228_54698620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58228_54698620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58228_54698620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58228_54698620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58228_54698620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58228_54698620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58228_54698620_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63883000();

   return behavior;
}

Scope makechannel__b1_58225_54475080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58225_54475080 = scope;
   scope->owner = (Object)layer0_58_84_49376100;
   scope->name = "channel_b1:225";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_54473500();
   scope->inners[1] = makedbus__r_54577200();
   scope->inners[2] = makeabus__r_54577120();
   scope->inners[3] = makemem_54759760();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58226_54474780();
   scope->scopes[1] = makerinc_58231_54474360();
   scope->scopes[2] = makerdec_58235_54473940();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55457140();
   scope->behaviors[1] = make__63885180();
   scope->behaviors[2] = make__63884940();
   scope->behaviors[3] = make__63884260();
   scope->behaviors[4] = make__63883660();
   scope->behaviors[5] = make__63883040();
   scope->behaviors[6] = make__63882800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58240_55457020;

SignalI reg__0_55589920_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makereg__0_55589920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_55589920_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__z_58240_55457020;
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

SignalI reg__1_55701820_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makereg__1_55701820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_55701820_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__z_58240_55457020;
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

Scope anum_58241_55456720;

Scope makeanum_58241_55456720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58241_55456720 = scope;
   scope->owner = (Object)channel__z_58240_55457020;
   scope->name = "anum:241";
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

Scope raddr_58244_55456300;

Scope makeraddr_58244_55456300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58244_55456300 = scope;
   scope->owner = (Object)channel__z_58240_55457020;
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

Scope waddr_58248_55455880;

Scope makewaddr_58248_55455880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58248_55455880 = scope;
   scope->owner = (Object)channel__z_58240_55457020;
   scope->name = "waddr:248";
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

Scope rinc_58252_55455460;

SignalI abus__r_55455080_rinc_58252_55455460_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__r_55455080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55455080_rinc_58252_55455460_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)rinc_58252_55455460;
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

Scope makerinc_58252_55455460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58252_55455460 = scope;
   scope->owner = (Object)channel__z_58240_55457020;
   scope->name = "rinc:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55455080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58256_55454960;

SignalI abus__w_55454580_winc_58256_55454960_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__w_55454580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55454580_winc_58256_55454960_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)winc_58256_55454960;
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

Scope makewinc_58256_55454960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58256_55454960 = scope;
   scope->owner = (Object)channel__z_58240_55457020;
   scope->name = "winc:256";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55454580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58260_55454460;

SignalI abus__r_55454080_rdec_58260_55454460_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__r_55454080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55454080_rdec_58260_55454460_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)rdec_58260_55454460;
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

Scope makerdec_58260_55454460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58260_55454460 = scope;
   scope->owner = (Object)channel__z_58240_55457020;
   scope->name = "rdec:260";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55454080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58265_55453960;

SignalI abus__w_55453580_wdec_58265_55453960_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__w_55453580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55453580_wdec_58265_55453960_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)wdec_58265_55453960;
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

Scope makewdec_58265_55453960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58265_55453960 = scope;
   scope->owner = (Object)channel__z_58240_55457020;
   scope->name = "wdec:265";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55453580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __63970700;

Behavior make__63970700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63970700 = behavior;
   behavior->owner = (Object)channel__z_58240_55457020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_55589920_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__0_55589920_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__0_55589920_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__0_55589920_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__0_55589920_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__0_55589920_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__0_55589920_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63970980();

   return behavior;
}

Behavior __63970460;

Behavior make__63970460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63970460 = behavior;
   behavior->owner = (Object)channel__z_58240_55457020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58242_54470000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58242_54470000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58242_54470000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58242_54470000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58242_54470000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58242_54470000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58242_54470000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63970640();

   return behavior;
}

Behavior __63969740;

Behavior make__63969740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63969740 = behavior;
   behavior->owner = (Object)channel__z_58240_55457020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_55701820_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__1_55701820_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__1_55701820_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__1_55701820_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__1_55701820_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__1_55701820_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__1_55701820_channel__z_58240_55457020_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63970020();

   return behavior;
}

Behavior __63969500;

Behavior make__63969500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63969500 = behavior;
   behavior->owner = (Object)channel__z_58240_55457020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58243_54613000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58243_54613000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58243_54613000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58243_54613000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58243_54613000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58243_54613000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58243_54613000_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63969680();

   return behavior;
}

Scope makechannel__z_58240_55457020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58240_55457020 = scope;
   scope->owner = (Object)layer0_58_84_49376100;
   scope->name = "channel_z:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_55589920();
   scope->inners[1] = makereg__1_55701820();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58241_55456720();
   scope->scopes[1] = makeraddr_58244_55456300();
   scope->scopes[2] = makewaddr_58248_55455880();
   scope->scopes[3] = makerinc_58252_55455460();
   scope->scopes[4] = makewinc_58256_55454960();
   scope->scopes[5] = makerdec_58260_55454460();
   scope->scopes[6] = makewdec_58265_55453960();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63970700();
   scope->behaviors[1] = make__63970460();
   scope->behaviors[2] = make__63969740();
   scope->behaviors[3] = make__63969500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58270_56066300;

SignalI lv0_45813340_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makelv0_45813340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_45813340_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)add__n_58270_56066300;
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

SignalI lv1_47706160_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makelv1_47706160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47706160_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)add__n_58270_56066300;
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

SignalI rv0_47892960_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makerv0_47892960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_47892960_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)add__n_58270_56066300;
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

SignalI rv1_48125640_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makerv1_48125640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_48125640_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)add__n_58270_56066300;
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

SignalI lvok0_48125620_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makelvok0_48125620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_48125620_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)add__n_58270_56066300;
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

SignalI lvok1_48125600_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makelvok1_48125600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_48125600_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)add__n_58270_56066300;
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

SignalI rvok0_48125440_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makervok0_48125440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_48125440_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)add__n_58270_56066300;
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

SignalI rvok1_48125420_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makervok1_48125420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_48125420_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)add__n_58270_56066300;
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

SignalI run_48125400_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makerun_48125400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_48125400_add__n_58270_56066300_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)add__n_58270_56066300;
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

Behavior __53719920;

Behavior make__53719920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53719920 = behavior;
   behavior->owner = (Object)add__n_58270_56066300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos += 1;
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos = realloc(clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos*sizeof(Object));
clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos[clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos-1] = (Object)behavior;
   behavior->block = make__48125240();

   return behavior;
}

Scope makeadd__n_58270_56066300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58270_56066300 = scope;
   scope->owner = (Object)layer0_58_84_49376100;
   scope->name = "add_n:270";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_45813340();
   scope->inners[1] = makelv1_47706160();
   scope->inners[2] = makerv0_47892960();
   scope->inners[3] = makerv1_48125640();
   scope->inners[4] = makelvok0_48125620();
   scope->inners[5] = makelvok1_48125600();
   scope->inners[6] = makervok0_48125440();
   scope->inners[7] = makervok1_48125420();
   scope->inners[8] = makerun_48125400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53719920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48925900;

Behavior make__48925900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48925900 = behavior;
   behavior->owner = (Object)layer0_58_84_49376100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos += 1;
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos = realloc(clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos*sizeof(Object));
clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos[clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos-1] = (Object)behavior;
   behavior->block = make__48928820();

   return behavior;
}

Behavior __50106280;

Behavior make__50106280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50106280 = behavior;
   behavior->owner = (Object)layer0_58_84_49376100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos += 1;
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos = realloc(clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos*sizeof(Object));
clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos[clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos-1] = (Object)behavior;
   behavior->block = make__48925740();

   return behavior;
}

Behavior __53427020;

Behavior make__53427020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53427020 = behavior;
   behavior->owner = (Object)layer0_58_84_49376100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos += 1;
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos = realloc(clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos*sizeof(Object));
clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos[clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos-1] = (Object)behavior;
   behavior->block = make__50105640();

   return behavior;
}

Behavior __63734060;

Behavior make__63734060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63734060 = behavior;
   behavior->owner = (Object)layer0_58_84_49376100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_53424000_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   req_53424000_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   req_53424000_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(req_53424000_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,req_53424000_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
req_53424000_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[req_53424000_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_53719740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   ack__mac_53719740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   ack__mac_53719740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(ack__mac_53719740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,ack__mac_53719740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
ack__mac_53719740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[ack__mac_53719740_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63734360();

   return behavior;
}

Behavior __63788680;

Behavior make__63788680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63788680 = behavior;
   behavior->owner = (Object)layer0_58_84_49376100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[ack_53719760_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_54784340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   value__z0_54784340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   value__z0_54784340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(value__z0_54784340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,value__z0_54784340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
value__z0_54784340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[value__z0_54784340_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_54886480_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   value__z1_54886480_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   value__z1_54886480_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(value__z1_54886480_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,value__z1_54886480_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
value__z1_54886480_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[value__z1_54886480_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_55303240_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   ack__a0_55303240_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   ack__a0_55303240_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(ack__a0_55303240_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,ack__a0_55303240_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
ack__a0_55303240_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[ack__a0_55303240_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_55303220_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   ack__a1_55303220_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   ack__a1_55303220_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(ack__a1_55303220_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,ack__a1_55303220_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
ack__a1_55303220_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[ack__a1_55303220_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63734580();

   return behavior;
}

Behavior __63788500;

Behavior make__63788500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63788500 = behavior;
   behavior->owner = (Object)layer0_58_84_49376100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_55297080_counter_58_841_55299080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   ack__mac_55297080_counter_58_841_55299080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   ack__mac_55297080_counter_58_841_55299080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(ack__mac_55297080_counter_58_841_55299080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,ack__mac_55297080_counter_58_841_55299080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
ack__mac_55297080_counter_58_841_55299080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[ack__mac_55297080_counter_58_841_55299080_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_49127680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   a_49127680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   a_49127680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(a_49127680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,a_49127680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
a_49127680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[a_49127680_func0_58_841_48125140_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_55587700_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   a_55587700_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   a_55587700_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(a_55587700_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,a_55587700_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
a_55587700_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[a_55587700_func1_58_841_55238560_layer0_58_84_49376100_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63734520();

   return behavior;
}

Scope makelayer0_58_84_49376100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_49376100 = scope;
   scope->owner = (Object)layer0_58_840_53426560;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_55296920();
   scope->systemIs[1] = makefunc0_49127440();
   scope->systemIs[2] = makefunc1_55587460();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_53719780();
   scope->inners[1] = makeack_53719760();
   scope->inners[2] = makeack__mac_53719740();
   scope->inners[3] = makeack__add_53719720();
   scope->inners[4] = make_58150_53772720();
   scope->inners[5] = make_58148_53772700();
   scope->inners[6] = make_58149_53772620();
   scope->inners[7] = make_58173_54013940();
   scope->inners[8] = make_58174_54115780();
   scope->inners[9] = make_58165_54168540();
   scope->inners[10] = make_58163_54168520();
   scope->inners[11] = make_58164_54168440();
   scope->inners[12] = make_58214_54377080();
   scope->inners[13] = make_58215_54377060();
   scope->inners[14] = make_58212_54377040();
   scope->inners[15] = make_58213_54376960();
   scope->inners[16] = make_58242_54470000();
   scope->inners[17] = make_58243_54613000();
   scope->inners[18] = make_58229_54698740();
   scope->inners[19] = make_58230_54698720();
   scope->inners[20] = make_58227_54698700();
   scope->inners[21] = make_58228_54698620();
   scope->inners[22] = makevalue__z0_54784340();
   scope->inners[23] = makevalue__z1_54886480();
   scope->inners[24] = makevalue__a0_54988180();
   scope->inners[25] = makevalue__a1_55303320();
   scope->inners[26] = makeflag__z0_55303300();
   scope->inners[27] = makeflag__z1_55303280();
   scope->inners[28] = makeack__a0_55303240();
   scope->inners[29] = makeack__a1_55303220();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58141_49375760();
   scope->scopes[1] = makechannel__w1_58156_48479340();
   scope->scopes[2] = makechannel__accum_58171_46857340();
   scope->scopes[3] = makemac__n1_58203_49974520();
   scope->scopes[4] = makechannel__b0_58210_53386540();
   scope->scopes[5] = makechannel__b1_58225_54475080();
   scope->scopes[6] = makechannel__z_58240_55457020();
   scope->scopes[7] = makeadd__n_58270_56066300();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48925900();
   scope->behaviors[1] = make__50106280();
   scope->behaviors[2] = make__53427020();
   scope->behaviors[3] = make__63734060();
   scope->behaviors[4] = make__63788680();
   scope->behaviors[5] = make__63788500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_53426560() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_53426560 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53424040();
   systemT->inputs[1] = makerst_53424020();
   systemT->inputs[2] = makereq_53424000();
   systemT->inputs[3] = make_5859_53717420();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_53717340();
   systemT->outputs[1] = make_5857_53717240();
   systemT->outputs[2] = make_5858_53717140();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58113_53979580();
   systemT->inouts[1] = make_58114_54062020();

   systemT->scope = makelayer0_58_84_49376100();

   return systemT;
}