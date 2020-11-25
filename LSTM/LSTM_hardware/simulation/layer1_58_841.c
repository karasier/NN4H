#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_841_51439800;

SignalI clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeclk_51459160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_841_51439800;
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

SignalI rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makerst_51459140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_841_51439800;
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

SignalI req_51459080_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereq_51459080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_51459080_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_841_51439800;
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

SignalI _58165_51728820_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58165_51728820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58165_51728820_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_841_51439800;
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

SignalI _58166_52004560_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58166_52004560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58166_52004560_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_841_51439800;
   signalI->name = ":166";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_52004280_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__layer_52004280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_52004280_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_841_51439800;
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

SignalI _58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58167_52004000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_841_51439800;
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

SignalI _58131_52346060_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58131_52346060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58131_52346060_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_841_51439800;
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

Block __67221200;

Block __67220980;

void code__67220980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77537520(),ack_63371980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77537460(),ack__mac_63371960_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77537400(),ack__add_63371940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__67220980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67220980 = block;
   block->owner = (Object)__67221200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67220980;

   return block;
};

void code__67221200() {
   {
      Value cond = rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__67220980();
   }
      }
   }
}

Block make__67221200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67221200 = block;
   block->owner = (Object)__67219980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67221200;

   return block;
};

Block __67219840;

Block __67219260;

Block __67219100;

void code__67219100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58384_63663660_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,value__z0_63750980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77627280(),flag__z0_63871000_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__67219100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67219100 = block;
   block->owner = (Object)__67219260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67219100;

   return block;
};

void code__67219260() {
 code__67219100();
}

Block make__67219260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67219260 = block;
   block->owner = (Object)__67219840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67219260;

   return block;
};

Block __67219640;

void code__67219640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77627220(),flag__z0_63871000_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__67219640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67219640 = block;
   block->owner = (Object)__67219840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67219640;

   return block;
};

void code__67219840() {
   {
      Value cond = ack__add_63371940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__67219260();
   }
   else {
  code__67219640();
   }
      }
   }
}

Block make__67219840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67219840 = block;
   block->owner = (Object)__49387980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67219840;

   return block;
};

Block __49385820;

Block __49537720;

void code__49537720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77627120(),ack__a0_63870980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__49537720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49537720 = block;
   block->owner = (Object)__49385820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49537720;

   return block;
};

Block __48854860;

Block __48854460;

void code__48854460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_63871020_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58131_52346060_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77626900(),ack__a0_63870980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__48854460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48854460 = block;
   block->owner = (Object)__48854860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48854460;

   return block;
};

void code__48854860() {
 code__48854460();
}

Block make__48854860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48854860 = block;
   block->owner = (Object)__49385820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48854860;

   return block;
};

void code__49385820() {
   {
      Value cond = rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49537720();
   }
   else if (value2integer(flag__z0_63871000_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value)) {
  code__48854860();
   }
      }
   }
}

Block make__49385820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49385820 = block;
   block->owner = (Object)__51441080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49385820;

   return block;
};

Block __77437960;

void code__77437960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_51459080_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_63371960_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_63372000_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77437960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77437960 = block;
   block->owner = (Object)__77437700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77437960;

   return block;
};

Block __77438180;

void code__77438180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,clk_63865300_counter_58_8400_63867140_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_63371980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,ack_63865280_counter_58_8400_63867140_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,rst_63865260_counter_58_8400_63867140_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_63750980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,z__value_66591200_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_63870980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,ack__layer_52004280_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77438180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77438180 = block;
   block->owner = (Object)__77431600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77438180;

   return block;
};

Block __77438120;

void code__77438120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_63865220_counter_58_8400_63867140_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,ack__mac_63371960_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58372_63568220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_66742200_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,value__a0_63871020_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77438120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77438120 = block;
   block->owner = (Object)__77431440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77438120;

   return block;
};

Block __55541940;

void code__55541940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54615800_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(abus__r_57693380_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_57693460_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55541940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55541940 = block;
   block->owner = (Object)__57132020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55541940;

   return block;
};

Block __77455240;

void code__77455240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_57693460_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58331_63418300_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77455240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77455240 = block;
   block->owner = (Object)__77455040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77455240;

   return block;
};

Block __77455000;

void code__77455000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58331_63418300_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,dbus__r_57693460_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77455000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77455000 = block;
   block->owner = (Object)__77454780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77455000;

   return block;
};

Block __77454480;

void code__77454480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_57549860_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77454480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77454480 = block;
   block->owner = (Object)__77454320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77454480;

   return block;
};

Block __77454280;

void code__77454280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,trig__r_57549860_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77454280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77454280 = block;
   block->owner = (Object)__77454120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77454280;

   return block;
};

Block __77453800;

void code__77453800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_57693380_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77453800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77453800 = block;
   block->owner = (Object)__77453640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77453800;

   return block;
};

Block __77453600;

