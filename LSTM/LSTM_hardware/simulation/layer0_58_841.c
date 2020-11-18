#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_841_59735240;

SignalI clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeclk_59733180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_841_59735240;
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

SignalI rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makerst_59733160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_841_59735240;
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

SignalI req_59733140_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereq_59733140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_59733140_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_841_59735240;
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

SignalI _58103_59841220_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58103_59841220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58103_59841220_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_841_59735240;
   signalI->name = ":103";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_59841180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__layer_59841180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_59841180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_841_59735240;
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

SignalI _58101_59841160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58101_59841160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_59841160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_841_59735240;
   signalI->name = ":101";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58102_59841080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_841_59735240;
   signalI->name = ":102";
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

SignalI _58143_59971600_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58143_59971600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_59971600_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_841_59735240;
   signalI->name = ":143";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58144_60071460_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58144_60071460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_60071460_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_841_59735240;
   signalI->name = ":144";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __58643560;

Block __58643340;

void code__58643340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71629900(),ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71629820(),ack__mac_50282780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71629760(),ack__add_50282760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__58643340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58643340 = block;
   block->owner = (Object)__58643560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58643340;

   return block;
};

void code__58643560() {
   {
      Value cond = rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58643340();
   }
      }
   }
}

Block make__58643560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58643560 = block;
   block->owner = (Object)__58642100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58643560;

   return block;
};

Block __58641980;

Block __58641160;

Block __58641000;

void code__58641000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58272_52142280_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,value__z0_52377880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71629580(),flag__z0_52699020_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__58641000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58641000 = block;
   block->owner = (Object)__58641160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58641000;

   return block;
};

Block __59002860;

void code__59002860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58273_51951640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,value__z1_52456080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71629440(),flag__z1_52698960_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59002860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59002860 = block;
   block->owner = (Object)__58641160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59002860;

   return block;
};

void code__58641160() {
 code__58641000();
 code__59002860();
}

Block make__58641160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58641160 = block;
   block->owner = (Object)__58641980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58641160;

   return block;
};

Block __58641820;

void code__58641820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71629360(),flag__z0_52699020_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71629300(),flag__z1_52698960_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__58641820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58641820 = block;
   block->owner = (Object)__58641980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58641820;

   return block;
};

void code__58641980() {
   {
      Value cond = ack__add_50282760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58641160();
   }
   else {
  code__58641820();
   }
      }
   }
}

Block make__58641980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58641980 = block;
   block->owner = (Object)__59218180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58641980;

   return block;
};

Block __59218060;

Block __59217800;

void code__59217800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71629180(),ack__a0_52698780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71629120(),ack__a1_52698760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59217800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59217800 = block;
   block->owner = (Object)__59218060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59217800;

   return block;
};

Block __59217020;

Block __59216860;

void code__59216860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_52600300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58143_59971600_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71628700(),ack__a0_52698780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59216860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59216860 = block;
   block->owner = (Object)__59217020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59216860;

   return block;
};

Block __59464620;

void code__59464620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_52699040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58144_60071460_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71628560(),ack__a1_52698760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59464620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59464620 = block;
   block->owner = (Object)__59217020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59464620;

   return block;
};

void code__59217020() {
 code__59216860();
 code__59464620();
}

Block make__59217020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59217020 = block;
   block->owner = (Object)__59218060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59217020;

   return block;
};

void code__59218060() {
   {
      Value cond = rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59217800();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_52699020_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         src1 = flag__z1_52698960_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__59217020();
   }
      }
   }
}

Block make__59218060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59218060 = block;
   block->owner = (Object)__59735600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59218060;

   return block;
};

Block __71126000;

void code__71126000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_59733140_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_50282780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_50282820_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71126000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71126000 = block;
   block->owner = (Object)__71125640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71126000;

   return block;
};

Block __71126220;

void code__71126220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,clk_52712000_counter_58_843_52714880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,ack_52711940_counter_58_843_52714880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,rst_52711920_counter_58_843_52714880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_52377880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,z__value_59966060_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_52456080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,z__value_52438040_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_52698780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      src1 = ack__a1_52698760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_59841180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71126220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71126220 = block;
   block->owner = (Object)__71155980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71126220;

   return block;
};

Block __71126160;

void code__71126160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_52711820_counter_58_843_52714880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,ack__mac_50282780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58245_51505860_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58260_52240660_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_60069680_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,value__a0_52600300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52612160_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,value__a1_52699040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71126160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71126160 = block;
   block->owner = (Object)__71155800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71126160;

   return block;
};

Block __53064880;

void code__53064880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_52894420_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(abus__r_52470800_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_52470880_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53064880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53064880 = block;
   block->owner = (Object)__53261820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53064880;

   return block;
};

Block __71179300;

void code__71179300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_52470880_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58180_50463080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71179300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71179300 = block;
   block->owner = (Object)__71179080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71179300;

   return block;
};

Block __71178960;

void code__71178960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58180_50463080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,dbus__r_52470880_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71178960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71178960 = block;
   block->owner = (Object)__71178740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71178960;

   return block;
};

Block __71178440;

void code__71178440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_52404580_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71178440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71178440 = block;
   block->owner = (Object)__71178240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71178440;

   return block;
};

Block __71178200;

void code__71178200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,trig__r_52404580_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71178200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71178200 = block;
   block->owner = (Object)__71178000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71178200;

   return block;
};

Block __71177600;

void code__71177600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52470800_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71177600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71177600 = block;
   block->owner = (Object)__71177380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71177600;

   return block;
};

Block __71177340;

void code__71177340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,abus__r_52470800_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71177340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71177340 = block;
   block->owner = (Object)__71177060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71177340;

   return block;
};

Block __50402080;

void code__50402080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49603920_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(abus__r_53393440_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53393580_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50402080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50402080 = block;
   block->owner = (Object)__51085040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50402080;

   return block;
};

Block __71175480;

void code__71175480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53393580_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58195_50071300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71175480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71175480 = block;
   block->owner = (Object)__71175260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71175480;

   return block;
};

Block __71175220;

void code__71175220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58195_50071300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,dbus__r_53393580_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71175220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71175220 = block;
   block->owner = (Object)__71175020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71175220;

   return block;
};

Block __71174420;

void code__71174420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53259660_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71174420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71174420 = block;
   block->owner = (Object)__71174200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71174420;

   return block;
};

Block __71174160;

void code__71174160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,trig__r_53259660_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71174160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71174160 = block;
   block->owner = (Object)__71173980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71174160;

   return block;
};

Block __71173660;

void code__71173660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53393440_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71173660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71173660 = block;
   block->owner = (Object)__71173460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71173660;

   return block;
};

Block __71173420;

void code__71173420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,abus__r_53393440_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71173420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71173420 = block;
   block->owner = (Object)__71173260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71173420;

   return block;
};

Block __71245180;

void code__71245180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50071860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58203_50698880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71245180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71245180 = block;
   block->owner = (Object)__71244980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71245180;

   return block;
};

Block __71244940;

void code__71244940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58203_50698880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,reg__0_50071860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71244940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71244940 = block;
   block->owner = (Object)__71244780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71244940;

   return block;
};

Block __71244440;

void code__71244440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51441860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58204_51045580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71244440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71244440 = block;
   block->owner = (Object)__71244120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71244440;

   return block;
};

Block __71244040;

void code__71244040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58204_51045580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,reg__1_51441860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71244040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71244040 = block;
   block->owner = (Object)__71243700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71244040;

   return block;
};

Block __52675660;

Block __52675500;

Block __52675140;

void code__52675140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71517480(),_58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52675140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52675140 = block;
   block->owner = (Object)__52675500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52675140;

   return block;
};