void code__77453600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,abus__r_57693380_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77453600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77453600 = block;
   block->owner = (Object)__77453440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77453600;

   return block;
};

Block __77452120;

void code__77452120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57602300_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58339_63480940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77452120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77452120 = block;
   block->owner = (Object)__77451960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77452120;

   return block;
};

Block __77451920;

void code__77451920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58339_63480940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,reg__0_57602300_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77451920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77451920 = block;
   block->owner = (Object)__77451740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77451920;

   return block;
};

Block __54487940;

Block __54487580;

Block __54486980;

void code__54486980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77520920(),_58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54486980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54486980 = block;
   block->owner = (Object)__54487580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54486980;

   return block;
};

void code__54487580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77521000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54486980();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77545400(),_58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54487580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54487580 = block;
   block->owner = (Object)__54487940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54487580;

   return block;
};

Block __54485900;

Block __54485440;

void code__54485440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77545240(),_58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54485440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54485440 = block;
   block->owner = (Object)__54485900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54485440;

   return block;
};

void code__54485900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77545320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54485440();
   }
      }
   }
}

Block make__54485900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54485900 = block;
   block->owner = (Object)__54487940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54485900;

   return block;
};

Block __54417920;

void code__54417920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77544980(),rvok_54488160_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77544920(),lvok0_54488340_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77544860(),wok0_54488100_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54417920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54417920 = block;
   block->owner = (Object)__54487940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54417920;

   return block;
};

Block __54887640;

Block __54886660;

Block __54844660;

Block __54843540;

Block __54842340;

void code__54842340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58165_51728820_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,rv_54488400_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54842340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54842340 = block;
   block->owner = (Object)__54843540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54842340;

   return block;
};

Block __55913240;

void code__55913240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58166_52004560_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,rv_54488400_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55913240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55913240 = block;
   block->owner = (Object)__54843540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55913240;

   return block;
};

void code__54843540() {
{
      Value value = _58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__77544440())) {
    code__54842340();
         }
         else if (value2integer(value) == value2integer(make__77544340())) {
    code__55913240();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77544160(),rvok_54488160_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
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
                  src0 = _58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__77544040();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77543960();
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
                        src0 = _58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77543720();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__77543660();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54843540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54843540 = block;
   block->owner = (Object)__54844660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54843540;

   return block;
};

void code__54844660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77544560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54843540();
   }
      }
   }
}

Block make__54844660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54844660 = block;
   block->owner = (Object)__54886660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54844660;

   return block;
};

void code__54886660() {
 code__54844660();
}

Block make__54886660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54886660 = block;
   block->owner = (Object)__54887640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54886660;

   return block;
};

Block __57338780;

Block __57338440;

Block __57337940;

Block __57309400;

Block __57309160;

void code__57309160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58331_63418300_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,lv0_51877280_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__77543200(),lvok0_54488340_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57309160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57309160 = block;
   block->owner = (Object)__57309400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57309160;

   return block;
};

void code__57309400() {
 code__57309160();
}

Block make__57309400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57309400 = block;
   block->owner = (Object)__57337940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57309400;

   return block;
};

Block __57337600;

void code__57337600() {
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
                  src0 = _58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__77543100();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77543060();
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
                        src0 = _58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77542800();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__77542740();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77542620(),_58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57337600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57337600 = block;
   block->owner = (Object)__57337940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57337600;

   return block;
};

void code__57337940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77543360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57309400();
   }
   else {
  code__57337600();
   }
      }
   }
}

Block make__57337940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57337940 = block;
   block->owner = (Object)__57338440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57337940;

   return block;
};

void code__57338440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77543460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57337940();
   }
      }
   }
}

Block make__57338440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57338440 = block;
   block->owner = (Object)__57338780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57338440;

   return block;
};

void code__57338780() {
 code__57338440();
}

Block make__57338780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57338780 = block;
   block->owner = (Object)__54887640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57338780;

   return block;
};

Block __46985700;

Block __46982260;

Block __46981440;

void code__46981440() {
}

Block make__46981440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46981440 = block;
   block->owner = (Object)__46982260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46981440;

   return block;
};

Block __51877620;

void code__51877620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_50967580_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58339_63480940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77541720(),wok0_54488100_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__51877620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51877620 = block;
   block->owner = (Object)__46982260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51877620;

   return block;
};

void code__46982260() {
 code__46981440();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_50967580_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
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
                              src0 = lv0_51877280_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_54488400_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77541940();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_50967580_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__51877620();
}

Block make__46982260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46982260 = block;
   block->owner = (Object)__46985700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46982260;

   return block;
};

void code__46985700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77542380(),ack_63371980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77542320(),run_54488080_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__46982260();
}

Block make__46985700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46985700 = block;
   block->owner = (Object)__54887640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46985700;

   return block;
};

Block __52654380;

void code__52654380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77541620(),wok0_54488100_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77541560(),lvok0_54488340_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77541500(),rvok_54488160_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__52654380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52654380 = block;
   block->owner = (Object)__54887640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52654380;

   return block;
};

void code__54887640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77544700(),run_54488080_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_54488160_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54886660();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_54488340_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57338780();
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
               src0 = lvok0_54488340_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               src1 = rvok_54488160_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_54488100_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46985700();
   }
      }
   }
   {
      Value cond = wok0_54488100_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52654380();
   }
      }
   }
}

Block make__54887640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54887640 = block;
   block->owner = (Object)__54487940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54887640;

   return block;
};

Block __54416660;

void code__54416660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77541440(),av0_50967580_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54416660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54416660 = block;
   block->owner = (Object)__54487940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54416660;

   return block;
};

void code__54487940() {
 code__54487580();
 code__54485900();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77545180(),ack_63371980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77545120(),run_54488080_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_54488080_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54417920();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_63372000_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         src1 = run_54488080_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54887640();
   }
   else {
  code__54416660();
   }
      }
   }
}

Block make__54487940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54487940 = block;
   block->owner = (Object)__52652320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54487940;

   return block;
};

Block __55542740;

void code__55542740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54909300_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(abus__r_54398980_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54399060_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55542740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55542740 = block;
   block->owner = (Object)__56343240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55542740;

   return block;
};

Block __77449920;

void code__77449920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54399060_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58371_63568240_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77449920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77449920 = block;
   block->owner = (Object)__77449760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77449920;

   return block;
};

Block __77449700;

void code__77449700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58371_63568240_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,dbus__r_54399060_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77449700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77449700 = block;
   block->owner = (Object)__77449540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77449700;

   return block;
};

Block __77449240;

void code__77449240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_54228680_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77449240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77449240 = block;
   block->owner = (Object)__77449080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77449240;

   return block;
};

Block __77449040;

void code__77449040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,trig__r_54228680_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77449040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77449040 = block;
   block->owner = (Object)__77448860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77449040;

   return block;
};

Block __77448480;

void code__77448480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_54398980_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58370_63568120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77448480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77448480 = block;
   block->owner = (Object)__77448320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77448480;

   return block;
};

Block __77448280;

void code__77448280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58370_63568120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,abus__r_54398980_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77448280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77448280 = block;
   block->owner = (Object)__77448120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77448280;

   return block;
};

Block __77463220;

void code__77463220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56555500_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58384_63663660_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77463220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77463220 = block;
   block->owner = (Object)__77463020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77463220;

   return block;
};

Block __77462980;

void code__77462980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58384_63663660_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,reg__0_56555500_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__77462980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77462980 = block;
   block->owner = (Object)__77462760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77462980;

   return block;
};

Block __57823160;

Block __57822640;

void code__57822640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77540220(),_58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57822640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57822640 = block;
   block->owner = (Object)__57823160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57822640;

   return block;
};

Block __57820140;

Block __57819700;

void code__57819700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58339_63480940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,lv0_57572420_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77539700(),lvok0_57823380_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57819700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57819700 = block;
   block->owner = (Object)__57820140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57819700;

   return block;
};

Block __62605720;

Block __62605400;

Block __62604540;

void code__62604540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58371_63568240_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,rv0_57823400_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77539360(),_58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77539300(),rvok0_57823360_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__62604540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62604540 = block;
   block->owner = (Object)__62605400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62604540;

   return block;
};

Block __62605240;

void code__62605240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77539240(),_58370_63568120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77539180(),_58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__62605240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62605240 = block;
   block->owner = (Object)__62605400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62605240;

   return block;
};

void code__62605400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77539520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62604540();
   }
   else {
  code__62605240();
   }
      }
   }
}

Block make__62605400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62605400 = block;
   block->owner = (Object)__62605720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62605400;

   return block;
};

void code__62605720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58372_63568220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77539620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62605400();
   }
      }
   }
}

Block make__62605720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62605720 = block;
   block->owner = (Object)__57820140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62605720;

   return block;
};

Block __62802860;

Block __62802380;

void code__62802380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_57572420_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      src1 = rv0_57823400_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58384_63663660_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__62802380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62802380 = block;
   block->owner = (Object)__62802860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62802380;

   return block;
};

void code__62802860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77539020(),run_57823320_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77538960(),ack__add_63371940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__62802380();
}

Block make__62802860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62802860 = block;
   block->owner = (Object)__57820140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62802860;

   return block;
};

void code__57820140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77539880(),run_57823320_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
 code__57819700();
 code__62605720();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_57823380_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         src1 = rvok0_57823360_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62802860();
   }
      }
   }
}

Block make__57820140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57820140 = block;
   block->owner = (Object)__57823160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57820140;

   return block;
};

Block __57821340;

void code__57821340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77538700(),lvok0_57823380_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77538640(),rvok0_57823360_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__57821340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57821340 = block;
   block->owner = (Object)__57823160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57821340;

   return block;
};