void code__52675500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71517560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52675140();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71517420(),_58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52675500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52675500 = block;
   block->owner = (Object)__52675660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52675500;

   return block;
};

Block __52698860;

Block __52698540;

void code__52698540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71517200(),_58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52698540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52698540 = block;
   block->owner = (Object)__52698860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52698540;

   return block;
};

void code__52698860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71517300();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52698540();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71517140(),_58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52698860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52698860 = block;
   block->owner = (Object)__52675660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52698860;

   return block;
};

Block __52697780;

Block __52697420;

void code__52697420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71516920(),_58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52697420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52697420 = block;
   block->owner = (Object)__52697780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52697420;

   return block;
};

void code__52697780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71517000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52697420();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71516860(),_58101_59841160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52697780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52697780 = block;
   block->owner = (Object)__52675660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52697780;

   return block;
};

Block __52696140;

void code__52696140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71516460(),rvok_52675920_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71516380(),lvok0_52675960_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71516260(),wok0_52675900_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71516200(),lvok1_52675940_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71598000(),wok1_52675880_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52696140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52696140 = block;
   block->owner = (Object)__52675660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52696140;

   return block;
};

Block __52855580;

Block __52855020;

Block __52879280;

Block __52878960;

Block __52876800;

Block __52876640;

void code__52876640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58103_59841220_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,rv_52676000_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__71597240(),rvok_52675920_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52876640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52876640 = block;
   block->owner = (Object)__52876800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52876640;

   return block;
};

void code__52876800() {
 code__52876640();
}

Block make__52876800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52876800 = block;
   block->owner = (Object)__52878960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52876800;

   return block;
};

Block __52878800;

void code__52878800() {
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
                  src0 = _58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__71597120();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__71597080();
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
                        src0 = _58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__71596780();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__71596680();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71596500(),_58101_59841160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52878800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52878800 = block;
   block->owner = (Object)__52878960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52878800;

   return block;
};

void code__52878960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58101_59841160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71597480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52876800();
   }
   else {
  code__52878800();
   }
      }
   }
}

Block make__52878960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52878960 = block;
   block->owner = (Object)__52879280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52878960;

   return block;
};

void code__52879280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71597600();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52878960();
   }
      }
   }
}

Block make__52879280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52879280 = block;
   block->owner = (Object)__52855020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52879280;

   return block;
};

void code__52855020() {
 code__52879280();
}

Block make__52855020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52855020 = block;
   block->owner = (Object)__52855580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52855020;

   return block;
};

Block __53067220;

Block __53067020;

Block __53066680;

Block __53063860;

Block __53063640;

void code__53063640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58180_50463080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,lv0_52362420_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__71595960(),lvok0_52675960_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53063640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53063640 = block;
   block->owner = (Object)__53063860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53063640;

   return block;
};

void code__53063860() {
 code__53063640();
}

Block make__53063860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53063860 = block;
   block->owner = (Object)__53066680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53063860;

   return block;
};

Block __53066520;

void code__53066520() {
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
                  src0 = _58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__71595820();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__71595780();
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
                        src0 = _58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__71595500();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__71595420();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71595260(),_58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53066520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53066520 = block;
   block->owner = (Object)__53066680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53066520;

   return block;
};

void code__53066680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71596180();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53063860();
   }
   else {
  code__53066520();
   }
      }
   }
}

Block make__53066680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53066680 = block;
   block->owner = (Object)__53067020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53066680;

   return block;
};

void code__53067020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71596340();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53066680();
   }
      }
   }
}

Block make__53067020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53067020 = block;
   block->owner = (Object)__53067220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53067020;

   return block;
};

void code__53067220() {
 code__53067020();
}

Block make__53067220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53067220 = block;
   block->owner = (Object)__52855580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53067220;

   return block;
};

Block __53214280;

Block __53213800;

Block __53213600;

void code__53213600() {
}

Block make__53213600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53213600 = block;
   block->owner = (Object)__53213800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53213600;

   return block;
};

Block __49153880;

void code__49153880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_52508000_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58203_50698880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71593880(),wok0_52675900_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__49153880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49153880 = block;
   block->owner = (Object)__53213800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49153880;

   return block;
};

void code__53213800() {
 code__53213600();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_52508000_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
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
                              src0 = lv0_52362420_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_52676000_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__71594060();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_52508000_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__49153880();
}

Block make__53213800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53213800 = block;
   block->owner = (Object)__53214280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53213800;

   return block;
};

void code__53214280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71594940(),ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71594780(),run_52675860_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__53213800();
}

Block make__53214280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53214280 = block;
   block->owner = (Object)__52855580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53214280;

   return block;
};

Block __49724320;

void code__49724320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71593680(),wok0_52675900_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71593620(),wok1_52675880_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71593540(),lvok0_52675960_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71593480(),lvok1_52675940_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71593400(),rvok_52675920_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__49724320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49724320 = block;
   block->owner = (Object)__52855580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49724320;

   return block;
};

Block __50221120;

Block __50220820;

Block __50219860;

Block __50239420;

Block __50239240;

void code__50239240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58195_50071300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,lv1_52424760_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__71592640(),lvok1_52675940_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50239240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50239240 = block;
   block->owner = (Object)__50239420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50239240;

   return block;
};

void code__50239420() {
 code__50239240();
}

Block make__50239420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50239420 = block;
   block->owner = (Object)__50219860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50239420;

   return block;
};

Block __50218560;

void code__50218560() {
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
                  src0 = _58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__71592540();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__71592460();
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
                        src0 = _58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__71591920();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__71591860();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71591660(),_58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50218560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50218560 = block;
   block->owner = (Object)__50219860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50218560;

   return block;
};

void code__50219860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71592800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50239420();
   }
   else {
  code__50218560();
   }
      }
   }
}

Block make__50219860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50219860 = block;
   block->owner = (Object)__50220820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50219860;

   return block;
};

void code__50220820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71592900();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50219860();
   }
      }
   }
}

Block make__50220820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50220820 = block;
   block->owner = (Object)__50221120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50220820;

   return block;
};

void code__50221120() {
 code__50220820();
}

Block make__50221120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50221120 = block;
   block->owner = (Object)__52855580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50221120;

   return block;
};

Block __50530420;

Block __50529740;

Block __50529400;

void code__50529400() {
}

Block make__50529400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50529400 = block;
   block->owner = (Object)__50529740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50529400;

   return block;
};

Block __52149440;

void code__52149440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_52613620_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58204_51045580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71590760(),wok1_52675880_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52149440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52149440 = block;
   block->owner = (Object)__50529740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52149440;

   return block;
};

void code__50529740() {
 code__50529400();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_52613620_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
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
                              src0 = lv1_52424760_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_52676000_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__71591020();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_52613620_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__52149440();
}

Block make__50529740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50529740 = block;
   block->owner = (Object)__50530420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50529740;

   return block;
};

void code__50530420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71591420(),ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71591360(),run_52675860_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__50529740();
}

Block make__50530420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50530420 = block;
   block->owner = (Object)__52855580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50530420;

   return block;
};

Block __52194660;

void code__52194660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71590520(),wok0_52675900_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71590460(),wok1_52675880_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71590380(),lvok0_52675960_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71590320(),lvok1_52675940_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71590240(),rvok_52675920_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52194660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52194660 = block;
   block->owner = (Object)__52855580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52194660;

   return block;
};