void code__57823160() {
 code__57822640();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77540140(),ack__add_63371940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77540080(),run_57823320_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_63371960_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         src1 = run_57823320_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57820140();
   }
   else {
  code__57821340();
   }
      }
   }
}

Block make__57823160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57823160 = block;
   block->owner = (Object)__63372140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57823160;

   return block;
};

Value make__77522360() {
   static unsigned long long data[] = { 4294967244ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77522340() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77541420() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__77521000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77520920() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77545400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77545320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77545240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77545180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77545120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77544980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77544920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77544860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77544700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77544560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77544440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77544340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77544160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77544040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77543960() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77543720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77543660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77543460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77543360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77543200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77543100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77543060() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77542800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77542740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77542620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77542380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77542320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77541940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77541720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77541620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77541560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77541500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77541440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77540220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77540140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77540080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77539880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77539700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77539620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77539520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77539360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77539300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77539240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77539180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77539020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77538960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77538700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77538640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77537520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77537460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77537400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77627280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77627220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77627120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77626900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_57553160;

SignalI req__mac_63372000_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereq__mac_63372000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_63372000_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
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

SignalI ack_63371980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack_63371980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_63371980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
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

SignalI ack__mac_63371960_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__mac_63371960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_63371960_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
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

SignalI ack__add_63371940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__add_63371940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_63371940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
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

SignalI _58331_63418300_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58331_63418300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58331_63418300_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
   signalI->name = ":331";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58329_63418280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
   signalI->name = ":329";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58330_63418200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
   signalI->name = ":330";
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

SignalI _58339_63480940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58339_63480940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58339_63480940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
   signalI->name = ":339";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58371_63568240_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58371_63568240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58371_63568240_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
   signalI->name = ":371";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58372_63568220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58372_63568220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58372_63568220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
   signalI->name = ":372";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58369_63568200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
   signalI->name = ":369";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58370_63568120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58370_63568120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58370_63568120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
   signalI->name = ":370";
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

SignalI _58384_63663660_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58384_63663660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58384_63663660_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
   signalI->name = ":384";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_63750980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makevalue__z0_63750980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_63750980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
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

SignalI value__a0_63871020_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makevalue__a0_63871020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_63871020_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
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

SignalI flag__z0_63871000_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeflag__z0_63871000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_63871000_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
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

SignalI ack__a0_63870980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__a0_63870980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_63870980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)layer1_58_84_57553160;
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

SystemI counter_63865080;

SystemI makecounter_63865080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_63865080 = systemI;
   systemI->owner = (Object)layer1_58_84_57553160;
   systemI->name = "counter";
   systemI->system = counter_58_8400_63867140;

   return systemI;
};

SystemI func0_66742000;

SystemI makefunc0_66742000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_66742000 = systemI;
   systemI->owner = (Object)layer1_58_84_57553160;
   systemI->name = "func0";
   systemI->system = func0_58_8400_66474980;

   return systemI;
};

Scope channel__w0_58322_57552600;

SignalI trig__r_57549860_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI maketrig__r_57549860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_57549860_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58322_57552600;
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

SignalI dbus__r_57693460_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makedbus__r_57693460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_57693460_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58322_57552600;
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

SignalI abus__r_57693380_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_57693380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57693380_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58322_57552600;
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

SignalI mem_54615800_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makemem_54615800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54615800_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__w0_58322_57552600;
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
         src0 = make__77522360();
         src1 = make__77522340();
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

Scope raddr_58323_57552180;

Scope makeraddr_58323_57552180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58323_57552180 = scope;
   scope->owner = (Object)channel__w0_58322_57552600;
   scope->name = "raddr:323";
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

Scope rinc_58328_57551460;

Scope makerinc_58328_57551460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58328_57551460 = scope;
   scope->owner = (Object)channel__w0_58322_57552600;
   scope->name = "rinc:328";
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

Scope rdec_58332_57550600;

Scope makerdec_58332_57550600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58332_57550600 = scope;
   scope->owner = (Object)channel__w0_58322_57552600;
   scope->name = "rdec:332";
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

Behavior __57132020;

Behavior make__57132020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57132020 = behavior;
   behavior->owner = (Object)channel__w0_58322_57552600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg = realloc(clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg[clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__55541940();

   return behavior;
}

Behavior __77455040;

Behavior make__77455040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77455040 = behavior;
   behavior->owner = (Object)channel__w0_58322_57552600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_57693460_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   dbus__r_57693460_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__r_57693460_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(dbus__r_57693460_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,dbus__r_57693460_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__r_57693460_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[dbus__r_57693460_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77455240();

   return behavior;
}

Behavior __77454780;

Behavior make__77454780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77454780 = behavior;
   behavior->owner = (Object)channel__w0_58322_57552600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58331_63418300_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58331_63418300_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58331_63418300_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58331_63418300_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58331_63418300_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58331_63418300_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58331_63418300_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77455000();

   return behavior;
}

Behavior __77454320;

Behavior make__77454320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77454320 = behavior;
   behavior->owner = (Object)channel__w0_58322_57552600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_57549860_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   trig__r_57549860_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   trig__r_57549860_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(trig__r_57549860_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,trig__r_57549860_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
trig__r_57549860_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[trig__r_57549860_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77454480();

   return behavior;
}

Behavior __77454120;

Behavior make__77454120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77454120 = behavior;
   behavior->owner = (Object)channel__w0_58322_57552600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58329_63418280_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77454280();

   return behavior;
}

Behavior __77453640;

Behavior make__77453640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77453640 = behavior;
   behavior->owner = (Object)channel__w0_58322_57552600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_57693380_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   abus__r_57693380_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_57693380_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(abus__r_57693380_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,abus__r_57693380_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_57693380_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[abus__r_57693380_channel__w0_58322_57552600_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77453800();

   return behavior;
}

Behavior __77453440;

Behavior make__77453440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77453440 = behavior;
   behavior->owner = (Object)channel__w0_58322_57552600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58330_63418200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77453600();

   return behavior;
}

Scope makechannel__w0_58322_57552600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58322_57552600 = scope;
   scope->owner = (Object)layer1_58_84_57553160;
   scope->name = "channel_w0:322";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_57549860();
   scope->inners[1] = makedbus__r_57693460();
   scope->inners[2] = makeabus__r_57693380();
   scope->inners[3] = makemem_54615800();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58323_57552180();
   scope->scopes[1] = makerinc_58328_57551460();
   scope->scopes[2] = makerdec_58332_57550600();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57132020();
   scope->behaviors[1] = make__77455040();
   scope->behaviors[2] = make__77454780();
   scope->behaviors[3] = make__77454320();
   scope->behaviors[4] = make__77454120();
   scope->behaviors[5] = make__77453640();
   scope->behaviors[6] = make__77453440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58337_57131840;

SignalI reg__0_57602300_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereg__0_57602300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_57602300_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__accum_58337_57131840;
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

Scope anum_58338_57131220;

Scope makeanum_58338_57131220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58338_57131220 = scope;
   scope->owner = (Object)channel__accum_58337_57131840;
   scope->name = "anum:338";
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

Scope raddr_58340_57219840;

Scope makeraddr_58340_57219840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58340_57219840 = scope;
   scope->owner = (Object)channel__accum_58337_57131840;
   scope->name = "raddr:340";
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

Scope waddr_58343_57219420;

Scope makewaddr_58343_57219420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58343_57219420 = scope;
   scope->owner = (Object)channel__accum_58337_57131840;
   scope->name = "waddr:343";
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

Scope rinc_58346_57218620;

SignalI abus__r_57218120_rinc_58346_57218620_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_57218120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57218120_rinc_58346_57218620_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rinc_58346_57218620;
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

Scope makerinc_58346_57218620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58346_57218620 = scope;
   scope->owner = (Object)channel__accum_58337_57131840;
   scope->name = "rinc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57218120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58350_57217840;

SignalI abus__w_57216640_winc_58350_57217840_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__w_57216640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57216640_winc_58350_57217840_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)winc_58350_57217840;
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

Scope makewinc_58350_57217840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58350_57217840 = scope;
   scope->owner = (Object)channel__accum_58337_57131840;
   scope->name = "winc:350";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57216640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58354_57216480;

SignalI abus__r_57215980_rdec_58354_57216480_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_57215980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57215980_rdec_58354_57216480_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rdec_58354_57216480;
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

Scope makerdec_58354_57216480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58354_57216480 = scope;
   scope->owner = (Object)channel__accum_58337_57131840;
   scope->name = "rdec:354";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57215980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58358_57215840;

SignalI abus__w_57215040_wdec_58358_57215840_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__w_57215040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57215040_wdec_58358_57215840_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)wdec_58358_57215840;
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

Scope makewdec_58358_57215840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58358_57215840 = scope;
   scope->owner = (Object)channel__accum_58337_57131840;
   scope->name = "wdec:358";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57215040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __77451960;

Behavior make__77451960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77451960 = behavior;
   behavior->owner = (Object)channel__accum_58337_57131840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57602300_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   reg__0_57602300_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   reg__0_57602300_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(reg__0_57602300_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,reg__0_57602300_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__0_57602300_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[reg__0_57602300_channel__accum_58337_57131840_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77452120();

   return behavior;
}

Behavior __77451740;

Behavior make__77451740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77451740 = behavior;
   behavior->owner = (Object)channel__accum_58337_57131840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58339_63480940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58339_63480940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58339_63480940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58339_63480940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58339_63480940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58339_63480940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58339_63480940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77451920();

   return behavior;
}