void code__52855580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71597760(),run_52675860_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_52675920_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52855020();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52675960_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53067220();
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
               src0 = lvok0_52675960_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               src1 = rvok_52675920_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_52675900_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53214280();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_52675900_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         src1 = wok1_52675880_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49724320();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_52675940_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50221120();
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
               src0 = lvok1_52675940_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               src1 = rvok_52675920_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_52675880_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50530420();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_52675900_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         src1 = wok1_52675880_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52194660();
   }
      }
   }
}

Block make__52855580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52855580 = block;
   block->owner = (Object)__52675660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52855580;

   return block;
};

Block __52694920;

void code__52694920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71590180(),av0_52508000_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71590040(),av1_52613620_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52694920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52694920 = block;
   block->owner = (Object)__52675660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52694920;

   return block;
};

void code__52675660() {
 code__52675500();
 code__52698860();
 code__52697780();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71516780(),ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71516660(),run_52675860_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_52675860_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52696140();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_50282820_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         src1 = run_52675860_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52855580();
   }
   else {
  code__52694920();
   }
      }
   }
}

Block make__52675660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52675660 = block;
   block->owner = (Object)__52191300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52675660;

   return block;
};

Block __52678600;

void code__52678600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_52473000_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(abus__r_52326320_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_52326420_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52678600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52678600 = block;
   block->owner = (Object)__52955120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52678600;

   return block;
};

Block __71241500;

void code__71241500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_52326420_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58244_51505880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71241500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71241500 = block;
   block->owner = (Object)__71241220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71241500;

   return block;
};

Block __71241180;

void code__71241180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58244_51505880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,dbus__r_52326420_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71241180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71241180 = block;
   block->owner = (Object)__71241000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71241180;

   return block;
};

Block __71240700;

void code__71240700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_52213020_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71240700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71240700 = block;
   block->owner = (Object)__71240500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71240700;

   return block;
};

Block __71240440;

void code__71240440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,trig__r_52213020_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71240440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71240440 = block;
   block->owner = (Object)__71240180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71240440;

   return block;
};

Block __71239760;

void code__71239760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52326320_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58243_51505760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71239760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71239760 = block;
   block->owner = (Object)__71239580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71239760;

   return block;
};

Block __71239540;

void code__71239540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58243_51505760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,abus__r_52326320_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71239540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71239540 = block;
   block->owner = (Object)__71239240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71239540;

   return block;
};

Block __45711720;

void code__45711720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_53230040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(abus__r_53059920_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53060040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__45711720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45711720 = block;
   block->owner = (Object)__49453940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45711720;

   return block;
};

Block __71237660;

void code__71237660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53060040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58259_52240680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71237660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71237660 = block;
   block->owner = (Object)__71261700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71237660;

   return block;
};

Block __71261660;

void code__71261660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58259_52240680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,dbus__r_53060040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71261660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71261660 = block;
   block->owner = (Object)__71261240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71261660;

   return block;
};

Block __71259080;

void code__71259080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_52977080_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71259080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71259080 = block;
   block->owner = (Object)__71258500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71259080;

   return block;
};

Block __71258440;

void code__71258440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,trig__r_52977080_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71258440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71258440 = block;
   block->owner = (Object)__71258020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71258440;

   return block;
};

Block __71257480;

void code__71257480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53059920_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58258_52240560_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71257480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71257480 = block;
   block->owner = (Object)__71257160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71257480;

   return block;
};

Block __71257040;

void code__71257040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58258_52240560_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,abus__r_53059920_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71257040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71257040 = block;
   block->owner = (Object)__71256780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71257040;

   return block;
};

Block __71277420;

void code__71277420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49671540_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58272_52142280_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71277420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71277420 = block;
   block->owner = (Object)__71276020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71277420;

   return block;
};

Block __71275740;

void code__71275740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58272_52142280_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,reg__0_49671540_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71275740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71275740 = block;
   block->owner = (Object)__71275500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71275740;

   return block;
};

Block __71274660;

void code__71274660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50355100_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58273_51951640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71274660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71274660 = block;
   block->owner = (Object)__71274240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71274660;

   return block;
};

Block __71274200;

void code__71274200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58273_51951640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,reg__1_50355100_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71274200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71274200 = block;
   block->owner = (Object)__71274040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71274200;

   return block;
};

Block __52247900;

Block __52247620;

void code__52247620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71611440(),_58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52247620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52247620 = block;
   block->owner = (Object)__52247900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52247620;

   return block;
};

Block __52247080;

void code__52247080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71611300(),_58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52247080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52247080 = block;
   block->owner = (Object)__52247900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52247080;

   return block;
};

Block __52245040;

Block __52244280;

void code__52244280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58203_50698880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,lv0_51837980_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71610800(),lvok0_52248120_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52244280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52244280 = block;
   block->owner = (Object)__52245040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52244280;

   return block;
};

Block __52440460;

Block __52440040;

Block __52438760;

void code__52438760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58244_51505880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,rv0_51953320_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71610280(),_58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71610200(),rvok0_52248080_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52438760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52438760 = block;
   block->owner = (Object)__52440040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52438760;

   return block;
};

Block __52439860;

void code__52439860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71610100(),_58243_51505760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71610040(),_58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52439860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52439860 = block;
   block->owner = (Object)__52440040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52439860;

   return block;
};

void code__52440040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71610540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52438760();
   }
   else {
  code__52439860();
   }
      }
   }
}

Block make__52440040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52440040 = block;
   block->owner = (Object)__52440460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52440040;

   return block;
};

void code__52440460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58245_51505860_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71610660();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52440040();
   }
      }
   }
}

Block make__52440460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52440460 = block;
   block->owner = (Object)__52245040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52440460;

   return block;
};

Block __52663740;

Block __52663200;

void code__52663200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_51837980_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      src1 = rv0_51953320_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58272_52142280_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52663200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52663200 = block;
   block->owner = (Object)__52663740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52663200;

   return block;
};

void code__52663740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71609800(),run_52248020_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71609740(),ack__add_50282760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__52663200();
}

Block make__52663740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52663740 = block;
   block->owner = (Object)__52245040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52663740;

   return block;
};

Block __53060420;

void code__53060420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58204_51045580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,lv1_52165740_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71609400(),lvok1_52248100_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53060420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53060420 = block;
   block->owner = (Object)__52245040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53060420;

   return block;
};

Block __53225320;

Block __53224940;

Block __53223780;

void code__53223780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58259_52240680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,rv1_52248160_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71608940(),_58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71608820(),rvok1_52248060_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53223780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53223780 = block;
   block->owner = (Object)__53224940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53223780;

   return block;
};

Block __53224680;

void code__53224680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71608740(),_58258_52240560_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71608620(),_58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53224680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53224680 = block;
   block->owner = (Object)__53224940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53224680;

   return block;
};

void code__53224940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71609180();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53223780();
   }
   else {
  code__53224680();
   }
      }
   }
}

Block make__53224940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53224940 = block;
   block->owner = (Object)__53225320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53224940;

   return block;
};

void code__53225320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58260_52240660_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71609300();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53224940();
   }
      }
   }
}

Block make__53225320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53225320 = block;
   block->owner = (Object)__52245040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53225320;

   return block;
};

Block __47479120;

Block __47475820;

void code__47475820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_52165740_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      src1 = rv1_52248160_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58273_51951640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__47475820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47475820 = block;
   block->owner = (Object)__47479120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47475820;

   return block;
};

void code__47479120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71608340(),run_52248020_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71608280(),ack__add_50282760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__47475820();
}

Block make__47479120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47479120 = block;
   block->owner = (Object)__52245040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47479120;

   return block;
};

void code__52245040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71610960(),run_52248020_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__52244280();
 code__52440460();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52248120_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         src1 = rvok0_52248080_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52663740();
   }
      }
   }
 code__53060420();
 code__53225320();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_52248100_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         src1 = rvok1_52248060_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47479120();
   }
      }
   }
}