Scope makechannel__accum_58337_57131840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58337_57131840 = scope;
   scope->owner = (Object)layer1_58_84_57553160;
   scope->name = "channel_accum:337";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_57602300();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58338_57131220();
   scope->scopes[1] = makeraddr_58340_57219840();
   scope->scopes[2] = makewaddr_58343_57219420();
   scope->scopes[3] = makerinc_58346_57218620();
   scope->scopes[4] = makewinc_58350_57217840();
   scope->scopes[5] = makerdec_58354_57216480();
   scope->scopes[6] = makewdec_58358_57215840();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77451960();
   scope->behaviors[1] = make__77451740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58362_51427540;

SignalI lv0_51877280_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelv0_51877280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51877280_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58362_51427540;
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

SignalI av0_50967580_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeav0_50967580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_50967580_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58362_51427540;
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

SignalI rv_54488400_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makerv_54488400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_54488400_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58362_51427540;
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

SignalI lvok0_54488340_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelvok0_54488340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_54488340_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58362_51427540;
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

SignalI rvok_54488160_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makervok_54488160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_54488160_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58362_51427540;
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

SignalI wok0_54488100_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makewok0_54488100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_54488100_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58362_51427540;
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

SignalI run_54488080_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makerun_54488080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_54488080_mac__n1_58362_51427540_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)mac__n1_58362_51427540;
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

Behavior __52652320;

Behavior make__52652320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52652320 = behavior;
   behavior->owner = (Object)mac__n1_58362_51427540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos = realloc(clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos[clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__54487940();

   return behavior;
}

Scope makemac__n1_58362_51427540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58362_51427540 = scope;
   scope->owner = (Object)layer1_58_84_57553160;
   scope->name = "mac_n1:362";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51877280();
   scope->inners[1] = makeav0_50967580();
   scope->inners[2] = makerv_54488400();
   scope->inners[3] = makelvok0_54488340();
   scope->inners[4] = makervok_54488160();
   scope->inners[5] = makewok0_54488100();
   scope->inners[6] = makerun_54488080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52652320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58367_52652120;

SignalI trig__r_54228680_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI maketrig__r_54228680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_54228680_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58367_52652120;
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

SignalI dbus__r_54399060_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makedbus__r_54399060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54399060_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58367_52652120;
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

SignalI abus__r_54398980_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_54398980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54398980_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58367_52652120;
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

SignalI mem_54909300_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makemem_54909300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54909300_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__b0_58367_52652120;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__77541420(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58368_52651680;

Scope makeraddr_58368_52651680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58368_52651680 = scope;
   scope->owner = (Object)channel__b0_58367_52652120;
   scope->name = "raddr:368";
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

Scope rinc_58373_52650620;

Scope makerinc_58373_52650620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58373_52650620 = scope;
   scope->owner = (Object)channel__b0_58367_52652120;
   scope->name = "rinc:373";
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

Scope rdec_58377_54230360;

Scope makerdec_58377_54230360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58377_54230360 = scope;
   scope->owner = (Object)channel__b0_58367_52652120;
   scope->name = "rdec:377";
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

Behavior __56343240;

Behavior make__56343240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56343240 = behavior;
   behavior->owner = (Object)channel__b0_58367_52652120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg = realloc(clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg[clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__55542740();

   return behavior;
}

Behavior __77449760;

Behavior make__77449760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77449760 = behavior;
   behavior->owner = (Object)channel__b0_58367_52652120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54399060_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   dbus__r_54399060_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__r_54399060_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(dbus__r_54399060_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,dbus__r_54399060_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__r_54399060_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[dbus__r_54399060_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77449920();

   return behavior;
}

Behavior __77449540;

Behavior make__77449540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77449540 = behavior;
   behavior->owner = (Object)channel__b0_58367_52652120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58371_63568240_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58371_63568240_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58371_63568240_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58371_63568240_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58371_63568240_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58371_63568240_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58371_63568240_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77449700();

   return behavior;
}

Behavior __77449080;

Behavior make__77449080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77449080 = behavior;
   behavior->owner = (Object)channel__b0_58367_52652120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_54228680_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   trig__r_54228680_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   trig__r_54228680_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(trig__r_54228680_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,trig__r_54228680_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
trig__r_54228680_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[trig__r_54228680_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77449240();

   return behavior;
}

Behavior __77448860;

Behavior make__77448860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77448860 = behavior;
   behavior->owner = (Object)channel__b0_58367_52652120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58369_63568200_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77449040();

   return behavior;
}

Behavior __77448320;

Behavior make__77448320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77448320 = behavior;
   behavior->owner = (Object)channel__b0_58367_52652120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_54398980_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   abus__r_54398980_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_54398980_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(abus__r_54398980_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,abus__r_54398980_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_54398980_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[abus__r_54398980_channel__b0_58367_52652120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77448480();

   return behavior;
}

Behavior __77448120;

Behavior make__77448120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77448120 = behavior;
   behavior->owner = (Object)channel__b0_58367_52652120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58370_63568120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58370_63568120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58370_63568120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58370_63568120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58370_63568120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58370_63568120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58370_63568120_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77448280();

   return behavior;
}

Scope makechannel__b0_58367_52652120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58367_52652120 = scope;
   scope->owner = (Object)layer1_58_84_57553160;
   scope->name = "channel_b0:367";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_54228680();
   scope->inners[1] = makedbus__r_54399060();
   scope->inners[2] = makeabus__r_54398980();
   scope->inners[3] = makemem_54909300();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58368_52651680();
   scope->scopes[1] = makerinc_58373_52650620();
   scope->scopes[2] = makerdec_58377_54230360();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56343240();
   scope->behaviors[1] = make__77449760();
   scope->behaviors[2] = make__77449540();
   scope->behaviors[3] = make__77449080();
   scope->behaviors[4] = make__77448860();
   scope->behaviors[5] = make__77448320();
   scope->behaviors[6] = make__77448120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58382_56342940;

SignalI reg__0_56555500_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereg__0_56555500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56555500_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__z_58382_56342940;
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

Scope anum_58383_56342260;

Scope makeanum_58383_56342260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58383_56342260 = scope;
   scope->owner = (Object)channel__z_58382_56342940;
   scope->name = "anum:383";
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

Scope raddr_58385_56341360;

Scope makeraddr_58385_56341360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58385_56341360 = scope;
   scope->owner = (Object)channel__z_58382_56342940;
   scope->name = "raddr:385";
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

Scope waddr_58388_56340560;

Scope makewaddr_58388_56340560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58388_56340560 = scope;
   scope->owner = (Object)channel__z_58382_56342940;
   scope->name = "waddr:388";
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

Scope rinc_58391_56339900;

SignalI abus__r_56339080_rinc_58391_56339900_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_56339080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56339080_rinc_58391_56339900_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rinc_58391_56339900;
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

Scope makerinc_58391_56339900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58391_56339900 = scope;
   scope->owner = (Object)channel__z_58382_56342940;
   scope->name = "rinc:391";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56339080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58394_56338660;

SignalI abus__w_56338040_winc_58394_56338660_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__w_56338040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56338040_winc_58394_56338660_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)winc_58394_56338660;
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

Scope makewinc_58394_56338660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58394_56338660 = scope;
   scope->owner = (Object)channel__z_58382_56342940;
   scope->name = "winc:394";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56338040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58397_56337840;

SignalI abus__r_56337220_rdec_58397_56337840_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_56337220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56337220_rdec_58397_56337840_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rdec_58397_56337840;
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

Scope makerdec_58397_56337840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58397_56337840 = scope;
   scope->owner = (Object)channel__z_58382_56342940;
   scope->name = "rdec:397";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56337220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58401_56336940;

SignalI abus__w_56360860_wdec_58401_56336940_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__w_56360860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56360860_wdec_58401_56336940_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)wdec_58401_56336940;
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

Scope makewdec_58401_56336940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58401_56336940 = scope;
   scope->owner = (Object)channel__z_58382_56342940;
   scope->name = "wdec:401";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56360860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __77463020;

Behavior make__77463020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77463020 = behavior;
   behavior->owner = (Object)channel__z_58382_56342940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56555500_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   reg__0_56555500_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   reg__0_56555500_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(reg__0_56555500_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,reg__0_56555500_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__0_56555500_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[reg__0_56555500_channel__z_58382_56342940_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77463220();

   return behavior;
}

Behavior __77462760;

Behavior make__77462760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77462760 = behavior;
   behavior->owner = (Object)channel__z_58382_56342940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58384_63663660_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58384_63663660_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58384_63663660_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58384_63663660_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58384_63663660_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58384_63663660_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58384_63663660_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77462980();

   return behavior;
}

Scope makechannel__z_58382_56342940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58382_56342940 = scope;
   scope->owner = (Object)layer1_58_84_57553160;
   scope->name = "channel_z:382";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56555500();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58383_56342260();
   scope->scopes[1] = makeraddr_58385_56341360();
   scope->scopes[2] = makewaddr_58388_56340560();
   scope->scopes[3] = makerinc_58391_56339900();
   scope->scopes[4] = makewinc_58394_56338660();
   scope->scopes[5] = makerdec_58397_56337840();
   scope->scopes[6] = makewdec_58401_56336940();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77463020();
   scope->behaviors[1] = make__77462760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58405_57422220;

SignalI lv0_57572420_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelv0_57572420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_57572420_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58405_57422220;
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

SignalI rv0_57823400_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makerv0_57823400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_57823400_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58405_57422220;
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

SignalI lvok0_57823380_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makelvok0_57823380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_57823380_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58405_57422220;
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

SignalI rvok0_57823360_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makervok0_57823360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_57823360_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58405_57422220;
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

SignalI run_57823320_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makerun_57823320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_57823320_add__n_58405_57422220_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)add__n_58405_57422220;
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

Behavior __63372140;