Block make__52245040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52245040 = block;
   block->owner = (Object)__52247900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52245040;

   return block;
};

Block __52246320;

void code__52246320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71607960(),lvok0_52248120_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71607880(),rvok0_52248080_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71607820(),lvok1_52248100_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71607740(),rvok1_52248060_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52246320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52246320 = block;
   block->owner = (Object)__52247900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52246320;

   return block;
};

void code__52247900() {
 code__52247620();
 code__52247080();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71611200(),ack__add_50282760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71611140(),run_52248020_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_50282780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         src1 = run_52248020_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52245040();
   }
   else {
  code__52246320();
   }
      }
   }
}

Block make__52247900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52247900 = block;
   block->owner = (Object)__50282960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52247900;

   return block;
};

Value make__71521020() {
   static unsigned long long data[] = { 4294967238ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71520980() {
   static unsigned long long data[] = { 4294967242ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71519640() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71519620() {
   static unsigned long long data[] = { 4294967271ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71590020() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__71613340() {
   static unsigned long long data[] = { 33ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__71517560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71517480() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71517420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71517300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71517200() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71517140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71517000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71516920() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71516860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71516780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71516660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71516460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71516380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71516260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71516200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71598000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71597760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71597600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71597480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71597240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71597120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71597080() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71596780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71596680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71596500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71596340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71596180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71595960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71595820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71595780() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71595500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71595420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71595260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71594940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71594780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71594060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71593880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71593680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71593620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71593540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71593480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71593400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71592900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71592800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71592640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71592540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71592460() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71591920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71591860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71591660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71591420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71591360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71591020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71590760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71590520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71590460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71590380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71590320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71590240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71590180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71590040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71611440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71611300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71611200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71611140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71610960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71610800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71610660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71610540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71610280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71610200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71610100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71610040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71609800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71609740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71609400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71609300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71609180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71608940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71608820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71608740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71608620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71608340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71608280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71607960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71607880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71607820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71607740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71629900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71629820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71629760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71629580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71629440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71629360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71629300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71629180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71629120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71628700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71628560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_52407180;

SignalI req__mac_50282820_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereq__mac_50282820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_50282820_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
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

SignalI ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack_50282800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
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

SignalI ack__mac_50282780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__mac_50282780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50282780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
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

SignalI ack__add_50282760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__add_50282760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_50282760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
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

SignalI _58180_50463080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58180_50463080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58180_50463080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":180";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58178_50463040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":178";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58179_50486840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":179";
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

SignalI _58203_50698880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58203_50698880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58203_50698880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":203";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58204_51045580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58204_51045580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58204_51045580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":204";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58195_50071300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58195_50071300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58195_50071300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":195";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58193_50071260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":193";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58194_50071140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":194";
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

SignalI _58244_51505880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58244_51505880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58244_51505880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":244";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58245_51505860_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58245_51505860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58245_51505860_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
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

SignalI _58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58242_51505840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":242";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58243_51505760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58243_51505760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58243_51505760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":243";
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

SignalI _58272_52142280_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58272_52142280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58272_52142280_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":272";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58273_51951640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58273_51951640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58273_51951640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":273";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58259_52240680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58259_52240680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58259_52240680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":259";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58260_52240660_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58260_52240660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58260_52240660_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":260";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58257_52240640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":257";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58258_52240560_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58258_52240560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58258_52240560_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
   signalI->name = ":258";
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

SignalI value__z0_52377880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makevalue__z0_52377880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_52377880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
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

SignalI value__z1_52456080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makevalue__z1_52456080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_52456080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
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

SignalI value__a0_52600300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makevalue__a0_52600300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_52600300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
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

SignalI value__a1_52699040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makevalue__a1_52699040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_52699040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
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

SignalI flag__z0_52699020_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeflag__z0_52699020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_52699020_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
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

SignalI flag__z1_52698960_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeflag__z1_52698960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_52698960_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
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

SignalI ack__a0_52698780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__a0_52698780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_52698780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
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

SignalI ack__a1_52698760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__a1_52698760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_52698760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer0_58_84_52407180;
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

SystemI counter_52711580;

SystemI makecounter_52711580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_52711580 = systemI;
   systemI->owner = (Object)layer0_58_84_52407180;
   systemI->name = "counter";
   systemI->system = counter_58_843_52714880;

   return systemI;
};

SystemI func0_60069540;

SystemI makefunc0_60069540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_60069540 = systemI;
   systemI->owner = (Object)layer0_58_84_52407180;
   systemI->name = "func0";
   systemI->system = func0_58_843_59929720;

   return systemI;
};

SystemI func1_52611220;

SystemI makefunc1_52611220() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_52611220 = systemI;
   systemI->owner = (Object)layer0_58_84_52407180;
   systemI->name = "func1";
   systemI->system = func1_58_841_52273620;

   return systemI;
};

Scope channel__w0_58171_52406440;

SignalI trig__r_52404580_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI maketrig__r_52404580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_52404580_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58171_52406440;
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

SignalI dbus__r_52470880_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makedbus__r_52470880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_52470880_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58171_52406440;
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

SignalI abus__r_52470800_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_52470800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52470800_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58171_52406440;
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

SignalI mem_52894420_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makemem_52894420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_52894420_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58171_52406440;
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
         src0 = make__71521020();
         src1 = make__71520980();
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

Scope raddr_58172_52406000;

Scope makeraddr_58172_52406000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58172_52406000 = scope;
   scope->owner = (Object)channel__w0_58171_52406440;
   scope->name = "raddr:172";
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

Scope rinc_58177_52405560;

Scope makerinc_58177_52405560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58177_52405560 = scope;
   scope->owner = (Object)channel__w0_58171_52406440;
   scope->name = "rinc:177";
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

Scope rdec_58181_52405140;

Scope makerdec_58181_52405140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58181_52405140 = scope;
   scope->owner = (Object)channel__w0_58171_52406440;
   scope->name = "rdec:181";
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

Behavior __53261820;

Behavior make__53261820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53261820 = behavior;
   behavior->owner = (Object)channel__w0_58171_52406440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg = realloc(clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg[clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__53064880();

   return behavior;
}

Behavior __71179080;

Behavior make__71179080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71179080 = behavior;
   behavior->owner = (Object)channel__w0_58171_52406440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_52470880_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   dbus__r_52470880_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__r_52470880_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(dbus__r_52470880_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,dbus__r_52470880_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__r_52470880_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[dbus__r_52470880_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71179300();

   return behavior;
}

Behavior __71178740;

Behavior make__71178740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71178740 = behavior;
   behavior->owner = (Object)channel__w0_58171_52406440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58180_50463080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58180_50463080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58180_50463080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58180_50463080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58180_50463080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58180_50463080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58180_50463080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71178960();

   return behavior;
}

Behavior __71178240;

Behavior make__71178240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71178240 = behavior;
   behavior->owner = (Object)channel__w0_58171_52406440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_52404580_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   trig__r_52404580_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   trig__r_52404580_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(trig__r_52404580_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,trig__r_52404580_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
trig__r_52404580_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[trig__r_52404580_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71178440();

   return behavior;
}

Behavior __71178000;

Behavior make__71178000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71178000 = behavior;
   behavior->owner = (Object)channel__w0_58171_52406440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58178_50463040_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71178200();

   return behavior;
}

Behavior __71177380;

Behavior make__71177380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71177380 = behavior;
   behavior->owner = (Object)channel__w0_58171_52406440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52470800_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   abus__r_52470800_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_52470800_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(abus__r_52470800_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,abus__r_52470800_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_52470800_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[abus__r_52470800_channel__w0_58171_52406440_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71177600();

   return behavior;
}

Behavior __71177060;

Behavior make__71177060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71177060 = behavior;
   behavior->owner = (Object)channel__w0_58171_52406440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58179_50486840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71177340();

   return behavior;
}

Scope makechannel__w0_58171_52406440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58171_52406440 = scope;
   scope->owner = (Object)layer0_58_84_52407180;
   scope->name = "channel_w0:171";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_52404580();
   scope->inners[1] = makedbus__r_52470880();
   scope->inners[2] = makeabus__r_52470800();
   scope->inners[3] = makemem_52894420();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58172_52406000();
   scope->scopes[1] = makerinc_58177_52405560();
   scope->scopes[2] = makerdec_58181_52405140();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53261820();
   scope->behaviors[1] = make__71179080();
   scope->behaviors[2] = make__71178740();
   scope->behaviors[3] = make__71178240();
   scope->behaviors[4] = make__71178000();
   scope->behaviors[5] = make__71177380();
   scope->behaviors[6] = make__71177060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58186_53261680;

SignalI trig__r_53259660_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI maketrig__r_53259660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53259660_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w1_58186_53261680;
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

SignalI dbus__r_53393580_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makedbus__r_53393580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53393580_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w1_58186_53261680;
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

SignalI abus__r_53393440_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_53393440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53393440_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w1_58186_53261680;
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

SignalI mem_49603920_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makemem_49603920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49603920_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w1_58186_53261680;
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
         src0 = make__71519640();
         src1 = make__71519620();
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

Scope raddr_58187_53261280;

Scope makeraddr_58187_53261280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58187_53261280 = scope;
   scope->owner = (Object)channel__w1_58186_53261680;
   scope->name = "raddr:187";
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

Scope rinc_58192_53260860;

Scope makerinc_58192_53260860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58192_53260860 = scope;
   scope->owner = (Object)channel__w1_58186_53261680;
   scope->name = "rinc:192";
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

Scope rdec_58196_53260380;

Scope makerdec_58196_53260380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58196_53260380 = scope;
   scope->owner = (Object)channel__w1_58186_53261680;
   scope->name = "rdec:196";
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

Behavior __51085040;

Behavior make__51085040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51085040 = behavior;
   behavior->owner = (Object)channel__w1_58186_53261680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg = realloc(clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg[clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__50402080();

   return behavior;
}

Behavior __71175260;

Behavior make__71175260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71175260 = behavior;
   behavior->owner = (Object)channel__w1_58186_53261680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53393580_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   dbus__r_53393580_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__r_53393580_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(dbus__r_53393580_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,dbus__r_53393580_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__r_53393580_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[dbus__r_53393580_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71175480();

   return behavior;
}

Behavior __71175020;

Behavior make__71175020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71175020 = behavior;
   behavior->owner = (Object)channel__w1_58186_53261680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58195_50071300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58195_50071300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58195_50071300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58195_50071300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58195_50071300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58195_50071300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58195_50071300_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71175220();

   return behavior;
}

Behavior __71174200;

Behavior make__71174200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71174200 = behavior;
   behavior->owner = (Object)channel__w1_58186_53261680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53259660_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   trig__r_53259660_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   trig__r_53259660_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(trig__r_53259660_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,trig__r_53259660_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
trig__r_53259660_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[trig__r_53259660_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71174420();

   return behavior;
}

Behavior __71173980;

Behavior make__71173980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71173980 = behavior;
   behavior->owner = (Object)channel__w1_58186_53261680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58193_50071260_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71174160();

   return behavior;
}

Behavior __71173460;

Behavior make__71173460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71173460 = behavior;
   behavior->owner = (Object)channel__w1_58186_53261680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53393440_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   abus__r_53393440_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_53393440_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(abus__r_53393440_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,abus__r_53393440_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_53393440_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[abus__r_53393440_channel__w1_58186_53261680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71173660();

   return behavior;
}

Behavior __71173260;

Behavior make__71173260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71173260 = behavior;
   behavior->owner = (Object)channel__w1_58186_53261680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58194_50071140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71173420();

   return behavior;
}

Scope makechannel__w1_58186_53261680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58186_53261680 = scope;
   scope->owner = (Object)layer0_58_84_52407180;
   scope->name = "channel_w1:186";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53259660();
   scope->inners[1] = makedbus__r_53393580();
   scope->inners[2] = makeabus__r_53393440();
   scope->inners[3] = makemem_49603920();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58187_53261280();
   scope->scopes[1] = makerinc_58192_53260860();
   scope->scopes[2] = makerdec_58196_53260380();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51085040();
   scope->behaviors[1] = make__71175260();
   scope->behaviors[2] = make__71175020();
   scope->behaviors[3] = make__71174200();
   scope->behaviors[4] = make__71173980();
   scope->behaviors[5] = make__71173460();
   scope->behaviors[6] = make__71173260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58201_51084580;

SignalI reg__0_50071860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereg__0_50071860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50071860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__accum_58201_51084580;
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

SignalI reg__1_51441860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereg__1_51441860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51441860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__accum_58201_51084580;
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

Scope anum_58202_51084060;

Scope makeanum_58202_51084060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58202_51084060 = scope;
   scope->owner = (Object)channel__accum_58201_51084580;
   scope->name = "anum:202";
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

Scope raddr_58205_51083360;

Scope makeraddr_58205_51083360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58205_51083360 = scope;
   scope->owner = (Object)channel__accum_58201_51084580;
   scope->name = "raddr:205";
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

Scope waddr_58209_51082700;

Scope makewaddr_58209_51082700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58209_51082700 = scope;
   scope->owner = (Object)channel__accum_58201_51084580;
   scope->name = "waddr:209";
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

Scope rinc_58213_51082040;

SignalI abus__r_51079360_rinc_58213_51082040_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_51079360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51079360_rinc_58213_51082040_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rinc_58213_51082040;
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

Scope makerinc_58213_51082040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58213_51082040 = scope;
   scope->owner = (Object)channel__accum_58201_51084580;
   scope->name = "rinc:213";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51079360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58218_51078700;

SignalI abus__w_51101380_winc_58218_51078700_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__w_51101380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51101380_winc_58218_51078700_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)winc_58218_51078700;
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

Scope makewinc_58218_51078700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58218_51078700 = scope;
   scope->owner = (Object)channel__accum_58201_51084580;
   scope->name = "winc:218";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51101380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58223_51101220;

SignalI abus__r_51100640_rdec_58223_51101220_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_51100640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51100640_rdec_58223_51101220_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rdec_58223_51101220;
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

Scope makerdec_58223_51101220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58223_51101220 = scope;
   scope->owner = (Object)channel__accum_58201_51084580;
   scope->name = "rdec:223";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51100640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58228_51100460;

SignalI abus__w_51099700_wdec_58228_51100460_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__w_51099700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51099700_wdec_58228_51100460_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)wdec_58228_51100460;
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

Scope makewdec_58228_51100460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58228_51100460 = scope;
   scope->owner = (Object)channel__accum_58201_51084580;
   scope->name = "wdec:228";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51099700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __71244980;

Behavior make__71244980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71244980 = behavior;
   behavior->owner = (Object)channel__accum_58201_51084580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50071860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   reg__0_50071860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   reg__0_50071860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(reg__0_50071860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,reg__0_50071860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__0_50071860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[reg__0_50071860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71245180();

   return behavior;
}

Behavior __71244780;

Behavior make__71244780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71244780 = behavior;
   behavior->owner = (Object)channel__accum_58201_51084580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58203_50698880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58203_50698880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58203_50698880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58203_50698880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58203_50698880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58203_50698880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58203_50698880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71244940();

   return behavior;
}

Behavior __71244120;

Behavior make__71244120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71244120 = behavior;
   behavior->owner = (Object)channel__accum_58201_51084580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51441860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   reg__1_51441860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   reg__1_51441860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(reg__1_51441860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,reg__1_51441860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__1_51441860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[reg__1_51441860_channel__accum_58201_51084580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71244440();

   return behavior;
}

Behavior __71243700;

Behavior make__71243700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71243700 = behavior;
   behavior->owner = (Object)channel__accum_58201_51084580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58204_51045580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58204_51045580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58204_51045580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58204_51045580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58204_51045580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58204_51045580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58204_51045580_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71244040();

   return behavior;
}

Scope makechannel__accum_58201_51084580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58201_51084580 = scope;
   scope->owner = (Object)layer0_58_84_52407180;
   scope->name = "channel_accum:201";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50071860();
   scope->inners[1] = makereg__1_51441860();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58202_51084060();
   scope->scopes[1] = makeraddr_58205_51083360();
   scope->scopes[2] = makewaddr_58209_51082700();
   scope->scopes[3] = makerinc_58213_51082040();
   scope->scopes[4] = makewinc_58218_51078700();
   scope->scopes[5] = makerdec_58223_51101220();
   scope->scopes[6] = makewdec_58228_51100460();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__71244980();
   scope->behaviors[1] = make__71244780();
   scope->behaviors[2] = make__71244120();
   scope->behaviors[3] = make__71243700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58233_52243140;

SignalI lv0_52362420_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelv0_52362420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52362420_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58233_52243140;
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

SignalI lv1_52424760_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelv1_52424760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_52424760_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58233_52243140;
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

SignalI av0_52508000_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeav0_52508000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_52508000_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58233_52243140;
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

SignalI av1_52613620_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeav1_52613620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_52613620_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58233_52243140;
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

SignalI rv_52676000_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makerv_52676000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_52676000_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58233_52243140;
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

SignalI lvok0_52675960_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelvok0_52675960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52675960_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58233_52243140;
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

SignalI lvok1_52675940_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelvok1_52675940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_52675940_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58233_52243140;
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

SignalI rvok_52675920_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makervok_52675920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_52675920_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58233_52243140;
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

SignalI wok0_52675900_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makewok0_52675900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_52675900_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58233_52243140;
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

SignalI wok1_52675880_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makewok1_52675880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_52675880_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58233_52243140;
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

SignalI run_52675860_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makerun_52675860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52675860_mac__n1_58233_52243140_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58233_52243140;
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

Behavior __52191300;

Behavior make__52191300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52191300 = behavior;
   behavior->owner = (Object)mac__n1_58233_52243140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos = realloc(clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos[clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__52675660();

   return behavior;
}

Scope makemac__n1_58233_52243140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58233_52243140 = scope;
   scope->owner = (Object)layer0_58_84_52407180;
   scope->name = "mac_n1:233";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52362420();
   scope->inners[1] = makelv1_52424760();
   scope->inners[2] = makeav0_52508000();
   scope->inners[3] = makeav1_52613620();
   scope->inners[4] = makerv_52676000();
   scope->inners[5] = makelvok0_52675960();
   scope->inners[6] = makelvok1_52675940();
   scope->inners[7] = makervok_52675920();
   scope->inners[8] = makewok0_52675900();
   scope->inners[9] = makewok1_52675880();
   scope->inners[10] = makerun_52675860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52191300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58240_52215200;

SignalI trig__r_52213020_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI maketrig__r_52213020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_52213020_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58240_52215200;
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

SignalI dbus__r_52326420_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makedbus__r_52326420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_52326420_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58240_52215200;
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

SignalI abus__r_52326320_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_52326320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52326320_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58240_52215200;
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

SignalI mem_52473000_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makemem_52473000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_52473000_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58240_52215200;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__71590020(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58241_52214740;

Scope makeraddr_58241_52214740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58241_52214740 = scope;
   scope->owner = (Object)channel__b0_58240_52215200;
   scope->name = "raddr:241";
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

Scope rinc_58246_52214300;

Scope makerinc_58246_52214300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58246_52214300 = scope;
   scope->owner = (Object)channel__b0_58240_52215200;
   scope->name = "rinc:246";
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

Scope rdec_58250_52213600;

Scope makerdec_58250_52213600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58250_52213600 = scope;
   scope->owner = (Object)channel__b0_58240_52215200;
   scope->name = "rdec:250";
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

Behavior __52955120;

Behavior make__52955120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52955120 = behavior;
   behavior->owner = (Object)channel__b0_58240_52215200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg = realloc(clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg[clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__52678600();

   return behavior;
}

Behavior __71241220;

Behavior make__71241220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71241220 = behavior;
   behavior->owner = (Object)channel__b0_58240_52215200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_52326420_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   dbus__r_52326420_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__r_52326420_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(dbus__r_52326420_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,dbus__r_52326420_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__r_52326420_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[dbus__r_52326420_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71241500();

   return behavior;
}

Behavior __71241000;

Behavior make__71241000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71241000 = behavior;
   behavior->owner = (Object)channel__b0_58240_52215200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58244_51505880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58244_51505880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58244_51505880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58244_51505880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58244_51505880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58244_51505880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58244_51505880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71241180();

   return behavior;
}

Behavior __71240500;

Behavior make__71240500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71240500 = behavior;
   behavior->owner = (Object)channel__b0_58240_52215200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_52213020_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   trig__r_52213020_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   trig__r_52213020_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(trig__r_52213020_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,trig__r_52213020_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
trig__r_52213020_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[trig__r_52213020_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71240700();

   return behavior;
}

Behavior __71240180;

Behavior make__71240180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71240180 = behavior;
   behavior->owner = (Object)channel__b0_58240_52215200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58242_51505840_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71240440();

   return behavior;
}

Behavior __71239580;

Behavior make__71239580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71239580 = behavior;
   behavior->owner = (Object)channel__b0_58240_52215200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52326320_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   abus__r_52326320_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_52326320_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(abus__r_52326320_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,abus__r_52326320_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_52326320_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[abus__r_52326320_channel__b0_58240_52215200_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71239760();

   return behavior;
}

Behavior __71239240;

Behavior make__71239240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71239240 = behavior;
   behavior->owner = (Object)channel__b0_58240_52215200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58243_51505760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58243_51505760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58243_51505760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58243_51505760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58243_51505760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58243_51505760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58243_51505760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71239540();

   return behavior;
}

Scope makechannel__b0_58240_52215200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58240_52215200 = scope;
   scope->owner = (Object)layer0_58_84_52407180;
   scope->name = "channel_b0:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_52213020();
   scope->inners[1] = makedbus__r_52326420();
   scope->inners[2] = makeabus__r_52326320();
   scope->inners[3] = makemem_52473000();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58241_52214740();
   scope->scopes[1] = makerinc_58246_52214300();
   scope->scopes[2] = makerdec_58250_52213600();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52955120();
   scope->behaviors[1] = make__71241220();
   scope->behaviors[2] = make__71241000();
   scope->behaviors[3] = make__71240500();
   scope->behaviors[4] = make__71240180();
   scope->behaviors[5] = make__71239580();
   scope->behaviors[6] = make__71239240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58255_52955000;

SignalI trig__r_52977080_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI maketrig__r_52977080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_52977080_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b1_58255_52955000;
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

SignalI dbus__r_53060040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makedbus__r_53060040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53060040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b1_58255_52955000;
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

SignalI abus__r_53059920_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_53059920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53059920_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b1_58255_52955000;
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

SignalI mem_53230040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makemem_53230040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_53230040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b1_58255_52955000;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__71613340(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58256_52954180;

Scope makeraddr_58256_52954180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58256_52954180 = scope;
   scope->owner = (Object)channel__b1_58255_52955000;
   scope->name = "raddr:256";
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

Scope rinc_58261_52953620;

Scope makerinc_58261_52953620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58261_52953620 = scope;
   scope->owner = (Object)channel__b1_58255_52955000;
   scope->name = "rinc:261";
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

Scope rdec_58265_52977580;

Scope makerdec_58265_52977580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58265_52977580 = scope;
   scope->owner = (Object)channel__b1_58255_52955000;
   scope->name = "rdec:265";
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

Behavior __49453940;

Behavior make__49453940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49453940 = behavior;
   behavior->owner = (Object)channel__b1_58255_52955000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg = realloc(clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg[clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__45711720();

   return behavior;
}

Behavior __71261700;

Behavior make__71261700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71261700 = behavior;
   behavior->owner = (Object)channel__b1_58255_52955000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53060040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   dbus__r_53060040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__r_53060040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(dbus__r_53060040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,dbus__r_53060040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__r_53060040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[dbus__r_53060040_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71237660();

   return behavior;
}

Behavior __71261240;

Behavior make__71261240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71261240 = behavior;
   behavior->owner = (Object)channel__b1_58255_52955000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58259_52240680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58259_52240680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58259_52240680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58259_52240680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58259_52240680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58259_52240680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58259_52240680_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71261660();

   return behavior;
}

Behavior __71258500;

Behavior make__71258500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71258500 = behavior;
   behavior->owner = (Object)channel__b1_58255_52955000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_52977080_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   trig__r_52977080_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   trig__r_52977080_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(trig__r_52977080_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,trig__r_52977080_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
trig__r_52977080_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[trig__r_52977080_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71259080();

   return behavior;
}

Behavior __71258020;

Behavior make__71258020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71258020 = behavior;
   behavior->owner = (Object)channel__b1_58255_52955000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58257_52240640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71258440();

   return behavior;
}

Behavior __71257160;

Behavior make__71257160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71257160 = behavior;
   behavior->owner = (Object)channel__b1_58255_52955000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53059920_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   abus__r_53059920_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_53059920_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(abus__r_53059920_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,abus__r_53059920_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_53059920_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[abus__r_53059920_channel__b1_58255_52955000_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71257480();

   return behavior;
}

Behavior __71256780;

Behavior make__71256780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71256780 = behavior;
   behavior->owner = (Object)channel__b1_58255_52955000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58258_52240560_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58258_52240560_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58258_52240560_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58258_52240560_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58258_52240560_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58258_52240560_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58258_52240560_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71257040();

   return behavior;
}

Scope makechannel__b1_58255_52955000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58255_52955000 = scope;
   scope->owner = (Object)layer0_58_84_52407180;
   scope->name = "channel_b1:255";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_52977080();
   scope->inners[1] = makedbus__r_53060040();
   scope->inners[2] = makeabus__r_53059920();
   scope->inners[3] = makemem_53230040();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58256_52954180();
   scope->scopes[1] = makerinc_58261_52953620();
   scope->scopes[2] = makerdec_58265_52977580();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49453940();
   scope->behaviors[1] = make__71261700();
   scope->behaviors[2] = make__71261240();
   scope->behaviors[3] = make__71258500();
   scope->behaviors[4] = make__71258020();
   scope->behaviors[5] = make__71257160();
   scope->behaviors[6] = make__71256780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58270_49453800;

SignalI reg__0_49671540_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereg__0_49671540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49671540_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__z_58270_49453800;
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

SignalI reg__1_50355100_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereg__1_50355100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50355100_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__z_58270_49453800;
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

Scope anum_58271_49469900;

Scope makeanum_58271_49469900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58271_49469900 = scope;
   scope->owner = (Object)channel__z_58270_49453800;
   scope->name = "anum:271";
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

Scope raddr_58274_49468840;

Scope makeraddr_58274_49468840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58274_49468840 = scope;
   scope->owner = (Object)channel__z_58270_49453800;
   scope->name = "raddr:274";
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

Scope waddr_58278_49468020;

Scope makewaddr_58278_49468020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58278_49468020 = scope;
   scope->owner = (Object)channel__z_58270_49453800;
   scope->name = "waddr:278";
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

Scope rinc_58282_49467300;

SignalI abus__r_49466000_rinc_58282_49467300_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_49466000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49466000_rinc_58282_49467300_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rinc_58282_49467300;
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

Scope makerinc_58282_49467300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58282_49467300 = scope;
   scope->owner = (Object)channel__z_58270_49453800;
   scope->name = "rinc:282";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49466000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58286_49487400;

SignalI abus__w_49486540_winc_58286_49487400_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__w_49486540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49486540_winc_58286_49487400_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)winc_58286_49487400;
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

Scope makewinc_58286_49487400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58286_49487400 = scope;
   scope->owner = (Object)channel__z_58270_49453800;
   scope->name = "winc:286";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49486540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58290_49486280;

SignalI abus__r_49482620_rdec_58290_49486280_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_49482620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49482620_rdec_58290_49486280_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rdec_58290_49486280;
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

Scope makerdec_58290_49486280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58290_49486280 = scope;
   scope->owner = (Object)channel__z_58270_49453800;
   scope->name = "rdec:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49482620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58295_49482400;

SignalI abus__w_49481360_wdec_58295_49482400_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__w_49481360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49481360_wdec_58295_49482400_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)wdec_58295_49482400;
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

Scope makewdec_58295_49482400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58295_49482400 = scope;
   scope->owner = (Object)channel__z_58270_49453800;
   scope->name = "wdec:295";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49481360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __71276020;

Behavior make__71276020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71276020 = behavior;
   behavior->owner = (Object)channel__z_58270_49453800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49671540_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   reg__0_49671540_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   reg__0_49671540_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(reg__0_49671540_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,reg__0_49671540_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__0_49671540_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[reg__0_49671540_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71277420();

   return behavior;
}

Behavior __71275500;

Behavior make__71275500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71275500 = behavior;
   behavior->owner = (Object)channel__z_58270_49453800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58272_52142280_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58272_52142280_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58272_52142280_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58272_52142280_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58272_52142280_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58272_52142280_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58272_52142280_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71275740();

   return behavior;
}

Behavior __71274240;

Behavior make__71274240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71274240 = behavior;
   behavior->owner = (Object)channel__z_58270_49453800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50355100_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   reg__1_50355100_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   reg__1_50355100_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(reg__1_50355100_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,reg__1_50355100_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__1_50355100_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[reg__1_50355100_channel__z_58270_49453800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71274660();

   return behavior;
}

Behavior __71274040;

Behavior make__71274040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71274040 = behavior;
   behavior->owner = (Object)channel__z_58270_49453800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58273_51951640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58273_51951640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58273_51951640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58273_51951640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58273_51951640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58273_51951640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58273_51951640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71274200();

   return behavior;
}

Scope makechannel__z_58270_49453800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58270_49453800 = scope;
   scope->owner = (Object)layer0_58_84_52407180;
   scope->name = "channel_z:270";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49671540();
   scope->inners[1] = makereg__1_50355100();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58271_49469900();
   scope->scopes[1] = makeraddr_58274_49468840();
   scope->scopes[2] = makewaddr_58278_49468020();
   scope->scopes[3] = makerinc_58282_49467300();
   scope->scopes[4] = makewinc_58286_49487400();
   scope->scopes[5] = makerdec_58290_49486280();
   scope->scopes[6] = makewdec_58295_49482400();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__71276020();
   scope->behaviors[1] = make__71275500();
   scope->behaviors[2] = make__71274240();
   scope->behaviors[3] = make__71274040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58300_50595640;

SignalI lv0_51837980_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelv0_51837980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51837980_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58300_50595640;
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

SignalI lv1_52165740_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelv1_52165740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_52165740_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58300_50595640;
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

SignalI rv0_51953320_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makerv0_51953320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_51953320_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58300_50595640;
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

SignalI rv1_52248160_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makerv1_52248160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_52248160_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58300_50595640;
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

SignalI lvok0_52248120_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelvok0_52248120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52248120_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58300_50595640;
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

SignalI lvok1_52248100_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelvok1_52248100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_52248100_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58300_50595640;
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

SignalI rvok0_52248080_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makervok0_52248080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52248080_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58300_50595640;
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

SignalI rvok1_52248060_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makervok1_52248060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_52248060_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58300_50595640;
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

SignalI run_52248020_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makerun_52248020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52248020_add__n_58300_50595640_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58300_50595640;
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

Behavior __50282960;

Behavior make__50282960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50282960 = behavior;
   behavior->owner = (Object)add__n_58300_50595640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos = realloc(clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos[clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__52247900();

   return behavior;
}

Scope makeadd__n_58300_50595640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58300_50595640 = scope;
   scope->owner = (Object)layer0_58_84_52407180;
   scope->name = "add_n:300";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51837980();
   scope->inners[1] = makelv1_52165740();
   scope->inners[2] = makerv0_51953320();
   scope->inners[3] = makerv1_52248160();
   scope->inners[4] = makelvok0_52248120();
   scope->inners[5] = makelvok1_52248100();
   scope->inners[6] = makervok0_52248080();
   scope->inners[7] = makervok1_52248060();
   scope->inners[8] = makerun_52248020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50282960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58642100;

Behavior make__58642100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58642100 = behavior;
   behavior->owner = (Object)layer0_58_84_52407180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos = realloc(clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos[clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__58643560();

   return behavior;
}

Behavior __59218180;

Behavior make__59218180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59218180 = behavior;
   behavior->owner = (Object)layer0_58_84_52407180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos = realloc(clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos[clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__58641980();

   return behavior;
}

Behavior __59735600;

Behavior make__59735600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59735600 = behavior;
   behavior->owner = (Object)layer0_58_84_52407180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos = realloc(clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos[clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__59218060();

   return behavior;
}

Behavior __71125640;

Behavior make__71125640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71125640 = behavior;
   behavior->owner = (Object)layer0_58_84_52407180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_59733140_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   req_59733140_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   req_59733140_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(req_59733140_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,req_59733140_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
req_59733140_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[req_59733140_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_50282780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__mac_50282780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__mac_50282780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__mac_50282780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__mac_50282780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__mac_50282780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__mac_50282780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71126000();

   return behavior;
}

Behavior __71155980;

Behavior make__71155980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71155980 = behavior;
   behavior->owner = (Object)layer0_58_84_52407180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack_50282800_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_52377880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   value__z0_52377880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   value__z0_52377880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(value__z0_52377880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,value__z0_52377880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
value__z0_52377880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[value__z0_52377880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_52456080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   value__z1_52456080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   value__z1_52456080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(value__z1_52456080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,value__z1_52456080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
value__z1_52456080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[value__z1_52456080_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_52698780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__a0_52698780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__a0_52698780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__a0_52698780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__a0_52698780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__a0_52698780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__a0_52698780_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_52698760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__a1_52698760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__a1_52698760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__a1_52698760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__a1_52698760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__a1_52698760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__a1_52698760_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71126220();

   return behavior;
}

Behavior __71155800;

Behavior make__71155800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71155800 = behavior;
   behavior->owner = (Object)layer0_58_84_52407180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_52711820_counter_58_843_52714880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__mac_52711820_counter_58_843_52714880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__mac_52711820_counter_58_843_52714880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__mac_52711820_counter_58_843_52714880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__mac_52711820_counter_58_843_52714880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__mac_52711820_counter_58_843_52714880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__mac_52711820_counter_58_843_52714880_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_60069680_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   a_60069680_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   a_60069680_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(a_60069680_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,a_60069680_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
a_60069680_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[a_60069680_func0_58_843_59929720_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_52612160_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   a_52612160_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   a_52612160_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(a_52612160_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,a_52612160_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
a_52612160_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[a_52612160_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71126160();

   return behavior;
}

Scope makelayer0_58_84_52407180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_52407180 = scope;
   scope->owner = (Object)layer0_58_841_59735240;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_52711580();
   scope->systemIs[1] = makefunc0_60069540();
   scope->systemIs[2] = makefunc1_52611220();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_50282820();
   scope->inners[1] = makeack_50282800();
   scope->inners[2] = makeack__mac_50282780();
   scope->inners[3] = makeack__add_50282760();
   scope->inners[4] = make_58180_50463080();
   scope->inners[5] = make_58178_50463040();
   scope->inners[6] = make_58179_50486840();
   scope->inners[7] = make_58203_50698880();
   scope->inners[8] = make_58204_51045580();
   scope->inners[9] = make_58195_50071300();
   scope->inners[10] = make_58193_50071260();
   scope->inners[11] = make_58194_50071140();
   scope->inners[12] = make_58244_51505880();
   scope->inners[13] = make_58245_51505860();
   scope->inners[14] = make_58242_51505840();
   scope->inners[15] = make_58243_51505760();
   scope->inners[16] = make_58272_52142280();
   scope->inners[17] = make_58273_51951640();
   scope->inners[18] = make_58259_52240680();
   scope->inners[19] = make_58260_52240660();
   scope->inners[20] = make_58257_52240640();
   scope->inners[21] = make_58258_52240560();
   scope->inners[22] = makevalue__z0_52377880();
   scope->inners[23] = makevalue__z1_52456080();
   scope->inners[24] = makevalue__a0_52600300();
   scope->inners[25] = makevalue__a1_52699040();
   scope->inners[26] = makeflag__z0_52699020();
   scope->inners[27] = makeflag__z1_52698960();
   scope->inners[28] = makeack__a0_52698780();
   scope->inners[29] = makeack__a1_52698760();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58171_52406440();
   scope->scopes[1] = makechannel__w1_58186_53261680();
   scope->scopes[2] = makechannel__accum_58201_51084580();
   scope->scopes[3] = makemac__n1_58233_52243140();
   scope->scopes[4] = makechannel__b0_58240_52215200();
   scope->scopes[5] = makechannel__b1_58255_52955000();
   scope->scopes[6] = makechannel__z_58270_49453800();
   scope->scopes[7] = makeadd__n_58300_50595640();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58642100();
   scope->behaviors[1] = make__59218180();
   scope->behaviors[2] = make__59735600();
   scope->behaviors[3] = make__71125640();
   scope->behaviors[4] = make__71155980();
   scope->behaviors[5] = make__71155800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_841_59735240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_841_59735240 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T1";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59733180();
   systemT->inputs[1] = makerst_59733160();
   systemT->inputs[2] = makereq_59733140();
   systemT->inputs[3] = make_58103_59841220();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_59841180();
   systemT->outputs[1] = make_58101_59841160();
   systemT->outputs[2] = make_58102_59841080();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58143_59971600();
   systemT->inouts[1] = make_58144_60071460();

   systemT->scope = makelayer0_58_84_52407180();

   return systemT;
}