Behavior make__63372140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63372140 = behavior;
   behavior->owner = (Object)add__n_58405_57422220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos = realloc(clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos[clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__57823160();

   return behavior;
}

Scope makeadd__n_58405_57422220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58405_57422220 = scope;
   scope->owner = (Object)layer1_58_84_57553160;
   scope->name = "add_n:405";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_57572420();
   scope->inners[1] = makerv0_57823400();
   scope->inners[2] = makelvok0_57823380();
   scope->inners[3] = makervok0_57823360();
   scope->inners[4] = makerun_57823320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63372140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __67219980;

Behavior make__67219980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __67219980 = behavior;
   behavior->owner = (Object)layer1_58_84_57553160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos = realloc(clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos[clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__67221200();

   return behavior;
}

Behavior __49387980;

Behavior make__49387980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49387980 = behavior;
   behavior->owner = (Object)layer1_58_84_57553160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos = realloc(clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos[clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__67219840();

   return behavior;
}

Behavior __51441080;

Behavior make__51441080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51441080 = behavior;
   behavior->owner = (Object)layer1_58_84_57553160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos = realloc(clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos[clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__49385820();

   return behavior;
}

Behavior __77437700;

Behavior make__77437700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77437700 = behavior;
   behavior->owner = (Object)layer1_58_84_57553160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_51459080_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   req_51459080_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   req_51459080_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(req_51459080_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,req_51459080_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
req_51459080_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[req_51459080_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_63371960_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__mac_63371960_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__mac_63371960_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__mac_63371960_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__mac_63371960_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__mac_63371960_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__mac_63371960_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77437960();

   return behavior;
}

Behavior __77431600;

Behavior make__77431600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77431600 = behavior;
   behavior->owner = (Object)layer1_58_84_57553160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_63371980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack_63371980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack_63371980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack_63371980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack_63371980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack_63371980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack_63371980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_63750980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   value__z0_63750980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   value__z0_63750980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(value__z0_63750980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,value__z0_63750980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
value__z0_63750980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[value__z0_63750980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_63870980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__a0_63870980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__a0_63870980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__a0_63870980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__a0_63870980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__a0_63870980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__a0_63870980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77438180();

   return behavior;
}

Behavior __77431440;

Behavior make__77431440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77431440 = behavior;
   behavior->owner = (Object)layer1_58_84_57553160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_63865220_counter_58_8400_63867140_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__mac_63865220_counter_58_8400_63867140_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__mac_63865220_counter_58_8400_63867140_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__mac_63865220_counter_58_8400_63867140_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__mac_63865220_counter_58_8400_63867140_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__mac_63865220_counter_58_8400_63867140_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__mac_63865220_counter_58_8400_63867140_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_66742200_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   a_66742200_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   a_66742200_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(a_66742200_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,a_66742200_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
a_66742200_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[a_66742200_func0_58_8400_66474980_layer1_58_84_57553160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__77438120();

   return behavior;
}

Scope makelayer1_58_84_57553160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_57553160 = scope;
   scope->owner = (Object)layer1_58_841_51439800;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_63865080();
   scope->systemIs[1] = makefunc0_66742000();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_63372000();
   scope->inners[1] = makeack_63371980();
   scope->inners[2] = makeack__mac_63371960();
   scope->inners[3] = makeack__add_63371940();
   scope->inners[4] = make_58331_63418300();
   scope->inners[5] = make_58329_63418280();
   scope->inners[6] = make_58330_63418200();
   scope->inners[7] = make_58339_63480940();
   scope->inners[8] = make_58371_63568240();
   scope->inners[9] = make_58372_63568220();
   scope->inners[10] = make_58369_63568200();
   scope->inners[11] = make_58370_63568120();
   scope->inners[12] = make_58384_63663660();
   scope->inners[13] = makevalue__z0_63750980();
   scope->inners[14] = makevalue__a0_63871020();
   scope->inners[15] = makeflag__z0_63871000();
   scope->inners[16] = makeack__a0_63870980();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58322_57552600();
   scope->scopes[1] = makechannel__accum_58337_57131840();
   scope->scopes[2] = makemac__n1_58362_51427540();
   scope->scopes[3] = makechannel__b0_58367_52652120();
   scope->scopes[4] = makechannel__z_58382_56342940();
   scope->scopes[5] = makeadd__n_58405_57422220();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__67219980();
   scope->behaviors[1] = make__49387980();
   scope->behaviors[2] = make__51441080();
   scope->behaviors[3] = make__77437700();
   scope->behaviors[4] = make__77431600();
   scope->behaviors[5] = make__77431440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_841_51439800() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_841_51439800 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T1";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51459160();
   systemT->inputs[1] = makerst_51459140();
   systemT->inputs[2] = makereq_51459080();
   systemT->inputs[3] = make_58165_51728820();
   systemT->inputs[4] = make_58166_52004560();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_52004280();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58167_52004000();
   systemT->inouts[1] = make_58131_52346060();

   systemT->scope = makelayer1_58_84_57553160();

   return systemT;
}